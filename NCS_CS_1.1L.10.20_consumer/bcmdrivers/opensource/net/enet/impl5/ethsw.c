/*
   Copyright 2007-2010 Broadcom Corp. All Rights Reserved.

   <:label-BRCM:2011:DUAL/GPL:standard
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License, version 2, as published by
   the Free Software Foundation (the "GPL").
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   
   A copy of the GPL is available at http://www.broadcom.com/licenses/GPLv2.php, or by
   writing to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.
   
   :>
 */

#define _BCMENET_LOCAL_
#include <linux/types.h>
#include <linux/delay.h>
#include <linux/mii.h>
#include <linux/stddef.h>
#include <linux/ctype.h>
#include <linux/proc_fs.h>
#include <linux/string.h>
#include <linux/nbuff.h>
#include <board.h>
#include "boardparms.h"
#include <bcm_map_part.h>
#include "bcm_intr.h"
#include "bcmenet.h"
#include "bcmmii.h"
#include "ethswdefs.h"
#include "ethsw.h"
#include "bcmswshared.h"
#include "ethsw_phy.h"
#include "bcmswaccess.h"
#include "bcmsw.h"
#include "eth_pwrmngt.h"

#if defined(ENET_GPON_CONFIG)
extern struct net_device *gponifid_to_dev[MAX_GEM_IDS];
#endif
extern struct semaphore bcm_ethlock_switch_config;
extern uint8_t port_in_loopback_mode[TOTAL_SWITCH_PORTS];
extern atomic_t phy_write_ref_cnt;
extern atomic_t phy_read_ref_cnt;
extern int vport_cnt;  /* number of vports: bitcount of Enetinfo.sw.port_map */

BcmEnet_devctrl *pVnetDev0_g;

static uint8_t  hw_switching_state = HW_SWITCHING_ENABLED;

extern extsw_info_t extSwInfo;

int ethsw_port_to_phyid(int port)
/* Warning: port is physical port on internal/runner switch */
{
    return enet_sw_port_to_phyid(0, port);
}

void ethsw_init_table(BcmEnet_devctrl *pDevCtrl)
{

    pVnetDev0_g = pDevCtrl;  /* Just a place to initialize the global variable */

    return;
}

int ethsw_set_mac(int logical_port, PHY_STAT ps)
{
    /* WARNING - this must NOT be called for external switch ports */
    uint16 sw_port = LOGICAL_PORT_TO_PHYSICAL_PORT(logical_port);

    if ( (LOGICAL_PORT_TO_UNIT_NUMBER(logical_port) != 0) || /* Internal switch or Runner port */
         (port_in_loopback_mode[sw_port]) )
    {
        printk("Ext switch or port_in_loopback_mode 0x%02x\n", logical_port);
        return 0;
    }

    return ethsw_set_mac_hw(sw_port, ps);
}

#if defined(CONFIG_BCM_ETH_PWRSAVE)
void ethsw_isolate_phy(int phyId, int isolate)
{
    uint16 v16;
    ethsw_phy_rreg(phyId, MII_CONTROL, &v16);
    if (isolate) {
        v16 |= MII_CONTROL_ISOLATE_MII;
    } else {
        v16 &= ~MII_CONTROL_ISOLATE_MII;
    }
    ethsw_phy_wreg(phyId, MII_CONTROL, &v16);
}
#endif



void ethsw_switch_power_off(void *context)
{
#ifdef DYING_GASP_API
    enet_send_dying_gasp_pkt();
#endif
}

// end power management routines

void ethsw_phyport_rreg(int port, int reg, uint16 *data)
{
    int unit = LOGICAL_PORT_TO_UNIT_NUMBER(port);
    int phy_id = enet_logport_to_phyid(port);
    int phys_port;

    if (unit > 0 && (pVnetDev0_g->extSwitch->accessType == MBUS_SPI || pVnetDev0_g->extSwitch->accessType == MBUS_HS_SPI))
    {
        phys_port = LOGICAL_PORT_TO_PHYSICAL_PORT(port);
        extsw_rreg_wrap(PAGE_INTERNAL_PHY_MII + phys_port, reg*2, (uint8 *)data, 2);
    }
    else
    {
        ethsw_phy_rreg(phy_id, reg, data);
    }
}

