/*
* <:copyright-BRCM:2013:DUAL/GPL:standard
* 
*    Copyright (c) 2013 Broadcom Corporation
*    All Rights Reserved
* 
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License, version 2, as published by
* the Free Software Foundation (the "GPL").
* 
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
* 
* 
* A copy of the GPL is available at http://www.broadcom.com/licenses/GPLv2.php, or by
* writing to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
* Boston, MA 02111-1307, USA.
* 
* :> 
*/

#ifndef _RDPA_MCAST_H_
#define _RDPA_MCAST_H_

//#include <bdmf_data_types.h>
//#include <bdmf_interface.h>
#include "rdpa_cmd_list.h"

/** \defgroup mcast Multicast Flow Management
 * @{
 */

#define RDPA_MCAST_MAX_FLOWS 16512

/** The maximum number of client ports per Multicast flow */ 
#define RDPA_MCAST_L2_HEADER_SIZE      32

/** Multicast flow key.\n
 * The flow key is used to classify Multicast traffic.\n
 * - Setting a flow Key inner or outer VLAN ID to 0xFFFF indicates
 * that the corresponding VLAN IDs of Rx packets should be ignored
 * when trying to match Rx packets to the respective flow (wildcard).
 */
typedef struct {
    bdmf_ip_t src_ip;       /**< Source IP address*/
    bdmf_ip_t dst_ip;       /**< Destination IP address*/
    uint8_t protocol;       /**< IPv4 Protocol / IPv6 Next Header */
    uint8_t num_vlan_tags;  /**< Number of VLAN Tags */
    uint16_t outer_vlan_id; /**< Outer VLAN ID */
    uint16_t inner_vlan_id; /**< Inner VLAN ID */
} rdpa_mcast_flow_key_t;

/** Multicast Port Header state */
typedef enum
{
    rdpa_mcast_port_state_cmd_list=0,  /**< Port Header contains the L2 Command List */
    rdpa_mcast_port_state_header,      /**< Port Header contains the TX L2 Header */
} rdpa_mcast_port_state_t;

/** Multicast Port Header.\n
 * The Port Header is used to store either the L2 Command List or the Tx L2 Header
 * of a port that has joined a Multicast flow.\n
 */
typedef union {
    uint16_t l2_cmd_list[RDPA_CMD_LIST_MCAST_L2_LIST_SIZE_16];  /**< L2 Command List */
    uint8_t l2_header[RDPA_MCAST_L2_HEADER_SIZE];               /**< Tx L2 Header */
} rdpa_mcast_port_header_t;

/** Multicast flow Port Context.\n
 * The Port Context contains information pertaining a given
 * LAN port that has joined the Multicast flow.\n
 */
typedef struct {
    rdpa_mcast_port_state_t state;          /**< Port State (READ ONLY) */
    rdpa_mcast_port_header_t port_header;   /**< Port Header */
    uint8_t l2_command_list_length;         /**< L2 Command List length */
    uint8_t l2_header_length;               /**< Tx L2 Header Length */
    uint8_t l2_push;                        /**< Tx L2 Header Push/Pull flag */
    uint8_t l2_offset;                      /**< Tx L2 Header Offset */
    uint8_t queue;                          /**< Egress Queue */
} rdpa_mcast_port_context_t;

/** Multicast flow result.\n
 * The flow result contains forwarding information and
 * packet modification information.\n
 */
typedef struct {
    uint32_t port_mask;                /**< Port membership mask, where each bit corresponds to a rdpa_if port */
    uint8_t number_of_ports;           /**< Number of member ports */
    uint8_t is_routed;                 /**< 1: Routed Flow; 0: Bridged Flow */
    uint16_t mtu;                      /**< Egress Port MTU */
    uint32_t port_header_buffer_addr;  /**< Base PHYS address of the port headers associated to the flow (READ ONLY) */
    uint32_t port_header_buffer_virt;  /**< Base VIRT address of the port headers associated to the flow (READ ONLY) */
    uint8_t l3_cmd_list_length;        /**< L3 Command List Length, in bytes */
    uint16_t l3_cmd_list[RDPA_CMD_LIST_MCAST_L3_LIST_SIZE_16];    /**< L3 Command List */
    /* FIXME - wasting memory by having port_context array scaled to rdpa_if_max_mcast_port. */
    rdpa_mcast_port_context_t port_context[rdpa_if_max_mcast_port]; /**< Port Contexts */
} rdpa_mcast_flow_result_t;

/** Multicast flow definition (key + result).\n
 */
typedef struct {
    rdpa_mcast_flow_key_t key;          /**< Multicast flow key */
    rdpa_mcast_flow_result_t result;    /**< Multicast flow result */
} rdpa_mcast_flow_t;

/** @} end of mcast Doxygen group. */

#endif /* _RDPA_MCAST_H_ */