void ethsw_phyport_wreg(int port, int reg, uint16 *data)
{
    int unit = LOGICAL_PORT_TO_UNIT_NUMBER(port);
    int phy_id = enet_logport_to_phyid(port);
    int phys_port;

    if (unit > 0 && (pVnetDev0_g->extSwitch->accessType == MBUS_SPI || pVnetDev0_g->extSwitch->accessType == MBUS_HS_SPI))
    {
        phys_port = LOGICAL_PORT_TO_PHYSICAL_PORT(port);
        extsw_wreg_wrap(PAGE_INTERNAL_PHY_MII+phys_port, reg*2, (uint8 *)data, 2);
    }
    else
    {
        ethsw_phy_wreg(phy_id, reg, data);
    }
}

#if defined(GPHY_EEE_1000BASE_T_DEF) || defined(CONFIG_BCM_EXT_SWITCH)
/*
 * Clause 45 register read 
 * port argument passed is logical port.
 *
 */

void ethsw_phyport_c45_rreg(int log_port, int regg, int regr, uint16 *pdata16) {
   uint16 val16;
   val16 = regg;
   ethsw_phyport_wreg(log_port, 0x0d, &val16);
   val16 = regr;
   ethsw_phyport_wreg(log_port, 0x0e, &val16);
   val16 = 0x4000 | regg;
   ethsw_phyport_wreg(log_port, 0x0d, &val16);
   ethsw_phyport_rreg(log_port, 0x0e, pdata16);
}

/*
 * Clause 45 register writes 
 * port argument passed is logical port.
 *
 */
void ethsw_phyport_c45_wreg(int log_port, int regg, int regr, uint16 *pdata16) {
   uint16 val16;
   val16 = regg;
   ethsw_phyport_wreg(log_port, 0x0d, &val16);
   val16 = regr;
   ethsw_phyport_wreg(log_port, 0x0e, &val16);
   val16 = 0x4000 | regg;
   ethsw_phyport_wreg(log_port, 0x0d, &val16);
   ethsw_phyport_wreg(log_port, 0x0e, pdata16);
}
#endif

/*
 **  caution: when unit = 0; the phy_ids for Internal and External PHY
 **  could be duplicated duplicated,  thus the further restriction  mapping of 
 ** phy id -> phys_port  is not unique. 
 */    
static int ethsw_phyid_to_phys_port(int phy_id, int unit)
{
    int i;

    for (i = 0; i < MAX_SWITCH_PORTS && 
            (pVnetDev0_g->EnetInfo[unit].sw.phy_id[i] & 0x1f) != (phy_id & 0x1f) ; i++);

    if (i == MAX_SWITCH_PORTS)
    {
        BCM_ENET_DEBUG("%s phy-to-port association not found \n", __FUNCTION__);
        return -1;
    }

    return i;
}

void ethsw_phyport_rreg2(int phy_id, int reg, uint16 *data, int flags)
{
    int unit = (flags == ETHCTL_FLAG_ACCESS_EXTSW_PHY)? 1: 0;
    int phys_port;

    if (unit > 0 && pVnetDev0_g->extSwitch->accessType != MBUS_MDIO)
    {
        phys_port = ethsw_phyid_to_phys_port(phy_id, unit);
        if(phys_port != -1)
        {
            extsw_rreg_wrap(PAGE_INTERNAL_PHY_MII + phys_port, 
                    reg*2, (uint8 *)data, 2);
        }
    }
    else
    {
        ethsw_phy_exp_rreg_flag(phy_id, reg, data, flags);
    }
}

void ethsw_phyport_wreg2(int phy_id, int reg, uint16 *data, int flags)
{
    int unit = (flags == ETHCTL_FLAG_ACCESS_EXTSW_PHY)? 1: 0;
    int phys_port;

    if (unit > 0 && pVnetDev0_g->extSwitch->accessType != MBUS_MDIO)
    {
        phys_port = ethsw_phyid_to_phys_port(phy_id, unit);
        if(phys_port != -1)
        {
            extsw_wreg_wrap(PAGE_INTERNAL_PHY_MII + phys_port, reg*2, (uint8 *)data, 2);
        }
    }
    else
    {
        ethsw_phy_exp_wreg_flag(phy_id, reg, data, flags);
    }
}

static void ethsw_phy_advertise_caps (void)
{
    BcmEnet_devctrl *pVnetDev0 = (BcmEnet_devctrl *) netdev_priv(vnet_dev[0]);
    unsigned int portmap, port, phy_id, unit;

    /* Now control advertising if boardparms says so */
    for (unit=0; unit < BP_MAX_ENET_MACS; unit++) {
        portmap = pVnetDev0->EnetInfo[unit].sw.port_map;
        for (port = 0; portmap && port < (TOTAL_SWITCH_PORTS - 1); port++) {
            if ((portmap & (1U<<port)) != 0) {
                phy_id = pVnetDev0->EnetInfo[unit].sw.phy_id[port];
                if(IsPhyConnected(phy_id) && IsPhyAdvCapConfigValid(phy_id))
                {
                    uint16 cap_mask = 0;

                    ethsw_phy_rreg(phy_id, MII_ADVERTISE, &cap_mask);
                        cap_mask &= (~ADVERTISE_ALL);
                    if (phy_id & ADVERTISE_10HD)
                        cap_mask |= ADVERTISE_10HALF;
                    if (phy_id & ADVERTISE_10FD)
                        cap_mask |= ADVERTISE_10FULL;
                    if (phy_id & ADVERTISE_100HD)
                        cap_mask |= ADVERTISE_100HALF;
                    if (phy_id & ADVERTISE_100FD)
                        cap_mask |= ADVERTISE_100FULL;
                    printk("%s switch port %d; Adv capability change : MII <0x%x> ", (unit?"Ext":"Int"), (unsigned int)port, cap_mask);
                    ethsw_phy_wreg(phy_id, MII_ADVERTISE, &cap_mask);

                    ethsw_phy_rreg(phy_id, MII_CTRL1000, &cap_mask);
                    cap_mask &= (~(ADVERTISE_1000HALF | ADVERTISE_1000FULL));
                    if (phy_id & ADVERTISE_1000HD)
                        cap_mask |= ADVERTISE_1000HALF;
                    if (phy_id & ADVERTISE_1000FD)
                        cap_mask |= ADVERTISE_1000FULL;
                    printk("GMII 0x%x \n", cap_mask);
                    ethsw_phy_wreg(phy_id, MII_CTRL1000, &cap_mask);
                }
            }
        }
    }

}

void ethsw_phy_config()
{
    ethsw_setup_led();
#if defined(CONFIG_BCM_ETH_HWAPD_PWRSAVE)
    ethsw_setup_hw_apd(1);
#endif

    ethsw_setup_phys();

    ethsw_phy_handle_exception_cases();

    ethsw_phy_advertise_caps();

    ethsw_phy_apply_init_bp();
}

void ethsw_init_config(int unit, uint32_t port_map,  int wanPort)
{
    bcmeapi_ethsw_init_hw(unit, port_map, wanPort);

    /* Initialize the Internal switch config */
    bcmeapi_ethsw_init_config();

    /* Initialize the external switch config */
    extsw_init_config();
}

int bcmeapi_ioctl_ethsw_port_mirror_get(struct ethswctl_data *e)
{
    int mirror_port;
    int mirror_enable;
    unsigned int ing_pmap;
    unsigned int eg_pmap;
    unsigned int blk_no_mrr;

    if (e->unit == 0)
    {
        ethsw_port_mirror_get(&mirror_enable, &mirror_port, &ing_pmap, &eg_pmap, &blk_no_mrr);
    }
    else if (bcm63xx_enet_isExtSwPresent())
    {
        bcmsw_port_mirror_get(&mirror_enable, &mirror_port, &ing_pmap, &eg_pmap, &blk_no_mrr);
    }
    else
    {
        printk(" Error_get: this router does not have external switch\n");
        return BCM_E_ERROR;
    }
    copy_to_user((void*)(&e->port_mirror_cfg.mirror_port),(void*)&mirror_port, sizeof(mirror_port));
    copy_to_user((void*)(&e->port_mirror_cfg.enable),(void*)&mirror_enable, sizeof(mirror_enable));
    copy_to_user((void*)(&e->port_mirror_cfg.ing_pmap),(void*)&ing_pmap, sizeof(ing_pmap));
    copy_to_user((void*)(&e->port_mirror_cfg.eg_pmap),(void*)&eg_pmap, sizeof(eg_pmap));
    copy_to_user((void*)(&e->port_mirror_cfg.blk_no_mrr),(void*)&blk_no_mrr, sizeof(blk_no_mrr));

    return 0;
}
int bcmeapi_ioctl_ethsw_port_mirror_set(struct ethswctl_data *e)
{
    if (e->unit == 0)
    {
        ethsw_port_mirror_set(e->port_mirror_cfg.enable,e->port_mirror_cfg.mirror_port,
                              e->port_mirror_cfg.ing_pmap,e->port_mirror_cfg.eg_pmap,
                              e->port_mirror_cfg.blk_no_mrr);
    }
    else if (bcm63xx_enet_isExtSwPresent())
    {
        bcmsw_port_mirror_set(e->port_mirror_cfg.enable,e->port_mirror_cfg.mirror_port,
                              e->port_mirror_cfg.ing_pmap,e->port_mirror_cfg.eg_pmap,
                              e->port_mirror_cfg.blk_no_mrr);
    }
    else
    {
        printk(" Error_set: this router does not have external switch\n");
        return BCM_E_ERROR;
    }
    return 0;
}
#if defined(CONFIG_BCM_SWITCH_PORT_TRUNK_SUPPORT)
int bcmeapi_ioctl_ethsw_port_trunk_set(struct ethswctl_data *e)
{
    if (bcm63xx_enet_isExtSwPresent())
    {
        bcmsw_port_trunk_set(e->port_trunk_cfg.hash_sel);
    }
    else
    {
        printk(" Error_set: this router does not have external switch\n");
        return BCM_E_ERROR;
    }
    return 0;
}
int bcmeapi_ioctl_ethsw_port_trunk_get(struct ethswctl_data *e)
{
    if (bcm63xx_enet_isExtSwPresent())
    {
        bcmsw_port_trunk_get(&e->port_trunk_cfg.enable, &e->port_trunk_cfg.hash_sel, 
                             &e->port_trunk_cfg.grp0_pmap, &e->port_trunk_cfg.grp1_pmap);
    }
    else
    {
        printk(" Error_set: this router does not have external switch\n");
        return BCM_E_ERROR;
    }
    return 0;
}
#endif /* CONFIG_BCM_SWITCH_PORT_TRUNK_SUPPORT */
/*
 * Function:
 *      bcmeapi_ioctl_ethsw_arl_access
 * Purpose:
 *      ARL table accesses
 * Returns:
 *      BCM_E_XXX
 */
int bcmeapi_ioctl_ethsw_arl_access(struct ethswctl_data *e)
{
    int ret;

    switch(e->type)
    {
        case TYPE_GET:
            BCM_ENET_DEBUG("e->mac: %02x %02x %02x %02x %02x %02x", e->mac[5],
                    e->mac[4], e->mac[3], e->mac[2], e->mac[1], e->mac[0]);
            BCM_ENET_DEBUG("e->vid: %d", e->vid);

            switch (e->unit)
            {
                case 0:
                    ret = enet_arl_read( e->mac, &e->vid, &e->val );
                    break;
                case 1:
                    if(!bcm63xx_enet_isExtSwPresent())
                    {
                        printk(" Error: this router does not have external switch\n");
                        return BCM_E_ERROR;
                    }
                    ret = enet_arl_read_ext( e->mac, &e->vid, &e->val );
                    break;
                default:
                    e->unit = 0;
                    if ((ret = enet_arl_read( e->mac, &e->vid, &e->val)))
                    {
                        break;
                    }

                    if (bcm63xx_enet_isExtSwPresent()) {
                        e->unit = 1;
                        ret = enet_arl_read_ext( e->mac, &e->vid, &e->val );
                    }
            }

            if (ret == FALSE)
            {
                return BCM_E_ERROR;
            }
            break;

        case TYPE_SET:
            BCM_ENET_DEBUG("e->mac: %02x %02x %02x %02x %02x %02x", e->mac[5],
                    e->mac[4], e->mac[3], e->mac[2], e->mac[1], e->mac[0]);
            BCM_ENET_DEBUG("e->vid: %d", e->vid);

            /* if an external switch is present, e->unit will determine the
               access function */
            if (e->unit == 1)
            {
                if (bcm63xx_enet_isExtSwPresent())
                {
                    enet_arl_write_ext(e->mac, e->vid, e->val);
                }
                else
                {
                    printk(" Error: No External Switch in this Router.\n");
                }
            }
            else
            {
                enet_arl_write(e->mac, e->vid, e->val);
            }
            break;

        case TYPE_DUMP:
            enet_arl_access_dump();
            enet_arl_dump_multiport_arl();
            if (bcm63xx_enet_isExtSwPresent())
            {
                enet_arl_access_dump_ext();
                enet_arl_dump_ext_multiport_arl();
            }
            break;

        case TYPE_FLUSH:
            /* Flush the ARL table */
            fast_age_all(0);
            if (bcm63xx_enet_isExtSwPresent()) {
                fast_age_all_ext(0);
            }
            break;

        default:
            return BCM_E_PARAM;
    }
    return BCM_E_NONE;
}

int ethsw_set_hw_switching(uint32 state)
{
    down(&bcm_ethlock_switch_config);
    /*Don't do anything if already enabled/disabled.
     *Enable is implemented by restoring values saved by disable_hw_switching().
     *This check is necessary to make sure we get correct behavior when
     *enable_hw_switching() is called without a preceeding disable_hw_switching() call.
     */

    if (hw_switching_state != state) {
        if (bcm63xx_enet_isExtSwPresent()) {
            if (state == HW_SWITCHING_ENABLED) {
                bcmsw_enable_hw_switching();
            }
            else {
                bcmsw_disable_hw_switching();
            }
        }
        else {
            if (state == HW_SWITCHING_ENABLED) {
                ethsw_enable_hw_switching();
            }
            else {
                ethsw_disable_hw_switching();
            }
        }
        hw_switching_state = state;
    }

    up(&bcm_ethlock_switch_config);
    return 0;
}
int ethsw_get_hw_switching_state(void)
{
    return hw_switching_state;
}
#if !defined(CONFIG_BCM96838) 
static void restart_autoneg(int phyid, int unit)
{
    uint16_t v16;

    /* read control register */
    ethsw_phy_read_reg(phyid, MII_BMCR, &v16, unit);
    BCM_ENET_DEBUG("MII_BMCR Read Value = %4x", v16);

    /* Write control register wth AN_EN and RESTART_AN bits set */
    v16 |= (BMCR_ANENABLE | BMCR_ANRESTART);
    BCM_ENET_DEBUG("MII_BMCR Written Value = %4x", v16);
    ethsw_phy_write_reg(phyid, MII_BMCR, &v16, unit);
}

static void set_pause_capability(int unit, int port, int req_flow_ctrl)
{
    uint16_t an_adv, v16, bmcr;
    uint32_t override_val;
    int phyid =  BCMSW_PHY_GET_PHYID(unit, port);
    int start_port, end_port;

#ifdef AEI_WECB
    int tmp_unit = unit;
#endif

    if (port == SWITCH_PORTS_ALL_PHYS) {
       start_port = 0;
       end_port = EPHY_PORTS-1;
    } else {
       start_port = end_port = port;
    }
    down(&bcm_ethlock_switch_config);

    BCM_ENET_DEBUG("given req_flow_ctrl = %4x", req_flow_ctrl);
    if (unit == 0) {
        ethsw_rreg(PAGE_CONTROL, REG_PAUSE_CAPBILITY, (uint8_t *)&override_val, 4);
    } else {
        extsw_rreg_wrap(PAGE_CONTROL, REG_PAUSE_CAPBILITY, (uint8_t *)&override_val, 4);
    }
    BCM_ENET_DEBUG("override_val read = %4x", (unsigned int)override_val);

    for (port = start_port; port <= end_port; port++) {
        override_val &= (~((1 << port) | (1 << (port + TOTAL_SWITCH_PORTS))));
        /* resolve pause mode and advertisement
         * Please refer to Table 28B-3 of the 802.3ab-1999 spec */
        switch (req_flow_ctrl) {
            case PAUSE_FLOW_CTRL_AUTO:
            case PAUSE_FLOW_CTRL_BOTH:
            case PAUSE_FLOW_CTRL_BCMSWITCH_ON:
                v16 = (ADVERTISE_PAUSE_CAP | ADVERTISE_PAUSE_ASYM);
                override_val |= ((1 << port) | (1 << (port +TOTAL_SWITCH_PORTS)));
                break;

            case PAUSE_FLOW_CTRL_TX:
                v16 = ADVERTISE_PAUSE_ASYM;
                override_val |= (1 << port);
                break;

            case PAUSE_FLOW_CTRL_RX:
                v16 = ADVERTISE_PAUSE_CAP;
                override_val |= (1 << (port +TOTAL_SWITCH_PORTS));
                break;

            case PAUSE_FLOW_CTRL_BCMSWITCH_OFF:
                override_val &= ~REG_PAUSE_CAPBILITY_OVERRIDE;
                break;

            case PAUSE_FLOW_CTRL_NONE:
            default:
                v16 = 0;
                break;
        }


        if (req_flow_ctrl != PAUSE_FLOW_CTRL_BCMSWITCH_OFF) {
            phyid = BCMSW_PHY_GET_PHYID(unit,port);
#ifdef AEI_WECB
            if((phyid & BCM_PHY_ID_M) == 24)
            {
                unit = 1;
            }
#endif
            if ((req_flow_ctrl != PAUSE_FLOW_CTRL_BCMSWITCH_ON) && (port < EPHY_PORTS) && (phyid != -1)) {
                ethsw_phy_read_reg(phyid, MII_BMCR, &bmcr, unit);
                if (bmcr & BMCR_ANENABLE) {
                    ethsw_phy_read_reg(phyid, MII_ADVERTISE, &an_adv, unit);
                    BCM_ENET_DEBUG("an_adv read from PHY = %4x", an_adv);
                    an_adv &= ~(ADVERTISE_PAUSE_CAP | ADVERTISE_PAUSE_ASYM);
                    an_adv |= v16;
                    BCM_ENET_DEBUG("an_adv written to PHY = %4x", an_adv);
                    ethsw_phy_write_reg(phyid, MII_ADVERTISE, &an_adv, unit);
                    restart_autoneg(phyid, unit);
                } else {
                    override_val |= REG_PAUSE_CAPBILITY_OVERRIDE;
                }
            } else {
                override_val |= REG_PAUSE_CAPBILITY_OVERRIDE;
            }
        }
    } // for all ports

#ifdef AEI_WECB
    unit = tmp_unit;
#endif

    BCM_ENET_DEBUG("val written to REG_PAUSE_CAPABILITY = %4x",
                   (unsigned int)override_val);
    if (unit == 0) {
        ethsw_wreg(PAGE_CONTROL, REG_PAUSE_CAPBILITY, (uint8_t *)&override_val, 4);
    } else {
        extsw_wreg_wrap(PAGE_CONTROL, REG_PAUSE_CAPBILITY, (uint8_t *)&override_val, 4);
    }

    up(&bcm_ethlock_switch_config);

}

static void get_pause_capability(int unit, int port, int *flow_ctrl)
{
    uint16_t an_adv, v16;
    uint32_t val;
    int phyid = BCMSW_PHY_GET_PHYID(unit, port);

    down(&bcm_ethlock_switch_config);

    if (unit == 0) {
        ethsw_rreg(PAGE_CONTROL, REG_PAUSE_CAPBILITY, (uint8_t *)&val, 4);
    } else {
        extsw_rreg_wrap(PAGE_CONTROL, REG_PAUSE_CAPBILITY, (uint8_t *)&val, 4);
    }
    if (val & REG_PAUSE_CAPBILITY_OVERRIDE) {
    if ((val & (1 << port)) && (val & (1 << (port +TOTAL_SWITCH_PORTS)))) {
        *flow_ctrl = PAUSE_FLOW_CTRL_BOTH;
        } else if (val & (1 << port)) {
        *flow_ctrl = PAUSE_FLOW_CTRL_TX;
        } else if (val & (1 << (port + TOTAL_SWITCH_PORTS))) {
        *flow_ctrl = PAUSE_FLOW_CTRL_RX;
        } else {
        *flow_ctrl = PAUSE_FLOW_CTRL_NONE;
        }
    } else if ((port < EPHY_PORTS) && (phyid != -1)) {
#ifdef AEI_WECB
        if((phyid & BCM_PHY_ID_M) == 24)
        {
            unit = 1;
        }
#endif
        ethsw_phy_read_reg(phyid, MII_BMCR, &v16, unit);
        if (v16 & BMCR_ANENABLE) {
            /*  Read ANAR */
            ethsw_phy_read_reg(phyid, MII_ADVERTISE, &an_adv, unit);
            BCM_ENET_DEBUG("an_adv = %4x", an_adv);

          switch (an_adv & (ADVERTISE_PAUSE_CAP | ADVERTISE_PAUSE_ASYM)) {
                case (ADVERTISE_PAUSE_CAP | ADVERTISE_PAUSE_ASYM):
                *flow_ctrl = PAUSE_FLOW_CTRL_BOTH;
                break;

                case ADVERTISE_PAUSE_ASYM:
                    *flow_ctrl = PAUSE_FLOW_CTRL_TX;
                    break;

                case ADVERTISE_PAUSE_CAP:
                    *flow_ctrl = PAUSE_FLOW_CTRL_RX;
                    break;

                default:
                    *flow_ctrl = PAUSE_FLOW_CTRL_NONE;
                    break;
          }
        } else {
            *flow_ctrl = PAUSE_FLOW_CTRL_NONE;
        }
    } else {
        *flow_ctrl = PAUSE_FLOW_CTRL_NONE;
    }
    BCM_ENET_DEBUG("*flow_ctrl = %4x", *flow_ctrl);

    up(&bcm_ethlock_switch_config);
}
int bcmeapi_ioctl_ethsw_port_pause_capability (struct ethswctl_data *e)
{
    int val = 0;

    if ((e->port >= TOTAL_SWITCH_PORTS && e->port != SWITCH_PORTS_ALL_PHYS) ||
        (e->type == TYPE_GET && e->port == SWITCH_PORTS_ALL_PHYS)) {
        printk("Invalid Switch Port \n");
        return BCM_E_ERROR;
    }

    if (e->type == TYPE_GET) {
        get_pause_capability(e->unit, e->port, &val);
        BCM_ENET_DEBUG("flow_ctrl = %4x", val);
        if (copy_to_user((void*)(&e->ret_val), (void*)&val, sizeof(int))) {
            return -EFAULT;
        }
    } else {
        BCM_ENET_DEBUG("e->val = %4x", e->val);
        set_pause_capability(e->unit, e->port, e->val);
    }

    return 0;
}
#endif

MODULE_LICENSE("GPL");
