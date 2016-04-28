/*
<:copyright-BRCM:2007:DUAL/GPL:standard

   Copyright (c) 2007 Broadcom Corporation
   All Rights Reserved

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
/***************************************************************************
 * File Name  : 
 *
 * Description: 
 *              
 ***************************************************************************/
#ifndef __SPUDRV_TX_DES_MD5_DATA_H__
#define __SPUDRV_TX_DES_MD5_DATA_H__

#if defined(CONFIG_BCM_SPU_TEST)
//

// Automatically generated vector file.

//

// Vector format is: {EOP, SOP, PKT_DATA}.

//

// Example vectors:

//     101234567 // EOP = 0, SOP = 1, PKT_DATA = 01234567

//     089abcdef // EOP = 0, SOP = 0, PKT_DATA = 89abcdef

//     213572468 // EOP = 1, SOP = 0, PKT_DATA = 13572468

//

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt0_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x80402830,// 4 SCX   2 

    0x00006300,// 5 SCX   3 

    0xad22b6d0,// 6 SCX   4 

    0x7bd8e197,// 7 SCX   5 

    0x98c622c6,// 8 SCX   6 

    0x28dd361a,// 9 SCX   7 

    0xf0ce73c9,// 10 SCX   8 

    0xcbe306fc,// 11 SCX   9 

    0x4522f72b,// 12 SCX  10 

    0xf44c7cb9,// 13 SCX  11 

    0x7f60edde,// 14 SCX  12 

    0x6e285a3a,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1128 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 356 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 356 

/// BFD lencrypto      : 40 

/// BFD ofstcrypto     : 212 

/// BFD (ofst+len)cry  : 252 

/// BFD ofstiv         : 8 

/// BFD ofsticv        : 800 

    0x00000164,// 16 BFD   1 

    0x00d40028,// 17 BFD   2 

    0x03200008,// 18 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : d 

    0x0d00f929,// 19 MFM   1 

    0xf6e44eee,// 20 MFM   2 

    0x30000000,// 21 MFM   3 

/// BDA is 283 words. 

/// BDA size     is 1128 (0x468) 

/// BDA id       is 0xd8ea 

    0x0468d8ea,// 22 BDA   1 

/// PAY Generic Data size   : 1128 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xa17f1bd3,// 23 PAY   1 

    0x4399c7f4,// 24 PAY   2 

    0x68f9e1d9,// 25 PAY   3 

    0xd0e3cd46,// 26 PAY   4 

    0xa2670f40,// 27 PAY   5 

    0x4a36bb60,// 28 PAY   6 

    0xdff6bf3d,// 29 PAY   7 

    0xcf6d6aca,// 30 PAY   8 

    0x27892a36,// 31 PAY   9 

    0xb3a64259,// 32 PAY  10 

    0x0b53f96d,// 33 PAY  11 

    0x381f4d3b,// 34 PAY  12 

    0x6fa9032e,// 35 PAY  13 

    0x69c3e0af,// 36 PAY  14 

    0xfc2af810,// 37 PAY  15 

    0xcf77de57,// 38 PAY  16 

    0x5894007c,// 39 PAY  17 

    0x207eadff,// 40 PAY  18 

    0x0e978c80,// 41 PAY  19 

    0x71a365f1,// 42 PAY  20 

    0x5b16cb2d,// 43 PAY  21 

    0x9b11bea8,// 44 PAY  22 

    0xea54c92c,// 45 PAY  23 

    0xb272d3c2,// 46 PAY  24 

    0xc5914f4d,// 47 PAY  25 

    0xdb753ad5,// 48 PAY  26 

    0x49cce16e,// 49 PAY  27 

    0xa0f45151,// 50 PAY  28 

    0x1e695404,// 51 PAY  29 

    0x18b87c09,// 52 PAY  30 

    0xd9f4cb93,// 53 PAY  31 

    0x22ae2f7e,// 54 PAY  32 

    0x880f4509,// 55 PAY  33 

    0xc98cdaf8,// 56 PAY  34 

    0x278f1144,// 57 PAY  35 

    0x83ea1d13,// 58 PAY  36 

    0x0ef7d560,// 59 PAY  37 

    0x849b2a23,// 60 PAY  38 

    0xa7c4604d,// 61 PAY  39 

    0xb3df193f,// 62 PAY  40 

    0xb97873d5,// 63 PAY  41 

    0x73362c47,// 64 PAY  42 

    0xf3bb48be,// 65 PAY  43 

    0xd600bf75,// 66 PAY  44 

    0x43bfa6bf,// 67 PAY  45 

    0xddaf8b1f,// 68 PAY  46 

    0xee76ab64,// 69 PAY  47 

    0xbac8e108,// 70 PAY  48 

    0xee60b96a,// 71 PAY  49 

    0x069ce083,// 72 PAY  50 

    0xd68e55ca,// 73 PAY  51 

    0x5e323945,// 74 PAY  52 

    0xfe08e249,// 75 PAY  53 

    0xa4489a21,// 76 PAY  54 

    0xbc06d37d,// 77 PAY  55 

    0x3c71fa7c,// 78 PAY  56 

    0x57a71679,// 79 PAY  57 

    0xb3c2c49f,// 80 PAY  58 

    0xa4d111fc,// 81 PAY  59 

    0xcf191e63,// 82 PAY  60 

    0x3c5d639b,// 83 PAY  61 

    0x95771e98,// 84 PAY  62 

    0x591cabcf,// 85 PAY  63 

    0x482c7dfd,// 86 PAY  64 

    0xc86e4a85,// 87 PAY  65 

    0x847e2857,// 88 PAY  66 

    0xe8febf8a,// 89 PAY  67 

    0xba2b27b4,// 90 PAY  68 

    0x44b13297,// 91 PAY  69 

    0x1315f597,// 92 PAY  70 

    0xa194e3fd,// 93 PAY  71 

    0x3323ea74,// 94 PAY  72 

    0x05a53cd1,// 95 PAY  73 

    0xd177e43e,// 96 PAY  74 

    0x1dec6656,// 97 PAY  75 

    0x79231f39,// 98 PAY  76 

    0x1459af3a,// 99 PAY  77 

    0xca9ed55b,// 100 PAY  78 

    0x0c01f5d3,// 101 PAY  79 

    0x54f879ea,// 102 PAY  80 

    0x071807cc,// 103 PAY  81 

    0x77156d5b,// 104 PAY  82 

    0xb49e7ef9,// 105 PAY  83 

    0x1c865391,// 106 PAY  84 

    0xbcee3839,// 107 PAY  85 

    0xe347e15a,// 108 PAY  86 

    0xa8e32dfd,// 109 PAY  87 

    0x03c6eced,// 110 PAY  88 

    0x8a6e91cd,// 111 PAY  89 

    0x229eeb56,// 112 PAY  90 

    0xe2cebc4b,// 113 PAY  91 

    0x06577737,// 114 PAY  92 

    0x6f0e0ad5,// 115 PAY  93 

    0xea60e597,// 116 PAY  94 

    0x5db0cef4,// 117 PAY  95 

    0x25669c80,// 118 PAY  96 

    0xed9fc222,// 119 PAY  97 

    0x4889146d,// 120 PAY  98 

    0xe6eb5cea,// 121 PAY  99 

    0xf8873af4,// 122 PAY 100 

    0x88a06277,// 123 PAY 101 

    0x99179638,// 124 PAY 102 

    0xd3c53b0a,// 125 PAY 103 

    0xac70495e,// 126 PAY 104 

    0xf84a330f,// 127 PAY 105 

    0x3d92c0f6,// 128 PAY 106 

    0x8c1725c7,// 129 PAY 107 

    0x698de8a1,// 130 PAY 108 

    0xbc761121,// 131 PAY 109 

    0x0f6f3967,// 132 PAY 110 

    0x3477e130,// 133 PAY 111 

    0xf1bc44f4,// 134 PAY 112 

    0xc9148a59,// 135 PAY 113 

    0xf2617826,// 136 PAY 114 

    0xdfa38cb6,// 137 PAY 115 

    0x8a3c8b1e,// 138 PAY 116 

    0x580540f8,// 139 PAY 117 

    0xa296659e,// 140 PAY 118 

    0x264b1ff4,// 141 PAY 119 

    0x830720cb,// 142 PAY 120 

    0x2988b1a5,// 143 PAY 121 

    0xcd6391fc,// 144 PAY 122 

    0xec900fa8,// 145 PAY 123 

    0x99678e0e,// 146 PAY 124 

    0x823b91e2,// 147 PAY 125 

    0x0a2528e1,// 148 PAY 126 

    0xb8651657,// 149 PAY 127 

    0x7c997a30,// 150 PAY 128 

    0x459c4d41,// 151 PAY 129 

    0xa39e5831,// 152 PAY 130 

    0x450b9209,// 153 PAY 131 

    0xb601ebdd,// 154 PAY 132 

    0x799b2cdc,// 155 PAY 133 

    0xe2f4212d,// 156 PAY 134 

    0xa149fc47,// 157 PAY 135 

    0x14724c13,// 158 PAY 136 

    0x5ec61ea2,// 159 PAY 137 

    0xb7cd6f59,// 160 PAY 138 

    0xed362934,// 161 PAY 139 

    0x53ef5147,// 162 PAY 140 

    0xed91c8bb,// 163 PAY 141 

    0x4a89eccf,// 164 PAY 142 

    0x8fa46e46,// 165 PAY 143 

    0x92cc1422,// 166 PAY 144 

    0x2b5f879a,// 167 PAY 145 

    0xdf985b86,// 168 PAY 146 

    0x4acb677e,// 169 PAY 147 

    0xb837d302,// 170 PAY 148 

    0x25127680,// 171 PAY 149 

    0x8bac75a7,// 172 PAY 150 

    0x1ea216ec,// 173 PAY 151 

    0x67e49cba,// 174 PAY 152 

    0xeb6e2c29,// 175 PAY 153 

    0xcde50a6a,// 176 PAY 154 

    0x2d861745,// 177 PAY 155 

    0x7a58ae35,// 178 PAY 156 

    0xc179e27c,// 179 PAY 157 

    0xfdb204a8,// 180 PAY 158 

    0x02e2eeb7,// 181 PAY 159 

    0xf31597aa,// 182 PAY 160 

    0x9da858f2,// 183 PAY 161 

    0x71ed2752,// 184 PAY 162 

    0x9debb5af,// 185 PAY 163 

    0x5fea2ace,// 186 PAY 164 

    0xc009df95,// 187 PAY 165 

    0xf0eefec5,// 188 PAY 166 

    0x364d5218,// 189 PAY 167 

    0xef5760b9,// 190 PAY 168 

    0xf744f4ff,// 191 PAY 169 

    0x0229764d,// 192 PAY 170 

    0x44497ef3,// 193 PAY 171 

    0xbce84b43,// 194 PAY 172 

    0x4b0e6c80,// 195 PAY 173 

    0xe725f99c,// 196 PAY 174 

    0x06277ee9,// 197 PAY 175 

    0x5ef0c8d1,// 198 PAY 176 

    0xf6a28914,// 199 PAY 177 

    0x92df3cc9,// 200 PAY 178 

    0xd2dd86aa,// 201 PAY 179 

    0xd98f3c9b,// 202 PAY 180 

    0x623d8115,// 203 PAY 181 

    0xd771105e,// 204 PAY 182 

    0x316b7c0d,// 205 PAY 183 

    0x5a723c9a,// 206 PAY 184 

    0xf809aaee,// 207 PAY 185 

    0xee37de7c,// 208 PAY 186 

    0xd7860e4d,// 209 PAY 187 

    0xf599c19b,// 210 PAY 188 

    0xfddd8193,// 211 PAY 189 

    0x63213a75,// 212 PAY 190 

    0x19a85740,// 213 PAY 191 

    0x912303da,// 214 PAY 192 

    0x37d10e60,// 215 PAY 193 

    0xbe95e8ba,// 216 PAY 194 

    0x99fac630,// 217 PAY 195 

    0xf062b1d0,// 218 PAY 196 

    0x962c99c7,// 219 PAY 197 

    0xe0046e49,// 220 PAY 198 

    0x5e6c3d17,// 221 PAY 199 

    0xb67cd48a,// 222 PAY 200 

    0x3695f887,// 223 PAY 201 

    0x8b63a02a,// 224 PAY 202 

    0x16c2cd56,// 225 PAY 203 

    0xd662f212,// 226 PAY 204 

    0x21295705,// 227 PAY 205 

    0x5f808ed1,// 228 PAY 206 

    0xb0b4866c,// 229 PAY 207 

    0x33502c78,// 230 PAY 208 

    0x5890b735,// 231 PAY 209 

    0x43c15269,// 232 PAY 210 

    0xcfe91f83,// 233 PAY 211 

    0xb2a72985,// 234 PAY 212 

    0x587695ba,// 235 PAY 213 

    0xc1613ab8,// 236 PAY 214 

    0xe012ffc7,// 237 PAY 215 

    0xc48ae52e,// 238 PAY 216 

    0x92c9dfd7,// 239 PAY 217 

    0x9d1c2b5f,// 240 PAY 218 

    0x3034ba0d,// 241 PAY 219 

    0x38ff5dc6,// 242 PAY 220 

    0xec918a5d,// 243 PAY 221 

    0x3d7e5e79,// 244 PAY 222 

    0x0f66aaad,// 245 PAY 223 

    0xb239cf4d,// 246 PAY 224 

    0x65222c33,// 247 PAY 225 

    0xf9179ffa,// 248 PAY 226 

    0x079727b0,// 249 PAY 227 

    0xd393b27a,// 250 PAY 228 

    0xc7a6da5b,// 251 PAY 229 

    0x8699b138,// 252 PAY 230 

    0xcfed8ed7,// 253 PAY 231 

    0xfe8ca173,// 254 PAY 232 

    0x552d3041,// 255 PAY 233 

    0x64470654,// 256 PAY 234 

    0x3a0304e6,// 257 PAY 235 

    0xdb3f9cb3,// 258 PAY 236 

    0x31c3f22f,// 259 PAY 237 

    0x7982e92e,// 260 PAY 238 

    0xdae2da84,// 261 PAY 239 

    0x2fdd2eb0,// 262 PAY 240 

    0x749ba6fb,// 263 PAY 241 

    0xdc7214e6,// 264 PAY 242 

    0xa9432337,// 265 PAY 243 

    0x7791f600,// 266 PAY 244 

    0x1646db5d,// 267 PAY 245 

    0x4ca7e085,// 268 PAY 246 

    0x0674aa7d,// 269 PAY 247 

    0x29924ee0,// 270 PAY 248 

    0xb50a76f7,// 271 PAY 249 

    0x12f32c04,// 272 PAY 250 

    0x2901780e,// 273 PAY 251 

    0x21f0a9d7,// 274 PAY 252 

    0x8b36b44d,// 275 PAY 253 

    0xab84147f,// 276 PAY 254 

    0xc8db7f30,// 277 PAY 255 

    0xe5ea70db,// 278 PAY 256 

    0xb1eb8d03,// 279 PAY 257 

    0x7b5ac303,// 280 PAY 258 

    0x62855011,// 281 PAY 259 

    0xac7097b4,// 282 PAY 260 

    0x9f8aacbd,// 283 PAY 261 

    0x1b250a5e,// 284 PAY 262 

    0x39dee7d4,// 285 PAY 263 

    0xe714325c,// 286 PAY 264 

    0xdffe2dfe,// 287 PAY 265 

    0x549c8da7,// 288 PAY 266 

    0xf049e54b,// 289 PAY 267 

    0xb19e1124,// 290 PAY 268 

    0x43408369,// 291 PAY 269 

    0x90478f20,// 292 PAY 270 

    0x80c9d880,// 293 PAY 271 

    0xeaea2d44,// 294 PAY 272 

    0xc2d0950d,// 295 PAY 273 

    0x2852e5db,// 296 PAY 274 

    0x731d6b7a,// 297 PAY 275 

    0xba32b5d0,// 298 PAY 276 

    0x704802b8,// 299 PAY 277 

    0x3dec0e38,// 300 PAY 278 

    0x3250893d,// 301 PAY 279 

    0x8aef595f,// 302 PAY 280 

    0xf34c4a86,// 303 PAY 281 

    0x352a350f,// 304 PAY 282 

/// STA is 1 words. 

/// STA num_pkts       : 99 

/// STA pkt_idx        : 152 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x93 

    0x02609363 // 305 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt1_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x0b 

/// ECH pdu_tag        : 0x00 

    0x000b0000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x80402853,// 4 SCX   2 

    0x00001200,// 5 SCX   3 

    0xe967787a,// 6 SCX   4 

    0xbd27f8ed,// 7 SCX   5 

    0x2b6aafb4,// 8 SCX   6 

    0x2d829803,// 9 SCX   7 

    0x51a08fd2,// 10 SCX   8 

    0xd33276ae,// 11 SCX   9 

    0x6eb407cd,// 12 SCX  10 

    0xd45102f5,// 13 SCX  11 

    0xf3e7bf7f,// 14 SCX  12 

    0x2f28f5ef,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 2048 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1262 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1262 

/// BFD lencrypto      : 152 

/// BFD ofstcrypto     : 1064 

/// BFD (ofst+len)cry  : 1216 

/// BFD ofstiv         : 724 

/// BFD ofsticv        : 2004 

    0x000004ee,// 16 BFD   1 

    0x04280098,// 17 BFD   2 

    0x07d402d4,// 18 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 13 

    0x13001da3,// 19 MFM   1 

    0x15776a99,// 20 MFM   2 

    0x1ce458b0,// 21 MFM   3 

/// BDA is 513 words. 

/// BDA size     is 2048 (0x800) 

/// BDA id       is 0x3d82 

    0x08003d82,// 22 BDA   1 

/// PAY Generic Data size   : 2048 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x2dc061cf,// 23 PAY   1 

    0x161cc825,// 24 PAY   2 

    0x202fd253,// 25 PAY   3 

    0x13a06bf3,// 26 PAY   4 

    0xe08a9e7c,// 27 PAY   5 

    0xee61bf5d,// 28 PAY   6 

    0x48b5d489,// 29 PAY   7 

    0xafb39e1e,// 30 PAY   8 

    0x3ee1e750,// 31 PAY   9 

    0xefcdd2f3,// 32 PAY  10 

    0x4c2b2559,// 33 PAY  11 

    0xbd12689c,// 34 PAY  12 

    0xb133907a,// 35 PAY  13 

    0x2ed8fa4a,// 36 PAY  14 

    0x4c32d31a,// 37 PAY  15 

    0x5eacf37c,// 38 PAY  16 

    0x3ac8c7fe,// 39 PAY  17 

    0xd5e5fe1f,// 40 PAY  18 

    0x02de59f3,// 41 PAY  19 

    0xc2be1446,// 42 PAY  20 

    0x62a03e3e,// 43 PAY  21 

    0x5752b5d7,// 44 PAY  22 

    0xe776d48e,// 45 PAY  23 

    0x66101e00,// 46 PAY  24 

    0x6bf03436,// 47 PAY  25 

    0xe6153322,// 48 PAY  26 

    0xbc3fec5c,// 49 PAY  27 

    0x27acd3ca,// 50 PAY  28 

    0xdc5c10fd,// 51 PAY  29 

    0xd6f2f64b,// 52 PAY  30 

    0xaf7b945c,// 53 PAY  31 

    0xcb75a728,// 54 PAY  32 

    0x498b09cf,// 55 PAY  33 

    0xeb6091d3,// 56 PAY  34 

    0x01590053,// 57 PAY  35 

    0x2f243054,// 58 PAY  36 

    0x5e58f7a7,// 59 PAY  37 

    0x80d56156,// 60 PAY  38 

    0x0cda6e64,// 61 PAY  39 

    0xa08e6b08,// 62 PAY  40 

    0xeeb9b3d4,// 63 PAY  41 

    0x12aee6b9,// 64 PAY  42 

    0x8d6995c5,// 65 PAY  43 

    0x427b4a0b,// 66 PAY  44 

    0x8e7c6181,// 67 PAY  45 

    0xa19e15cd,// 68 PAY  46 

    0x8737ca7d,// 69 PAY  47 

    0xd3b29dd0,// 70 PAY  48 

    0x1a8d764d,// 71 PAY  49 

    0xe7d99b5d,// 72 PAY  50 

    0x25bcd779,// 73 PAY  51 

    0x2ef0987e,// 74 PAY  52 

    0xa2f522c0,// 75 PAY  53 

    0x58ed06c6,// 76 PAY  54 

    0x7f5b7823,// 77 PAY  55 

    0xc7d5e20f,// 78 PAY  56 

    0x73bc6a1f,// 79 PAY  57 

    0xc1624ca1,// 80 PAY  58 

    0xbd14b566,// 81 PAY  59 

    0xdd08f45b,// 82 PAY  60 

    0x09563f3a,// 83 PAY  61 

    0xdb126204,// 84 PAY  62 

    0xf2ce71a5,// 85 PAY  63 

    0x3acb73d3,// 86 PAY  64 

    0x27139c03,// 87 PAY  65 

    0x9020481c,// 88 PAY  66 

    0xb7be6853,// 89 PAY  67 

    0x3b8f9051,// 90 PAY  68 

    0x7f89957f,// 91 PAY  69 

    0xb36c5cc6,// 92 PAY  70 

    0x17abdf59,// 93 PAY  71 

    0x9380073a,// 94 PAY  72 

    0xf43e7c7c,// 95 PAY  73 

    0xebc9bca2,// 96 PAY  74 

    0xaec58776,// 97 PAY  75 

    0xe41f7da5,// 98 PAY  76 

    0xa9d092df,// 99 PAY  77 

    0x91dd007a,// 100 PAY  78 

    0x13b63592,// 101 PAY  79 

    0xddb00260,// 102 PAY  80 

    0x5f21fb04,// 103 PAY  81 

    0xb77c9bd6,// 104 PAY  82 

    0x89cd264e,// 105 PAY  83 

    0xe41a2708,// 106 PAY  84 

    0x3e58c5f9,// 107 PAY  85 

    0x6b0632d8,// 108 PAY  86 

    0x9ac72d54,// 109 PAY  87 

    0x5d3eedbe,// 110 PAY  88 

    0x1e23ef90,// 111 PAY  89 

    0x38685cee,// 112 PAY  90 

    0xb6e7a3f1,// 113 PAY  91 

    0x420dc260,// 114 PAY  92 

    0x146676f0,// 115 PAY  93 

    0x4677f295,// 116 PAY  94 

    0x635a0cbf,// 117 PAY  95 

    0x1df5cd00,// 118 PAY  96 

    0x7cc72a5e,// 119 PAY  97 

    0x6afc9c85,// 120 PAY  98 

    0xd5269420,// 121 PAY  99 

    0x87fb3b52,// 122 PAY 100 

    0x8656fa3d,// 123 PAY 101 

    0xf1b4f0fe,// 124 PAY 102 

    0xf845c876,// 125 PAY 103 

    0xbbe6bb88,// 126 PAY 104 

    0x079455c8,// 127 PAY 105 

    0xa94e2379,// 128 PAY 106 

    0x778e84ed,// 129 PAY 107 

    0x67d5e6e7,// 130 PAY 108 

    0xa1b6c4dc,// 131 PAY 109 

    0x8b4f790b,// 132 PAY 110 

    0xd60318e9,// 133 PAY 111 

    0x1ed4988d,// 134 PAY 112 

    0x2658be98,// 135 PAY 113 

    0x90fb3424,// 136 PAY 114 

    0x80f6139b,// 137 PAY 115 

    0xd570c21c,// 138 PAY 116 

    0x11075456,// 139 PAY 117 

    0x1ccf85b9,// 140 PAY 118 

    0xd6b2dbd0,// 141 PAY 119 

    0x636e3f2e,// 142 PAY 120 

    0x109999e5,// 143 PAY 121 

    0xa7c5cd77,// 144 PAY 122 

    0x367fa4c5,// 145 PAY 123 

    0x18610de9,// 146 PAY 124 

    0xa5156386,// 147 PAY 125 

    0x9bc9cb03,// 148 PAY 126 

    0xa74c0eb7,// 149 PAY 127 

    0x5dbf7b61,// 150 PAY 128 

    0x14eeb6e5,// 151 PAY 129 

    0x5220e71b,// 152 PAY 130 

    0xc046928f,// 153 PAY 131 

    0x0b8eec14,// 154 PAY 132 

    0x4d43656b,// 155 PAY 133 

    0x822bf32e,// 156 PAY 134 

    0xab9ffee4,// 157 PAY 135 

    0x22884cd9,// 158 PAY 136 

    0xf1175dc2,// 159 PAY 137 

    0xaa033508,// 160 PAY 138 

    0xa2e3adc0,// 161 PAY 139 

    0xf4eae98e,// 162 PAY 140 

    0xcedf0b6d,// 163 PAY 141 

    0x84f4ab70,// 164 PAY 142 

    0x759e319e,// 165 PAY 143 

    0x048a85d6,// 166 PAY 144 

    0x9d740559,// 167 PAY 145 

    0xb8bb10a2,// 168 PAY 146 

    0x345d2c8b,// 169 PAY 147 

    0xf45dbcf3,// 170 PAY 148 

    0xfe1b39ea,// 171 PAY 149 

    0x0aa150f1,// 172 PAY 150 

    0xef3a8237,// 173 PAY 151 

    0x139e94dd,// 174 PAY 152 

    0xf4adb0c4,// 175 PAY 153 

    0x43e5bf3d,// 176 PAY 154 

    0x16ad342d,// 177 PAY 155 

    0xc4020262,// 178 PAY 156 

    0x0a38dfc5,// 179 PAY 157 

    0x3331fdc1,// 180 PAY 158 

    0xc53fbeea,// 181 PAY 159 

    0x00449d3b,// 182 PAY 160 

    0x5cad81ee,// 183 PAY 161 

    0xa95967e2,// 184 PAY 162 

    0xca7af5cc,// 185 PAY 163 

    0xafe4425c,// 186 PAY 164 

    0x789be653,// 187 PAY 165 

    0xb7f967c4,// 188 PAY 166 

    0x87f5a618,// 189 PAY 167 

    0xccd19fa0,// 190 PAY 168 

    0xde4faa12,// 191 PAY 169 

    0xf69e0fbe,// 192 PAY 170 

    0x3ad6acaf,// 193 PAY 171 

    0x72d0895e,// 194 PAY 172 

    0x0680000d,// 195 PAY 173 

    0x3885f71e,// 196 PAY 174 

    0x8de0a0cb,// 197 PAY 175 

    0x7252ae8c,// 198 PAY 176 

    0x41cc4b24,// 199 PAY 177 

    0x7c014ce2,// 200 PAY 178 

    0x8e7ee4b0,// 201 PAY 179 

    0xc9a8c451,// 202 PAY 180 

    0x08963846,// 203 PAY 181 

    0xeb14dd13,// 204 PAY 182 

    0x913e0584,// 205 PAY 183 

    0x96e4949e,// 206 PAY 184 

    0x46e71c46,// 207 PAY 185 

    0x10978564,// 208 PAY 186 

    0xb071c4d0,// 209 PAY 187 

    0x72598d74,// 210 PAY 188 

    0x512c4d7b,// 211 PAY 189 

    0xeba8788c,// 212 PAY 190 

    0xaf29a03f,// 213 PAY 191 

    0x108a9be6,// 214 PAY 192 

    0xc79b8e15,// 215 PAY 193 

    0x85d4bb5a,// 216 PAY 194 

    0x96ee3bc5,// 217 PAY 195 

    0x8e77f3c5,// 218 PAY 196 

    0xa556738a,// 219 PAY 197 

    0xb0979aee,// 220 PAY 198 

    0x5ab97c60,// 221 PAY 199 

    0x891b853d,// 222 PAY 200 

    0x14bd8441,// 223 PAY 201 

    0x09264a05,// 224 PAY 202 

    0xf6130093,// 225 PAY 203 

    0x857c55dd,// 226 PAY 204 

    0x44bd731a,// 227 PAY 205 

    0xf6f43e93,// 228 PAY 206 

    0xf9503303,// 229 PAY 207 

    0xdf1874ce,// 230 PAY 208 

    0x3f383f4a,// 231 PAY 209 

    0xc8cc76c4,// 232 PAY 210 

    0x8822e936,// 233 PAY 211 

    0x8c75f220,// 234 PAY 212 

    0x755d9ba2,// 235 PAY 213 

    0x84e31e8f,// 236 PAY 214 

    0xebb0259a,// 237 PAY 215 

    0x6c1d8ecd,// 238 PAY 216 

    0xa5b5373d,// 239 PAY 217 

    0xea5332e9,// 240 PAY 218 

    0xae1c56ac,// 241 PAY 219 

    0x52a8cf31,// 242 PAY 220 

    0x1966b0aa,// 243 PAY 221 

    0xd3bae545,// 244 PAY 222 

    0x2a0bb58c,// 245 PAY 223 

    0x2d56cc30,// 246 PAY 224 

    0x3e2ce6a6,// 247 PAY 225 

    0xc2b162a1,// 248 PAY 226 

    0x35efa0ed,// 249 PAY 227 

    0x66c3522e,// 250 PAY 228 

    0x3e05e25c,// 251 PAY 229 

    0xe3cb2f74,// 252 PAY 230 

    0x8bd237ae,// 253 PAY 231 

    0x06909d12,// 254 PAY 232 

    0x55ef8bef,// 255 PAY 233 

    0xf62e6ad8,// 256 PAY 234 

    0x92cd1e45,// 257 PAY 235 

    0x9cdf74e9,// 258 PAY 236 

    0x0545d6c4,// 259 PAY 237 

    0xebd94ee7,// 260 PAY 238 

    0xcf9c67cc,// 261 PAY 239 

    0x94a7ad40,// 262 PAY 240 

    0x14b31e41,// 263 PAY 241 

    0x9fea8d01,// 264 PAY 242 

    0xeebf4661,// 265 PAY 243 

    0x5a4d4d43,// 266 PAY 244 

    0xd71755e1,// 267 PAY 245 

    0xa86bbd72,// 268 PAY 246 

    0x7c052899,// 269 PAY 247 

    0x7dd36638,// 270 PAY 248 

    0x65eb029f,// 271 PAY 249 

    0xeb984551,// 272 PAY 250 

    0xaa6e194c,// 273 PAY 251 

    0x2063d5ec,// 274 PAY 252 

    0x8ba1050f,// 275 PAY 253 

    0xaccdfad5,// 276 PAY 254 

    0xfde89d19,// 277 PAY 255 

    0x5c09333d,// 278 PAY 256 

    0x1bd5434c,// 279 PAY 257 

    0x67837735,// 280 PAY 258 

    0x9b7b3a77,// 281 PAY 259 

    0x43c8eab1,// 282 PAY 260 

    0xa016faee,// 283 PAY 261 

    0x1e839ed7,// 284 PAY 262 

    0xf0de6cec,// 285 PAY 263 

    0xb0790eda,// 286 PAY 264 

    0x7bab6864,// 287 PAY 265 

    0xbf6a1b96,// 288 PAY 266 

    0x717f7231,// 289 PAY 267 

    0x2ded15bd,// 290 PAY 268 

    0x477768e6,// 291 PAY 269 

    0xc8bb8183,// 292 PAY 270 

    0xea88f101,// 293 PAY 271 

    0x21356a1f,// 294 PAY 272 

    0x4ac8cc24,// 295 PAY 273 

    0x1eab8bbb,// 296 PAY 274 

    0x2521bbb0,// 297 PAY 275 

    0xf50d70ce,// 298 PAY 276 

    0x07a619b7,// 299 PAY 277 

    0xf54b7e6a,// 300 PAY 278 

    0xfd4ac526,// 301 PAY 279 

    0xf4d826a3,// 302 PAY 280 

    0x68db112c,// 303 PAY 281 

    0x0ad7a8aa,// 304 PAY 282 

    0x6f847ead,// 305 PAY 283 

    0x41afae90,// 306 PAY 284 

    0xca24d0a2,// 307 PAY 285 

    0x06a9fe3d,// 308 PAY 286 

    0x81a1591c,// 309 PAY 287 

    0xf4ba3ac2,// 310 PAY 288 

    0xfa2d6617,// 311 PAY 289 

    0x0a225497,// 312 PAY 290 

    0x7de215bd,// 313 PAY 291 

    0xc2132faf,// 314 PAY 292 

    0xee9f91a6,// 315 PAY 293 

    0xdeac67cf,// 316 PAY 294 

    0x0298f957,// 317 PAY 295 

    0xfcab071b,// 318 PAY 296 

    0x5be1f92b,// 319 PAY 297 

    0x0d01a7aa,// 320 PAY 298 

    0x1ff6ee02,// 321 PAY 299 

    0x43ac94a6,// 322 PAY 300 

    0x5d42c065,// 323 PAY 301 

    0x7d34f26e,// 324 PAY 302 

    0xafa56c9d,// 325 PAY 303 

    0xaac07564,// 326 PAY 304 

    0xd654a989,// 327 PAY 305 

    0x4a52d766,// 328 PAY 306 

    0xa30bb6f2,// 329 PAY 307 

    0x8bf251b9,// 330 PAY 308 

    0x676090e7,// 331 PAY 309 

    0xc55cad42,// 332 PAY 310 

    0x31192cd9,// 333 PAY 311 

    0xe26bb685,// 334 PAY 312 

    0x0d7661d6,// 335 PAY 313 

    0x20c16e7b,// 336 PAY 314 

    0x4edc5734,// 337 PAY 315 

    0x41724d04,// 338 PAY 316 

    0x78286bc0,// 339 PAY 317 

    0x98e7ecd5,// 340 PAY 318 

    0x2ab66444,// 341 PAY 319 

    0x2b51eb55,// 342 PAY 320 

    0x45c07699,// 343 PAY 321 

    0xa726dc81,// 344 PAY 322 

    0xede5aaa7,// 345 PAY 323 

    0xcb0bfee2,// 346 PAY 324 

    0xcf9b26bc,// 347 PAY 325 

    0x2837471d,// 348 PAY 326 

    0xfa1d36d2,// 349 PAY 327 

    0x2c0bdea5,// 350 PAY 328 

    0x0b30b016,// 351 PAY 329 

    0x6f2df8fb,// 352 PAY 330 

    0x0a8cbb41,// 353 PAY 331 

    0xfc45db02,// 354 PAY 332 

    0xf9666396,// 355 PAY 333 

    0xb7a7f77a,// 356 PAY 334 

    0x0c6538b7,// 357 PAY 335 

    0x7e0cac7d,// 358 PAY 336 

    0x2929e96f,// 359 PAY 337 

    0x7f0949eb,// 360 PAY 338 

    0xf04eade2,// 361 PAY 339 

    0x022086e8,// 362 PAY 340 

    0x90d85f1c,// 363 PAY 341 

    0x24374a50,// 364 PAY 342 

    0x356f5981,// 365 PAY 343 

    0xf554b8a7,// 366 PAY 344 

    0x46c96cfe,// 367 PAY 345 

    0x935007aa,// 368 PAY 346 

    0xd8ec7cc0,// 369 PAY 347 

    0x2c5fe93c,// 370 PAY 348 

    0x08674e12,// 371 PAY 349 

    0x2d56c13b,// 372 PAY 350 

    0x2c70e819,// 373 PAY 351 

    0xa59109d6,// 374 PAY 352 

    0x4f3881e2,// 375 PAY 353 

    0x58556003,// 376 PAY 354 

    0x8e256a1c,// 377 PAY 355 

    0x7ef2d537,// 378 PAY 356 

    0x189a2115,// 379 PAY 357 

    0xdda8eb55,// 380 PAY 358 

    0x2fcf3c6b,// 381 PAY 359 

    0xec36d027,// 382 PAY 360 

    0xb782f954,// 383 PAY 361 

    0x2110bef9,// 384 PAY 362 

    0x407a319c,// 385 PAY 363 

    0x892bd11b,// 386 PAY 364 

    0x148111b7,// 387 PAY 365 

    0x6615fed8,// 388 PAY 366 

    0x240a4d5c,// 389 PAY 367 

    0x6bd6f070,// 390 PAY 368 

    0xc82c9681,// 391 PAY 369 

    0xf0c02d24,// 392 PAY 370 

    0xcf2b043c,// 393 PAY 371 

    0x7c291bca,// 394 PAY 372 

    0x70902aa3,// 395 PAY 373 

    0x4bdfba8b,// 396 PAY 374 

    0xba4f3466,// 397 PAY 375 

    0x25e14198,// 398 PAY 376 

    0x08ac83b4,// 399 PAY 377 

    0x501919eb,// 400 PAY 378 

    0x43d316c1,// 401 PAY 379 

    0x46bc561b,// 402 PAY 380 

    0x342b0083,// 403 PAY 381 

    0x2e96fb8a,// 404 PAY 382 

    0x5175717e,// 405 PAY 383 

    0xf3dc18d1,// 406 PAY 384 

    0x1be50951,// 407 PAY 385 

    0x1229dade,// 408 PAY 386 

    0x1e7ca45d,// 409 PAY 387 

    0x3d545c1a,// 410 PAY 388 

    0x59b1a168,// 411 PAY 389 

    0x9cb4233b,// 412 PAY 390 

    0xf2d663ed,// 413 PAY 391 

    0xbf5bfba8,// 414 PAY 392 

    0x6602fea5,// 415 PAY 393 

    0x3956d462,// 416 PAY 394 

    0x3b8c8b08,// 417 PAY 395 

    0xb5a97740,// 418 PAY 396 

    0x6f93e51d,// 419 PAY 397 

    0x7edf1050,// 420 PAY 398 

    0xdb227230,// 421 PAY 399 

    0x4c8be2f1,// 422 PAY 400 

    0x10bbcb0b,// 423 PAY 401 

    0xe01493da,// 424 PAY 402 

    0xf9eab87b,// 425 PAY 403 

    0xfc5f723e,// 426 PAY 404 

    0x859b6b72,// 427 PAY 405 

    0x8bbc280a,// 428 PAY 406 

    0xde517c9a,// 429 PAY 407 

    0x52ec49a2,// 430 PAY 408 

    0x5a9e850f,// 431 PAY 409 

    0x33f12ded,// 432 PAY 410 

    0x73b5f9ab,// 433 PAY 411 

    0xedd58bf4,// 434 PAY 412 

    0x46cea42c,// 435 PAY 413 

    0x1fc125a8,// 436 PAY 414 

    0x49815bbb,// 437 PAY 415 

    0x94b743f2,// 438 PAY 416 

    0x8df38617,// 439 PAY 417 

    0xcae2779c,// 440 PAY 418 

    0x042c027c,// 441 PAY 419 

    0xe365429b,// 442 PAY 420 

    0xe1289c9e,// 443 PAY 421 

    0x49756fdc,// 444 PAY 422 

    0x8891575a,// 445 PAY 423 

    0x9b39e267,// 446 PAY 424 

    0xe582d449,// 447 PAY 425 

    0x2ee9a30a,// 448 PAY 426 

    0x1df41f1e,// 449 PAY 427 

    0xf35ebfa5,// 450 PAY 428 

    0x559e28e1,// 451 PAY 429 

    0x6bb624ce,// 452 PAY 430 

    0x19eeffd2,// 453 PAY 431 

    0x199007cb,// 454 PAY 432 

    0xd5ec429a,// 455 PAY 433 

    0x3cd48f6a,// 456 PAY 434 

    0x2decdf5b,// 457 PAY 435 

    0x685b87de,// 458 PAY 436 

    0x9fe182fe,// 459 PAY 437 

    0x3002001f,// 460 PAY 438 

    0xf3a5c718,// 461 PAY 439 

    0xb5df740d,// 462 PAY 440 

    0x2bc88c10,// 463 PAY 441 

    0xca4f8a4c,// 464 PAY 442 

    0xda41e16f,// 465 PAY 443 

    0xb23aab28,// 466 PAY 444 

    0x81d8df26,// 467 PAY 445 

    0xd1ceba6b,// 468 PAY 446 

    0x99f067d8,// 469 PAY 447 

    0x01764ffd,// 470 PAY 448 

    0x6f480884,// 471 PAY 449 

    0x4072e477,// 472 PAY 450 

    0xd365d1ce,// 473 PAY 451 

    0x729be759,// 474 PAY 452 

    0x4d13e588,// 475 PAY 453 

    0xb38bdb1d,// 476 PAY 454 

    0x51936a14,// 477 PAY 455 

    0x1d8ec9f0,// 478 PAY 456 

    0x7adaf360,// 479 PAY 457 

    0xff9b42b7,// 480 PAY 458 

    0xa8733dbe,// 481 PAY 459 

    0x91158038,// 482 PAY 460 

    0x8e3141ba,// 483 PAY 461 

    0x948ccdee,// 484 PAY 462 

    0xebcdf133,// 485 PAY 463 

    0xeab765d3,// 486 PAY 464 

    0xafec0890,// 487 PAY 465 

    0x4ca2e265,// 488 PAY 466 

    0x1d1f3c0b,// 489 PAY 467 

    0x330d7a5b,// 490 PAY 468 

    0xcc02efa7,// 491 PAY 469 

    0xa2eb13a5,// 492 PAY 470 

    0x184a4246,// 493 PAY 471 

    0x77f3d7ff,// 494 PAY 472 

    0x66be2e12,// 495 PAY 473 

    0x14d12842,// 496 PAY 474 

    0x4067c40a,// 497 PAY 475 

    0xd6864edb,// 498 PAY 476 

    0xc7feea40,// 499 PAY 477 

    0x444c3a30,// 500 PAY 478 

    0x6a50223c,// 501 PAY 479 

    0x5b650f53,// 502 PAY 480 

    0xca48b31c,// 503 PAY 481 

    0x3a0cf956,// 504 PAY 482 

    0xe4f7fc91,// 505 PAY 483 

    0x5dbe26b1,// 506 PAY 484 

    0x806d387c,// 507 PAY 485 

    0xe920be2c,// 508 PAY 486 

    0xbc0895d4,// 509 PAY 487 

    0xdf4151e3,// 510 PAY 488 

    0xe93f047e,// 511 PAY 489 

    0x7a32f3a7,// 512 PAY 490 

    0x02db7639,// 513 PAY 491 

    0x29079420,// 514 PAY 492 

    0x7bf7068e,// 515 PAY 493 

    0x5ab89bb3,// 516 PAY 494 

    0xaadde0ec,// 517 PAY 495 

    0xfd99d983,// 518 PAY 496 

    0xb8f2eefa,// 519 PAY 497 

    0x870769c4,// 520 PAY 498 

    0x67f1309e,// 521 PAY 499 

    0x9c3747e2,// 522 PAY 500 

    0x01e479b3,// 523 PAY 501 

    0x9857b20e,// 524 PAY 502 

    0xf4c632dc,// 525 PAY 503 

    0x0d33f14b,// 526 PAY 504 

    0x56789730,// 527 PAY 505 

    0xc04726ea,// 528 PAY 506 

    0x37fd10e4,// 529 PAY 507 

    0x82483aec,// 530 PAY 508 

    0x8ea946f3,// 531 PAY 509 

    0xcbc0bb9d,// 532 PAY 510 

    0x486944f1,// 533 PAY 511 

    0x3eca9793,// 534 PAY 512 

/// STA is 1 words. 

/// STA num_pkts       : 178 

/// STA pkt_idx        : 98 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x80 

    0x018880b2 // 535 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt2_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x80402860,// 4 SCX   2 

    0x00005200,// 5 SCX   3 

    0xf6c4159e,// 6 SCX   4 

    0xe15e1eff,// 7 SCX   5 

    0x1433f120,// 8 SCX   6 

    0xd82a7e6d,// 9 SCX   7 

    0x5a7f7043,// 10 SCX   8 

    0x0751cfbf,// 11 SCX   9 

    0x1bac8e05,// 12 SCX  10 

    0xcaa7d499,// 13 SCX  11 

    0x4880cc3f,// 14 SCX  12 

    0xa09d30bf,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 571 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 348 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 348 

/// BFD lencrypto      : 280 

/// BFD ofstcrypto     : 64 

/// BFD (ofst+len)cry  : 344 

/// BFD ofstiv         : 32 

/// BFD ofsticv        : 484 

    0x0000015c,// 16 BFD   1 

    0x00400118,// 17 BFD   2 

    0x01e40020,// 18 BFD   3 

/// MFM is 11 words. 

/// MFM vldnibs        : 4f 

    0x4f000d78,// 19 MFM   1 

    0x62d8655e,// 20 MFM   2 

    0x19e24878,// 21 MFM   3 

    0x576a3e15,// 22 MFM   4 

    0xc2145f63,// 23 MFM   5 

    0xac8eb146,// 24 MFM   6 

    0x452cff79,// 25 MFM   7 

    0xa9dfc4a3,// 26 MFM   8 

    0xa281fafe,// 27 MFM   9 

    0xec11e8c5,// 28 MFM  10 

    0x28a00000,// 29 MFM  11 

/// BDA is 144 words. 

/// BDA size     is 571 (0x23b) 

/// BDA id       is 0xb49d 

    0x023bb49d,// 30 BDA   1 

/// PAY Generic Data size   : 571 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xf39d08a2,// 31 PAY   1 

    0x6953ace5,// 32 PAY   2 

    0x4dcae1f0,// 33 PAY   3 

    0xb54a73ea,// 34 PAY   4 

    0xd946cbef,// 35 PAY   5 

    0x54df7262,// 36 PAY   6 

    0xe206e12f,// 37 PAY   7 

    0xb20c91d8,// 38 PAY   8 

    0xacf8677b,// 39 PAY   9 

    0xb0bc6f7b,// 40 PAY  10 

    0x9382900f,// 41 PAY  11 

    0x33c799b6,// 42 PAY  12 

    0x236287d2,// 43 PAY  13 

    0x3ce3bd8d,// 44 PAY  14 

    0xb423d69f,// 45 PAY  15 

    0x1267336d,// 46 PAY  16 

    0x92a98b26,// 47 PAY  17 

    0xa1d45046,// 48 PAY  18 

    0x3f2d7d59,// 49 PAY  19 

    0xe2fc198c,// 50 PAY  20 

    0x9b39b48f,// 51 PAY  21 

    0x870ca9eb,// 52 PAY  22 

    0xfe438b0e,// 53 PAY  23 

    0x27d15cf4,// 54 PAY  24 

    0x22322742,// 55 PAY  25 

    0x76431d40,// 56 PAY  26 

    0xb8c401ee,// 57 PAY  27 

    0x9c1faa2d,// 58 PAY  28 

    0x497b6b00,// 59 PAY  29 

    0x1671c1a1,// 60 PAY  30 

    0x5418de38,// 61 PAY  31 

    0x88ca29dc,// 62 PAY  32 

    0x2b6f07d4,// 63 PAY  33 

    0x6f7831f2,// 64 PAY  34 

    0x8c055193,// 65 PAY  35 

    0xe3902678,// 66 PAY  36 

    0x98fe295c,// 67 PAY  37 

    0xef95daf1,// 68 PAY  38 

    0xe6869233,// 69 PAY  39 

    0x9e8e59ea,// 70 PAY  40 

    0x2e201da6,// 71 PAY  41 

    0xe952ea67,// 72 PAY  42 

    0x211be710,// 73 PAY  43 

    0xa12b935c,// 74 PAY  44 

    0xb2820cb8,// 75 PAY  45 

    0x7bdbc558,// 76 PAY  46 

    0xe556db87,// 77 PAY  47 

    0x60f7cff9,// 78 PAY  48 

    0x2f17bc0b,// 79 PAY  49 

    0x8b839759,// 80 PAY  50 

    0xc3005295,// 81 PAY  51 

    0x46055e75,// 82 PAY  52 

    0xa2c06bf2,// 83 PAY  53 

    0x0a8f6a5a,// 84 PAY  54 

    0xc7979f0c,// 85 PAY  55 

    0x2f5a56a1,// 86 PAY  56 

    0x0244c39e,// 87 PAY  57 

    0x2f3ddebd,// 88 PAY  58 

    0x6ddd2e6b,// 89 PAY  59 

    0xd0883065,// 90 PAY  60 

    0xf2133aa4,// 91 PAY  61 

    0x3a57fbde,// 92 PAY  62 

    0xc455dfc9,// 93 PAY  63 

    0x8ae9df57,// 94 PAY  64 

    0x93a99ea3,// 95 PAY  65 

    0x8acf29c4,// 96 PAY  66 

    0xf812f121,// 97 PAY  67 

    0x79feb9bc,// 98 PAY  68 

    0x2ceab84f,// 99 PAY  69 

    0x5ebcc4ac,// 100 PAY  70 

    0x8ac381f8,// 101 PAY  71 

    0x0cd87b32,// 102 PAY  72 

    0x476cb3b6,// 103 PAY  73 

    0x6c32df5a,// 104 PAY  74 

    0xe5cf8c3b,// 105 PAY  75 

    0xffb0f3b6,// 106 PAY  76 

    0x5a7e282f,// 107 PAY  77 

    0xcfb89406,// 108 PAY  78 

    0x1924ec22,// 109 PAY  79 

    0xc03bd0aa,// 110 PAY  80 

    0x28e09ccb,// 111 PAY  81 

    0x02afded0,// 112 PAY  82 

    0xf5be8e3a,// 113 PAY  83 

    0x8bb13bc1,// 114 PAY  84 

    0xf4fb5f87,// 115 PAY  85 

    0xa993ae2b,// 116 PAY  86 

    0x7d40e723,// 117 PAY  87 

    0x84501466,// 118 PAY  88 

    0x15145f99,// 119 PAY  89 

    0xd96005b0,// 120 PAY  90 

    0xff6fe2ac,// 121 PAY  91 

    0x95d90456,// 122 PAY  92 

    0x783005c6,// 123 PAY  93 

    0xc7533985,// 124 PAY  94 

    0x191d543a,// 125 PAY  95 

    0x1b409860,// 126 PAY  96 

    0x5601a72e,// 127 PAY  97 

    0x4ebd7b2e,// 128 PAY  98 

    0x82f0044a,// 129 PAY  99 

    0x84176321,// 130 PAY 100 

    0x2aa7298f,// 131 PAY 101 

    0xcc6913d8,// 132 PAY 102 

    0xefc72c54,// 133 PAY 103 

    0x79af1a98,// 134 PAY 104 

    0x18bb4b1f,// 135 PAY 105 

    0x612bb8bb,// 136 PAY 106 

    0xfc31b5dc,// 137 PAY 107 

    0x39312b0f,// 138 PAY 108 

    0xfc06f893,// 139 PAY 109 

    0x63f93f69,// 140 PAY 110 

    0x62931922,// 141 PAY 111 

    0xeb057a7f,// 142 PAY 112 

    0x9bf40680,// 143 PAY 113 

    0xc4d98aad,// 144 PAY 114 

    0xc6b920ea,// 145 PAY 115 

    0x2c1f6cf6,// 146 PAY 116 

    0x7166525e,// 147 PAY 117 

    0xd1067da3,// 148 PAY 118 

    0xa3ca216d,// 149 PAY 119 

    0x4212dfd1,// 150 PAY 120 

    0x539ffe62,// 151 PAY 121 

    0x29322779,// 152 PAY 122 

    0x3000a2f1,// 153 PAY 123 

    0x834ac4b0,// 154 PAY 124 

    0x65b9d5ce,// 155 PAY 125 

    0xf8c4c718,// 156 PAY 126 

    0xd044d0fe,// 157 PAY 127 

    0x62e48565,// 158 PAY 128 

    0x80e5d09e,// 159 PAY 129 

    0x4ba985c9,// 160 PAY 130 

    0x96ad0613,// 161 PAY 131 

    0x291c6b26,// 162 PAY 132 

    0x7866055b,// 163 PAY 133 

    0x7fb216ca,// 164 PAY 134 

    0xe9d07e3b,// 165 PAY 135 

    0x6fdc40b1,// 166 PAY 136 

    0xa55d67f3,// 167 PAY 137 

    0x0b9cc94e,// 168 PAY 138 

    0x424deecf,// 169 PAY 139 

    0xafd36b37,// 170 PAY 140 

    0xf2a582be,// 171 PAY 141 

    0xa0604b7c,// 172 PAY 142 

    0x567a4d00,// 173 PAY 143 

/// STA is 1 words. 

/// STA num_pkts       : 74 

/// STA pkt_idx        : 189 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xe9 

    0x02f5e94a // 174 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt3_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x804628c1,// 4 SCX   2 

    0x00004282,// 5 SCX   3 

    0xb3b33cf9,// 6 SCX   4 

    0xe241f18d,// 7 SCX   5 

    0xecd16d96,// 8 SCX   6 

    0xf87d4776,// 9 SCX   7 

    0x44a376b7,// 10 SCX   8 

    0x43db68e8,// 11 SCX   9 

    0x6ccc55ff,// 12 SCX  10 

    0x18914a33,// 13 SCX  11 

    0x7c2c3967,// 14 SCX  12 

    0xfd801a6f,// 15 SCX  13 

    0x05926dd5,// 16 SCX  14 

    0x53213ce6,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1465 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 589 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 589 

/// BFD lencrypto      : 240 

/// BFD ofstcrypto     : 284 

/// BFD (ofst+len)cry  : 524 

/// BFD ofstiv         : 176 

/// BFD ofsticv        : 1200 

    0x0000024d,// 18 BFD   1 

    0x011c00f0,// 19 BFD   2 

    0x04b000b0,// 20 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 3 

    0x0300b530,// 21 MFM   1 

/// BDA is 368 words. 

/// BDA size     is 1465 (0x5b9) 

/// BDA id       is 0x61e 

    0x05b9061e,// 22 BDA   1 

/// PAY Generic Data size   : 1465 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x3dcf6fa7,// 23 PAY   1 

    0x62ab18fe,// 24 PAY   2 

    0x80220751,// 25 PAY   3 

    0x5e07eee5,// 26 PAY   4 

    0x500508e9,// 27 PAY   5 

    0x91241e0c,// 28 PAY   6 

    0xb1dd6761,// 29 PAY   7 

    0xa71ba8ed,// 30 PAY   8 

    0xd2853a87,// 31 PAY   9 

    0xf225b47f,// 32 PAY  10 

    0x2911bbde,// 33 PAY  11 

    0xc53a2e43,// 34 PAY  12 

    0x5e329820,// 35 PAY  13 

    0x388b4f7c,// 36 PAY  14 

    0x3eb16c0f,// 37 PAY  15 

    0x0a2dd7ce,// 38 PAY  16 

    0xd58bc84e,// 39 PAY  17 

    0x94abdb09,// 40 PAY  18 

    0x240d9aca,// 41 PAY  19 

    0x9ef06fc3,// 42 PAY  20 

    0xdba1cbeb,// 43 PAY  21 

    0xdba3d296,// 44 PAY  22 

    0x78d375c1,// 45 PAY  23 

    0x188c7d0d,// 46 PAY  24 

    0xd42bad77,// 47 PAY  25 

    0x24474aac,// 48 PAY  26 

    0x1436c8e1,// 49 PAY  27 

    0x2980a233,// 50 PAY  28 

    0x05c683ce,// 51 PAY  29 

    0x86b6a3dc,// 52 PAY  30 

    0x5a14c054,// 53 PAY  31 

    0x54c9897f,// 54 PAY  32 

    0x13a55edd,// 55 PAY  33 

    0x874f90d4,// 56 PAY  34 

    0xddd7db5c,// 57 PAY  35 

    0xf9e9e0f9,// 58 PAY  36 

    0x13455c2c,// 59 PAY  37 

    0x43656b57,// 60 PAY  38 

    0x9c33a077,// 61 PAY  39 

    0xe3497662,// 62 PAY  40 

    0x3eb2dc68,// 63 PAY  41 

    0x7598208a,// 64 PAY  42 

    0xa6f6abfc,// 65 PAY  43 

    0xca151563,// 66 PAY  44 

    0x18387bc3,// 67 PAY  45 

    0x25e464e5,// 68 PAY  46 

    0x511942c3,// 69 PAY  47 

    0x1a734805,// 70 PAY  48 

    0x5e21ef4a,// 71 PAY  49 

    0x0a13095a,// 72 PAY  50 

    0x7c2df976,// 73 PAY  51 

    0xe5258e51,// 74 PAY  52 

    0x4423f165,// 75 PAY  53 

    0x9a7dd970,// 76 PAY  54 

    0xd346c855,// 77 PAY  55 

    0xb0d7a56f,// 78 PAY  56 

    0xf827f69c,// 79 PAY  57 

    0xc3ea28ac,// 80 PAY  58 

    0x2d1bc12d,// 81 PAY  59 

    0xb725a87e,// 82 PAY  60 

    0x20c55069,// 83 PAY  61 

    0xd1ab3607,// 84 PAY  62 

    0xe6345e47,// 85 PAY  63 

    0x130e20bf,// 86 PAY  64 

    0x76a80e35,// 87 PAY  65 

    0xcff34685,// 88 PAY  66 

    0x871029af,// 89 PAY  67 

    0xc3608935,// 90 PAY  68 

    0x82746d95,// 91 PAY  69 

    0xc261a3a0,// 92 PAY  70 

    0x85123bf2,// 93 PAY  71 

    0x4ea75d3f,// 94 PAY  72 

    0x092d7a24,// 95 PAY  73 

    0xc679908f,// 96 PAY  74 

    0x4ef0d05c,// 97 PAY  75 

    0xd90eee28,// 98 PAY  76 

    0xed3b8f85,// 99 PAY  77 

    0x4ccd4996,// 100 PAY  78 

    0xedb0b27b,// 101 PAY  79 

    0x44aae89e,// 102 PAY  80 

    0xf56b7341,// 103 PAY  81 

    0x3757366d,// 104 PAY  82 

    0x3eb81015,// 105 PAY  83 

    0x3e0ed24a,// 106 PAY  84 

    0x45445847,// 107 PAY  85 

    0x8fd8ea2b,// 108 PAY  86 

    0x708d4fdc,// 109 PAY  87 

    0x75e76c4a,// 110 PAY  88 

    0xd905fc89,// 111 PAY  89 

    0xfd004a04,// 112 PAY  90 

    0xf42bdc62,// 113 PAY  91 

    0x0363dc58,// 114 PAY  92 

    0x3c4ea5bf,// 115 PAY  93 

    0x6d01764d,// 116 PAY  94 

    0x14f31359,// 117 PAY  95 

    0x84727648,// 118 PAY  96 

    0x97fc6223,// 119 PAY  97 

    0xabb17a91,// 120 PAY  98 

    0x8aa6f20b,// 121 PAY  99 

    0xdef152d8,// 122 PAY 100 

    0xf2e227a0,// 123 PAY 101 

    0x1cd2cd99,// 124 PAY 102 

    0x6e0f2606,// 125 PAY 103 

    0xa7f311a6,// 126 PAY 104 

    0x0b9c34d6,// 127 PAY 105 

    0x85aa3941,// 128 PAY 106 

    0x64fc3f99,// 129 PAY 107 

    0xaafcaff9,// 130 PAY 108 

    0x63507db1,// 131 PAY 109 

    0xefeeec26,// 132 PAY 110 

    0xa7e8356c,// 133 PAY 111 

    0x2d46c085,// 134 PAY 112 

    0xcb45acb7,// 135 PAY 113 

    0xf18f5b8c,// 136 PAY 114 

    0x9ed539be,// 137 PAY 115 

    0x8793086d,// 138 PAY 116 

    0x8de4991d,// 139 PAY 117 

    0x55f2a24f,// 140 PAY 118 

    0x199c8029,// 141 PAY 119 

    0xf1afa2e6,// 142 PAY 120 

    0x627b1210,// 143 PAY 121 

    0x6b3f424b,// 144 PAY 122 

    0xc1db0d0c,// 145 PAY 123 

    0x3c4dc02c,// 146 PAY 124 

    0x5cf76ad5,// 147 PAY 125 

    0xc6de7d99,// 148 PAY 126 

    0xe587ec08,// 149 PAY 127 

    0x30596c8e,// 150 PAY 128 

    0x26e31e57,// 151 PAY 129 

    0x3335eaf6,// 152 PAY 130 

    0x7ac1ff3f,// 153 PAY 131 

    0xa4055a37,// 154 PAY 132 

    0x3610843d,// 155 PAY 133 

    0x6dd9972b,// 156 PAY 134 

    0x88ce1b36,// 157 PAY 135 

    0x4dcc177c,// 158 PAY 136 

    0x5d8b2593,// 159 PAY 137 

    0x97869cd8,// 160 PAY 138 

    0x1af02d55,// 161 PAY 139 

    0x1a1fde42,// 162 PAY 140 

    0xe66dddbf,// 163 PAY 141 

    0x059a7124,// 164 PAY 142 

    0xd2e8f7ff,// 165 PAY 143 

    0x51bdab53,// 166 PAY 144 

    0x9b3e841c,// 167 PAY 145 

    0x2c8a1683,// 168 PAY 146 

    0xe412ad30,// 169 PAY 147 

    0x170b18db,// 170 PAY 148 

    0x182514f7,// 171 PAY 149 

    0xea775719,// 172 PAY 150 

    0x5e732298,// 173 PAY 151 

    0xdf5c2193,// 174 PAY 152 

    0x61baf9be,// 175 PAY 153 

    0x5518c6c3,// 176 PAY 154 

    0x4b77ffe9,// 177 PAY 155 

    0xe5a073bf,// 178 PAY 156 

    0x79aabf6f,// 179 PAY 157 

    0xd578986c,// 180 PAY 158 

    0xa3ab7be7,// 181 PAY 159 

    0x6ed1c469,// 182 PAY 160 

    0xf4cdc9d2,// 183 PAY 161 

    0x0701ed05,// 184 PAY 162 

    0x56716e73,// 185 PAY 163 

    0xbbb3eb0f,// 186 PAY 164 

    0x0a809d8a,// 187 PAY 165 

    0x48cf0ee1,// 188 PAY 166 

    0x9f76a68a,// 189 PAY 167 

    0x61d4cc62,// 190 PAY 168 

    0xc3b35c40,// 191 PAY 169 

    0x1e8f7098,// 192 PAY 170 

    0xea712371,// 193 PAY 171 

    0xdec9aaf3,// 194 PAY 172 

    0x4c0e0b48,// 195 PAY 173 

    0x72529453,// 196 PAY 174 

    0x9861866c,// 197 PAY 175 

    0xb5f62c4a,// 198 PAY 176 

    0x0d171464,// 199 PAY 177 

    0x8c34a1ac,// 200 PAY 178 

    0x74e21190,// 201 PAY 179 

    0x766a9f1b,// 202 PAY 180 

    0x8b35a38a,// 203 PAY 181 

    0x0609d668,// 204 PAY 182 

    0x36647635,// 205 PAY 183 

    0x349390b4,// 206 PAY 184 

    0x922eba96,// 207 PAY 185 

    0xaa416ee5,// 208 PAY 186 

    0x826cbff9,// 209 PAY 187 

    0xc2dc4e36,// 210 PAY 188 

    0x59298811,// 211 PAY 189 

    0xcc38f797,// 212 PAY 190 

    0x8a8e1516,// 213 PAY 191 

    0x08cce90d,// 214 PAY 192 

    0xbbd88e8a,// 215 PAY 193 

    0x532de01d,// 216 PAY 194 

    0x3dfa1a82,// 217 PAY 195 

    0xad0f6d47,// 218 PAY 196 

    0x3e76235d,// 219 PAY 197 

    0xf047eeaa,// 220 PAY 198 

    0x5c37a513,// 221 PAY 199 

    0xa7d3aa7e,// 222 PAY 200 

    0xb9f38fd3,// 223 PAY 201 

    0x46f66432,// 224 PAY 202 

    0x2297f6a0,// 225 PAY 203 

    0x7d6e3256,// 226 PAY 204 

    0xa22c7b1e,// 227 PAY 205 

    0xdafc38cd,// 228 PAY 206 

    0xcd0bb840,// 229 PAY 207 

    0x69ad876e,// 230 PAY 208 

    0xeb1746ec,// 231 PAY 209 

    0x8bb65def,// 232 PAY 210 

    0x48e42211,// 233 PAY 211 

    0xaff69937,// 234 PAY 212 

    0x890d7904,// 235 PAY 213 

    0x2645c30b,// 236 PAY 214 

    0x4d15039d,// 237 PAY 215 

    0x2da9edf5,// 238 PAY 216 

    0x239ed126,// 239 PAY 217 

    0x26b2bee3,// 240 PAY 218 

    0x44693ffb,// 241 PAY 219 

    0xd845bbf4,// 242 PAY 220 

    0x073a2193,// 243 PAY 221 

    0x64a32fd1,// 244 PAY 222 

    0xe67e3e9b,// 245 PAY 223 

    0xddb148b3,// 246 PAY 224 

    0x8c9cca9b,// 247 PAY 225 

    0x21e933da,// 248 PAY 226 

    0x08d07b6f,// 249 PAY 227 

    0x9f2814ac,// 250 PAY 228 

    0x28e3a119,// 251 PAY 229 

    0x38a4c30f,// 252 PAY 230 

    0xad7f328c,// 253 PAY 231 

    0xf65bc813,// 254 PAY 232 

    0xb37275d2,// 255 PAY 233 

    0x0407c360,// 256 PAY 234 

    0x42838d66,// 257 PAY 235 

    0x60fdd401,// 258 PAY 236 

    0xcf57abc0,// 259 PAY 237 

    0x8a1e658a,// 260 PAY 238 

    0x2609394c,// 261 PAY 239 

    0xa2c663d5,// 262 PAY 240 

    0x71cddf17,// 263 PAY 241 

    0xbe8fb0e7,// 264 PAY 242 

    0xc59c35f5,// 265 PAY 243 

    0xacc4fb12,// 266 PAY 244 

    0xf96b41fc,// 267 PAY 245 

    0x65da2988,// 268 PAY 246 

    0xa9dfe988,// 269 PAY 247 

    0x711fb787,// 270 PAY 248 

    0xcee88a88,// 271 PAY 249 

    0xf42ab9f1,// 272 PAY 250 

    0xb12370e7,// 273 PAY 251 

    0x2b59f368,// 274 PAY 252 

    0x95717141,// 275 PAY 253 

    0x43f4e93c,// 276 PAY 254 

    0xd9fe3631,// 277 PAY 255 

    0x417479f6,// 278 PAY 256 

    0xa0f884e0,// 279 PAY 257 

    0x1b1257b3,// 280 PAY 258 

    0x4b856b06,// 281 PAY 259 

    0xb43c3fa1,// 282 PAY 260 

    0xde3286db,// 283 PAY 261 

    0xbf09bc60,// 284 PAY 262 

    0x4d0ea9d9,// 285 PAY 263 

    0x595b6ba4,// 286 PAY 264 

    0xc9523860,// 287 PAY 265 

    0xfa19cda8,// 288 PAY 266 

    0x50065e84,// 289 PAY 267 

    0xfd25ac4a,// 290 PAY 268 

    0x676e0256,// 291 PAY 269 

    0xcc6287be,// 292 PAY 270 

    0x5963b0ae,// 293 PAY 271 

    0xee4bf4f5,// 294 PAY 272 

    0x57946741,// 295 PAY 273 

    0xda59ec12,// 296 PAY 274 

    0x2e52beb8,// 297 PAY 275 

    0xda859d3c,// 298 PAY 276 

    0xc1c61900,// 299 PAY 277 

    0xf5ddc70b,// 300 PAY 278 

    0x54faca7f,// 301 PAY 279 

    0xb1a00dca,// 302 PAY 280 

    0x36c0fe98,// 303 PAY 281 

    0x7f9e50c7,// 304 PAY 282 

    0x60e710e1,// 305 PAY 283 

    0x6f02385b,// 306 PAY 284 

    0x328b8937,// 307 PAY 285 

    0x42cc3475,// 308 PAY 286 

    0xfc7a220b,// 309 PAY 287 

    0x39545885,// 310 PAY 288 

    0x44dc382f,// 311 PAY 289 

    0x7bf17122,// 312 PAY 290 

    0xbb2b6eb0,// 313 PAY 291 

    0xebcbf550,// 314 PAY 292 

    0xb68810aa,// 315 PAY 293 

    0xa7333513,// 316 PAY 294 

    0x43b49ea7,// 317 PAY 295 

    0x47990243,// 318 PAY 296 

    0x4cedf958,// 319 PAY 297 

    0xf953d373,// 320 PAY 298 

    0xf4180637,// 321 PAY 299 

    0x9f2fccae,// 322 PAY 300 

    0xc8588a41,// 323 PAY 301 

    0x213dd06c,// 324 PAY 302 

    0x4fc99ebe,// 325 PAY 303 

    0xbe6017be,// 326 PAY 304 

    0x17a86db6,// 327 PAY 305 

    0x861baa0e,// 328 PAY 306 

    0x4d5f68c8,// 329 PAY 307 

    0xd1449091,// 330 PAY 308 

    0x769e8b0b,// 331 PAY 309 

    0xe3ad286d,// 332 PAY 310 

    0x7fc0bd05,// 333 PAY 311 

    0xb755a713,// 334 PAY 312 

    0x5671e0ee,// 335 PAY 313 

    0xaa2d6f95,// 336 PAY 314 

    0x2c1735fc,// 337 PAY 315 

    0x54cbf907,// 338 PAY 316 

    0x2391f994,// 339 PAY 317 

    0xe6081dc4,// 340 PAY 318 

    0x20c988b1,// 341 PAY 319 

    0x66544887,// 342 PAY 320 

    0x7b61de34,// 343 PAY 321 

    0x31561d13,// 344 PAY 322 

    0x930043ef,// 345 PAY 323 

    0x0ad1ebe9,// 346 PAY 324 

    0xf8cac3a6,// 347 PAY 325 

    0xecfabfb2,// 348 PAY 326 

    0x72f0e74d,// 349 PAY 327 

    0xfbeb434a,// 350 PAY 328 

    0x430343e5,// 351 PAY 329 

    0x46afeb4a,// 352 PAY 330 

    0xca0e97de,// 353 PAY 331 

    0x3d73eb96,// 354 PAY 332 

    0x5ea15a03,// 355 PAY 333 

    0xed58a651,// 356 PAY 334 

    0xddffb565,// 357 PAY 335 

    0xd5664c4f,// 358 PAY 336 

    0x3c3448ca,// 359 PAY 337 

    0x1ac0ff70,// 360 PAY 338 

    0x09fe17b4,// 361 PAY 339 

    0x507d31c7,// 362 PAY 340 

    0x49334560,// 363 PAY 341 

    0x7303b13a,// 364 PAY 342 

    0x5cddf1fd,// 365 PAY 343 

    0x592b8a0f,// 366 PAY 344 

    0x144e7fe3,// 367 PAY 345 

    0x365cd26f,// 368 PAY 346 

    0x2f1d68ee,// 369 PAY 347 

    0xfd7a4061,// 370 PAY 348 

    0xad4a7438,// 371 PAY 349 

    0x504f8d54,// 372 PAY 350 

    0x81dadc6f,// 373 PAY 351 

    0x5b049b7e,// 374 PAY 352 

    0xa1d21a76,// 375 PAY 353 

    0x476bfe7e,// 376 PAY 354 

    0xa799e80d,// 377 PAY 355 

    0x2371051b,// 378 PAY 356 

    0x3c13b123,// 379 PAY 357 

    0xb89a46a0,// 380 PAY 358 

    0xe4f5bf21,// 381 PAY 359 

    0xe3f1ed2b,// 382 PAY 360 

    0x01599d7a,// 383 PAY 361 

    0x05f786d9,// 384 PAY 362 

    0xfc0b495b,// 385 PAY 363 

    0x9b7a6db0,// 386 PAY 364 

    0x473b73e1,// 387 PAY 365 

    0xd352d10a,// 388 PAY 366 

    0x06000000,// 389 PAY 367 

/// STA is 1 words. 

/// STA num_pkts       : 112 

/// STA pkt_idx        : 18 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb1 

    0x0049b170 // 390 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt4_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x8046280d,// 4 SCX   2 

    0x00002382,// 5 SCX   3 

    0x4184ce82,// 6 SCX   4 

    0xbfc876e6,// 7 SCX   5 

    0xaa0b2483,// 8 SCX   6 

    0xbe153dab,// 9 SCX   7 

    0x049046dd,// 10 SCX   8 

    0x4850632c,// 11 SCX   9 

    0x65f3341f,// 12 SCX  10 

    0x1062a2fb,// 13 SCX  11 

    0xd34f5261,// 14 SCX  12 

    0x51ba3ace,// 15 SCX  13 

    0x8760b866,// 16 SCX  14 

    0xa719c9d5,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1646 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 482 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 482 

/// BFD lencrypto      : 56 

/// BFD ofstcrypto     : 184 

/// BFD (ofst+len)cry  : 240 

/// BFD ofstiv         : 172 

/// BFD ofsticv        : 736 

    0x000001e2,// 18 BFD   1 

    0x00b80038,// 19 BFD   2 

    0x02e000ac,// 20 BFD   3 

/// MFM is 4 words. 

/// MFM vldnibs        : 17 

    0x170076f2,// 21 MFM   1 

    0xd4795b24,// 22 MFM   2 

    0x13ce3b43,// 23 MFM   3 

    0x34600000,// 24 MFM   4 

/// BDA is 413 words. 

/// BDA size     is 1646 (0x66e) 

/// BDA id       is 0xff9 

    0x066e0ff9,// 25 BDA   1 

/// PAY Generic Data size   : 1646 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xec57cc42,// 26 PAY   1 

    0x0b0e4f0b,// 27 PAY   2 

    0xcdea33e3,// 28 PAY   3 

    0x953d5d55,// 29 PAY   4 

    0x0d43395d,// 30 PAY   5 

    0xb758428c,// 31 PAY   6 

    0xbcaa4e60,// 32 PAY   7 

    0x68a02f4c,// 33 PAY   8 

    0x05e03f5f,// 34 PAY   9 

    0xa874aec0,// 35 PAY  10 

    0x807d4f49,// 36 PAY  11 

    0x66c263ab,// 37 PAY  12 

    0x750b4f5a,// 38 PAY  13 

    0xd2591025,// 39 PAY  14 

    0xea482b57,// 40 PAY  15 

    0x8b01d684,// 41 PAY  16 

    0xed220ab8,// 42 PAY  17 

    0xdf8430ba,// 43 PAY  18 

    0x45a8f56e,// 44 PAY  19 

    0x83e7fc1c,// 45 PAY  20 

    0x20abc50c,// 46 PAY  21 

    0x0a9cd7db,// 47 PAY  22 

    0x82ae2f8c,// 48 PAY  23 

    0xfc5fc230,// 49 PAY  24 

    0xc12081d3,// 50 PAY  25 

    0x0183c386,// 51 PAY  26 

    0xd8f9b79e,// 52 PAY  27 

    0x7a021382,// 53 PAY  28 

    0x4bfb8e34,// 54 PAY  29 

    0xd0a270b7,// 55 PAY  30 

    0xa004b407,// 56 PAY  31 

    0x80b65480,// 57 PAY  32 

    0xd04c17e5,// 58 PAY  33 

    0x7af956f3,// 59 PAY  34 

    0xce50f284,// 60 PAY  35 

    0xe7bed5f3,// 61 PAY  36 

    0x323ef08e,// 62 PAY  37 

    0x62d0e779,// 63 PAY  38 

    0x81f8f0ba,// 64 PAY  39 

    0x1cd9f79e,// 65 PAY  40 

    0xd43057e8,// 66 PAY  41 

    0x7ce9d632,// 67 PAY  42 

    0x594b464d,// 68 PAY  43 

    0x65141b2b,// 69 PAY  44 

    0xbeae74f3,// 70 PAY  45 

    0xf034c156,// 71 PAY  46 

    0x33fbf318,// 72 PAY  47 

    0x3dec5eb8,// 73 PAY  48 

    0xc4d92981,// 74 PAY  49 

    0x30d79fca,// 75 PAY  50 

    0x6d30f76e,// 76 PAY  51 

    0x407e939e,// 77 PAY  52 

    0x8c2be6e3,// 78 PAY  53 

    0xe70085f2,// 79 PAY  54 

    0xe08a76ed,// 80 PAY  55 

    0x9a20d577,// 81 PAY  56 

    0x1d6ccd50,// 82 PAY  57 

    0xa51ce293,// 83 PAY  58 

    0xd86d7c6a,// 84 PAY  59 

    0x36dbd0b7,// 85 PAY  60 

    0xe9144cf4,// 86 PAY  61 

    0xbec2531a,// 87 PAY  62 

    0xfef7ae99,// 88 PAY  63 

    0xcecd9f33,// 89 PAY  64 

    0x8e8467d3,// 90 PAY  65 

    0x691d51d0,// 91 PAY  66 

    0x053d5f45,// 92 PAY  67 

    0x69e48bf5,// 93 PAY  68 

    0xe428776b,// 94 PAY  69 

    0x323f382c,// 95 PAY  70 

    0x3ca1cec9,// 96 PAY  71 

    0x1e77bd66,// 97 PAY  72 

    0x6388ee59,// 98 PAY  73 

    0xc915c172,// 99 PAY  74 

    0x8c789ebc,// 100 PAY  75 

    0xc8ad18db,// 101 PAY  76 

    0xc2883ebc,// 102 PAY  77 

    0x4adc7a7d,// 103 PAY  78 

    0x8954472e,// 104 PAY  79 

    0xb82a20f0,// 105 PAY  80 

    0xe400a2c8,// 106 PAY  81 

    0xa150c4f1,// 107 PAY  82 

    0x1073df46,// 108 PAY  83 

    0x72549864,// 109 PAY  84 

    0x9afca132,// 110 PAY  85 

    0xffa41b44,// 111 PAY  86 

    0x105ca52e,// 112 PAY  87 

    0x2ba33c3e,// 113 PAY  88 

    0x41b01629,// 114 PAY  89 

    0xa33847ed,// 115 PAY  90 

    0x477181d2,// 116 PAY  91 

    0x8bcb059f,// 117 PAY  92 

    0x47ab2bd5,// 118 PAY  93 

    0x16c9c1c6,// 119 PAY  94 

    0x921b7340,// 120 PAY  95 

    0x6c6c16fd,// 121 PAY  96 

    0x19d8486a,// 122 PAY  97 

    0x1b573b25,// 123 PAY  98 

    0x7078289c,// 124 PAY  99 

    0x347ad75c,// 125 PAY 100 

    0xdeb884e7,// 126 PAY 101 

    0x0eb68a7e,// 127 PAY 102 

    0x8a69cae6,// 128 PAY 103 

    0x14ef66a6,// 129 PAY 104 

    0xba3cc7c0,// 130 PAY 105 

    0xe8647a51,// 131 PAY 106 

    0x20412613,// 132 PAY 107 

    0xda85949f,// 133 PAY 108 

    0xd244d135,// 134 PAY 109 

    0xa9545a07,// 135 PAY 110 

    0x1a48b401,// 136 PAY 111 

    0xfe3c6059,// 137 PAY 112 

    0x46c3ef67,// 138 PAY 113 

    0x4b5d4b15,// 139 PAY 114 

    0x783f7153,// 140 PAY 115 

    0x3a974454,// 141 PAY 116 

    0xff623323,// 142 PAY 117 

    0x56c5dd4c,// 143 PAY 118 

    0x62ea4ac5,// 144 PAY 119 

    0x8fcf859b,// 145 PAY 120 

    0xdb701b44,// 146 PAY 121 

    0xda2fcca7,// 147 PAY 122 

    0xe3a2781c,// 148 PAY 123 

    0x4a0fd1c5,// 149 PAY 124 

    0xb0f95e42,// 150 PAY 125 

    0x1ec90ffc,// 151 PAY 126 

    0x720184d5,// 152 PAY 127 

    0x1b292776,// 153 PAY 128 

    0x564e9d14,// 154 PAY 129 

    0x2aae6dfe,// 155 PAY 130 

    0x94860e0b,// 156 PAY 131 

    0xcb54ff3c,// 157 PAY 132 

    0x70e6514e,// 158 PAY 133 

    0xbae5598a,// 159 PAY 134 

    0x5d4dc8d6,// 160 PAY 135 

    0xfedf7321,// 161 PAY 136 

    0x49293cff,// 162 PAY 137 

    0xf3040369,// 163 PAY 138 

    0xc8bafd8f,// 164 PAY 139 

    0xc0bbd333,// 165 PAY 140 

    0xac1e3992,// 166 PAY 141 

    0xe9413114,// 167 PAY 142 

    0x39cd5886,// 168 PAY 143 

    0xa9f9aaa5,// 169 PAY 144 

    0xec2ff718,// 170 PAY 145 

    0x06d86028,// 171 PAY 146 

    0x1b3b93b7,// 172 PAY 147 

    0xc3ed43c3,// 173 PAY 148 

    0x921ce0d2,// 174 PAY 149 

    0x6ee2da95,// 175 PAY 150 

    0x95db2eeb,// 176 PAY 151 

    0xb757293a,// 177 PAY 152 

    0xd3dd244f,// 178 PAY 153 

    0x28eaf696,// 179 PAY 154 

    0x3a398fdf,// 180 PAY 155 

    0xccad862a,// 181 PAY 156 

    0x84cc2aca,// 182 PAY 157 

    0x9172410a,// 183 PAY 158 

    0x4cad7e69,// 184 PAY 159 

    0xafc44977,// 185 PAY 160 

    0x9508aa75,// 186 PAY 161 

    0x3d809c0a,// 187 PAY 162 

    0x2ee894d7,// 188 PAY 163 

    0x8ddfccb1,// 189 PAY 164 

    0xccbf6805,// 190 PAY 165 

    0x8d40b13f,// 191 PAY 166 

    0xaa40fd23,// 192 PAY 167 

    0x5483b58e,// 193 PAY 168 

    0x7c986ebd,// 194 PAY 169 

    0xe46dc773,// 195 PAY 170 

    0xe68c5697,// 196 PAY 171 

    0xd2df36e2,// 197 PAY 172 

    0xe9c186d3,// 198 PAY 173 

    0xbd3af3a6,// 199 PAY 174 

    0x1b8996dc,// 200 PAY 175 

    0x04907115,// 201 PAY 176 

    0x148b6a12,// 202 PAY 177 

    0xb14666c5,// 203 PAY 178 

    0x3c6e92db,// 204 PAY 179 

    0x6a64e33b,// 205 PAY 180 

    0x08861609,// 206 PAY 181 

    0x9a3b9c36,// 207 PAY 182 

    0xdd73023e,// 208 PAY 183 

    0x5bf1cdf6,// 209 PAY 184 

    0x40e9fd1c,// 210 PAY 185 

    0x8fdde8f3,// 211 PAY 186 

    0x2997d5ab,// 212 PAY 187 

    0xc857ccbe,// 213 PAY 188 

    0xbb854fe9,// 214 PAY 189 

    0x61704a96,// 215 PAY 190 

    0x2de19050,// 216 PAY 191 

    0x6cef3f79,// 217 PAY 192 

    0x8d217784,// 218 PAY 193 

    0xbbde8cf6,// 219 PAY 194 

    0xbb8df29e,// 220 PAY 195 

    0x45458a13,// 221 PAY 196 

    0xe251ffda,// 222 PAY 197 

    0x1fc5b97c,// 223 PAY 198 

    0x4f842917,// 224 PAY 199 

    0x9a3f944e,// 225 PAY 200 

    0x6bc05cbb,// 226 PAY 201 

    0xe72e1447,// 227 PAY 202 

    0x3f462a38,// 228 PAY 203 

    0x092889a5,// 229 PAY 204 

    0x07598579,// 230 PAY 205 

    0xab0f0791,// 231 PAY 206 

    0x19531121,// 232 PAY 207 

    0xd11e23d7,// 233 PAY 208 

    0x062bc80c,// 234 PAY 209 

    0xce02506f,// 235 PAY 210 

    0x616f463e,// 236 PAY 211 

    0x3ac3f73b,// 237 PAY 212 

    0x31896526,// 238 PAY 213 

    0x3aa9ea22,// 239 PAY 214 

    0xd3ec24ba,// 240 PAY 215 

    0x946cb132,// 241 PAY 216 

    0xdf8244f1,// 242 PAY 217 

    0xf1fcc299,// 243 PAY 218 

    0x7c014a04,// 244 PAY 219 

    0x564610b2,// 245 PAY 220 

    0x1ac19a52,// 246 PAY 221 

    0x550953da,// 247 PAY 222 

    0xd7ca0016,// 248 PAY 223 

    0x0dd23a12,// 249 PAY 224 

    0xc010d7c6,// 250 PAY 225 

    0xacf93d95,// 251 PAY 226 

    0xc33b71c6,// 252 PAY 227 

    0x87bdc006,// 253 PAY 228 

    0x12a2546c,// 254 PAY 229 

    0x3b5ec29d,// 255 PAY 230 

    0x14481049,// 256 PAY 231 

    0x063f989a,// 257 PAY 232 

    0xc79b8dcf,// 258 PAY 233 

    0x7d38acae,// 259 PAY 234 

    0xcc3d19af,// 260 PAY 235 

    0x538b5843,// 261 PAY 236 

    0x55602636,// 262 PAY 237 

    0xed2d46bf,// 263 PAY 238 

    0x5c071b69,// 264 PAY 239 

    0x91715ce7,// 265 PAY 240 

    0x7a634502,// 266 PAY 241 

    0xa6cf9901,// 267 PAY 242 

    0x5c986634,// 268 PAY 243 

    0x7fdf6220,// 269 PAY 244 

    0x71769269,// 270 PAY 245 

    0x42a860b4,// 271 PAY 246 

    0xff39845b,// 272 PAY 247 

    0x112299f8,// 273 PAY 248 

    0x7b91f0ea,// 274 PAY 249 

    0x5e938aac,// 275 PAY 250 

    0x17d5cc18,// 276 PAY 251 

    0xc2e52025,// 277 PAY 252 

    0x4fac1fb6,// 278 PAY 253 

    0x9c763460,// 279 PAY 254 

    0xea614b56,// 280 PAY 255 

    0xdda8d7d3,// 281 PAY 256 

    0x52ab3fc4,// 282 PAY 257 

    0xb935bfaf,// 283 PAY 258 

    0x24195a12,// 284 PAY 259 

    0xede5f7d0,// 285 PAY 260 

    0x496d2430,// 286 PAY 261 

    0x1a6b4bd6,// 287 PAY 262 

    0x3197afe2,// 288 PAY 263 

    0x9e9e3b8d,// 289 PAY 264 

    0x161896f3,// 290 PAY 265 

    0xa574d79a,// 291 PAY 266 

    0x89574d46,// 292 PAY 267 

    0x63908fa4,// 293 PAY 268 

    0xb6187b02,// 294 PAY 269 

    0x8dd603d1,// 295 PAY 270 

    0x9e17b3cf,// 296 PAY 271 

    0x22c21190,// 297 PAY 272 

    0xdf1b0444,// 298 PAY 273 

    0xc1483cbd,// 299 PAY 274 

    0x0066d0bc,// 300 PAY 275 

    0x365987cf,// 301 PAY 276 

    0xd9cae268,// 302 PAY 277 

    0x1a706a8b,// 303 PAY 278 

    0x9dfd8079,// 304 PAY 279 

    0xca0e74cb,// 305 PAY 280 

    0x2f3ac9ec,// 306 PAY 281 

    0x53198637,// 307 PAY 282 

    0x74215705,// 308 PAY 283 

    0x8b19721f,// 309 PAY 284 

    0x75136567,// 310 PAY 285 

    0x0a79f9bb,// 311 PAY 286 

    0x96aab64c,// 312 PAY 287 

    0xe6d1535d,// 313 PAY 288 

    0x414d9c39,// 314 PAY 289 

    0x49da01da,// 315 PAY 290 

    0xc8729d9c,// 316 PAY 291 

    0x8d1ab53f,// 317 PAY 292 

    0x35c32306,// 318 PAY 293 

    0x8041832a,// 319 PAY 294 

    0xff31377c,// 320 PAY 295 

    0xec9fffa8,// 321 PAY 296 

    0xea989e54,// 322 PAY 297 

    0x8eea52ee,// 323 PAY 298 

    0x8a4131eb,// 324 PAY 299 

    0xa8a1f5bc,// 325 PAY 300 

    0xebd1656c,// 326 PAY 301 

    0x1c62b056,// 327 PAY 302 

    0x251138c1,// 328 PAY 303 

    0xec940eb4,// 329 PAY 304 

    0x7a0b0f93,// 330 PAY 305 

    0x8c95142c,// 331 PAY 306 

    0x8c913966,// 332 PAY 307 

    0x7f161322,// 333 PAY 308 

    0x63d87181,// 334 PAY 309 

    0x12dce921,// 335 PAY 310 

    0x60fc63be,// 336 PAY 311 

    0xca2c0ce9,// 337 PAY 312 

    0x0189f2f5,// 338 PAY 313 

    0x23be0521,// 339 PAY 314 

    0xf5af28c5,// 340 PAY 315 

    0xb33541a4,// 341 PAY 316 

    0x54b3f0a4,// 342 PAY 317 

    0xa0a892c3,// 343 PAY 318 

    0x2f7add54,// 344 PAY 319 

    0xffd48f48,// 345 PAY 320 

    0x332e5e30,// 346 PAY 321 

    0x9e3bab1d,// 347 PAY 322 

    0xdd2c213f,// 348 PAY 323 

    0x80199b26,// 349 PAY 324 

    0x5515f5a9,// 350 PAY 325 

    0x12c0c768,// 351 PAY 326 

    0x9eba46df,// 352 PAY 327 

    0xa4a2e735,// 353 PAY 328 

    0xb70b2cdb,// 354 PAY 329 

    0xb2969f02,// 355 PAY 330 

    0x0ff14b60,// 356 PAY 331 

    0xae5949dc,// 357 PAY 332 

    0xc81ff3ae,// 358 PAY 333 

    0x6dbd3f29,// 359 PAY 334 

    0x58012212,// 360 PAY 335 

    0x38952af9,// 361 PAY 336 

    0x1b114a7e,// 362 PAY 337 

    0xb9859cb1,// 363 PAY 338 

    0xc44185dc,// 364 PAY 339 

    0x14395fd1,// 365 PAY 340 

    0x67cb1b40,// 366 PAY 341 

    0x2a27ca7c,// 367 PAY 342 

    0x73f1c740,// 368 PAY 343 

    0xe0fdce20,// 369 PAY 344 

    0x42df1743,// 370 PAY 345 

    0x94a0ec48,// 371 PAY 346 

    0x6231b5fc,// 372 PAY 347 

    0xb45bd432,// 373 PAY 348 

    0x78a66043,// 374 PAY 349 

    0x01a66b40,// 375 PAY 350 

    0x149b28d5,// 376 PAY 351 

    0x5eb509c6,// 377 PAY 352 

    0x5999fec8,// 378 PAY 353 

    0x05f3d303,// 379 PAY 354 

    0x3dd0a538,// 380 PAY 355 

    0xf918eb79,// 381 PAY 356 

    0x66f53a89,// 382 PAY 357 

    0x1b6b702e,// 383 PAY 358 

    0xfb098168,// 384 PAY 359 

    0xc7244f94,// 385 PAY 360 

    0x15957908,// 386 PAY 361 

    0xf5f0f351,// 387 PAY 362 

    0x3a28b326,// 388 PAY 363 

    0xc0b06a6c,// 389 PAY 364 

    0x4d1170b7,// 390 PAY 365 

    0xb3d6bc2e,// 391 PAY 366 

    0x9f1d2506,// 392 PAY 367 

    0x2c6d887c,// 393 PAY 368 

    0xfa084936,// 394 PAY 369 

    0xae61a1a9,// 395 PAY 370 

    0xc71d5ecc,// 396 PAY 371 

    0x4fbc93db,// 397 PAY 372 

    0x76d2646b,// 398 PAY 373 

    0x08726d42,// 399 PAY 374 

    0xe156bd29,// 400 PAY 375 

    0xaed28808,// 401 PAY 376 

    0xb23e39ab,// 402 PAY 377 

    0xd1394bd2,// 403 PAY 378 

    0x6a78b792,// 404 PAY 379 

    0xf5e12253,// 405 PAY 380 

    0xd1a26b74,// 406 PAY 381 

    0xd9834e71,// 407 PAY 382 

    0x411ce544,// 408 PAY 383 

    0x03403e62,// 409 PAY 384 

    0x2e1309bf,// 410 PAY 385 

    0x1658b21a,// 411 PAY 386 

    0x08158030,// 412 PAY 387 

    0x0d6188b9,// 413 PAY 388 

    0xe24d2852,// 414 PAY 389 

    0x1ce1cd18,// 415 PAY 390 

    0x319f9c76,// 416 PAY 391 

    0xa0ce4a30,// 417 PAY 392 

    0x06cca2f2,// 418 PAY 393 

    0x6ebde4f8,// 419 PAY 394 

    0xe9d5650e,// 420 PAY 395 

    0x3fd5ddfe,// 421 PAY 396 

    0x95d7c6f5,// 422 PAY 397 

    0x57ac95ee,// 423 PAY 398 

    0xabef10aa,// 424 PAY 399 

    0x9f1a6a4d,// 425 PAY 400 

    0x0ebf9a21,// 426 PAY 401 

    0x2275be2b,// 427 PAY 402 

    0xc602a1e3,// 428 PAY 403 

    0xc1edb958,// 429 PAY 404 

    0x32e3d11c,// 430 PAY 405 

    0x419dc441,// 431 PAY 406 

    0x7b36e09e,// 432 PAY 407 

    0x91188066,// 433 PAY 408 

    0x08479f0b,// 434 PAY 409 

    0xb8dd2a57,// 435 PAY 410 

    0xc097c2ff,// 436 PAY 411 

    0x13670000,// 437 PAY 412 

/// STA is 1 words. 

/// STA num_pkts       : 162 

/// STA pkt_idx        : 20 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xce 

    0x0051cea2 // 438 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt5_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0d 

/// ECH pdu_tag        : 0x00 

    0x000d0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x804628aa,// 4 SCX   2 

    0x00001382,// 5 SCX   3 

    0xe4662f53,// 6 SCX   4 

    0x4b8f6f66,// 7 SCX   5 

    0xce369a32,// 8 SCX   6 

    0xffc51cc0,// 9 SCX   7 

    0x645da58f,// 10 SCX   8 

    0xffafdafc,// 11 SCX   9 

    0x0309a2b8,// 12 SCX  10 

    0x2a091b0c,// 13 SCX  11 

    0xf9886c76,// 14 SCX  12 

    0xc4b48bbd,// 15 SCX  13 

    0xa36ccb75,// 16 SCX  14 

    0xf600bcb9,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1978 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 211 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 211 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 160 

/// BFD (ofst+len)cry  : 192 

/// BFD ofstiv         : 120 

/// BFD ofsticv        : 888 

    0x000000d3,// 18 BFD   1 

    0x00a00020,// 19 BFD   2 

    0x03780078,// 20 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 13 

    0x13004228,// 21 MFM   1 

    0x4ca1c7b2,// 22 MFM   2 

    0x9b7f3f40,// 23 MFM   3 

/// BDA is 496 words. 

/// BDA size     is 1978 (0x7ba) 

/// BDA id       is 0x93b0 

    0x07ba93b0,// 24 BDA   1 

/// PAY Generic Data size   : 1978 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x7681f907,// 25 PAY   1 

    0xce342827,// 26 PAY   2 

    0x087e23c4,// 27 PAY   3 

    0xc63a969b,// 28 PAY   4 

    0x7f6fbaad,// 29 PAY   5 

    0x6bab7bc1,// 30 PAY   6 

    0x95fdcc0d,// 31 PAY   7 

    0x8839d8a7,// 32 PAY   8 

    0x926fe04c,// 33 PAY   9 

    0xd56601ab,// 34 PAY  10 

    0x0e114077,// 35 PAY  11 

    0xe961d67a,// 36 PAY  12 

    0xeaffce4e,// 37 PAY  13 

    0x534b1d80,// 38 PAY  14 

    0xd9c1826c,// 39 PAY  15 

    0x27c05e97,// 40 PAY  16 

    0x6a6f33d5,// 41 PAY  17 

    0x9c33d5f7,// 42 PAY  18 

    0xa0e752a6,// 43 PAY  19 

    0x2da4dd64,// 44 PAY  20 

    0xe0197f70,// 45 PAY  21 

    0x50956054,// 46 PAY  22 

    0x4f0ce1bd,// 47 PAY  23 

    0xa549fcc4,// 48 PAY  24 

    0xa050aad7,// 49 PAY  25 

    0xc57a275c,// 50 PAY  26 

    0x100d58c4,// 51 PAY  27 

    0xd9f17d53,// 52 PAY  28 

    0xd8ebaf03,// 53 PAY  29 

    0x5cc7b719,// 54 PAY  30 

    0xb94e9277,// 55 PAY  31 

    0x4db318fd,// 56 PAY  32 

    0xc0a61f20,// 57 PAY  33 

    0xe49b958d,// 58 PAY  34 

    0x8c38b785,// 59 PAY  35 

    0x76719f40,// 60 PAY  36 

    0x3402f104,// 61 PAY  37 

    0xb5e7cf4f,// 62 PAY  38 

    0x944bfeb1,// 63 PAY  39 

    0xe4261750,// 64 PAY  40 

    0x7263ecf7,// 65 PAY  41 

    0x5c4c76f0,// 66 PAY  42 

    0x449092e7,// 67 PAY  43 

    0x947d2378,// 68 PAY  44 

    0x99674b5c,// 69 PAY  45 

    0xc5b4374d,// 70 PAY  46 

    0xb91881eb,// 71 PAY  47 

    0x83dc66e8,// 72 PAY  48 

    0x5b0c581b,// 73 PAY  49 

    0x81169a51,// 74 PAY  50 

    0x1ff0822e,// 75 PAY  51 

    0x00a3d4f2,// 76 PAY  52 

    0x44abb8c7,// 77 PAY  53 

    0xdcebc9af,// 78 PAY  54 

    0x26ab6b3a,// 79 PAY  55 

    0x0910fff0,// 80 PAY  56 

    0x74286b88,// 81 PAY  57 

    0x8bea0963,// 82 PAY  58 

    0x970b7625,// 83 PAY  59 

    0xc51e22a1,// 84 PAY  60 

    0xfaba6d9f,// 85 PAY  61 

    0x93d5103f,// 86 PAY  62 

    0xd05b43f7,// 87 PAY  63 

    0x073999a3,// 88 PAY  64 

    0xe1b965b5,// 89 PAY  65 

    0x72a0be3d,// 90 PAY  66 

    0xdb86886f,// 91 PAY  67 

    0xcb767f67,// 92 PAY  68 

    0x145efabe,// 93 PAY  69 

    0xfd806240,// 94 PAY  70 

    0xd382aec0,// 95 PAY  71 

    0x60e9242b,// 96 PAY  72 

    0x16a2ca99,// 97 PAY  73 

    0x45e9d042,// 98 PAY  74 

    0xb5f3dfd3,// 99 PAY  75 

    0xb3e58e88,// 100 PAY  76 

    0x94b7d2eb,// 101 PAY  77 

    0x2937f30d,// 102 PAY  78 

    0xb6ae60fe,// 103 PAY  79 

    0xf4f9ca6f,// 104 PAY  80 

    0x34ec4687,// 105 PAY  81 

    0x4fa1411e,// 106 PAY  82 

    0x50a11221,// 107 PAY  83 

    0x87f56cff,// 108 PAY  84 

    0xb3519d95,// 109 PAY  85 

    0x350b20f6,// 110 PAY  86 

    0x634c9e71,// 111 PAY  87 

    0xf3e92070,// 112 PAY  88 

    0x6c5a8ae9,// 113 PAY  89 

    0x25f8469d,// 114 PAY  90 

    0x1d498039,// 115 PAY  91 

    0x921b1dd7,// 116 PAY  92 

    0x37259e65,// 117 PAY  93 

    0x64c0c588,// 118 PAY  94 

    0xcc3aca69,// 119 PAY  95 

    0x4a44a8ae,// 120 PAY  96 

    0x8df30cfd,// 121 PAY  97 

    0x390fb84b,// 122 PAY  98 

    0x9d3b38a4,// 123 PAY  99 

    0x40e0f1c8,// 124 PAY 100 

    0xe1d5cd68,// 125 PAY 101 

    0x8a799752,// 126 PAY 102 

    0x956f974a,// 127 PAY 103 

    0xc115bd5a,// 128 PAY 104 

    0xc2f51a70,// 129 PAY 105 

    0x66884643,// 130 PAY 106 

    0xe5d4c883,// 131 PAY 107 

    0xb4d2074c,// 132 PAY 108 

    0xc21236f9,// 133 PAY 109 

    0x82e2d664,// 134 PAY 110 

    0x7f5e1f9c,// 135 PAY 111 

    0x6cca6e77,// 136 PAY 112 

    0x99fb1dce,// 137 PAY 113 

    0xf89f5dd7,// 138 PAY 114 

    0x889140dc,// 139 PAY 115 

    0xefa07f38,// 140 PAY 116 

    0x8d76228c,// 141 PAY 117 

    0x11b72355,// 142 PAY 118 

    0x8f5839d6,// 143 PAY 119 

    0x0e96e6f0,// 144 PAY 120 

    0x13c9ad41,// 145 PAY 121 

    0x302c10ed,// 146 PAY 122 

    0xc5c1125f,// 147 PAY 123 

    0x0a810bdd,// 148 PAY 124 

    0x9474547d,// 149 PAY 125 

    0x5b771adb,// 150 PAY 126 

    0xc88449a0,// 151 PAY 127 

    0xf9ee1d00,// 152 PAY 128 

    0x1d26ea03,// 153 PAY 129 

    0xb931d1f2,// 154 PAY 130 

    0x9e94eeff,// 155 PAY 131 

    0x8e4cce2b,// 156 PAY 132 

    0xa9cca7b8,// 157 PAY 133 

    0xd139ac02,// 158 PAY 134 

    0xb254164a,// 159 PAY 135 

    0xa5ca2171,// 160 PAY 136 

    0xa86fc941,// 161 PAY 137 

    0x25ea8c83,// 162 PAY 138 

    0x6eca2ec0,// 163 PAY 139 

    0x21df7d8e,// 164 PAY 140 

    0x2f39cb04,// 165 PAY 141 

    0xf2176c2e,// 166 PAY 142 

    0xee91288d,// 167 PAY 143 

    0x2a805af8,// 168 PAY 144 

    0xd3e0ab30,// 169 PAY 145 

    0x459abab7,// 170 PAY 146 

    0xab154117,// 171 PAY 147 

    0x2519d51e,// 172 PAY 148 

    0x81c3eea0,// 173 PAY 149 

    0xa4a5eeb0,// 174 PAY 150 

    0xfad91757,// 175 PAY 151 

    0x22ef5d79,// 176 PAY 152 

    0x79c0a49e,// 177 PAY 153 

    0x3bc31dd9,// 178 PAY 154 

    0x0a8f75b4,// 179 PAY 155 

    0x3a911387,// 180 PAY 156 

    0xc6dd1961,// 181 PAY 157 

    0x6580891f,// 182 PAY 158 

    0x91c27be1,// 183 PAY 159 

    0x484be6cd,// 184 PAY 160 

    0x7f1afb86,// 185 PAY 161 

    0x7d2f5f19,// 186 PAY 162 

    0x06f6a856,// 187 PAY 163 

    0x82ae7fec,// 188 PAY 164 

    0xd0b98dfd,// 189 PAY 165 

    0x0db859a1,// 190 PAY 166 

    0xd15e61dc,// 191 PAY 167 

    0x5ad313b4,// 192 PAY 168 

    0x5b44e27b,// 193 PAY 169 

    0xe6698e99,// 194 PAY 170 

    0xe2eb9c28,// 195 PAY 171 

    0xa6c67960,// 196 PAY 172 

    0x00ceb51b,// 197 PAY 173 

    0x2a436959,// 198 PAY 174 

    0x0df09180,// 199 PAY 175 

    0xc76e2c74,// 200 PAY 176 

    0xaa2f4c8f,// 201 PAY 177 

    0x2fe16663,// 202 PAY 178 

    0x0f591eea,// 203 PAY 179 

    0x35289d4a,// 204 PAY 180 

    0x016e6d27,// 205 PAY 181 

    0xf68a5841,// 206 PAY 182 

    0x78196903,// 207 PAY 183 

    0x23f2c675,// 208 PAY 184 

    0x9fe61437,// 209 PAY 185 

    0x533c0c0a,// 210 PAY 186 

    0x2f38dd2a,// 211 PAY 187 

    0x46c13b4b,// 212 PAY 188 

    0x76081e60,// 213 PAY 189 

    0x94712d99,// 214 PAY 190 

    0x189e3c4e,// 215 PAY 191 

    0x332a397e,// 216 PAY 192 

    0x8abe0574,// 217 PAY 193 

    0x1ce4ca2a,// 218 PAY 194 

    0x3c7452a6,// 219 PAY 195 

    0xa0783dd5,// 220 PAY 196 

    0xd5758451,// 221 PAY 197 

    0x7d2c7f7a,// 222 PAY 198 

    0x9ff87980,// 223 PAY 199 

    0x6142d783,// 224 PAY 200 

    0xdb817157,// 225 PAY 201 

    0x6e2423ca,// 226 PAY 202 

    0x39910e9f,// 227 PAY 203 

    0x79960acf,// 228 PAY 204 

    0xd499ba46,// 229 PAY 205 

    0x81eef62e,// 230 PAY 206 

    0xa6ccc6f0,// 231 PAY 207 

    0x40e078e3,// 232 PAY 208 

    0x2dcb285c,// 233 PAY 209 

    0x3a4f3608,// 234 PAY 210 

    0x765e658a,// 235 PAY 211 

    0x7c48a3db,// 236 PAY 212 

    0xefacfb19,// 237 PAY 213 

    0x14d2b986,// 238 PAY 214 

    0x1d40c4e0,// 239 PAY 215 

    0xbd66d086,// 240 PAY 216 

    0xf094d2db,// 241 PAY 217 

    0x5d05711a,// 242 PAY 218 

    0xa58cc855,// 243 PAY 219 

    0x40e6500b,// 244 PAY 220 

    0x6a056baf,// 245 PAY 221 

    0xdf5f9cc5,// 246 PAY 222 

    0x61fe4ce3,// 247 PAY 223 

    0xafd92de5,// 248 PAY 224 

    0x623a4620,// 249 PAY 225 

    0xa767233c,// 250 PAY 226 

    0x7b7d59d1,// 251 PAY 227 

    0xb36257c9,// 252 PAY 228 

    0x8d377a3e,// 253 PAY 229 

    0xfdd95d90,// 254 PAY 230 

    0x33732497,// 255 PAY 231 

    0x7305e5f3,// 256 PAY 232 

    0x3d44e229,// 257 PAY 233 

    0xde0821aa,// 258 PAY 234 

    0xc376b2fa,// 259 PAY 235 

    0xc023dd47,// 260 PAY 236 

    0xf1092d09,// 261 PAY 237 

    0x540c6fef,// 262 PAY 238 

    0x7a76c0f1,// 263 PAY 239 

    0xdbca7e3a,// 264 PAY 240 

    0x891d8354,// 265 PAY 241 

    0x1e8b70e3,// 266 PAY 242 

    0xe4099b5f,// 267 PAY 243 

    0xf111ff68,// 268 PAY 244 

    0x919bfc92,// 269 PAY 245 

    0x14db5fe1,// 270 PAY 246 

    0xb731034e,// 271 PAY 247 

    0x5b41de56,// 272 PAY 248 

    0x2dc48a73,// 273 PAY 249 

    0xe7db8c47,// 274 PAY 250 

    0x169efc1a,// 275 PAY 251 

    0xa1a92c8a,// 276 PAY 252 

    0x1fdc7704,// 277 PAY 253 

    0xbef344bf,// 278 PAY 254 

    0xf8ebaa92,// 279 PAY 255 

    0x1814ab84,// 280 PAY 256 

    0x7e90971c,// 281 PAY 257 

    0xed09d208,// 282 PAY 258 

    0xe989f44d,// 283 PAY 259 

    0x39dbf19e,// 284 PAY 260 

    0x8d82a3bc,// 285 PAY 261 

    0xce120aed,// 286 PAY 262 

    0x7bd1da77,// 287 PAY 263 

    0x313ae237,// 288 PAY 264 

    0x6b4427f4,// 289 PAY 265 

    0x2c9289cd,// 290 PAY 266 

    0xe1cad597,// 291 PAY 267 

    0x6ae1bc01,// 292 PAY 268 

    0xe94a1699,// 293 PAY 269 

    0x4d5c50e4,// 294 PAY 270 

    0xf41962ef,// 295 PAY 271 

    0xe5e1629f,// 296 PAY 272 

    0x2b700d2f,// 297 PAY 273 

    0x706cd74a,// 298 PAY 274 

    0x9f0abfc1,// 299 PAY 275 

    0x545e4f8e,// 300 PAY 276 

    0x809c2787,// 301 PAY 277 

    0xa00a3a1e,// 302 PAY 278 

    0xfd318b33,// 303 PAY 279 

    0xd09b44f1,// 304 PAY 280 

    0xa928b4c6,// 305 PAY 281 

    0xd43c4b2c,// 306 PAY 282 

    0x70863114,// 307 PAY 283 

    0xcb4fb3b6,// 308 PAY 284 

    0xed9865c1,// 309 PAY 285 

    0x6a6abfd2,// 310 PAY 286 

    0x3329faba,// 311 PAY 287 

    0x829015a9,// 312 PAY 288 

    0x16581954,// 313 PAY 289 

    0x5ebc682d,// 314 PAY 290 

    0xe205d2ba,// 315 PAY 291 

    0x7d850073,// 316 PAY 292 

    0x15365694,// 317 PAY 293 

    0x961c07ba,// 318 PAY 294 

    0x647aacc1,// 319 PAY 295 

    0x74924e19,// 320 PAY 296 

    0x5ec9b543,// 321 PAY 297 

    0xa5a3db26,// 322 PAY 298 

    0x30120dfc,// 323 PAY 299 

    0xba168120,// 324 PAY 300 

    0x6f237746,// 325 PAY 301 

    0x552ca354,// 326 PAY 302 

    0xd7aaa735,// 327 PAY 303 

    0xa3f566c6,// 328 PAY 304 

    0xd0f404c4,// 329 PAY 305 

    0xfe3dbc3f,// 330 PAY 306 

    0x84d57ac8,// 331 PAY 307 

    0x1727618d,// 332 PAY 308 

    0x7df06c4c,// 333 PAY 309 

    0x6496b658,// 334 PAY 310 

    0x31b3c80b,// 335 PAY 311 

    0x2d97e322,// 336 PAY 312 

    0x6c770c68,// 337 PAY 313 

    0x69756623,// 338 PAY 314 

    0x8639ebae,// 339 PAY 315 

    0xd7105f92,// 340 PAY 316 

    0x9bdb4b18,// 341 PAY 317 

    0x110d2d86,// 342 PAY 318 

    0x67ad4d3a,// 343 PAY 319 

    0xcf270391,// 344 PAY 320 

    0x732b424e,// 345 PAY 321 

    0xeed2405c,// 346 PAY 322 

    0xb24df920,// 347 PAY 323 

    0x4515a6b7,// 348 PAY 324 

    0x74282536,// 349 PAY 325 

    0x1eef2183,// 350 PAY 326 

    0x7dea220b,// 351 PAY 327 

    0xa498a567,// 352 PAY 328 

    0x57ca2d8f,// 353 PAY 329 

    0x45aca0d8,// 354 PAY 330 

    0xb69fe4dd,// 355 PAY 331 

    0x469fd455,// 356 PAY 332 

    0xdbfe1a08,// 357 PAY 333 

    0xce268376,// 358 PAY 334 

    0x9481d97e,// 359 PAY 335 

    0x19918f54,// 360 PAY 336 

    0x8ad5481e,// 361 PAY 337 

    0x0dbc6726,// 362 PAY 338 

    0xdf13a634,// 363 PAY 339 

    0x1b60fec6,// 364 PAY 340 

    0xb5a064fc,// 365 PAY 341 

    0x355ec299,// 366 PAY 342 

    0x57b733b8,// 367 PAY 343 

    0x8d9a7e82,// 368 PAY 344 

    0x806e1a5d,// 369 PAY 345 

    0xde5bac48,// 370 PAY 346 

    0x70867048,// 371 PAY 347 

    0xba437dfd,// 372 PAY 348 

    0xd403c90d,// 373 PAY 349 

    0x273e89f5,// 374 PAY 350 

    0x9d36b1f2,// 375 PAY 351 

    0x1401ea32,// 376 PAY 352 

    0x932325f9,// 377 PAY 353 

    0x3c23aba9,// 378 PAY 354 

    0x0f168df4,// 379 PAY 355 

    0x8c9b3a27,// 380 PAY 356 

    0x9d15d8bc,// 381 PAY 357 

    0x76f0d5ea,// 382 PAY 358 

    0xce1e5604,// 383 PAY 359 

    0x0ddec7e2,// 384 PAY 360 

    0x67f6281c,// 385 PAY 361 

    0x073739a8,// 386 PAY 362 

    0x205c56e4,// 387 PAY 363 

    0xef63ec94,// 388 PAY 364 

    0x6fd392dc,// 389 PAY 365 

    0x91890090,// 390 PAY 366 

    0x7085ed17,// 391 PAY 367 

    0xb073ceab,// 392 PAY 368 

    0x558ee07c,// 393 PAY 369 

    0xffeb1a97,// 394 PAY 370 

    0x1b55ac65,// 395 PAY 371 

    0x4b74a900,// 396 PAY 372 

    0x72fd231e,// 397 PAY 373 

    0x42f4c8d2,// 398 PAY 374 

    0x80b32f98,// 399 PAY 375 

    0x7dea680c,// 400 PAY 376 

    0x5e264605,// 401 PAY 377 

    0x83176bb5,// 402 PAY 378 

    0x3c818bb7,// 403 PAY 379 

    0x7b360e31,// 404 PAY 380 

    0x38180958,// 405 PAY 381 

    0x84fd235b,// 406 PAY 382 

    0x3e2c9cde,// 407 PAY 383 

    0x9b2a2e2e,// 408 PAY 384 

    0xb3c72944,// 409 PAY 385 

    0x21130f79,// 410 PAY 386 

    0x478f6fc6,// 411 PAY 387 

    0x912c0ddd,// 412 PAY 388 

    0x8e017960,// 413 PAY 389 

    0xa675b23f,// 414 PAY 390 

    0x8763efbe,// 415 PAY 391 

    0xada4111f,// 416 PAY 392 

    0x6a63048c,// 417 PAY 393 

    0x58246a80,// 418 PAY 394 

    0x61332966,// 419 PAY 395 

    0x9e833939,// 420 PAY 396 

    0xa3364738,// 421 PAY 397 

    0xf1d305bf,// 422 PAY 398 

    0xb21be527,// 423 PAY 399 

    0x55eab155,// 424 PAY 400 

    0xd2d4090b,// 425 PAY 401 

    0x2692240d,// 426 PAY 402 

    0x7587aa63,// 427 PAY 403 

    0xf8e2bf9f,// 428 PAY 404 

    0xb463c29f,// 429 PAY 405 

    0x54654c96,// 430 PAY 406 

    0xf7449ac8,// 431 PAY 407 

    0x39634c21,// 432 PAY 408 

    0x950f1bb7,// 433 PAY 409 

    0x9612a48f,// 434 PAY 410 

    0xacd446f5,// 435 PAY 411 

    0x0d145cc4,// 436 PAY 412 

    0x28a65a66,// 437 PAY 413 

    0xfbe0842f,// 438 PAY 414 

    0x3294ab32,// 439 PAY 415 

    0x0feeaeac,// 440 PAY 416 

    0x5cf4b51f,// 441 PAY 417 

    0x693847bb,// 442 PAY 418 

    0x99d884d3,// 443 PAY 419 

    0x3b3f38db,// 444 PAY 420 

    0xe5f9f758,// 445 PAY 421 

    0xcad5e693,// 446 PAY 422 

    0x179b4089,// 447 PAY 423 

    0x39a13708,// 448 PAY 424 

    0x8aad6886,// 449 PAY 425 

    0xf4fcb7db,// 450 PAY 426 

    0xf3aa539c,// 451 PAY 427 

    0xe4b4e5c3,// 452 PAY 428 

    0x197f8b4b,// 453 PAY 429 

    0x158730ea,// 454 PAY 430 

    0x8b143e0c,// 455 PAY 431 

    0x3e944077,// 456 PAY 432 

    0xcd1c9ca3,// 457 PAY 433 

    0xdce7c50a,// 458 PAY 434 

    0x2ef6d692,// 459 PAY 435 

    0x219282a0,// 460 PAY 436 

    0x6c662521,// 461 PAY 437 

    0x6ef53daf,// 462 PAY 438 

    0x8bfc3966,// 463 PAY 439 

    0x8c99e796,// 464 PAY 440 

    0xb2d5d83e,// 465 PAY 441 

    0xd91fd2d4,// 466 PAY 442 

    0x2f837995,// 467 PAY 443 

    0x89fbd64c,// 468 PAY 444 

    0x09bbbfa2,// 469 PAY 445 

    0xebd3ab08,// 470 PAY 446 

    0x170dc590,// 471 PAY 447 

    0xfb79d16e,// 472 PAY 448 

    0x6897e365,// 473 PAY 449 

    0xd1d71a67,// 474 PAY 450 

    0xf7057399,// 475 PAY 451 

    0x77cc301d,// 476 PAY 452 

    0x899cd900,// 477 PAY 453 

    0xed29288a,// 478 PAY 454 

    0x5f64bda1,// 479 PAY 455 

    0x80e996ed,// 480 PAY 456 

    0x50dd9ed5,// 481 PAY 457 

    0x43f08c77,// 482 PAY 458 

    0x8dd8dd67,// 483 PAY 459 

    0xea7ea887,// 484 PAY 460 

    0xf6191f55,// 485 PAY 461 

    0xf9a9518e,// 486 PAY 462 

    0xf4c3cb97,// 487 PAY 463 

    0x8c95c476,// 488 PAY 464 

    0x80a30913,// 489 PAY 465 

    0x0ec7972f,// 490 PAY 466 

    0x83d5abfa,// 491 PAY 467 

    0xd66b1c83,// 492 PAY 468 

    0x7fe9e79b,// 493 PAY 469 

    0x17a9975c,// 494 PAY 470 

    0x98142221,// 495 PAY 471 

    0x8f2ac304,// 496 PAY 472 

    0xe40beee1,// 497 PAY 473 

    0x7a05e4ff,// 498 PAY 474 

    0x9d49c0d2,// 499 PAY 475 

    0x0ca8e2ca,// 500 PAY 476 

    0xc35fa1cc,// 501 PAY 477 

    0xa8a2cc7d,// 502 PAY 478 

    0x6769299e,// 503 PAY 479 

    0xb80778a5,// 504 PAY 480 

    0x597ca6ef,// 505 PAY 481 

    0x2b5ac06d,// 506 PAY 482 

    0xced989b2,// 507 PAY 483 

    0x1f43d4bf,// 508 PAY 484 

    0x5993adb4,// 509 PAY 485 

    0x7145d909,// 510 PAY 486 

    0x2b51c145,// 511 PAY 487 

    0x24a987f0,// 512 PAY 488 

    0x25f09a29,// 513 PAY 489 

    0x5bd5904c,// 514 PAY 490 

    0x8ccd8d68,// 515 PAY 491 

    0x54eed878,// 516 PAY 492 

    0x93177dd5,// 517 PAY 493 

    0x4cef02b7,// 518 PAY 494 

    0xba9f0000,// 519 PAY 495 

/// STA is 1 words. 

/// STA num_pkts       : 83 

/// STA pkt_idx        : 146 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x20 

    0x02492053 // 520 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt6_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x804428e9,// 4 SCX   2 

    0x00002342,// 5 SCX   3 

    0xb65d5a5e,// 6 SCX   4 

    0xa9a4ce8c,// 7 SCX   5 

    0xea98e03d,// 8 SCX   6 

    0x5480c503,// 9 SCX   7 

    0x262afaa6,// 10 SCX   8 

    0xd17aea40,// 11 SCX   9 

    0x7bf5fe52,// 12 SCX  10 

    0xc1f89506,// 13 SCX  11 

    0xb0200253,// 14 SCX  12 

    0x75192091,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1154 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 162 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 162 

/// BFD lencrypto      : 48 

/// BFD ofstcrypto     : 68 

/// BFD (ofst+len)cry  : 116 

/// BFD ofstiv         : 20 

/// BFD ofsticv        : 216 

    0x000000a2,// 16 BFD   1 

    0x00440030,// 17 BFD   2 

    0x00d80014,// 18 BFD   3 

/// MFM is 4 words. 

/// MFM vldnibs        : 16 

    0x1600ac19,// 19 MFM   1 

    0x5121e4cb,// 20 MFM   2 

    0x57182fa2,// 21 MFM   3 

    0xf9000000,// 22 MFM   4 

/// BDA is 290 words. 

/// BDA size     is 1154 (0x482) 

/// BDA id       is 0x4456 

    0x04824456,// 23 BDA   1 

/// PAY Generic Data size   : 1154 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x3f6e31d6,// 24 PAY   1 

    0x3649216b,// 25 PAY   2 

    0x7ef0263d,// 26 PAY   3 

    0x24e4ec05,// 27 PAY   4 

    0xdc83de93,// 28 PAY   5 

    0x2c642bcd,// 29 PAY   6 

    0xef9ea399,// 30 PAY   7 

    0xca566d2d,// 31 PAY   8 

    0x173e2ee2,// 32 PAY   9 

    0x3013f7c2,// 33 PAY  10 

    0x912c645c,// 34 PAY  11 

    0x1716510a,// 35 PAY  12 

    0xbbed7b74,// 36 PAY  13 

    0x0fc007cd,// 37 PAY  14 

    0x872d37eb,// 38 PAY  15 

    0xb7060b94,// 39 PAY  16 

    0x3e17246f,// 40 PAY  17 

    0x124e0f63,// 41 PAY  18 

    0x080ed430,// 42 PAY  19 

    0x8729d7a8,// 43 PAY  20 

    0x1f9e34e2,// 44 PAY  21 

    0x73d0fa64,// 45 PAY  22 

    0x80970661,// 46 PAY  23 

    0x946b88da,// 47 PAY  24 

    0x9e1023c5,// 48 PAY  25 

    0xaf8884c6,// 49 PAY  26 

    0x22a025c8,// 50 PAY  27 

    0x1e4b68d0,// 51 PAY  28 

    0x705bfef5,// 52 PAY  29 

    0xc0c5fbd2,// 53 PAY  30 

    0x749b55af,// 54 PAY  31 

    0x85b82d4a,// 55 PAY  32 

    0xd433d1a0,// 56 PAY  33 

    0xadae45ce,// 57 PAY  34 

    0xb9c9b821,// 58 PAY  35 

    0xbeb450f1,// 59 PAY  36 

    0x054681fe,// 60 PAY  37 

    0xec6ee0f2,// 61 PAY  38 

    0xb3f9e3eb,// 62 PAY  39 

    0xf110e6a6,// 63 PAY  40 

    0x04a2a60d,// 64 PAY  41 

    0x81bb6ea3,// 65 PAY  42 

    0xd2240898,// 66 PAY  43 

    0x7351469c,// 67 PAY  44 

    0xac3a6b80,// 68 PAY  45 

    0xa72f43b8,// 69 PAY  46 

    0xd7f1ed8e,// 70 PAY  47 

    0x611b319d,// 71 PAY  48 

    0x892b7fe1,// 72 PAY  49 

    0x3f7273a9,// 73 PAY  50 

    0xa4a75d68,// 74 PAY  51 

    0x6f0b9c9b,// 75 PAY  52 

    0x427b8a43,// 76 PAY  53 

    0xb761d7c6,// 77 PAY  54 

    0x3b112a77,// 78 PAY  55 

    0xf2247b89,// 79 PAY  56 

    0x1ed842b6,// 80 PAY  57 

    0x9241d96d,// 81 PAY  58 

    0xe90ad5ed,// 82 PAY  59 

    0xa8470b67,// 83 PAY  60 

    0x223435e5,// 84 PAY  61 

    0x357e409c,// 85 PAY  62 

    0x05ef5f9f,// 86 PAY  63 

    0xb076551d,// 87 PAY  64 

    0xfdb57a5f,// 88 PAY  65 

    0x0588795f,// 89 PAY  66 

    0x37921da7,// 90 PAY  67 

    0xdcc3f4ef,// 91 PAY  68 

    0x661c7471,// 92 PAY  69 

    0x8e525acb,// 93 PAY  70 

    0xf42f6c3f,// 94 PAY  71 

    0xbe02651c,// 95 PAY  72 

    0x2a63298b,// 96 PAY  73 

    0x4e804464,// 97 PAY  74 

    0x2c96a087,// 98 PAY  75 

    0x395eb5f6,// 99 PAY  76 

    0x0fb5c376,// 100 PAY  77 

    0x92584128,// 101 PAY  78 

    0x73ede514,// 102 PAY  79 

    0x93eb0fa5,// 103 PAY  80 

    0x8aed0ce0,// 104 PAY  81 

    0x6bb36dd5,// 105 PAY  82 

    0x9e695d74,// 106 PAY  83 

    0xd1f9b7dc,// 107 PAY  84 

    0x17b52a31,// 108 PAY  85 

    0x03242c95,// 109 PAY  86 

    0xda977633,// 110 PAY  87 

    0xad711088,// 111 PAY  88 

    0xb62a1701,// 112 PAY  89 

    0x987dc8d6,// 113 PAY  90 

    0x75e4c107,// 114 PAY  91 

    0xd5e376aa,// 115 PAY  92 

    0xec28f537,// 116 PAY  93 

    0x52f0b369,// 117 PAY  94 

    0xbc8db67e,// 118 PAY  95 

    0xbdd5978c,// 119 PAY  96 

    0x814f7ef7,// 120 PAY  97 

    0xd659b9be,// 121 PAY  98 

    0xed46ed0b,// 122 PAY  99 

    0x704ec9a5,// 123 PAY 100 

    0xc8f69d24,// 124 PAY 101 

    0xc91bd808,// 125 PAY 102 

    0xfb309191,// 126 PAY 103 

    0xed390c59,// 127 PAY 104 

    0xc732cc27,// 128 PAY 105 

    0x042b4288,// 129 PAY 106 

    0xe6166e13,// 130 PAY 107 

    0xd5af35ba,// 131 PAY 108 

    0x4b496352,// 132 PAY 109 

    0x6a55188e,// 133 PAY 110 

    0x9dab2870,// 134 PAY 111 

    0x82dde083,// 135 PAY 112 

    0xc07b70ff,// 136 PAY 113 

    0xee1d2586,// 137 PAY 114 

    0xd6d12fd3,// 138 PAY 115 

    0x9fcb201b,// 139 PAY 116 

    0x05a45ae5,// 140 PAY 117 

    0x855ba40c,// 141 PAY 118 

    0x3fd84dac,// 142 PAY 119 

    0x5e9a9f37,// 143 PAY 120 

    0xcbe98fa8,// 144 PAY 121 

    0x6edb60c4,// 145 PAY 122 

    0x4509b44a,// 146 PAY 123 

    0x92ae32e1,// 147 PAY 124 

    0x270a08e8,// 148 PAY 125 

    0x0f58fd30,// 149 PAY 126 

    0xbf9db3f1,// 150 PAY 127 

    0xcef3d422,// 151 PAY 128 

    0xf4d1aea7,// 152 PAY 129 

    0x8ed5e0fc,// 153 PAY 130 

    0xb0143efc,// 154 PAY 131 

    0x9819d854,// 155 PAY 132 

    0x3b2d8d18,// 156 PAY 133 

    0x166120d9,// 157 PAY 134 

    0x74cb27b7,// 158 PAY 135 

    0x1c5a565c,// 159 PAY 136 

    0xc1d42ad5,// 160 PAY 137 

    0x3fba8dad,// 161 PAY 138 

    0xb7eae706,// 162 PAY 139 

    0x8d1d971f,// 163 PAY 140 

    0x3a5114e4,// 164 PAY 141 

    0x3006ba7b,// 165 PAY 142 

    0x3bec11f6,// 166 PAY 143 

    0x39d4f830,// 167 PAY 144 

    0xb1cdace3,// 168 PAY 145 

    0x614b00a6,// 169 PAY 146 

    0xd06b9940,// 170 PAY 147 

    0xd0193729,// 171 PAY 148 

    0x64d65777,// 172 PAY 149 

    0xe5caede0,// 173 PAY 150 

    0x71751923,// 174 PAY 151 

    0x92827cd8,// 175 PAY 152 

    0x16075e53,// 176 PAY 153 

    0xd6f83dfd,// 177 PAY 154 

    0x2a8ae527,// 178 PAY 155 

    0xed129f95,// 179 PAY 156 

    0x339c852e,// 180 PAY 157 

    0xa5a47ef0,// 181 PAY 158 

    0x1a3c0055,// 182 PAY 159 

    0x7f911842,// 183 PAY 160 

    0x95a6d589,// 184 PAY 161 

    0x5e79fcea,// 185 PAY 162 

    0x90ce7b17,// 186 PAY 163 

    0x1a393ace,// 187 PAY 164 

    0x4f1998ef,// 188 PAY 165 

    0xe5203c9d,// 189 PAY 166 

    0x1e0e6100,// 190 PAY 167 

    0xb7148755,// 191 PAY 168 

    0x331314e7,// 192 PAY 169 

    0x9af46a1f,// 193 PAY 170 

    0x3d90241a,// 194 PAY 171 

    0x003c4cce,// 195 PAY 172 

    0xe3d0bad9,// 196 PAY 173 

    0xe97424ad,// 197 PAY 174 

    0x06e774dc,// 198 PAY 175 

    0x1cb956f3,// 199 PAY 176 

    0x8c9868b8,// 200 PAY 177 

    0xd1bfcb2d,// 201 PAY 178 

    0x444f570b,// 202 PAY 179 

    0x13d7001d,// 203 PAY 180 

    0xb93204dc,// 204 PAY 181 

    0x1dcfa922,// 205 PAY 182 

    0xe3f60285,// 206 PAY 183 

    0xdd48f486,// 207 PAY 184 

    0x452ea71b,// 208 PAY 185 

    0x77eeebb7,// 209 PAY 186 

    0xbb5b867c,// 210 PAY 187 

    0xe6055b0f,// 211 PAY 188 

    0xe70c4b10,// 212 PAY 189 

    0x8a770b68,// 213 PAY 190 

    0xdef0bc12,// 214 PAY 191 

    0x78d898e1,// 215 PAY 192 

    0x58b05098,// 216 PAY 193 

    0x83d88cad,// 217 PAY 194 

    0xad07dd63,// 218 PAY 195 

    0x5db64b43,// 219 PAY 196 

    0x33b690ff,// 220 PAY 197 

    0x372dd3f3,// 221 PAY 198 

    0xce2e428f,// 222 PAY 199 

    0x9e36d12a,// 223 PAY 200 

    0x0b4ff12f,// 224 PAY 201 

    0xd24b584b,// 225 PAY 202 

    0x9236e117,// 226 PAY 203 

    0x1f03768b,// 227 PAY 204 

    0xba280e94,// 228 PAY 205 

    0x8bc3c8eb,// 229 PAY 206 

    0xd9281226,// 230 PAY 207 

    0xfe843495,// 231 PAY 208 

    0x5c8cc68d,// 232 PAY 209 

    0x59d5061d,// 233 PAY 210 

    0x85baef0d,// 234 PAY 211 

    0x44d39af0,// 235 PAY 212 

    0x38a8085a,// 236 PAY 213 

    0x45ea171d,// 237 PAY 214 

    0xc8c39169,// 238 PAY 215 

    0x99e2664c,// 239 PAY 216 

    0xd32da728,// 240 PAY 217 

    0x9383c272,// 241 PAY 218 

    0x50ca8970,// 242 PAY 219 

    0x6aea8f1b,// 243 PAY 220 

    0xac50e156,// 244 PAY 221 

    0x304ff069,// 245 PAY 222 

    0x56f12e15,// 246 PAY 223 

    0xd70d1dbb,// 247 PAY 224 

    0x8aea5566,// 248 PAY 225 

    0x037faeab,// 249 PAY 226 

    0xc3872241,// 250 PAY 227 

    0x4bd574d5,// 251 PAY 228 

    0x9170c07f,// 252 PAY 229 

    0x333b9da7,// 253 PAY 230 

    0x0497b524,// 254 PAY 231 

    0x8bca3df1,// 255 PAY 232 

    0x7f2aa056,// 256 PAY 233 

    0x291fb6ce,// 257 PAY 234 

    0xa9187093,// 258 PAY 235 

    0xd4956d4d,// 259 PAY 236 

    0x8409e367,// 260 PAY 237 

    0xca620d65,// 261 PAY 238 

    0x4b1bdec4,// 262 PAY 239 

    0xcef84d13,// 263 PAY 240 

    0xb2d1b703,// 264 PAY 241 

    0xfd1f049c,// 265 PAY 242 

    0xf71d8531,// 266 PAY 243 

    0x02b2baa2,// 267 PAY 244 

    0xeab23a5c,// 268 PAY 245 

    0xc5071fae,// 269 PAY 246 

    0x13f40167,// 270 PAY 247 

    0x2a64202c,// 271 PAY 248 

    0xa93146eb,// 272 PAY 249 

    0x59fcf599,// 273 PAY 250 

    0xc149112a,// 274 PAY 251 

    0x47293107,// 275 PAY 252 

    0xcce5a5c8,// 276 PAY 253 

    0x0f05e385,// 277 PAY 254 

    0xc4a973a2,// 278 PAY 255 

    0x3cdc22c1,// 279 PAY 256 

    0x40fbc2bf,// 280 PAY 257 

    0x62f4255b,// 281 PAY 258 

    0xd96823f2,// 282 PAY 259 

    0xe5ab45f0,// 283 PAY 260 

    0x9c2ac708,// 284 PAY 261 

    0x3fd08427,// 285 PAY 262 

    0x774f88a4,// 286 PAY 263 

    0x91c271e7,// 287 PAY 264 

    0x71110374,// 288 PAY 265 

    0x56aaa9ac,// 289 PAY 266 

    0x4d04ed41,// 290 PAY 267 

    0x98a83f20,// 291 PAY 268 

    0x4f2cc50f,// 292 PAY 269 

    0xf26befd7,// 293 PAY 270 

    0x5e4eee18,// 294 PAY 271 

    0xe63571b5,// 295 PAY 272 

    0xeba53e31,// 296 PAY 273 

    0x8567de45,// 297 PAY 274 

    0xd5eb2821,// 298 PAY 275 

    0x17e443eb,// 299 PAY 276 

    0x3474dbb2,// 300 PAY 277 

    0xcdb58b8f,// 301 PAY 278 

    0x96612f20,// 302 PAY 279 

    0xfbe3aabb,// 303 PAY 280 

    0x332ac90a,// 304 PAY 281 

    0xa49b37f9,// 305 PAY 282 

    0xdafab1e5,// 306 PAY 283 

    0x5db4cc9e,// 307 PAY 284 

    0x600a70dd,// 308 PAY 285 

    0x2a6bd1d2,// 309 PAY 286 

    0xd7f14ec6,// 310 PAY 287 

    0x7c34f5aa,// 311 PAY 288 

    0x166d0000,// 312 PAY 289 

/// STA is 1 words. 

/// STA num_pkts       : 34 

/// STA pkt_idx        : 231 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xdf 

    0x039cdf22 // 313 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt7_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x804528c1,// 4 SCX   2 

    0x00007382,// 5 SCX   3 

    0xfe8afac4,// 6 SCX   4 

    0xdccd60d0,// 7 SCX   5 

    0xa013a76b,// 8 SCX   6 

    0x19de45af,// 9 SCX   7 

    0x4e26a28f,// 10 SCX   8 

    0xaf97c581,// 11 SCX   9 

    0xd6c7b8a4,// 12 SCX  10 

    0xeb6e0ad1,// 13 SCX  11 

    0xc785e1f7,// 14 SCX  12 

    0x45b7a3d9,// 15 SCX  13 

    0x2f80ba29,// 16 SCX  14 

    0x0c947f92,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1520 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1032 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1032 

/// BFD lencrypto      : 232 

/// BFD ofstcrypto     : 436 

/// BFD (ofst+len)cry  : 668 

/// BFD ofstiv         : 84 

/// BFD ofsticv        : 1420 

    0x00000408,// 18 BFD   1 

    0x01b400e8,// 19 BFD   2 

    0x058c0054,// 20 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00c29a,// 21 MFM   1 

    0x447090d6,// 22 MFM   2 

    0xd3d0758d,// 23 MFM   3 

    0x304215a1,// 24 MFM   4 

    0xb28ef5c0,// 25 MFM   5 

    0x671280f7,// 26 MFM   6 

    0x2edde0a9,// 27 MFM   7 

    0xb5bd98df,// 28 MFM   8 

    0xf0cf638a,// 29 MFM   9 

    0x99c4b896,// 30 MFM  10 

    0x0abcefab,// 31 MFM  11 

    0x1fd861f1,// 32 MFM  12 

    0xdf133857,// 33 MFM  13 

    0xc098ef50,// 34 MFM  14 

    0xa445958f,// 35 MFM  15 

    0x50fbdebd,// 36 MFM  16 

/// BDA is 381 words. 

/// BDA size     is 1520 (0x5f0) 

/// BDA id       is 0xd61 

    0x05f00d61,// 37 BDA   1 

/// PAY Generic Data size   : 1520 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x640524dd,// 38 PAY   1 

    0xa47b144c,// 39 PAY   2 

    0xab4b809b,// 40 PAY   3 

    0xa2da8e78,// 41 PAY   4 

    0xf560e23e,// 42 PAY   5 

    0xd0afa329,// 43 PAY   6 

    0x71ea0bcb,// 44 PAY   7 

    0x6fa17160,// 45 PAY   8 

    0x39f7fe3f,// 46 PAY   9 

    0xec32211a,// 47 PAY  10 

    0xc922d321,// 48 PAY  11 

    0x353bba67,// 49 PAY  12 

    0x8a26c74a,// 50 PAY  13 

    0x340afb63,// 51 PAY  14 

    0x1b670d8e,// 52 PAY  15 

    0x796b0f3f,// 53 PAY  16 

    0x1c358c30,// 54 PAY  17 

    0xba187d41,// 55 PAY  18 

    0x02163283,// 56 PAY  19 

    0xd0873f0b,// 57 PAY  20 

    0xd3325c42,// 58 PAY  21 

    0x87e3d1f4,// 59 PAY  22 

    0x905c78e9,// 60 PAY  23 

    0x92f13eda,// 61 PAY  24 

    0xbc2ed5f1,// 62 PAY  25 

    0x4f81a5e3,// 63 PAY  26 

    0x099380c9,// 64 PAY  27 

    0x80373502,// 65 PAY  28 

    0xffec6106,// 66 PAY  29 

    0x8449f286,// 67 PAY  30 

    0xb041ac21,// 68 PAY  31 

    0x181dc405,// 69 PAY  32 

    0xafc2050e,// 70 PAY  33 

    0x719a6f19,// 71 PAY  34 

    0xc8c500a0,// 72 PAY  35 

    0x5f832704,// 73 PAY  36 

    0xba1d399e,// 74 PAY  37 

    0xd1285f74,// 75 PAY  38 

    0xa05d227f,// 76 PAY  39 

    0xb08d84a3,// 77 PAY  40 

    0xfeef377d,// 78 PAY  41 

    0xf743651d,// 79 PAY  42 

    0xa6853224,// 80 PAY  43 

    0x9b2150c5,// 81 PAY  44 

    0x98672e55,// 82 PAY  45 

    0xc3bc58a2,// 83 PAY  46 

    0x18511dfe,// 84 PAY  47 

    0x2c3126ab,// 85 PAY  48 

    0x6eb4b08f,// 86 PAY  49 

    0x8209c915,// 87 PAY  50 

    0xe0e0a007,// 88 PAY  51 

    0x2546e69a,// 89 PAY  52 

    0xcccfe759,// 90 PAY  53 

    0x2f96e53b,// 91 PAY  54 

    0xca2a7307,// 92 PAY  55 

    0x368cccb8,// 93 PAY  56 

    0xbee69860,// 94 PAY  57 

    0xd730f563,// 95 PAY  58 

    0xffde4831,// 96 PAY  59 

    0xee20aefa,// 97 PAY  60 

    0x450a7e2c,// 98 PAY  61 

    0x4ae5357b,// 99 PAY  62 

    0x2f170e47,// 100 PAY  63 

    0x6945a266,// 101 PAY  64 

    0x861e731e,// 102 PAY  65 

    0x4cb1cff1,// 103 PAY  66 

    0x14c84cd9,// 104 PAY  67 

    0x5c9c129d,// 105 PAY  68 

    0x1446b137,// 106 PAY  69 

    0x0e3c3237,// 107 PAY  70 

    0x04f5f8de,// 108 PAY  71 

    0x3d31eae9,// 109 PAY  72 

    0xb3713c08,// 110 PAY  73 

    0x6e738978,// 111 PAY  74 

    0x1bbecb19,// 112 PAY  75 

    0xa7619a11,// 113 PAY  76 

    0x6659d4b0,// 114 PAY  77 

    0x8352a59c,// 115 PAY  78 

    0x21a1e8e6,// 116 PAY  79 

    0x4ea3de5c,// 117 PAY  80 

    0xf81f08e3,// 118 PAY  81 

    0xecd99a2b,// 119 PAY  82 

    0x892bf19a,// 120 PAY  83 

    0x21a7b859,// 121 PAY  84 

    0x55115a5d,// 122 PAY  85 

    0xc19dbdc4,// 123 PAY  86 

    0x4abe641b,// 124 PAY  87 

    0x4898112f,// 125 PAY  88 

    0x10b01015,// 126 PAY  89 

    0x77aba804,// 127 PAY  90 

    0x4c01b3a9,// 128 PAY  91 

    0xcca7197c,// 129 PAY  92 

    0x4ecc672b,// 130 PAY  93 

    0x16dd72f6,// 131 PAY  94 

    0xc366dba2,// 132 PAY  95 

    0xcea08746,// 133 PAY  96 

    0xc0d5097d,// 134 PAY  97 

    0x594ae5cc,// 135 PAY  98 

    0xf164baa5,// 136 PAY  99 

    0x85fc693f,// 137 PAY 100 

    0xfa98741b,// 138 PAY 101 

    0x8edadb4e,// 139 PAY 102 

    0xbe56a92c,// 140 PAY 103 

    0x2db9622a,// 141 PAY 104 

    0xb1617272,// 142 PAY 105 

    0x6479856e,// 143 PAY 106 

    0x6d23c252,// 144 PAY 107 

    0x9e650953,// 145 PAY 108 

    0x23e0dad8,// 146 PAY 109 

    0x44eddd3c,// 147 PAY 110 

    0x62f27f54,// 148 PAY 111 

    0xe6b45000,// 149 PAY 112 

    0x0d1b4e7d,// 150 PAY 113 

    0xe077c223,// 151 PAY 114 

    0xdce31aab,// 152 PAY 115 

    0x48b33ae2,// 153 PAY 116 

    0xea7ea918,// 154 PAY 117 

    0xbb0e48ce,// 155 PAY 118 

    0xf51b5e61,// 156 PAY 119 

    0x478a8594,// 157 PAY 120 

    0xf95cfc44,// 158 PAY 121 

    0xa9bb1f9c,// 159 PAY 122 

    0xd75f48ad,// 160 PAY 123 

    0x955dabc0,// 161 PAY 124 

    0x5995b5d5,// 162 PAY 125 

    0xbdb029f2,// 163 PAY 126 

    0x463b752a,// 164 PAY 127 

    0xbe8ca49b,// 165 PAY 128 

    0xec4e655b,// 166 PAY 129 

    0x01b7f714,// 167 PAY 130 

    0xbe1b4c07,// 168 PAY 131 

    0xf99c7951,// 169 PAY 132 

    0xd1f64c2a,// 170 PAY 133 

    0x5a20162c,// 171 PAY 134 

    0xf53d392f,// 172 PAY 135 

    0xc48c0f04,// 173 PAY 136 

    0x746765e8,// 174 PAY 137 

    0xbfb7c25e,// 175 PAY 138 

    0x56acf4ac,// 176 PAY 139 

    0x582bc4db,// 177 PAY 140 

    0x88b2828b,// 178 PAY 141 

    0xfbd7c8b3,// 179 PAY 142 

    0x1949c9b2,// 180 PAY 143 

    0xd99cb56e,// 181 PAY 144 

    0xbe36ae35,// 182 PAY 145 

    0xd4060b80,// 183 PAY 146 

    0x8de4c160,// 184 PAY 147 

    0xf13c7291,// 185 PAY 148 

    0x66b62488,// 186 PAY 149 

    0x66e935d7,// 187 PAY 150 

    0xd679fc6b,// 188 PAY 151 

    0xa6fdfb30,// 189 PAY 152 

    0x294704dc,// 190 PAY 153 

    0x83489f24,// 191 PAY 154 

    0x1ad4b260,// 192 PAY 155 

    0x0d6c3c28,// 193 PAY 156 

    0xd9353790,// 194 PAY 157 

    0x85436dea,// 195 PAY 158 

    0x6ddac60d,// 196 PAY 159 

    0xc7c6a43a,// 197 PAY 160 

    0x95e3b23f,// 198 PAY 161 

    0x3265414d,// 199 PAY 162 

    0x29cded41,// 200 PAY 163 

    0x38352d9f,// 201 PAY 164 

    0xace66172,// 202 PAY 165 

    0xc26f4e43,// 203 PAY 166 

    0x27d6585c,// 204 PAY 167 

    0xe496f449,// 205 PAY 168 

    0x908ace88,// 206 PAY 169 

    0x4495366f,// 207 PAY 170 

    0xace16d57,// 208 PAY 171 

    0x93596542,// 209 PAY 172 

    0xbf5d1a04,// 210 PAY 173 

    0x19a0207a,// 211 PAY 174 

    0x3c75b6c5,// 212 PAY 175 

    0x6c4f3570,// 213 PAY 176 

    0xddec9f2c,// 214 PAY 177 

    0x537a689a,// 215 PAY 178 

    0xa935a890,// 216 PAY 179 

    0x4cd976a5,// 217 PAY 180 

    0xa6652ee9,// 218 PAY 181 

    0x8b7c5bd7,// 219 PAY 182 

    0x4f0f712a,// 220 PAY 183 

    0x3905b79c,// 221 PAY 184 

    0xc5f7bbe2,// 222 PAY 185 

    0xc5d3b0b6,// 223 PAY 186 

    0x5a854b18,// 224 PAY 187 

    0xc71515cf,// 225 PAY 188 

    0xe6d54fab,// 226 PAY 189 

    0x58636978,// 227 PAY 190 

    0xf16b9c90,// 228 PAY 191 

    0x77d65ff4,// 229 PAY 192 

    0x14eea08b,// 230 PAY 193 

    0xf3f94f0b,// 231 PAY 194 

    0xeb389787,// 232 PAY 195 

    0x63dd3c35,// 233 PAY 196 

    0x24c4f6b2,// 234 PAY 197 

    0xfcadaf29,// 235 PAY 198 

    0xe387dec8,// 236 PAY 199 

    0x7324dabc,// 237 PAY 200 

    0x268d15bb,// 238 PAY 201 

    0x605f1b88,// 239 PAY 202 

    0x177817f0,// 240 PAY 203 

    0xd0cbbdc1,// 241 PAY 204 

    0xae8bb19c,// 242 PAY 205 

    0x7c327b71,// 243 PAY 206 

    0xf1d42984,// 244 PAY 207 

    0x2eed6581,// 245 PAY 208 

    0x1a474ee4,// 246 PAY 209 

    0xfabcadde,// 247 PAY 210 

    0x18322082,// 248 PAY 211 

    0x9980999c,// 249 PAY 212 

    0x63fcdc99,// 250 PAY 213 

    0xbc02fc57,// 251 PAY 214 

    0x57aa0b8b,// 252 PAY 215 

    0xdf6e15d8,// 253 PAY 216 

    0xd2f9e15a,// 254 PAY 217 

    0x1479e7aa,// 255 PAY 218 

    0x90ae08ee,// 256 PAY 219 

    0x94619887,// 257 PAY 220 

    0x3b2148a0,// 258 PAY 221 

    0x3d945983,// 259 PAY 222 

    0x10a94ef7,// 260 PAY 223 

    0xb0023d88,// 261 PAY 224 

    0xff20342f,// 262 PAY 225 

    0xf87f4a1a,// 263 PAY 226 

    0x247df0b0,// 264 PAY 227 

    0x9c8692ce,// 265 PAY 228 

    0x69bf0a40,// 266 PAY 229 

    0xa1083d0b,// 267 PAY 230 

    0x2343d59d,// 268 PAY 231 

    0x0621fb4f,// 269 PAY 232 

    0x6faf4e10,// 270 PAY 233 

    0xf5709111,// 271 PAY 234 

    0x0629f254,// 272 PAY 235 

    0x3b8c7f8b,// 273 PAY 236 

    0x820962b7,// 274 PAY 237 

    0x99ecd7e4,// 275 PAY 238 

    0x5172d006,// 276 PAY 239 

    0x19acfad4,// 277 PAY 240 

    0xc023a5c3,// 278 PAY 241 

    0x0c0a4f40,// 279 PAY 242 

    0xb384106c,// 280 PAY 243 

    0x3a5ec74e,// 281 PAY 244 

    0x84598d52,// 282 PAY 245 

    0xd17085b9,// 283 PAY 246 

    0x6ad9d9c3,// 284 PAY 247 

    0x602f30bb,// 285 PAY 248 

    0x0afda75a,// 286 PAY 249 

    0x10ca7048,// 287 PAY 250 

    0x882ea1e3,// 288 PAY 251 

    0xaf75f43d,// 289 PAY 252 

    0x5ec1855e,// 290 PAY 253 

    0x81f94cdf,// 291 PAY 254 

    0x224b9c51,// 292 PAY 255 

    0x7b3fd896,// 293 PAY 256 

    0xa0f859ea,// 294 PAY 257 

    0x09a5f6f0,// 295 PAY 258 

    0xd70a86c0,// 296 PAY 259 

    0x97881d36,// 297 PAY 260 

    0x2962bfe1,// 298 PAY 261 

    0x8611f5d9,// 299 PAY 262 

    0xe0296378,// 300 PAY 263 

    0x459f5c9a,// 301 PAY 264 

    0x913f6173,// 302 PAY 265 

    0x6d812b58,// 303 PAY 266 

    0x09062425,// 304 PAY 267 

    0xeed78987,// 305 PAY 268 

    0x2ab65813,// 306 PAY 269 

    0x7ffdb1d0,// 307 PAY 270 

    0x03a7b380,// 308 PAY 271 

    0xa91cb202,// 309 PAY 272 

    0x20bf39b0,// 310 PAY 273 

    0x3a64aa58,// 311 PAY 274 

    0x9a88c6a7,// 312 PAY 275 

    0xe2f44729,// 313 PAY 276 

    0x679db8bf,// 314 PAY 277 

    0x43286cc9,// 315 PAY 278 

    0x7e959271,// 316 PAY 279 

    0x119c95ea,// 317 PAY 280 

    0xa2035c2e,// 318 PAY 281 

    0x29a60a51,// 319 PAY 282 

    0xc19574eb,// 320 PAY 283 

    0x3c4e208a,// 321 PAY 284 

    0xdde1ba63,// 322 PAY 285 

    0xb0db2859,// 323 PAY 286 

    0xb924ba32,// 324 PAY 287 

    0x923135d3,// 325 PAY 288 

    0x48de564d,// 326 PAY 289 

    0xb057a259,// 327 PAY 290 

    0x0888c9e4,// 328 PAY 291 

    0xd201a88a,// 329 PAY 292 

    0x219cb509,// 330 PAY 293 

    0x45165732,// 331 PAY 294 

    0x11fac70d,// 332 PAY 295 

    0x6640c108,// 333 PAY 296 

    0x424c6667,// 334 PAY 297 

    0x6195b203,// 335 PAY 298 

    0x7bbbc86f,// 336 PAY 299 

    0x96dbbfca,// 337 PAY 300 

    0x5b71e02d,// 338 PAY 301 

    0x8cddfd58,// 339 PAY 302 

    0x8c8a9cb7,// 340 PAY 303 

    0x6b6be30c,// 341 PAY 304 

    0x32d72bb4,// 342 PAY 305 

    0x0f057e75,// 343 PAY 306 

    0xe3300a72,// 344 PAY 307 

    0x189351ba,// 345 PAY 308 

    0x6eaa3cd1,// 346 PAY 309 

    0xaf8dfa2f,// 347 PAY 310 

    0xa0d04a9a,// 348 PAY 311 

    0xbc7e37dc,// 349 PAY 312 

    0xe4669d59,// 350 PAY 313 

    0x6c67b314,// 351 PAY 314 

    0xd9036999,// 352 PAY 315 

    0x765fb775,// 353 PAY 316 

    0xfe36cd53,// 354 PAY 317 

    0x602067ff,// 355 PAY 318 

    0x5b9ca6bb,// 356 PAY 319 

    0xda34c1e1,// 357 PAY 320 

    0x488519f2,// 358 PAY 321 

    0x9324ce9d,// 359 PAY 322 

    0x55d70463,// 360 PAY 323 

    0x1560ac8c,// 361 PAY 324 

    0x6a246241,// 362 PAY 325 

    0xbc2a0be0,// 363 PAY 326 

    0x61d516c4,// 364 PAY 327 

    0xca721d56,// 365 PAY 328 

    0x38cc4ec9,// 366 PAY 329 

    0x462dbc41,// 367 PAY 330 

    0xe2523f45,// 368 PAY 331 

    0xb515377f,// 369 PAY 332 

    0x1222576a,// 370 PAY 333 

    0x6a2cfdfb,// 371 PAY 334 

    0x40de1567,// 372 PAY 335 

    0x790c7592,// 373 PAY 336 

    0x0b28dbde,// 374 PAY 337 

    0x331fdde7,// 375 PAY 338 

    0x8f6c9f39,// 376 PAY 339 

    0xaa699adc,// 377 PAY 340 

    0x73770c76,// 378 PAY 341 

    0x703357f2,// 379 PAY 342 

    0x206910de,// 380 PAY 343 

    0xb86151f8,// 381 PAY 344 

    0xfa8c377d,// 382 PAY 345 

    0xa9e08b15,// 383 PAY 346 

    0x948fc4a7,// 384 PAY 347 

    0x5584ce30,// 385 PAY 348 

    0x1c559e4e,// 386 PAY 349 

    0x434305e1,// 387 PAY 350 

    0xefdc0bb3,// 388 PAY 351 

    0xafded7cb,// 389 PAY 352 

    0x01f1116e,// 390 PAY 353 

    0x963cda0e,// 391 PAY 354 

    0xf758e163,// 392 PAY 355 

    0xb1cdc4f7,// 393 PAY 356 

    0x5ae6a9e8,// 394 PAY 357 

    0xd4af9a4d,// 395 PAY 358 

    0x26d6061d,// 396 PAY 359 

    0xce89a675,// 397 PAY 360 

    0xebb72fd4,// 398 PAY 361 

    0xe882eaec,// 399 PAY 362 

    0xf66d936d,// 400 PAY 363 

    0xc6dc7c83,// 401 PAY 364 

    0xb48292dc,// 402 PAY 365 

    0xa69f9d19,// 403 PAY 366 

    0x902df374,// 404 PAY 367 

    0x0af53e2d,// 405 PAY 368 

    0x3c4bd0c0,// 406 PAY 369 

    0xedd707a2,// 407 PAY 370 

    0x90d5beba,// 408 PAY 371 

    0xae21b402,// 409 PAY 372 

    0x50c8f1c6,// 410 PAY 373 

    0x357440fa,// 411 PAY 374 

    0xf6e7e66d,// 412 PAY 375 

    0x6e985181,// 413 PAY 376 

    0x8ab5e98e,// 414 PAY 377 

    0xe1ea2e25,// 415 PAY 378 

    0x05be7cf2,// 416 PAY 379 

    0x42b30650,// 417 PAY 380 

/// STA is 1 words. 

/// STA num_pkts       : 140 

/// STA pkt_idx        : 203 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xee 

    0x032dee8c // 418 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt8_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x8040283a,// 4 SCX   2 

    0x00002100,// 5 SCX   3 

    0xac66a979,// 6 SCX   4 

    0xed35f50f,// 7 SCX   5 

    0xb0ac20c5,// 8 SCX   6 

    0xa4583730,// 9 SCX   7 

    0x121499bf,// 10 SCX   8 

    0x3fc80561,// 11 SCX   9 

    0x500616f6,// 12 SCX  10 

    0x6a601b4a,// 13 SCX  11 

    0x615a0175,// 14 SCX  12 

    0xbc00af74,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 495 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 191 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 191 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 88 

/// BFD (ofst+len)cry  : 104 

/// BFD ofstiv         : 36 

/// BFD ofsticv        : 212 

    0x000000bf,// 16 BFD   1 

    0x00580010,// 17 BFD   2 

    0x00d40024,// 18 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 11 

    0x1100fb6a,// 19 MFM   1 

    0xfe31e6de,// 20 MFM   2 

    0x65822000,// 21 MFM   3 

/// BDA is 125 words. 

/// BDA size     is 495 (0x1ef) 

/// BDA id       is 0x5dfa 

    0x01ef5dfa,// 22 BDA   1 

/// PAY Generic Data size   : 495 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xe064cfd2,// 23 PAY   1 

    0x3248517b,// 24 PAY   2 

    0xbb71f92e,// 25 PAY   3 

    0xa21afa33,// 26 PAY   4 

    0x3bae1b04,// 27 PAY   5 

    0x8fbb2e05,// 28 PAY   6 

    0xc42db805,// 29 PAY   7 

    0x74fae3f9,// 30 PAY   8 

    0x9a892364,// 31 PAY   9 

    0xdf8473bf,// 32 PAY  10 

    0x09069a54,// 33 PAY  11 

    0xaa474f20,// 34 PAY  12 

    0xef967f29,// 35 PAY  13 

    0xc2e38ab4,// 36 PAY  14 

    0x47292160,// 37 PAY  15 

    0x606780b1,// 38 PAY  16 

    0x4c2d2d36,// 39 PAY  17 

    0x6db53570,// 40 PAY  18 

    0xf9900f37,// 41 PAY  19 

    0xaa43da70,// 42 PAY  20 

    0xaa2df95b,// 43 PAY  21 

    0xdca2261e,// 44 PAY  22 

    0x6d458704,// 45 PAY  23 

    0xd3b9d688,// 46 PAY  24 

    0x73479050,// 47 PAY  25 

    0x2f573b8c,// 48 PAY  26 

    0x3161ce1d,// 49 PAY  27 

    0x652c2773,// 50 PAY  28 

    0xa9738506,// 51 PAY  29 

    0x5efc323a,// 52 PAY  30 

    0x68a19b5e,// 53 PAY  31 

    0xf196c9de,// 54 PAY  32 

    0xa1a4791d,// 55 PAY  33 

    0x8cadd153,// 56 PAY  34 

    0x5bef0cf2,// 57 PAY  35 

    0xf81722b9,// 58 PAY  36 

    0x8eafbb5e,// 59 PAY  37 

    0x3384a9b5,// 60 PAY  38 

    0x999e613f,// 61 PAY  39 

    0xc6c9106f,// 62 PAY  40 

    0x1a4b2a21,// 63 PAY  41 

    0xdee880e0,// 64 PAY  42 

    0x4f318208,// 65 PAY  43 

    0x2bb1d561,// 66 PAY  44 

    0x24fbd1d3,// 67 PAY  45 

    0xdd71eff6,// 68 PAY  46 

    0x72830bca,// 69 PAY  47 

    0x626fc626,// 70 PAY  48 

    0xc3ffb8a0,// 71 PAY  49 

    0xe818712a,// 72 PAY  50 

    0x15493ef9,// 73 PAY  51 

    0x1c89df42,// 74 PAY  52 

    0xed27b144,// 75 PAY  53 

    0x95f0c62e,// 76 PAY  54 

    0x8b679b15,// 77 PAY  55 

    0xfe7e609a,// 78 PAY  56 

    0x5a4f1a68,// 79 PAY  57 

    0x0f15e8fa,// 80 PAY  58 

    0xa2b0d977,// 81 PAY  59 

    0x02e1dc9d,// 82 PAY  60 

    0x083c9ed1,// 83 PAY  61 

    0x06299604,// 84 PAY  62 

    0x2601733e,// 85 PAY  63 

    0x5e23e524,// 86 PAY  64 

    0x9b391ead,// 87 PAY  65 

    0xe7a289ec,// 88 PAY  66 

    0x203d52e0,// 89 PAY  67 

    0x60e60e65,// 90 PAY  68 

    0x45834db9,// 91 PAY  69 

    0x67dc8110,// 92 PAY  70 

    0x6875a141,// 93 PAY  71 

    0x1211303d,// 94 PAY  72 

    0x84876103,// 95 PAY  73 

    0x25030a8d,// 96 PAY  74 

    0x328852c3,// 97 PAY  75 

    0x9f8698e6,// 98 PAY  76 

    0xba262b4f,// 99 PAY  77 

    0x8acd9c22,// 100 PAY  78 

    0xe525e0be,// 101 PAY  79 

    0x139c13de,// 102 PAY  80 

    0xd9a2bc8f,// 103 PAY  81 

    0x30d70d86,// 104 PAY  82 

    0x251fa3e7,// 105 PAY  83 

    0x0b1a67f9,// 106 PAY  84 

    0x26310c97,// 107 PAY  85 

    0x9c09f9b2,// 108 PAY  86 

    0x99e4ce7f,// 109 PAY  87 

    0x6dd4e578,// 110 PAY  88 

    0x16a78c34,// 111 PAY  89 

    0xe448d91e,// 112 PAY  90 

    0x78ec0992,// 113 PAY  91 

    0xcdc170cb,// 114 PAY  92 

    0x31d710ab,// 115 PAY  93 

    0xcaae9450,// 116 PAY  94 

    0xe579c995,// 117 PAY  95 

    0xac45edf4,// 118 PAY  96 

    0xcfc8298f,// 119 PAY  97 

    0x0dd078f9,// 120 PAY  98 

    0x52f66b2f,// 121 PAY  99 

    0x97971657,// 122 PAY 100 

    0xede1bee9,// 123 PAY 101 

    0x8dddeb38,// 124 PAY 102 

    0x39e90942,// 125 PAY 103 

    0x4da69375,// 126 PAY 104 

    0x761a742c,// 127 PAY 105 

    0xe21b6358,// 128 PAY 106 

    0x4d07d6ec,// 129 PAY 107 

    0xc31ad0e8,// 130 PAY 108 

    0x28c046a8,// 131 PAY 109 

    0x39ad5c63,// 132 PAY 110 

    0xad6e0498,// 133 PAY 111 

    0xf4dc68db,// 134 PAY 112 

    0x064e6f81,// 135 PAY 113 

    0xf72289d3,// 136 PAY 114 

    0x9a62e59c,// 137 PAY 115 

    0x0321efdf,// 138 PAY 116 

    0x46666daa,// 139 PAY 117 

    0x9936c74d,// 140 PAY 118 

    0xb0d8be80,// 141 PAY 119 

    0xa8cb4c1c,// 142 PAY 120 

    0x9eb5d141,// 143 PAY 121 

    0xeb56dea8,// 144 PAY 122 

    0x461152c6,// 145 PAY 123 

    0x4ef84c00,// 146 PAY 124 

/// STA is 1 words. 

/// STA num_pkts       : 239 

/// STA pkt_idx        : 63 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1c 

    0x00fc1cef // 147 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt9_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x804128c1,// 4 SCX   2 

    0x00005100,// 5 SCX   3 

    0x2d5cd40f,// 6 SCX   4 

    0x549f273c,// 7 SCX   5 

    0x2e706369,// 8 SCX   6 

    0xee7099cd,// 9 SCX   7 

    0xf4f62df7,// 10 SCX   8 

    0xa84dcf82,// 11 SCX   9 

    0xeaa37947,// 12 SCX  10 

    0xd0b131b4,// 13 SCX  11 

    0x0e004ff2,// 14 SCX  12 

    0xa0c6d91c,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1832 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1013 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1013 

/// BFD lencrypto      : 136 

/// BFD ofstcrypto     : 848 

/// BFD (ofst+len)cry  : 984 

/// BFD ofstiv         : 732 

/// BFD ofsticv        : 1812 

    0x000003f5,// 16 BFD   1 

    0x03500088,// 17 BFD   2 

    0x071402dc,// 18 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 13 

    0x130014cc,// 19 MFM   1 

    0x1efb2607,// 20 MFM   2 

    0x4025eaa0,// 21 MFM   3 

/// BDA is 459 words. 

/// BDA size     is 1832 (0x728) 

/// BDA id       is 0xc580 

    0x0728c580,// 22 BDA   1 

/// PAY Generic Data size   : 1832 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x8c5a7abf,// 23 PAY   1 

    0x22bd8831,// 24 PAY   2 

    0x308a6d4c,// 25 PAY   3 

    0xac5c75bc,// 26 PAY   4 

    0xe0b39da9,// 27 PAY   5 

    0x1453f950,// 28 PAY   6 

    0x2a72fc0c,// 29 PAY   7 

    0xecf0b7f4,// 30 PAY   8 

    0xe057bda4,// 31 PAY   9 

    0x0449caf2,// 32 PAY  10 

    0x48080c76,// 33 PAY  11 

    0xf6d70477,// 34 PAY  12 

    0x1d18e976,// 35 PAY  13 

    0x03bdbc14,// 36 PAY  14 

    0xe92e1d33,// 37 PAY  15 

    0xbdd99d5f,// 38 PAY  16 

    0x3a84466e,// 39 PAY  17 

    0xc7739a4c,// 40 PAY  18 

    0xf19acc5f,// 41 PAY  19 

    0xad76071d,// 42 PAY  20 

    0xdf0ed2c5,// 43 PAY  21 

    0xa7b58288,// 44 PAY  22 

    0x2fc93d8b,// 45 PAY  23 

    0xfd35e404,// 46 PAY  24 

    0x8b99f156,// 47 PAY  25 

    0xfe59ed70,// 48 PAY  26 

    0x1facd5d3,// 49 PAY  27 

    0x08c352d5,// 50 PAY  28 

    0xd0ec7b28,// 51 PAY  29 

    0xcbeb6993,// 52 PAY  30 

    0x8487f088,// 53 PAY  31 

    0x84b1453d,// 54 PAY  32 

    0xc125b496,// 55 PAY  33 

    0x13381b74,// 56 PAY  34 

    0xb6d836b8,// 57 PAY  35 

    0x210636eb,// 58 PAY  36 

    0xe518fd95,// 59 PAY  37 

    0xb7c3688a,// 60 PAY  38 

    0xc473077f,// 61 PAY  39 

    0x55c82246,// 62 PAY  40 

    0x72ace3ad,// 63 PAY  41 

    0xb7671764,// 64 PAY  42 

    0x20127803,// 65 PAY  43 

    0x02a96c27,// 66 PAY  44 

    0x197dcb06,// 67 PAY  45 

    0xcc71039b,// 68 PAY  46 

    0x8d0c2edb,// 69 PAY  47 

    0xb13955df,// 70 PAY  48 

    0x1b16f4e5,// 71 PAY  49 

    0x77afe6bd,// 72 PAY  50 

    0x4160f129,// 73 PAY  51 

    0x957c645f,// 74 PAY  52 

    0xd989e5e4,// 75 PAY  53 

    0x3b4d9dc0,// 76 PAY  54 

    0x672cb700,// 77 PAY  55 

    0x83d814fd,// 78 PAY  56 

    0x3e0ec623,// 79 PAY  57 

    0x43c0c8eb,// 80 PAY  58 

    0x019f367c,// 81 PAY  59 

    0x1406b4fa,// 82 PAY  60 

    0x27fb70d9,// 83 PAY  61 

    0x266c6d1e,// 84 PAY  62 

    0x4b20c7dc,// 85 PAY  63 

    0x03b76282,// 86 PAY  64 

    0xd2a6e386,// 87 PAY  65 

    0xde51fe00,// 88 PAY  66 

    0x8ab65831,// 89 PAY  67 

    0x3bf032c6,// 90 PAY  68 

    0xc451f98c,// 91 PAY  69 

    0x7b5b38b5,// 92 PAY  70 

    0x41b0e0e6,// 93 PAY  71 

    0xa416747b,// 94 PAY  72 

    0x4b581098,// 95 PAY  73 

    0xc3091a7d,// 96 PAY  74 

    0xbb212062,// 97 PAY  75 

    0x862bfcb1,// 98 PAY  76 

    0x3090f6b1,// 99 PAY  77 

    0x6b7d2532,// 100 PAY  78 

    0xad952fb8,// 101 PAY  79 

    0x01f05f27,// 102 PAY  80 

    0xa3e203a3,// 103 PAY  81 

    0xcc3af054,// 104 PAY  82 

    0x503d3497,// 105 PAY  83 

    0xd388cf91,// 106 PAY  84 

    0x437f59aa,// 107 PAY  85 

    0x97e3caf8,// 108 PAY  86 

    0xa7393f66,// 109 PAY  87 

    0xb2ddefea,// 110 PAY  88 

    0x428aae8f,// 111 PAY  89 

    0x926fca55,// 112 PAY  90 

    0x2f323f63,// 113 PAY  91 

    0x9550ad7c,// 114 PAY  92 

    0x67c046da,// 115 PAY  93 

    0xbddd4237,// 116 PAY  94 

    0x1c0a5fcc,// 117 PAY  95 

    0xedc26e9c,// 118 PAY  96 

    0xc2cfd801,// 119 PAY  97 

    0x74fafe31,// 120 PAY  98 

    0x8a211edc,// 121 PAY  99 

    0x03381754,// 122 PAY 100 

    0x708f3ae7,// 123 PAY 101 

    0xc9dc5b17,// 124 PAY 102 

    0x876f1654,// 125 PAY 103 

    0x8ae89f9c,// 126 PAY 104 

    0xd3499088,// 127 PAY 105 

    0x9103fb25,// 128 PAY 106 

    0x8420d5b3,// 129 PAY 107 

    0x49fbde5f,// 130 PAY 108 

    0xab55ddfd,// 131 PAY 109 

    0x208945cf,// 132 PAY 110 

    0xf6242b1d,// 133 PAY 111 

    0x85669971,// 134 PAY 112 

    0xa42a1eeb,// 135 PAY 113 

    0x1b1843cf,// 136 PAY 114 

    0x3d05e0ad,// 137 PAY 115 

    0xbb6e4418,// 138 PAY 116 

    0x54828579,// 139 PAY 117 

    0x2dfe922c,// 140 PAY 118 

    0x3186ebc9,// 141 PAY 119 

    0x6304cf46,// 142 PAY 120 

    0x5fce9f5a,// 143 PAY 121 

    0x02e7fd92,// 144 PAY 122 

    0x260ad9ee,// 145 PAY 123 

    0x699f598e,// 146 PAY 124 

    0x839c4e66,// 147 PAY 125 

    0xcbef26fe,// 148 PAY 126 

    0xedaf32ca,// 149 PAY 127 

    0xad024103,// 150 PAY 128 

    0x0f9e1d59,// 151 PAY 129 

    0xe8f20c7c,// 152 PAY 130 

    0x3ba806c4,// 153 PAY 131 

    0x651a3886,// 154 PAY 132 

    0x40495a3f,// 155 PAY 133 

    0x0ba1b294,// 156 PAY 134 

    0x6e6e84db,// 157 PAY 135 

    0x7baed7c9,// 158 PAY 136 

    0x2247cf11,// 159 PAY 137 

    0xe923493f,// 160 PAY 138 

    0x5f69f419,// 161 PAY 139 

    0xc82749a1,// 162 PAY 140 

    0x875a4347,// 163 PAY 141 

    0xb7ddd65d,// 164 PAY 142 

    0x6a9210d4,// 165 PAY 143 

    0x60db1108,// 166 PAY 144 

    0x8f831386,// 167 PAY 145 

    0xf0183f69,// 168 PAY 146 

    0xe6881ed6,// 169 PAY 147 

    0xe46b653f,// 170 PAY 148 

    0x561a6f81,// 171 PAY 149 

    0x11125dd0,// 172 PAY 150 

    0xdfe674ea,// 173 PAY 151 

    0x8a9d5ed9,// 174 PAY 152 

    0xd1f270bf,// 175 PAY 153 

    0x60f86c1f,// 176 PAY 154 

    0x88432d99,// 177 PAY 155 

    0x4dcd2456,// 178 PAY 156 

    0x32ae973f,// 179 PAY 157 

    0xfbae3976,// 180 PAY 158 

    0xabd98802,// 181 PAY 159 

    0xbabb966d,// 182 PAY 160 

    0xb4f92e7a,// 183 PAY 161 

    0x1a9f3570,// 184 PAY 162 

    0x1cc3b816,// 185 PAY 163 

    0x266de4c9,// 186 PAY 164 

    0x56bd73a8,// 187 PAY 165 

    0x6a76eeda,// 188 PAY 166 

    0x10409a76,// 189 PAY 167 

    0xe62370c4,// 190 PAY 168 

    0x062cf065,// 191 PAY 169 

    0x69d676e7,// 192 PAY 170 

    0x332d09d7,// 193 PAY 171 

    0xdb58c621,// 194 PAY 172 

    0x9ece4892,// 195 PAY 173 

    0x1e388c8e,// 196 PAY 174 

    0xd7693718,// 197 PAY 175 

    0x9fba92e1,// 198 PAY 176 

    0x08b70ebf,// 199 PAY 177 

    0x58e262d0,// 200 PAY 178 

    0x0a16ae06,// 201 PAY 179 

    0x512bb4ab,// 202 PAY 180 

    0x74a45d36,// 203 PAY 181 

    0x980afd1a,// 204 PAY 182 

    0xa736c9b4,// 205 PAY 183 

    0xa9c15fc2,// 206 PAY 184 

    0xa1ea161c,// 207 PAY 185 

    0x2e96d2ab,// 208 PAY 186 

    0x0b42d3e3,// 209 PAY 187 

    0xe0df1c89,// 210 PAY 188 

    0x1a50666f,// 211 PAY 189 

    0xcab69eb9,// 212 PAY 190 

    0x7ec427b2,// 213 PAY 191 

    0x02d55436,// 214 PAY 192 

    0xa5c044a2,// 215 PAY 193 

    0xe66bc0e2,// 216 PAY 194 

    0x4f05ae00,// 217 PAY 195 

    0xa3d069cd,// 218 PAY 196 

    0x2a9c65f4,// 219 PAY 197 

    0x76fd03cb,// 220 PAY 198 

    0x96898c8f,// 221 PAY 199 

    0xd6e5094f,// 222 PAY 200 

    0xe90c25ba,// 223 PAY 201 

    0x47cb2c94,// 224 PAY 202 

    0xb57de792,// 225 PAY 203 

    0x7ca9aa21,// 226 PAY 204 

    0xa26014db,// 227 PAY 205 

    0xac313512,// 228 PAY 206 

    0x46304b64,// 229 PAY 207 

    0x9a472e34,// 230 PAY 208 

    0xb52ba30f,// 231 PAY 209 

    0xc328452a,// 232 PAY 210 

    0x159e10b5,// 233 PAY 211 

    0x9c182e6a,// 234 PAY 212 

    0x10fb2265,// 235 PAY 213 

    0x4c6ee419,// 236 PAY 214 

    0x879de6b9,// 237 PAY 215 

    0xaa2f7d22,// 238 PAY 216 

    0x72b59c76,// 239 PAY 217 

    0x582260fd,// 240 PAY 218 

    0x74456f23,// 241 PAY 219 

    0x8e932a55,// 242 PAY 220 

    0x3b236473,// 243 PAY 221 

    0x11ad1d40,// 244 PAY 222 

    0xb4ccb500,// 245 PAY 223 

    0xa845d47e,// 246 PAY 224 

    0xe64dc6df,// 247 PAY 225 

    0xc86aa7e0,// 248 PAY 226 

    0x4d708bd4,// 249 PAY 227 

    0x27786db9,// 250 PAY 228 

    0xedadb67e,// 251 PAY 229 

    0x6b216d67,// 252 PAY 230 

    0x150a3dc0,// 253 PAY 231 

    0xb1768696,// 254 PAY 232 

    0x1f4938ba,// 255 PAY 233 

    0x392b415f,// 256 PAY 234 

    0xe064f10f,// 257 PAY 235 

    0x1dc688e8,// 258 PAY 236 

    0x6719acd0,// 259 PAY 237 

    0x5961d7a7,// 260 PAY 238 

    0x0bc503ae,// 261 PAY 239 

    0x6fa45baf,// 262 PAY 240 

    0xe6a01860,// 263 PAY 241 

    0x52026088,// 264 PAY 242 

    0x031f4c79,// 265 PAY 243 

    0xe4738179,// 266 PAY 244 

    0xdad371c8,// 267 PAY 245 

    0x48cd81e6,// 268 PAY 246 

    0x3aa7ae5e,// 269 PAY 247 

    0x070f8428,// 270 PAY 248 

    0xd68c4d23,// 271 PAY 249 

    0x04125529,// 272 PAY 250 

    0xa02c228b,// 273 PAY 251 

    0x74a640a0,// 274 PAY 252 

    0xf129ad4d,// 275 PAY 253 

    0x16dec9ad,// 276 PAY 254 

    0x19e6a43e,// 277 PAY 255 

    0x37b4a14e,// 278 PAY 256 

    0x1195ad37,// 279 PAY 257 

    0x41151898,// 280 PAY 258 

    0x414a043e,// 281 PAY 259 

    0x1540b472,// 282 PAY 260 

    0x619a2414,// 283 PAY 261 

    0x10915981,// 284 PAY 262 

    0x54c2f0fb,// 285 PAY 263 

    0x97dbc6b6,// 286 PAY 264 

    0xeef314e5,// 287 PAY 265 

    0xc67fdea9,// 288 PAY 266 

    0x01849bcc,// 289 PAY 267 

    0x52277cc3,// 290 PAY 268 

    0x72886395,// 291 PAY 269 

    0x61138f97,// 292 PAY 270 

    0x96650ba0,// 293 PAY 271 

    0x79efe11b,// 294 PAY 272 

    0xd4dc6148,// 295 PAY 273 

    0x75d6b56d,// 296 PAY 274 

    0x321d000e,// 297 PAY 275 

    0xb3af92b4,// 298 PAY 276 

    0xd66bc549,// 299 PAY 277 

    0x7ab71966,// 300 PAY 278 

    0x6d19ef96,// 301 PAY 279 

    0x18ec8aea,// 302 PAY 280 

    0x6870f3c7,// 303 PAY 281 

    0x3133984a,// 304 PAY 282 

    0xb414154d,// 305 PAY 283 

    0xc8a0b9f4,// 306 PAY 284 

    0xffca68d8,// 307 PAY 285 

    0x49aa31dd,// 308 PAY 286 

    0x0c4dfa42,// 309 PAY 287 

    0xd709761b,// 310 PAY 288 

    0x22236c82,// 311 PAY 289 

    0x8f1526a8,// 312 PAY 290 

    0x48a22d9e,// 313 PAY 291 

    0x1536ece5,// 314 PAY 292 

    0x9f19d8b8,// 315 PAY 293 

    0x6ec656bb,// 316 PAY 294 

    0xcc1e9aba,// 317 PAY 295 

    0x4320ea86,// 318 PAY 296 

    0x456402db,// 319 PAY 297 

    0xd0741ea3,// 320 PAY 298 

    0x5e79be86,// 321 PAY 299 

    0xda6aec87,// 322 PAY 300 

    0xa794c56a,// 323 PAY 301 

    0xd075e4b2,// 324 PAY 302 

    0xac27cc49,// 325 PAY 303 

    0xf87ab867,// 326 PAY 304 

    0x50c37d06,// 327 PAY 305 

    0x3d54f335,// 328 PAY 306 

    0x5a81f5c5,// 329 PAY 307 

    0x7df737a7,// 330 PAY 308 

    0x636f4298,// 331 PAY 309 

    0x549480c4,// 332 PAY 310 

    0xee2539bd,// 333 PAY 311 

    0x4c6b49d3,// 334 PAY 312 

    0x7c01b34a,// 335 PAY 313 

    0xd650e049,// 336 PAY 314 

    0x5d61bc1b,// 337 PAY 315 

    0xb1b14c0e,// 338 PAY 316 

    0x1c669b1d,// 339 PAY 317 

    0xbcc804c4,// 340 PAY 318 

    0xcbc3d10b,// 341 PAY 319 

    0x079f2f6a,// 342 PAY 320 

    0x0f65d245,// 343 PAY 321 

    0x7e5141d7,// 344 PAY 322 

    0x81f8b312,// 345 PAY 323 

    0x671f0cc5,// 346 PAY 324 

    0x126366b1,// 347 PAY 325 

    0x12acd4bf,// 348 PAY 326 

    0x6f639457,// 349 PAY 327 

    0x657d769c,// 350 PAY 328 

    0x645b6d9f,// 351 PAY 329 

    0x4750bdf6,// 352 PAY 330 

    0x54ecc2da,// 353 PAY 331 

    0x011410db,// 354 PAY 332 

    0x3b94845d,// 355 PAY 333 

    0xf4c7c82e,// 356 PAY 334 

    0x44c82d63,// 357 PAY 335 

    0x12bc3678,// 358 PAY 336 

    0x60f97e96,// 359 PAY 337 

    0x76bf0ba4,// 360 PAY 338 

    0x809959ae,// 361 PAY 339 

    0xc681d4db,// 362 PAY 340 

    0xc735e61e,// 363 PAY 341 

    0x31ccd584,// 364 PAY 342 

    0xa5c7b88e,// 365 PAY 343 

    0x5aa468ea,// 366 PAY 344 

    0xbc2241c3,// 367 PAY 345 

    0x711d42d9,// 368 PAY 346 

    0x3d88babd,// 369 PAY 347 

    0x01af02c0,// 370 PAY 348 

    0x4d5c96f2,// 371 PAY 349 

    0x7993801f,// 372 PAY 350 

    0xfb707741,// 373 PAY 351 

    0xc9174fca,// 374 PAY 352 

    0xca7e2fef,// 375 PAY 353 

    0x27cae18e,// 376 PAY 354 

    0x65d7310d,// 377 PAY 355 

    0x0c431b3c,// 378 PAY 356 

    0x1154fc05,// 379 PAY 357 

    0x4868df36,// 380 PAY 358 

    0xd875aaa6,// 381 PAY 359 

    0x2ad2aea2,// 382 PAY 360 

    0x386e5c11,// 383 PAY 361 

    0x1b1e7b72,// 384 PAY 362 

    0x8af1055e,// 385 PAY 363 

    0x4af454fa,// 386 PAY 364 

    0x0fde3c77,// 387 PAY 365 

    0x1c67663e,// 388 PAY 366 

    0x9d249404,// 389 PAY 367 

    0x6e6068a1,// 390 PAY 368 

    0xebbe1988,// 391 PAY 369 

    0xf5f10994,// 392 PAY 370 

    0x6a8684ee,// 393 PAY 371 

    0x85255bd2,// 394 PAY 372 

    0x9e5596b7,// 395 PAY 373 

    0x7f0c8aa1,// 396 PAY 374 

    0x847acec6,// 397 PAY 375 

    0xa32d6ece,// 398 PAY 376 

    0x8b8e35ab,// 399 PAY 377 

    0xd84e47a7,// 400 PAY 378 

    0x7f4f1f56,// 401 PAY 379 

    0x3502eba3,// 402 PAY 380 

    0x23f219ee,// 403 PAY 381 

    0x99c1166b,// 404 PAY 382 

    0xb37c7efc,// 405 PAY 383 

    0xecc5d9ac,// 406 PAY 384 

    0xd0721a15,// 407 PAY 385 

    0x8795235f,// 408 PAY 386 

    0x1c0e754f,// 409 PAY 387 

    0x6a7ac7f1,// 410 PAY 388 

    0x5c1b6edf,// 411 PAY 389 

    0x4676b35c,// 412 PAY 390 

    0x17e68557,// 413 PAY 391 

    0x3caadf90,// 414 PAY 392 

    0xfeca4f4e,// 415 PAY 393 

    0x61e2f92c,// 416 PAY 394 

    0xd9968cc4,// 417 PAY 395 

    0xd6165c03,// 418 PAY 396 

    0xe85e1c24,// 419 PAY 397 

    0x1b128abe,// 420 PAY 398 

    0x65e7ba07,// 421 PAY 399 

    0xac54791b,// 422 PAY 400 

    0x4cc718b8,// 423 PAY 401 

    0x968d2837,// 424 PAY 402 

    0xe5b2efcf,// 425 PAY 403 

    0xcfc92cbd,// 426 PAY 404 

    0xac601164,// 427 PAY 405 

    0x39eada58,// 428 PAY 406 

    0x76e383db,// 429 PAY 407 

    0x4a7134d2,// 430 PAY 408 

    0x678bf395,// 431 PAY 409 

    0x04045901,// 432 PAY 410 

    0x522111af,// 433 PAY 411 

    0x35846fc7,// 434 PAY 412 

    0xa5bb7eb7,// 435 PAY 413 

    0x71a7442f,// 436 PAY 414 

    0x9b8ba1ab,// 437 PAY 415 

    0xf4d4730f,// 438 PAY 416 

    0x32ec359a,// 439 PAY 417 

    0x8e741558,// 440 PAY 418 

    0xc17d4821,// 441 PAY 419 

    0x4075fc9c,// 442 PAY 420 

    0x54520906,// 443 PAY 421 

    0x7cd61f89,// 444 PAY 422 

    0x1df4061f,// 445 PAY 423 

    0x4eb023b4,// 446 PAY 424 

    0xa4d9cdd1,// 447 PAY 425 

    0x09849e41,// 448 PAY 426 

    0xe79290b5,// 449 PAY 427 

    0xb38d1a1a,// 450 PAY 428 

    0xc95cddc9,// 451 PAY 429 

    0x26076e98,// 452 PAY 430 

    0x8d26dbf3,// 453 PAY 431 

    0x181887eb,// 454 PAY 432 

    0x25d51417,// 455 PAY 433 

    0x7f2c9d78,// 456 PAY 434 

    0xd72a1675,// 457 PAY 435 

    0x820920fb,// 458 PAY 436 

    0x7f38fa8d,// 459 PAY 437 

    0x59bb5c84,// 460 PAY 438 

    0x93b5d46d,// 461 PAY 439 

    0x5c88af5e,// 462 PAY 440 

    0x555aca86,// 463 PAY 441 

    0x661ce86d,// 464 PAY 442 

    0x33d3271b,// 465 PAY 443 

    0xa221e79d,// 466 PAY 444 

    0xf9b8f25f,// 467 PAY 445 

    0x6440b4df,// 468 PAY 446 

    0x1dbab2fa,// 469 PAY 447 

    0xd567ec02,// 470 PAY 448 

    0xf6fb6dda,// 471 PAY 449 

    0x31291b60,// 472 PAY 450 

    0x61cf660f,// 473 PAY 451 

    0xdb70418c,// 474 PAY 452 

    0x303b3b4c,// 475 PAY 453 

    0x51650c41,// 476 PAY 454 

    0x50c73ff6,// 477 PAY 455 

    0x8bc1824e,// 478 PAY 456 

    0xc9d78aec,// 479 PAY 457 

    0x575912fb,// 480 PAY 458 

/// STA is 1 words. 

/// STA num_pkts       : 73 

/// STA pkt_idx        : 76 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x71 

    0x01317149 // 481 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt10_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0b 

/// ECH pdu_tag        : 0x00 

    0x000b0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x804428f6,// 4 SCX   2 

    0x000071c2,// 5 SCX   3 

    0x16811a67,// 6 SCX   4 

    0x7b44f299,// 7 SCX   5 

    0x557af4d8,// 8 SCX   6 

    0xb2b9a8d0,// 9 SCX   7 

    0xd58d4a01,// 10 SCX   8 

    0x745b345c,// 11 SCX   9 

    0x8fec857e,// 12 SCX  10 

    0x1f7a318e,// 13 SCX  11 

    0x93dd9f19,// 14 SCX  12 

    0x3d62e573,// 15 SCX  13 

    0xf1193292,// 16 SCX  14 

    0x9f1295b6,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1771 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1595 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1595 

/// BFD lencrypto      : 760 

/// BFD ofstcrypto     : 340 

/// BFD (ofst+len)cry  : 1100 

/// BFD ofstiv         : 40 

/// BFD ofsticv        : 1620 

    0x0000063b,// 18 BFD   1 

    0x015402f8,// 19 BFD   2 

    0x06540028,// 20 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c000cf1,// 21 MFM   1 

    0xf31f26e9,// 22 MFM   2 

    0x3256590f,// 23 MFM   3 

    0x0e910130,// 24 MFM   4 

    0xade8dca8,// 25 MFM   5 

    0x8e48fa5a,// 26 MFM   6 

    0xa16431fa,// 27 MFM   7 

    0xf31da1d3,// 28 MFM   8 

    0xb2350eee,// 29 MFM   9 

    0xa1f78849,// 30 MFM  10 

    0x8c84ece2,// 31 MFM  11 

    0x21d8a026,// 32 MFM  12 

    0x8b1ae113,// 33 MFM  13 

    0xc16f553b,// 34 MFM  14 

    0xe5bd2612,// 35 MFM  15 

    0x861fa655,// 36 MFM  16 

/// BDA is 444 words. 

/// BDA size     is 1771 (0x6eb) 

/// BDA id       is 0xdf39 

    0x06ebdf39,// 37 BDA   1 

/// PAY Generic Data size   : 1771 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xee1bf2e6,// 38 PAY   1 

    0xf452d10c,// 39 PAY   2 

    0x85914ff2,// 40 PAY   3 

    0xf46bb6ff,// 41 PAY   4 

    0xca3b02c8,// 42 PAY   5 

    0x179d3321,// 43 PAY   6 

    0x40bc7475,// 44 PAY   7 

    0x6939b2d6,// 45 PAY   8 

    0xfb346fc5,// 46 PAY   9 

    0x1d9dc3b7,// 47 PAY  10 

    0x5a276947,// 48 PAY  11 

    0xe12f0469,// 49 PAY  12 

    0xcdb142b0,// 50 PAY  13 

    0x582450bd,// 51 PAY  14 

    0x082dc4f0,// 52 PAY  15 

    0xdb61169d,// 53 PAY  16 

    0xd70d8214,// 54 PAY  17 

    0x71093e50,// 55 PAY  18 

    0xe6d46826,// 56 PAY  19 

    0x544547ce,// 57 PAY  20 

    0x4aebcdce,// 58 PAY  21 

    0xcfb5fc5f,// 59 PAY  22 

    0x7e78963d,// 60 PAY  23 

    0x3c098fab,// 61 PAY  24 

    0x99a04fbf,// 62 PAY  25 

    0x215bf313,// 63 PAY  26 

    0x648f4358,// 64 PAY  27 

    0x21dfa479,// 65 PAY  28 

    0x3ff61a7f,// 66 PAY  29 

    0x091c03e4,// 67 PAY  30 

    0xf6b59947,// 68 PAY  31 

    0x7ecf2943,// 69 PAY  32 

    0x5b75308f,// 70 PAY  33 

    0xbd93d5d9,// 71 PAY  34 

    0xc693ce4c,// 72 PAY  35 

    0x2250d1a3,// 73 PAY  36 

    0x215cd62e,// 74 PAY  37 

    0x203fb0e0,// 75 PAY  38 

    0x10d44d56,// 76 PAY  39 

    0x600b65a5,// 77 PAY  40 

    0x0ef18eee,// 78 PAY  41 

    0x897bf6a8,// 79 PAY  42 

    0xd1b72c47,// 80 PAY  43 

    0x5cbd95bc,// 81 PAY  44 

    0xbac4a43e,// 82 PAY  45 

    0xa5b39e40,// 83 PAY  46 

    0x20b7501f,// 84 PAY  47 

    0xb55fd748,// 85 PAY  48 

    0x7a17b832,// 86 PAY  49 

    0xb0f0bff3,// 87 PAY  50 

    0x37ae3c0a,// 88 PAY  51 

    0xfc5acb2e,// 89 PAY  52 

    0x623b85bf,// 90 PAY  53 

    0x79ca7d62,// 91 PAY  54 

    0x4797b17e,// 92 PAY  55 

    0xa1013847,// 93 PAY  56 

    0x90b68566,// 94 PAY  57 

    0x251dbe84,// 95 PAY  58 

    0xbb521501,// 96 PAY  59 

    0x254209d7,// 97 PAY  60 

    0xb481ee7d,// 98 PAY  61 

    0xcca6c4f2,// 99 PAY  62 

    0x73c77860,// 100 PAY  63 

    0xccccf6ab,// 101 PAY  64 

    0x7f30b95b,// 102 PAY  65 

    0xaff7a182,// 103 PAY  66 

    0x33e5eb96,// 104 PAY  67 

    0x7c13d8ec,// 105 PAY  68 

    0x05a60ea7,// 106 PAY  69 

    0xdaccf557,// 107 PAY  70 

    0xc971e42a,// 108 PAY  71 

    0x70092fbd,// 109 PAY  72 

    0x5a378c3e,// 110 PAY  73 

    0x417f4264,// 111 PAY  74 

    0xd8047429,// 112 PAY  75 

    0x3806fba2,// 113 PAY  76 

    0xc98a737e,// 114 PAY  77 

    0x43f41260,// 115 PAY  78 

    0xa3f9307e,// 116 PAY  79 

    0xfd2943ec,// 117 PAY  80 

    0x340e78d7,// 118 PAY  81 

    0xf379c5e8,// 119 PAY  82 

    0x51e58937,// 120 PAY  83 

    0xb46807da,// 121 PAY  84 

    0xa7a46b3b,// 122 PAY  85 

    0xc94a2ffa,// 123 PAY  86 

    0x6183e7e9,// 124 PAY  87 

    0x2ed42d86,// 125 PAY  88 

    0xdfc21407,// 126 PAY  89 

    0x33a679fc,// 127 PAY  90 

    0xda47cfef,// 128 PAY  91 

    0xb9e57f17,// 129 PAY  92 

    0x58e6b1d0,// 130 PAY  93 

    0x68a4924a,// 131 PAY  94 

    0x951e5996,// 132 PAY  95 

    0xdc3a0d0f,// 133 PAY  96 

    0xdead04e7,// 134 PAY  97 

    0x33320299,// 135 PAY  98 

    0xeb88fceb,// 136 PAY  99 

    0xe7d7aee9,// 137 PAY 100 

    0x44b47a07,// 138 PAY 101 

    0x4c8bca5a,// 139 PAY 102 

    0x4a08f668,// 140 PAY 103 

    0xd82d42af,// 141 PAY 104 

    0x5865b1f9,// 142 PAY 105 

    0x7ec97091,// 143 PAY 106 

    0x27ca1bea,// 144 PAY 107 

    0x55d3bf13,// 145 PAY 108 

    0x62695bd7,// 146 PAY 109 

    0xd0898167,// 147 PAY 110 

    0xf3f4fa30,// 148 PAY 111 

    0x9b135781,// 149 PAY 112 

    0x00dbd7a8,// 150 PAY 113 

    0x4036c3ab,// 151 PAY 114 

    0x8976fc68,// 152 PAY 115 

    0x09f3d3f4,// 153 PAY 116 

    0xcafb6977,// 154 PAY 117 

    0x77ad19e8,// 155 PAY 118 

    0xb1ca62c3,// 156 PAY 119 

    0x28151451,// 157 PAY 120 

    0xd349fd53,// 158 PAY 121 

    0x64ca3c0d,// 159 PAY 122 

    0x60268f53,// 160 PAY 123 

    0xbd3aaad9,// 161 PAY 124 

    0x9bae0d37,// 162 PAY 125 

    0xbbc92e7d,// 163 PAY 126 

    0x3f1286d2,// 164 PAY 127 

    0x8e202d19,// 165 PAY 128 

    0x39711b59,// 166 PAY 129 

    0x2619919b,// 167 PAY 130 

    0x63ab44a2,// 168 PAY 131 

    0x0e85da93,// 169 PAY 132 

    0x0c8862fa,// 170 PAY 133 

    0x3abfeef3,// 171 PAY 134 

    0xfc94724e,// 172 PAY 135 

    0xdf564e6c,// 173 PAY 136 

    0x22b2a510,// 174 PAY 137 

    0x2fce1a94,// 175 PAY 138 

    0xf8d4697e,// 176 PAY 139 

    0x3b65b5d4,// 177 PAY 140 

    0x8e2ceb99,// 178 PAY 141 

    0x2250101c,// 179 PAY 142 

    0xd1fd989a,// 180 PAY 143 

    0x4cddc1b4,// 181 PAY 144 

    0xc25f9d3c,// 182 PAY 145 

    0xff3d609a,// 183 PAY 146 

    0x2b7a2ecc,// 184 PAY 147 

    0x382ac12f,// 185 PAY 148 

    0x7db9e233,// 186 PAY 149 

    0x9eb06033,// 187 PAY 150 

    0x6c840bdd,// 188 PAY 151 

    0x6e5280b2,// 189 PAY 152 

    0xec709f49,// 190 PAY 153 

    0x79ca3613,// 191 PAY 154 

    0xb3fbaea4,// 192 PAY 155 

    0x94e67e5c,// 193 PAY 156 

    0x42e6e93f,// 194 PAY 157 

    0x3205ae1e,// 195 PAY 158 

    0xbc45d361,// 196 PAY 159 

    0xc70f6f94,// 197 PAY 160 

    0x576bf59f,// 198 PAY 161 

    0x65bef95b,// 199 PAY 162 

    0xe6d82465,// 200 PAY 163 

    0x394c1ac1,// 201 PAY 164 

    0x4a2d2ba6,// 202 PAY 165 

    0x93d285c0,// 203 PAY 166 

    0x8e835317,// 204 PAY 167 

    0x7f7c815d,// 205 PAY 168 

    0xa00a84b0,// 206 PAY 169 

    0x30c10a35,// 207 PAY 170 

    0x9e93121e,// 208 PAY 171 

    0x3fc98e51,// 209 PAY 172 

    0xf713563a,// 210 PAY 173 

    0xc95e35f1,// 211 PAY 174 

    0x83965941,// 212 PAY 175 

    0x82420591,// 213 PAY 176 

    0xc9600ade,// 214 PAY 177 

    0xfac7f794,// 215 PAY 178 

    0xbf088ba9,// 216 PAY 179 

    0x48a63343,// 217 PAY 180 

    0x6e83190b,// 218 PAY 181 

    0xf4a40c49,// 219 PAY 182 

    0x9f1c4370,// 220 PAY 183 

    0x23039eb7,// 221 PAY 184 

    0xfccde0a0,// 222 PAY 185 

    0x62854394,// 223 PAY 186 

    0x28ba1a2a,// 224 PAY 187 

    0xf4aeb2a4,// 225 PAY 188 

    0xe7be48cd,// 226 PAY 189 

    0xed66407b,// 227 PAY 190 

    0xf545712b,// 228 PAY 191 

    0x7d80a6ba,// 229 PAY 192 

    0xac5fa084,// 230 PAY 193 

    0xff50cb64,// 231 PAY 194 

    0x1fe2aa75,// 232 PAY 195 

    0xb51fd6b5,// 233 PAY 196 

    0xa49845f0,// 234 PAY 197 

    0xb3fe4d55,// 235 PAY 198 

    0xa3721ce4,// 236 PAY 199 

    0x732eb947,// 237 PAY 200 

    0xd0567033,// 238 PAY 201 

    0x044298bf,// 239 PAY 202 

    0xb8aa370f,// 240 PAY 203 

    0x21af3e1f,// 241 PAY 204 

    0x36578f4b,// 242 PAY 205 

    0xbb0d704a,// 243 PAY 206 

    0x3cddec8c,// 244 PAY 207 

    0xebef1fc1,// 245 PAY 208 

    0x4146ce29,// 246 PAY 209 

    0xcd4d406d,// 247 PAY 210 

    0x1612151a,// 248 PAY 211 

    0xf50c14e8,// 249 PAY 212 

    0x81bdc3f4,// 250 PAY 213 

    0x399ed6f8,// 251 PAY 214 

    0x1f5c1570,// 252 PAY 215 

    0xfd8096a7,// 253 PAY 216 

    0x778a31c9,// 254 PAY 217 

    0x4ee8c380,// 255 PAY 218 

    0x834bab8d,// 256 PAY 219 

    0xd015ee62,// 257 PAY 220 

    0xd562d416,// 258 PAY 221 

    0x7276a7fb,// 259 PAY 222 

    0x87cec864,// 260 PAY 223 

    0x259d3ec0,// 261 PAY 224 

    0x4b4ebaea,// 262 PAY 225 

    0xa9b014ba,// 263 PAY 226 

    0x55fee78c,// 264 PAY 227 

    0x74c7cfee,// 265 PAY 228 

    0x81a27cfc,// 266 PAY 229 

    0x6da0af9b,// 267 PAY 230 

    0xa2843dfb,// 268 PAY 231 

    0x59de8789,// 269 PAY 232 

    0xe178ef7c,// 270 PAY 233 

    0x52d445e0,// 271 PAY 234 

    0x121fe05d,// 272 PAY 235 

    0x57a91eff,// 273 PAY 236 

    0x5947faaa,// 274 PAY 237 

    0xa106c46e,// 275 PAY 238 

    0x2488f4e7,// 276 PAY 239 

    0x79517006,// 277 PAY 240 

    0x42e7e40d,// 278 PAY 241 

    0x43081cfa,// 279 PAY 242 

    0x54ff8a68,// 280 PAY 243 

    0xa6b97207,// 281 PAY 244 

    0x9ed679f0,// 282 PAY 245 

    0x26b945a2,// 283 PAY 246 

    0xbbccbb22,// 284 PAY 247 

    0x84b05a30,// 285 PAY 248 

    0x21cf18de,// 286 PAY 249 

    0xe04acad2,// 287 PAY 250 

    0x5ab01f4c,// 288 PAY 251 

    0x04ac2aed,// 289 PAY 252 

    0xc04f42f6,// 290 PAY 253 

    0xfed73ad3,// 291 PAY 254 

    0x557be9ad,// 292 PAY 255 

    0xc63987b8,// 293 PAY 256 

    0x1472d3cc,// 294 PAY 257 

    0x60525c36,// 295 PAY 258 

    0x31367e61,// 296 PAY 259 

    0x35c50bce,// 297 PAY 260 

    0x8c3ed95d,// 298 PAY 261 

    0x82e0c578,// 299 PAY 262 

    0xe20ea8ca,// 300 PAY 263 

    0x5689ec6a,// 301 PAY 264 

    0xae60fcd1,// 302 PAY 265 

    0x5d16bf3f,// 303 PAY 266 

    0x0fdd6f1d,// 304 PAY 267 

    0x7362c252,// 305 PAY 268 

    0xa98325b6,// 306 PAY 269 

    0x704e29a4,// 307 PAY 270 

    0x5117476c,// 308 PAY 271 

    0x01d721a8,// 309 PAY 272 

    0x83ffc8ee,// 310 PAY 273 

    0x78e6f56d,// 311 PAY 274 

    0x47ac4c35,// 312 PAY 275 

    0x7ff2a896,// 313 PAY 276 

    0xef3c2eda,// 314 PAY 277 

    0x34e080c5,// 315 PAY 278 

    0x7db273a6,// 316 PAY 279 

    0x244097a5,// 317 PAY 280 

    0x9904da4b,// 318 PAY 281 

    0x990ac20c,// 319 PAY 282 

    0x764b0d03,// 320 PAY 283 

    0xf0bde167,// 321 PAY 284 

    0xa0d6ec2b,// 322 PAY 285 

    0x0e57c379,// 323 PAY 286 

    0xa17a3bac,// 324 PAY 287 

    0xbe897eaa,// 325 PAY 288 

    0x7adeaa10,// 326 PAY 289 

    0x2562f954,// 327 PAY 290 

    0x78dc6bcd,// 328 PAY 291 

    0x9ccd21ad,// 329 PAY 292 

    0xb1936c93,// 330 PAY 293 

    0xa565166f,// 331 PAY 294 

    0x7124ecd2,// 332 PAY 295 

    0x72c4e093,// 333 PAY 296 

    0x3108d688,// 334 PAY 297 

    0x0d1dc410,// 335 PAY 298 

    0x5c9b2774,// 336 PAY 299 

    0x32c2c30a,// 337 PAY 300 

    0x8b789ced,// 338 PAY 301 

    0x9b951446,// 339 PAY 302 

    0xd2a99560,// 340 PAY 303 

    0xc5c1b165,// 341 PAY 304 

    0x64696585,// 342 PAY 305 

    0xfc3a5a3d,// 343 PAY 306 

    0xfe46bd60,// 344 PAY 307 

    0xcd8c1a8a,// 345 PAY 308 

    0x0cfbe1a7,// 346 PAY 309 

    0x2da2416c,// 347 PAY 310 

    0x85142e93,// 348 PAY 311 

    0x2ee9cb5e,// 349 PAY 312 

    0xd8a0b38c,// 350 PAY 313 

    0xce61beb0,// 351 PAY 314 

    0xa70441b0,// 352 PAY 315 

    0xf53654ff,// 353 PAY 316 

    0x7bee950e,// 354 PAY 317 

    0x5313f503,// 355 PAY 318 

    0xb557dacb,// 356 PAY 319 

    0xa06c4a4c,// 357 PAY 320 

    0x4e0b35a8,// 358 PAY 321 

    0x41bdde50,// 359 PAY 322 

    0x84242fab,// 360 PAY 323 

    0x69847d6d,// 361 PAY 324 

    0xb8ee0e7d,// 362 PAY 325 

    0x04a454d3,// 363 PAY 326 

    0x042aa08c,// 364 PAY 327 

    0x504f7737,// 365 PAY 328 

    0x506a32fc,// 366 PAY 329 

    0xc2d9bdcd,// 367 PAY 330 

    0xcd1f3a29,// 368 PAY 331 

    0xeddac9c8,// 369 PAY 332 

    0x54185857,// 370 PAY 333 

    0x41b194b9,// 371 PAY 334 

    0xc742bb6c,// 372 PAY 335 

    0x2553aff1,// 373 PAY 336 

    0x2e292ae4,// 374 PAY 337 

    0x6f42a0ff,// 375 PAY 338 

    0x06df4343,// 376 PAY 339 

    0x994bdd13,// 377 PAY 340 

    0x14827ba9,// 378 PAY 341 

    0xe49873a5,// 379 PAY 342 

    0x1dbba3e8,// 380 PAY 343 

    0xa7b8a062,// 381 PAY 344 

    0xbe025381,// 382 PAY 345 

    0xda819ec0,// 383 PAY 346 

    0x4b8bca2b,// 384 PAY 347 

    0x3e2224b1,// 385 PAY 348 

    0x4d45f1e9,// 386 PAY 349 

    0xaa4472c8,// 387 PAY 350 

    0x069f10aa,// 388 PAY 351 

    0x87affa00,// 389 PAY 352 

    0xf9b6126c,// 390 PAY 353 

    0x6630187a,// 391 PAY 354 

    0xf8d8cb6e,// 392 PAY 355 

    0x5ad39403,// 393 PAY 356 

    0xe84b4b69,// 394 PAY 357 

    0x121e84c3,// 395 PAY 358 

    0x85f6ad02,// 396 PAY 359 

    0x77eeb4dd,// 397 PAY 360 

    0xd5ef8bba,// 398 PAY 361 

    0x353c3e7d,// 399 PAY 362 

    0xec84010b,// 400 PAY 363 

    0x0da9c808,// 401 PAY 364 

    0x805825a8,// 402 PAY 365 

    0x1c0bbda8,// 403 PAY 366 

    0x26c44e7c,// 404 PAY 367 

    0x21cc73f3,// 405 PAY 368 

    0xd61de739,// 406 PAY 369 

    0xae097791,// 407 PAY 370 

    0xaabbd9fc,// 408 PAY 371 

    0x40dd69a4,// 409 PAY 372 

    0xdbc988ff,// 410 PAY 373 

    0xfb9e6d8d,// 411 PAY 374 

    0x5609fd30,// 412 PAY 375 

    0x8f3810b1,// 413 PAY 376 

    0x911ec8c2,// 414 PAY 377 

    0x94d6c4bb,// 415 PAY 378 

    0xb7e5d967,// 416 PAY 379 

    0xc84988e7,// 417 PAY 380 

    0x50e4adbd,// 418 PAY 381 

    0x7f917efd,// 419 PAY 382 

    0x05dd866e,// 420 PAY 383 

    0xfb021239,// 421 PAY 384 

    0x1a15f55e,// 422 PAY 385 

    0xb464317e,// 423 PAY 386 

    0x0f29f25d,// 424 PAY 387 

    0x503771a8,// 425 PAY 388 

    0x33b61648,// 426 PAY 389 

    0xe696cb99,// 427 PAY 390 

    0x49a1e8f8,// 428 PAY 391 

    0x3439a06c,// 429 PAY 392 

    0xc0683b0c,// 430 PAY 393 

    0x095c6cc7,// 431 PAY 394 

    0x0313acab,// 432 PAY 395 

    0x14c6fd51,// 433 PAY 396 

    0xb6bf0875,// 434 PAY 397 

    0x4a4bd461,// 435 PAY 398 

    0x5f45998e,// 436 PAY 399 

    0xcf25c8d8,// 437 PAY 400 

    0xfd59ab0f,// 438 PAY 401 

    0xb83b4e8a,// 439 PAY 402 

    0xc1c696fe,// 440 PAY 403 

    0xe4d97d8f,// 441 PAY 404 

    0xc21e2262,// 442 PAY 405 

    0x8beee234,// 443 PAY 406 

    0x384bb5b6,// 444 PAY 407 

    0x6c994c10,// 445 PAY 408 

    0x61f8b068,// 446 PAY 409 

    0xa0ee08fe,// 447 PAY 410 

    0xf841faf8,// 448 PAY 411 

    0xa575b813,// 449 PAY 412 

    0xde9cb361,// 450 PAY 413 

    0x8e06cb05,// 451 PAY 414 

    0xbda7f48e,// 452 PAY 415 

    0x760ee389,// 453 PAY 416 

    0xc79a8d53,// 454 PAY 417 

    0xbbf194f4,// 455 PAY 418 

    0x71eb9653,// 456 PAY 419 

    0x551d33de,// 457 PAY 420 

    0xc2b6d6c2,// 458 PAY 421 

    0xdfefd826,// 459 PAY 422 

    0xef6a2249,// 460 PAY 423 

    0xf93c8cfd,// 461 PAY 424 

    0xef87896a,// 462 PAY 425 

    0x96521116,// 463 PAY 426 

    0xaa464020,// 464 PAY 427 

    0xcbc99687,// 465 PAY 428 

    0xcbb19958,// 466 PAY 429 

    0xaabeadad,// 467 PAY 430 

    0x8167d71e,// 468 PAY 431 

    0x9aa89351,// 469 PAY 432 

    0x8a69f494,// 470 PAY 433 

    0x939c0237,// 471 PAY 434 

    0xe022edd1,// 472 PAY 435 

    0x4f9885c0,// 473 PAY 436 

    0x8de7e4e5,// 474 PAY 437 

    0x9b7de392,// 475 PAY 438 

    0x5297aa0a,// 476 PAY 439 

    0x91cd9128,// 477 PAY 440 

    0xa168e6ab,// 478 PAY 441 

    0xc90f86a6,// 479 PAY 442 

    0x052cb400,// 480 PAY 443 

/// STA is 1 words. 

/// STA num_pkts       : 44 

/// STA pkt_idx        : 214 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xe8 

    0x0359e82c // 481 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt11_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x01 

/// ECH pdu_tag        : 0x00 

    0x00010000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x8042283e,// 4 SCX   2 

    0x00007100,// 5 SCX   3 

    0xa853915b,// 6 SCX   4 

    0x9dfa6d09,// 7 SCX   5 

    0x90b32ee7,// 8 SCX   6 

    0xeb86faca,// 9 SCX   7 

    0x930daf0f,// 10 SCX   8 

    0x12b5f68d,// 11 SCX   9 

    0x753cd196,// 12 SCX  10 

    0xea7b56d4,// 13 SCX  11 

    0xf137dabd,// 14 SCX  12 

    0x5c4b1a1a,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 944 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 38 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 38 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 8 

/// BFD (ofst+len)cry  : 24 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 624 

    0x00000026,// 16 BFD   1 

    0x00080010,// 17 BFD   2 

    0x02700000,// 18 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 2 

    0x0200f200,// 19 MFM   1 

/// BDA is 237 words. 

/// BDA size     is 944 (0x3b0) 

/// BDA id       is 0x906 

    0x03b00906,// 20 BDA   1 

/// PAY Generic Data size   : 944 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x42aae3b1,// 21 PAY   1 

    0x06b07671,// 22 PAY   2 

    0xc45aed30,// 23 PAY   3 

    0x9b83fab4,// 24 PAY   4 

    0xcad22535,// 25 PAY   5 

    0x3a032a2a,// 26 PAY   6 

    0x42a05258,// 27 PAY   7 

    0x282a5173,// 28 PAY   8 

    0x2f05e363,// 29 PAY   9 

    0xd5d8b826,// 30 PAY  10 

    0xefa5b3a9,// 31 PAY  11 

    0x5439881f,// 32 PAY  12 

    0xa2a4a04d,// 33 PAY  13 

    0x2df15a8d,// 34 PAY  14 

    0xc412aded,// 35 PAY  15 

    0x396b1834,// 36 PAY  16 

    0xa98b8983,// 37 PAY  17 

    0x91a90c65,// 38 PAY  18 

    0x31deef7d,// 39 PAY  19 

    0xd1d83872,// 40 PAY  20 

    0x76fa618f,// 41 PAY  21 

    0x2c95bb84,// 42 PAY  22 

    0xc89aa69f,// 43 PAY  23 

    0x8a61714e,// 44 PAY  24 

    0x2fefcd71,// 45 PAY  25 

    0x9bf0f538,// 46 PAY  26 

    0x704d9448,// 47 PAY  27 

    0xa39588e0,// 48 PAY  28 

    0x6ce41ade,// 49 PAY  29 

    0x376a5df9,// 50 PAY  30 

    0x5e5d94bd,// 51 PAY  31 

    0x1ce27201,// 52 PAY  32 

    0xd5a397f4,// 53 PAY  33 

    0x96fc5b3d,// 54 PAY  34 

    0x9525ddf2,// 55 PAY  35 

    0xf8ac8976,// 56 PAY  36 

    0xc38eee16,// 57 PAY  37 

    0xa877d95d,// 58 PAY  38 

    0x774f793e,// 59 PAY  39 

    0xbd990600,// 60 PAY  40 

    0x857ee90c,// 61 PAY  41 

    0x96400d72,// 62 PAY  42 

    0x3895160f,// 63 PAY  43 

    0x5ceed0a3,// 64 PAY  44 

    0x599d7351,// 65 PAY  45 

    0x462a76b7,// 66 PAY  46 

    0xe29913c5,// 67 PAY  47 

    0xdd278eb1,// 68 PAY  48 

    0x1bf7c9ce,// 69 PAY  49 

    0x89332337,// 70 PAY  50 

    0xfb2b6289,// 71 PAY  51 

    0x6df67d91,// 72 PAY  52 

    0xe9ad4dad,// 73 PAY  53 

    0xf760c072,// 74 PAY  54 

    0x4ac22d10,// 75 PAY  55 

    0x2bb6db46,// 76 PAY  56 

    0xa07f1eaa,// 77 PAY  57 

    0x06f19169,// 78 PAY  58 

    0x2df1f7ea,// 79 PAY  59 

    0xb869c3b2,// 80 PAY  60 

    0x0574e19b,// 81 PAY  61 

    0xf4c4c15d,// 82 PAY  62 

    0xa5c324b7,// 83 PAY  63 

    0xf79df1d5,// 84 PAY  64 

    0xab72016d,// 85 PAY  65 

    0x89886373,// 86 PAY  66 

    0xc78be41a,// 87 PAY  67 

    0xd8a250c5,// 88 PAY  68 

    0x70a19c55,// 89 PAY  69 

    0x7c3e9082,// 90 PAY  70 

    0xc806bf25,// 91 PAY  71 

    0x879f5bd1,// 92 PAY  72 

    0xcbb8cbf8,// 93 PAY  73 

    0xbee0b3e2,// 94 PAY  74 

    0xb97110d3,// 95 PAY  75 

    0x85683dc9,// 96 PAY  76 

    0x47ba536f,// 97 PAY  77 

    0xc5d01ce7,// 98 PAY  78 

    0x201ee1cf,// 99 PAY  79 

    0x9e0d4a30,// 100 PAY  80 

    0xd65c4d19,// 101 PAY  81 

    0x9c2f4c62,// 102 PAY  82 

    0x3984aba9,// 103 PAY  83 

    0x6cccd8c6,// 104 PAY  84 

    0xac426f82,// 105 PAY  85 

    0x5c19a0ef,// 106 PAY  86 

    0x55881f32,// 107 PAY  87 

    0x4b303e48,// 108 PAY  88 

    0xbae0524f,// 109 PAY  89 

    0xbfb54870,// 110 PAY  90 

    0xfe17039e,// 111 PAY  91 

    0xbc447d99,// 112 PAY  92 

    0x08db73d0,// 113 PAY  93 

    0xb9258023,// 114 PAY  94 

    0x6510f808,// 115 PAY  95 

    0xc71a4c02,// 116 PAY  96 

    0xe8723eb7,// 117 PAY  97 

    0x1bb08d97,// 118 PAY  98 

    0x0c7a6041,// 119 PAY  99 

    0x1262009d,// 120 PAY 100 

    0x0204b019,// 121 PAY 101 

    0x451f6d51,// 122 PAY 102 

    0x377eda64,// 123 PAY 103 

    0x9e2f88d2,// 124 PAY 104 

    0xe59453ee,// 125 PAY 105 

    0xfeb0e7ef,// 126 PAY 106 

    0x110f8b09,// 127 PAY 107 

    0xa8b7bb16,// 128 PAY 108 

    0x11f63352,// 129 PAY 109 

    0xa9383954,// 130 PAY 110 

    0xc5ef4ffe,// 131 PAY 111 

    0xb2ae9827,// 132 PAY 112 

    0x79ed176b,// 133 PAY 113 

    0x023a5f24,// 134 PAY 114 

    0x552b9543,// 135 PAY 115 

    0x135b47a2,// 136 PAY 116 

    0x9bf5629a,// 137 PAY 117 

    0xb7b50596,// 138 PAY 118 

    0x0861ce5f,// 139 PAY 119 

    0xd20f2d67,// 140 PAY 120 

    0xbc6c9983,// 141 PAY 121 

    0x08e94ae3,// 142 PAY 122 

    0xec897e2e,// 143 PAY 123 

    0x0e427418,// 144 PAY 124 

    0x9848cb6e,// 145 PAY 125 

    0x2041b816,// 146 PAY 126 

    0xae5e9fad,// 147 PAY 127 

    0x92d05c92,// 148 PAY 128 

    0xbd671b19,// 149 PAY 129 

    0x2721eb93,// 150 PAY 130 

    0x652fc104,// 151 PAY 131 

    0xbcb7e9c9,// 152 PAY 132 

    0x975e2481,// 153 PAY 133 

    0xf8a0b110,// 154 PAY 134 

    0xd2449843,// 155 PAY 135 

    0xbe5e405e,// 156 PAY 136 

    0xb80d5385,// 157 PAY 137 

    0xc5b9bd46,// 158 PAY 138 

    0x6b20510a,// 159 PAY 139 

    0xf2102646,// 160 PAY 140 

    0x78130073,// 161 PAY 141 

    0x5a92905b,// 162 PAY 142 

    0x7edd514c,// 163 PAY 143 

    0x0e541810,// 164 PAY 144 

    0xe5951059,// 165 PAY 145 

    0x845a3b8f,// 166 PAY 146 

    0x2324ae6d,// 167 PAY 147 

    0x7ab3ce58,// 168 PAY 148 

    0xe1cef568,// 169 PAY 149 

    0x761e672b,// 170 PAY 150 

    0x4eec9242,// 171 PAY 151 

    0x6fcc4cbe,// 172 PAY 152 

    0xe6b78a91,// 173 PAY 153 

    0xaa148805,// 174 PAY 154 

    0xbd1c2152,// 175 PAY 155 

    0x79530c2e,// 176 PAY 156 

    0x075431d3,// 177 PAY 157 

    0x112095b1,// 178 PAY 158 

    0x86ba7a8d,// 179 PAY 159 

    0xe434d2ac,// 180 PAY 160 

    0x05de5efe,// 181 PAY 161 

    0xbf5d29e4,// 182 PAY 162 

    0x9c37f80d,// 183 PAY 163 

    0xb2beb0f0,// 184 PAY 164 

    0x2b150e48,// 185 PAY 165 

    0x3d022be5,// 186 PAY 166 

    0x8b6da051,// 187 PAY 167 

    0x65addac5,// 188 PAY 168 

    0xbd2f3fc9,// 189 PAY 169 

    0x58234240,// 190 PAY 170 

    0xfbf07542,// 191 PAY 171 

    0x8b2ad535,// 192 PAY 172 

    0xf1e37216,// 193 PAY 173 

    0xc36ff7f8,// 194 PAY 174 

    0xb7b17df7,// 195 PAY 175 

    0x09b32011,// 196 PAY 176 

    0x5765cfcb,// 197 PAY 177 

    0x6f495cf1,// 198 PAY 178 

    0x216ed275,// 199 PAY 179 

    0x8d44e51e,// 200 PAY 180 

    0xd5d16cd9,// 201 PAY 181 

    0x8e4d501d,// 202 PAY 182 

    0xd550827a,// 203 PAY 183 

    0xe6b9efaa,// 204 PAY 184 

    0x96685eca,// 205 PAY 185 

    0xfdf3a3f4,// 206 PAY 186 

    0x4401056e,// 207 PAY 187 

    0x5e454022,// 208 PAY 188 

    0xa876e540,// 209 PAY 189 

    0xb7ed19ee,// 210 PAY 190 

    0x18470358,// 211 PAY 191 

    0x25caeb99,// 212 PAY 192 

    0x06934ef4,// 213 PAY 193 

    0xb8fadebb,// 214 PAY 194 

    0x27779292,// 215 PAY 195 

    0x866d9896,// 216 PAY 196 

    0x81c03aa5,// 217 PAY 197 

    0x09da4a78,// 218 PAY 198 

    0xb3427d9c,// 219 PAY 199 

    0xc6e5a3c2,// 220 PAY 200 

    0x743061ac,// 221 PAY 201 

    0x4ea492cb,// 222 PAY 202 

    0x76515bf1,// 223 PAY 203 

    0x2b8022d2,// 224 PAY 204 

    0x257034b2,// 225 PAY 205 

    0x422ac679,// 226 PAY 206 

    0x73c319ab,// 227 PAY 207 

    0x06b056c5,// 228 PAY 208 

    0xbfd1f217,// 229 PAY 209 

    0x4b83ca9b,// 230 PAY 210 

    0x3f8d53ae,// 231 PAY 211 

    0x881a5d53,// 232 PAY 212 

    0xd10c08ce,// 233 PAY 213 

    0x71ef1af1,// 234 PAY 214 

    0x07f9dbe8,// 235 PAY 215 

    0xaf6224de,// 236 PAY 216 

    0xdc23a71f,// 237 PAY 217 

    0xb7707bc2,// 238 PAY 218 

    0x331d27ec,// 239 PAY 219 

    0x71959409,// 240 PAY 220 

    0xb735aabc,// 241 PAY 221 

    0x677e2e93,// 242 PAY 222 

    0x5f5d0d6b,// 243 PAY 223 

    0xbe7d157c,// 244 PAY 224 

    0x79638599,// 245 PAY 225 

    0x8556dfcb,// 246 PAY 226 

    0xd9998262,// 247 PAY 227 

    0x10d0a3d4,// 248 PAY 228 

    0x157a6342,// 249 PAY 229 

    0xc8b81c36,// 250 PAY 230 

    0xbb31a9c2,// 251 PAY 231 

    0x5808d80a,// 252 PAY 232 

    0x529739a0,// 253 PAY 233 

    0x7a244752,// 254 PAY 234 

    0x04d480a5,// 255 PAY 235 

    0x55113da5,// 256 PAY 236 

/// STA is 1 words. 

/// STA num_pkts       : 10 

/// STA pkt_idx        : 216 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x7c 

    0x03607c0a // 257 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt12_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x804028b2,// 4 SCX   2 

    0x00003100,// 5 SCX   3 

    0xf36283e5,// 6 SCX   4 

    0x449e04d1,// 7 SCX   5 

    0xf71e710a,// 8 SCX   6 

    0x88ac42c0,// 9 SCX   7 

    0x45540f99,// 10 SCX   8 

    0xdaf9c2f7,// 11 SCX   9 

    0xa557bda1,// 12 SCX  10 

    0xda0e1b55,// 13 SCX  11 

    0x122ee9aa,// 14 SCX  12 

    0xc3ba8642,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 416 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 18 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 18 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 8 

/// BFD (ofst+len)cry  : 16 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 120 

    0x00000012,// 16 BFD   1 

    0x00080008,// 17 BFD   2 

    0x00780000,// 18 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 2 

    0x02003000,// 19 MFM   1 

/// BDA is 105 words. 

/// BDA size     is 416 (0x1a0) 

/// BDA id       is 0x79ee 

    0x01a079ee,// 20 BDA   1 

/// PAY Generic Data size   : 416 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xed947e23,// 21 PAY   1 

    0xb79a9962,// 22 PAY   2 

    0xdaacf6ab,// 23 PAY   3 

    0xb9bf1bb3,// 24 PAY   4 

    0xc36590db,// 25 PAY   5 

    0x73113177,// 26 PAY   6 

    0xb10416fb,// 27 PAY   7 

    0xbf9fc6d0,// 28 PAY   8 

    0x808cf3aa,// 29 PAY   9 

    0x5550015a,// 30 PAY  10 

    0x026e279a,// 31 PAY  11 

    0xfd782964,// 32 PAY  12 

    0x600b2062,// 33 PAY  13 

    0x62029f3c,// 34 PAY  14 

    0x0606e129,// 35 PAY  15 

    0xeb2d2072,// 36 PAY  16 

    0x92e06a89,// 37 PAY  17 

    0xce8e3b85,// 38 PAY  18 

    0x7df85e0d,// 39 PAY  19 

    0x58669a7d,// 40 PAY  20 

    0xf2bfcef3,// 41 PAY  21 

    0xfaa90d8b,// 42 PAY  22 

    0x953730e1,// 43 PAY  23 

    0xda9a0bf4,// 44 PAY  24 

    0x61a90499,// 45 PAY  25 

    0xe119259f,// 46 PAY  26 

    0xb9cbb4be,// 47 PAY  27 

    0xf5be755f,// 48 PAY  28 

    0x5495d3c9,// 49 PAY  29 

    0xe7b6e5f1,// 50 PAY  30 

    0x5ae4a53e,// 51 PAY  31 

    0x66585086,// 52 PAY  32 

    0x8a2201fd,// 53 PAY  33 

    0xa41e4e08,// 54 PAY  34 

    0xde0e036c,// 55 PAY  35 

    0x1baf41dd,// 56 PAY  36 

    0x44d23c67,// 57 PAY  37 

    0xa8c95025,// 58 PAY  38 

    0x21c79168,// 59 PAY  39 

    0xbf1c3cf2,// 60 PAY  40 

    0x61441361,// 61 PAY  41 

    0xb4927c80,// 62 PAY  42 

    0xdc358011,// 63 PAY  43 

    0x0f868331,// 64 PAY  44 

    0xda77ee9a,// 65 PAY  45 

    0xb219e3d9,// 66 PAY  46 

    0x8ea79b13,// 67 PAY  47 

    0xe366d5c5,// 68 PAY  48 

    0x963aaffc,// 69 PAY  49 

    0xb31b4f72,// 70 PAY  50 

    0x74b7a0db,// 71 PAY  51 

    0xfe69f30d,// 72 PAY  52 

    0x0793ce4a,// 73 PAY  53 

    0x92f5def4,// 74 PAY  54 

    0xba482710,// 75 PAY  55 

    0x9ead9611,// 76 PAY  56 

    0x91e4c71d,// 77 PAY  57 

    0x0b70a1ef,// 78 PAY  58 

    0x4206dc5f,// 79 PAY  59 

    0xba0ee1ec,// 80 PAY  60 

    0xb8a7ae16,// 81 PAY  61 

    0x63b53395,// 82 PAY  62 

    0x9d47a002,// 83 PAY  63 

    0x0fce43cc,// 84 PAY  64 

    0xfad24334,// 85 PAY  65 

    0x72f9ae11,// 86 PAY  66 

    0x93bcf45d,// 87 PAY  67 

    0x6525f025,// 88 PAY  68 

    0x4d3a1b1b,// 89 PAY  69 

    0xdb8fbb7d,// 90 PAY  70 

    0xcde2cb8b,// 91 PAY  71 

    0x1c72cada,// 92 PAY  72 

    0x00e207ef,// 93 PAY  73 

    0x5cf690f8,// 94 PAY  74 

    0x19b5d421,// 95 PAY  75 

    0x7f8f2749,// 96 PAY  76 

    0xd2a6ffc8,// 97 PAY  77 

    0x3b2f9235,// 98 PAY  78 

    0xbcb58f5e,// 99 PAY  79 

    0x117217f5,// 100 PAY  80 

    0x2bb811ed,// 101 PAY  81 

    0x76b3f4f7,// 102 PAY  82 

    0x138d47ec,// 103 PAY  83 

    0x368332cf,// 104 PAY  84 

    0xb6cd391c,// 105 PAY  85 

    0xf2d47697,// 106 PAY  86 

    0x1a681e20,// 107 PAY  87 

    0x9e7e7ce5,// 108 PAY  88 

    0x4816fb2b,// 109 PAY  89 

    0x7c8ca375,// 110 PAY  90 

    0x515b15d6,// 111 PAY  91 

    0x788929c7,// 112 PAY  92 

    0xc3c436f3,// 113 PAY  93 

    0x241fb195,// 114 PAY  94 

    0xa69561e1,// 115 PAY  95 

    0x3b129a5d,// 116 PAY  96 

    0x3d41897e,// 117 PAY  97 

    0xc298d323,// 118 PAY  98 

    0x95f0521c,// 119 PAY  99 

    0x9f1ba543,// 120 PAY 100 

    0x30091cb4,// 121 PAY 101 

    0x17f21294,// 122 PAY 102 

    0xcfa75efe,// 123 PAY 103 

    0x931f1db6,// 124 PAY 104 

/// STA is 1 words. 

/// STA num_pkts       : 116 

/// STA pkt_idx        : 70 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xcf 

    0x0119cf74 // 125 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt13_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x804228b7,// 4 SCX   2 

    0x00006400,// 5 SCX   3 

    0xa9d2d89c,// 6 SCX   4 

    0x709938a9,// 7 SCX   5 

    0x93fa1aa6,// 8 SCX   6 

    0x8d32dddf,// 9 SCX   7 

    0x2bd4e7b2,// 10 SCX   8 

    0x95316421,// 11 SCX   9 

    0x549243a8,// 12 SCX  10 

    0x35c4e3f7,// 13 SCX  11 

    0x4a42f220,// 14 SCX  12 

    0xf167f213,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1367 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 702 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 702 

/// BFD lencrypto      : 48 

/// BFD ofstcrypto     : 508 

/// BFD (ofst+len)cry  : 556 

/// BFD ofstiv         : 224 

/// BFD ofsticv        : 912 

    0x000002be,// 16 BFD   1 

    0x01fc0030,// 17 BFD   2 

    0x039000e0,// 18 BFD   3 

/// MFM is 9 words. 

/// MFM vldnibs        : 41 

    0x41002bf6,// 19 MFM   1 

    0xe029419d,// 20 MFM   2 

    0xed98b843,// 21 MFM   3 

    0xf0537423,// 22 MFM   4 

    0x849e113b,// 23 MFM   5 

    0x6d38258d,// 24 MFM   6 

    0xf931e85b,// 25 MFM   7 

    0x558f42cc,// 26 MFM   8 

    0x47694000,// 27 MFM   9 

/// BDA is 343 words. 

/// BDA size     is 1367 (0x557) 

/// BDA id       is 0x91a 

    0x0557091a,// 28 BDA   1 

/// PAY Generic Data size   : 1367 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x844e346c,// 29 PAY   1 

    0x6f11c2d5,// 30 PAY   2 

    0x0b8f97b1,// 31 PAY   3 

    0xacaa12a8,// 32 PAY   4 

    0x37d22d51,// 33 PAY   5 

    0x48fa9b7c,// 34 PAY   6 

    0x69d304c3,// 35 PAY   7 

    0x8b927e26,// 36 PAY   8 

    0x74ac7dec,// 37 PAY   9 

    0xebd012b8,// 38 PAY  10 

    0x13ffe71a,// 39 PAY  11 

    0xacfddace,// 40 PAY  12 

    0x2528fe4e,// 41 PAY  13 

    0xc64828ef,// 42 PAY  14 

    0xbd93894d,// 43 PAY  15 

    0x47158067,// 44 PAY  16 

    0x0c8a3d35,// 45 PAY  17 

    0x9da1505c,// 46 PAY  18 

    0x2303e8f1,// 47 PAY  19 

    0x5ec1f636,// 48 PAY  20 

    0x16db887c,// 49 PAY  21 

    0xa7c6ea0b,// 50 PAY  22 

    0x99e84dfc,// 51 PAY  23 

    0x9e10daa0,// 52 PAY  24 

    0x6570f990,// 53 PAY  25 

    0xb1f97f28,// 54 PAY  26 

    0xa01f9d16,// 55 PAY  27 

    0x42a5742b,// 56 PAY  28 

    0xdd03139d,// 57 PAY  29 

    0x793d89f7,// 58 PAY  30 

    0x47c90fcf,// 59 PAY  31 

    0x5dc7367d,// 60 PAY  32 

    0x465f17f0,// 61 PAY  33 

    0x044bc444,// 62 PAY  34 

    0xf68cb8c8,// 63 PAY  35 

    0xc32cce52,// 64 PAY  36 

    0xa4815027,// 65 PAY  37 

    0x3edc1fcb,// 66 PAY  38 

    0xad8f5e8f,// 67 PAY  39 

    0xf0a63567,// 68 PAY  40 

    0xba288c68,// 69 PAY  41 

    0x88e44a6a,// 70 PAY  42 

    0xd06eed2c,// 71 PAY  43 

    0x566d7683,// 72 PAY  44 

    0x4dec8985,// 73 PAY  45 

    0xf9c9afe5,// 74 PAY  46 

    0xba334357,// 75 PAY  47 

    0xb0a0f709,// 76 PAY  48 

    0xda7b6898,// 77 PAY  49 

    0xe65ccdb4,// 78 PAY  50 

    0xaf0657fc,// 79 PAY  51 

    0xda92ebf2,// 80 PAY  52 

    0x19725407,// 81 PAY  53 

    0xcb0612df,// 82 PAY  54 

    0x2c8ba4fe,// 83 PAY  55 

    0xc5b510d2,// 84 PAY  56 

    0xc3a79d56,// 85 PAY  57 

    0x44ef94db,// 86 PAY  58 

    0x09bb792b,// 87 PAY  59 

    0x7f0b58ec,// 88 PAY  60 

    0x9e9b07e5,// 89 PAY  61 

    0x8ae5dead,// 90 PAY  62 

    0xfd22dce7,// 91 PAY  63 

    0x3b86f38b,// 92 PAY  64 

    0x405f696a,// 93 PAY  65 

    0x32ee9da7,// 94 PAY  66 

    0x63704d65,// 95 PAY  67 

    0xbcbbe77c,// 96 PAY  68 

    0xde02a755,// 97 PAY  69 

    0x5f8ff9fa,// 98 PAY  70 

    0xe6c43aba,// 99 PAY  71 

    0xd1ada1a3,// 100 PAY  72 

    0x06655e3c,// 101 PAY  73 

    0x1767c3cb,// 102 PAY  74 

    0xe5643cb4,// 103 PAY  75 

    0x432836bf,// 104 PAY  76 

    0x0fde2dd6,// 105 PAY  77 

    0xb67e81a3,// 106 PAY  78 

    0x8aef231b,// 107 PAY  79 

    0xc89327cd,// 108 PAY  80 

    0xba01588a,// 109 PAY  81 

    0x6e224f91,// 110 PAY  82 

    0xc11ca30d,// 111 PAY  83 

    0x2fc465d5,// 112 PAY  84 

    0x5abae0f2,// 113 PAY  85 

    0x39849d13,// 114 PAY  86 

    0x8bf6c9f8,// 115 PAY  87 

    0x72b3ebfa,// 116 PAY  88 

    0xf92b6c61,// 117 PAY  89 

    0xe483fb21,// 118 PAY  90 

    0xb7aad2f5,// 119 PAY  91 

    0xf7ce0cda,// 120 PAY  92 

    0xb4801488,// 121 PAY  93 

    0x0a40162e,// 122 PAY  94 

    0x5f89798e,// 123 PAY  95 

    0xcfb2cb18,// 124 PAY  96 

    0x754ff798,// 125 PAY  97 

    0x522089f7,// 126 PAY  98 

    0x69e9c062,// 127 PAY  99 

    0x3efbbde0,// 128 PAY 100 

    0x3d41cf3a,// 129 PAY 101 

    0x3dc714f9,// 130 PAY 102 

    0x569fa27b,// 131 PAY 103 

    0x4db31ead,// 132 PAY 104 

    0x972af9d1,// 133 PAY 105 

    0xafc5d8f8,// 134 PAY 106 

    0xaed71828,// 135 PAY 107 

    0xcacd5332,// 136 PAY 108 

    0x9e7dfe2f,// 137 PAY 109 

    0x5354420c,// 138 PAY 110 

    0xf69ec552,// 139 PAY 111 

    0x004cf47c,// 140 PAY 112 

    0xed60fc9e,// 141 PAY 113 

    0x4d6f1c90,// 142 PAY 114 

    0xd564a01c,// 143 PAY 115 

    0x1297c7ff,// 144 PAY 116 

    0x3af8bac3,// 145 PAY 117 

    0xecf2bb37,// 146 PAY 118 

    0xd29bd3ae,// 147 PAY 119 

    0x7bf82bb1,// 148 PAY 120 

    0xc68acb2a,// 149 PAY 121 

    0xb7f9fb2a,// 150 PAY 122 

    0x02c1dbc3,// 151 PAY 123 

    0xc1a17aaa,// 152 PAY 124 

    0x02cf69c0,// 153 PAY 125 

    0xd0cbf651,// 154 PAY 126 

    0x08a39516,// 155 PAY 127 

    0x4a3ea86d,// 156 PAY 128 

    0xdfcdc9df,// 157 PAY 129 

    0x7e373d49,// 158 PAY 130 

    0x9390a527,// 159 PAY 131 

    0xfc953790,// 160 PAY 132 

    0x8f392726,// 161 PAY 133 

    0x9170c6ec,// 162 PAY 134 

    0x94098956,// 163 PAY 135 

    0xa332ff5b,// 164 PAY 136 

    0xbbed72d5,// 165 PAY 137 

    0x02a356cb,// 166 PAY 138 

    0x381397d3,// 167 PAY 139 

    0x307a0e90,// 168 PAY 140 

    0xa0e6027b,// 169 PAY 141 

    0x61aa98f6,// 170 PAY 142 

    0xc9626522,// 171 PAY 143 

    0x6f7a3bb3,// 172 PAY 144 

    0x9a0c5b78,// 173 PAY 145 

    0x40392ce5,// 174 PAY 146 

    0x34e546ad,// 175 PAY 147 

    0x479c5475,// 176 PAY 148 

    0x54341425,// 177 PAY 149 

    0x5b50eb6e,// 178 PAY 150 

    0xef523500,// 179 PAY 151 

    0x08ab4d18,// 180 PAY 152 

    0x142cd672,// 181 PAY 153 

    0x86198e61,// 182 PAY 154 

    0x9ee447a0,// 183 PAY 155 

    0xb7d70b85,// 184 PAY 156 

    0x73b2e6ae,// 185 PAY 157 

    0x125311d3,// 186 PAY 158 

    0x8b28870e,// 187 PAY 159 

    0x03f60529,// 188 PAY 160 

    0xf0e3b7b1,// 189 PAY 161 

    0x3ece3c66,// 190 PAY 162 

    0xe4bee10b,// 191 PAY 163 

    0x142e46d8,// 192 PAY 164 

    0x37529c4f,// 193 PAY 165 

    0x050dd6e3,// 194 PAY 166 

    0x1735e3e2,// 195 PAY 167 

    0x10eb5f63,// 196 PAY 168 

    0xeb5e4832,// 197 PAY 169 

    0x241a9391,// 198 PAY 170 

    0xfb269ab6,// 199 PAY 171 

    0xf13b3ca4,// 200 PAY 172 

    0xfc483e17,// 201 PAY 173 

    0xbc71b6aa,// 202 PAY 174 

    0xe1460a7e,// 203 PAY 175 

    0xaa1d9792,// 204 PAY 176 

    0x73ec58ac,// 205 PAY 177 

    0x19a89c0e,// 206 PAY 178 

    0x6b4e1e50,// 207 PAY 179 

    0x39d39973,// 208 PAY 180 

    0xe208f312,// 209 PAY 181 

    0x9683188c,// 210 PAY 182 

    0x6f88ded0,// 211 PAY 183 

    0xd9018ee9,// 212 PAY 184 

    0xe5bbd3d0,// 213 PAY 185 

    0x840aaf9c,// 214 PAY 186 

    0x4b00e62e,// 215 PAY 187 

    0xa681a542,// 216 PAY 188 

    0x4d69bd88,// 217 PAY 189 

    0xe3e3034e,// 218 PAY 190 

    0x7a9b06f5,// 219 PAY 191 

    0x17bb2a09,// 220 PAY 192 

    0x20a8b5eb,// 221 PAY 193 

    0x6b0353b2,// 222 PAY 194 

    0xb36be11c,// 223 PAY 195 

    0x35cd81ab,// 224 PAY 196 

    0x94274cfb,// 225 PAY 197 

    0xe5f14ef5,// 226 PAY 198 

    0xbbbcba6d,// 227 PAY 199 

    0xbd64bccb,// 228 PAY 200 

    0x1e2e3138,// 229 PAY 201 

    0xa0346644,// 230 PAY 202 

    0xd2d08965,// 231 PAY 203 

    0x447379cb,// 232 PAY 204 

    0xd30d15e3,// 233 PAY 205 

    0x2c8cff8f,// 234 PAY 206 

    0x48bf6d73,// 235 PAY 207 

    0x538c4167,// 236 PAY 208 

    0x1a2ea4d7,// 237 PAY 209 

    0x262c299c,// 238 PAY 210 

    0x361ccf8e,// 239 PAY 211 

    0xe44ae1f0,// 240 PAY 212 

    0x718b4c0f,// 241 PAY 213 

    0xbb15b0ec,// 242 PAY 214 

    0x5e2891ee,// 243 PAY 215 

    0x192f4317,// 244 PAY 216 

    0xfe4e3af2,// 245 PAY 217 

    0x4aeac021,// 246 PAY 218 

    0x8034b89e,// 247 PAY 219 

    0x34980b59,// 248 PAY 220 

    0xcb20a473,// 249 PAY 221 

    0x06c2a34d,// 250 PAY 222 

    0x84718985,// 251 PAY 223 

    0xc3179ade,// 252 PAY 224 

    0x252273d9,// 253 PAY 225 

    0x0b7d8562,// 254 PAY 226 

    0xb706891d,// 255 PAY 227 

    0x935dd901,// 256 PAY 228 

    0x9545d740,// 257 PAY 229 

    0x8b4d65f6,// 258 PAY 230 

    0x9a6d85db,// 259 PAY 231 

    0x45cbbdf9,// 260 PAY 232 

    0xf05569f4,// 261 PAY 233 

    0xa0aa21da,// 262 PAY 234 

    0xfb33c0e8,// 263 PAY 235 

    0x64929e17,// 264 PAY 236 

    0x2f9a7a86,// 265 PAY 237 

    0x0d77ba15,// 266 PAY 238 

    0x523e5ab6,// 267 PAY 239 

    0x34131e4a,// 268 PAY 240 

    0xd7a06768,// 269 PAY 241 

    0x84d842a6,// 270 PAY 242 

    0x61a6d424,// 271 PAY 243 

    0x197fe65e,// 272 PAY 244 

    0x67a5d293,// 273 PAY 245 

    0x5102fb87,// 274 PAY 246 

    0x2641c8c2,// 275 PAY 247 

    0x3594851d,// 276 PAY 248 

    0xaa1f7580,// 277 PAY 249 

    0x8b8d6a20,// 278 PAY 250 

    0x330709e2,// 279 PAY 251 

    0x7ec66444,// 280 PAY 252 

    0xaec5c08c,// 281 PAY 253 

    0xeb94e212,// 282 PAY 254 

    0x0c3d4c5c,// 283 PAY 255 

    0x1b62a097,// 284 PAY 256 

    0x61231e36,// 285 PAY 257 

    0xd2792b13,// 286 PAY 258 

    0x29269a5a,// 287 PAY 259 

    0x958ec994,// 288 PAY 260 

    0xc4667990,// 289 PAY 261 

    0x98226a60,// 290 PAY 262 

    0xe9ed4c49,// 291 PAY 263 

    0x1282db3f,// 292 PAY 264 

    0x9e9954ed,// 293 PAY 265 

    0xc82c4eba,// 294 PAY 266 

    0xac16cc85,// 295 PAY 267 

    0xd225d49b,// 296 PAY 268 

    0xa18dd500,// 297 PAY 269 

    0xa44a1fc7,// 298 PAY 270 

    0xb7622fe4,// 299 PAY 271 

    0x6644188b,// 300 PAY 272 

    0x817dc966,// 301 PAY 273 

    0xdb06c600,// 302 PAY 274 

    0xe5d2a32d,// 303 PAY 275 

    0xc3e9ae63,// 304 PAY 276 

    0x8ef54ac4,// 305 PAY 277 

    0xe7f974a6,// 306 PAY 278 

    0x7a464466,// 307 PAY 279 

    0x4bd4160a,// 308 PAY 280 

    0x328de852,// 309 PAY 281 

    0xd85121ca,// 310 PAY 282 

    0x2df50739,// 311 PAY 283 

    0x92adabf4,// 312 PAY 284 

    0x54226027,// 313 PAY 285 

    0x2d7a38c6,// 314 PAY 286 

    0x80dcf50b,// 315 PAY 287 

    0xbb8714de,// 316 PAY 288 

    0x4e2da754,// 317 PAY 289 

    0x5acf03b5,// 318 PAY 290 

    0x678a0649,// 319 PAY 291 

    0x08268272,// 320 PAY 292 

    0x70164c02,// 321 PAY 293 

    0x981a5e5b,// 322 PAY 294 

    0x594f66f5,// 323 PAY 295 

    0xd7ea5165,// 324 PAY 296 

    0xa38f4f97,// 325 PAY 297 

    0x42661336,// 326 PAY 298 

    0x428f2cd6,// 327 PAY 299 

    0x4f23b7dd,// 328 PAY 300 

    0x30084e7a,// 329 PAY 301 

    0xdd85c86a,// 330 PAY 302 

    0xfb6e7ec8,// 331 PAY 303 

    0xbb52c2e4,// 332 PAY 304 

    0x3ef0c338,// 333 PAY 305 

    0xd83f0352,// 334 PAY 306 

    0x229996c4,// 335 PAY 307 

    0x70b571a4,// 336 PAY 308 

    0xdcd2cf0e,// 337 PAY 309 

    0xd51a5901,// 338 PAY 310 

    0xbbf8bc50,// 339 PAY 311 

    0x7f0cd6bb,// 340 PAY 312 

    0x5e85a35b,// 341 PAY 313 

    0x032dd1fd,// 342 PAY 314 

    0x25990961,// 343 PAY 315 

    0xa0b48781,// 344 PAY 316 

    0xa3e8885e,// 345 PAY 317 

    0xf8289dec,// 346 PAY 318 

    0x9650b538,// 347 PAY 319 

    0xe7a72fd0,// 348 PAY 320 

    0xfadb152e,// 349 PAY 321 

    0xbe694d87,// 350 PAY 322 

    0x1d188dd9,// 351 PAY 323 

    0x9a9914e1,// 352 PAY 324 

    0x117ef496,// 353 PAY 325 

    0x233b9c3c,// 354 PAY 326 

    0xae317eef,// 355 PAY 327 

    0x3dc9c92b,// 356 PAY 328 

    0xa0d83c48,// 357 PAY 329 

    0xe908c7c3,// 358 PAY 330 

    0x4d88425e,// 359 PAY 331 

    0xeba3a077,// 360 PAY 332 

    0x2a4e5492,// 361 PAY 333 

    0x5fbf28ba,// 362 PAY 334 

    0x54448224,// 363 PAY 335 

    0x09e17455,// 364 PAY 336 

    0x44299189,// 365 PAY 337 

    0x19575ca7,// 366 PAY 338 

    0xa8bc1dd4,// 367 PAY 339 

    0x43f896c5,// 368 PAY 340 

    0x1073ee4c,// 369 PAY 341 

    0x78bb2f00,// 370 PAY 342 

/// STA is 1 words. 

/// STA num_pkts       : 168 

/// STA pkt_idx        : 182 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3e 

    0x02d93ea8 // 371 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt14_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x80442874,// 4 SCX   2 

    0x00002382,// 5 SCX   3 

    0xe004c7fb,// 6 SCX   4 

    0x08e69a98,// 7 SCX   5 

    0x425e03a1,// 8 SCX   6 

    0x710df3fa,// 9 SCX   7 

    0x300b7870,// 10 SCX   8 

    0x88f5abc2,// 11 SCX   9 

    0xff541346,// 12 SCX  10 

    0x574d4b11,// 13 SCX  11 

    0xc6969c97,// 14 SCX  12 

    0x22852d37,// 15 SCX  13 

    0xb6044499,// 16 SCX  14 

    0x320e304c,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 505 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 210 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 210 

/// BFD lencrypto      : 48 

/// BFD ofstcrypto     : 36 

/// BFD (ofst+len)cry  : 84 

/// BFD ofstiv         : 12 

/// BFD ofsticv        : 296 

    0x000000d2,// 18 BFD   1 

    0x00240030,// 19 BFD   2 

    0x0128000c,// 20 BFD   3 

/// MFM is 6 words. 

/// MFM vldnibs        : 2c 

    0x2c001235,// 21 MFM   1 

    0xddbadc84,// 22 MFM   2 

    0xe0e7bbbd,// 23 MFM   3 

    0x2c929859,// 24 MFM   4 

    0x58f0de88,// 25 MFM   5 

    0x426532ce,// 26 MFM   6 

/// BDA is 128 words. 

/// BDA size     is 505 (0x1f9) 

/// BDA id       is 0x241b 

    0x01f9241b,// 27 BDA   1 

/// PAY Generic Data size   : 505 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xbebc2e5a,// 28 PAY   1 

    0xcc046ae1,// 29 PAY   2 

    0x78e63a3d,// 30 PAY   3 

    0xf664e13d,// 31 PAY   4 

    0x0c59d8b2,// 32 PAY   5 

    0x018e0cfd,// 33 PAY   6 

    0xe799dbbe,// 34 PAY   7 

    0x7d217a20,// 35 PAY   8 

    0x3619da86,// 36 PAY   9 

    0xc7b91a6e,// 37 PAY  10 

    0x623f4609,// 38 PAY  11 

    0x0ef9a950,// 39 PAY  12 

    0x5d880299,// 40 PAY  13 

    0x3f4bb6d0,// 41 PAY  14 

    0x78aaaa8a,// 42 PAY  15 

    0x4b5d3203,// 43 PAY  16 

    0xe17a7733,// 44 PAY  17 

    0xb9b973b1,// 45 PAY  18 

    0x958238f4,// 46 PAY  19 

    0x559478fe,// 47 PAY  20 

    0xeac35ea7,// 48 PAY  21 

    0xd98c9aa7,// 49 PAY  22 

    0xb72b5025,// 50 PAY  23 

    0xfa4781b0,// 51 PAY  24 

    0x9dc61ad8,// 52 PAY  25 

    0x2d7fc9fc,// 53 PAY  26 

    0xe28fe15e,// 54 PAY  27 

    0xf6f9a70e,// 55 PAY  28 

    0x5f1dc8e5,// 56 PAY  29 

    0x66116c35,// 57 PAY  30 

    0xba864d42,// 58 PAY  31 

    0x65553dee,// 59 PAY  32 

    0x1173d07e,// 60 PAY  33 

    0x44b9dae3,// 61 PAY  34 

    0x672f72a0,// 62 PAY  35 

    0x2c399fd9,// 63 PAY  36 

    0x5b4ebd20,// 64 PAY  37 

    0x3c754b79,// 65 PAY  38 

    0xe5f3d27e,// 66 PAY  39 

    0x93a98183,// 67 PAY  40 

    0x2c4be2ba,// 68 PAY  41 

    0x0e4f380f,// 69 PAY  42 

    0x6eaacadf,// 70 PAY  43 

    0xdec57d6a,// 71 PAY  44 

    0xecfd2f7e,// 72 PAY  45 

    0x4a4712d8,// 73 PAY  46 

    0x23f9880b,// 74 PAY  47 

    0x6f3c0313,// 75 PAY  48 

    0xaaabe1b4,// 76 PAY  49 

    0x9c9a6765,// 77 PAY  50 

    0x9b6ea08e,// 78 PAY  51 

    0x082c713c,// 79 PAY  52 

    0xb6ca2859,// 80 PAY  53 

    0xadc41232,// 81 PAY  54 

    0x832c8884,// 82 PAY  55 

    0x64d3dadc,// 83 PAY  56 

    0xb1f6c0e4,// 84 PAY  57 

    0xfc130bb3,// 85 PAY  58 

    0x85dd1cf7,// 86 PAY  59 

    0x72811996,// 87 PAY  60 

    0xb53c8f85,// 88 PAY  61 

    0xf32c3028,// 89 PAY  62 

    0x02b5bb41,// 90 PAY  63 

    0x9e9f249e,// 91 PAY  64 

    0xeb0764ba,// 92 PAY  65 

    0x7f22b5ef,// 93 PAY  66 

    0xb0801143,// 94 PAY  67 

    0x04a7f6dc,// 95 PAY  68 

    0xafeb6f98,// 96 PAY  69 

    0x3696e3b1,// 97 PAY  70 

    0xcb50e85f,// 98 PAY  71 

    0x56f06b2a,// 99 PAY  72 

    0x226b8691,// 100 PAY  73 

    0xa5c7b731,// 101 PAY  74 

    0xbacc8056,// 102 PAY  75 

    0xde1dabc2,// 103 PAY  76 

    0x834f2b75,// 104 PAY  77 

    0xe446cda7,// 105 PAY  78 

    0x52c762b0,// 106 PAY  79 

    0x3c642779,// 107 PAY  80 

    0xcba79440,// 108 PAY  81 

    0x3a704336,// 109 PAY  82 

    0xc8b6c901,// 110 PAY  83 

    0xd9c21c3c,// 111 PAY  84 

    0x0857ec42,// 112 PAY  85 

    0xc629c9b1,// 113 PAY  86 

    0x494c58d4,// 114 PAY  87 

    0x27a3b743,// 115 PAY  88 

    0x59cef63d,// 116 PAY  89 

    0x8deacbf7,// 117 PAY  90 

    0x5dfad799,// 118 PAY  91 

    0xc2dfb7de,// 119 PAY  92 

    0xe07c65c7,// 120 PAY  93 

    0xc80cd6e7,// 121 PAY  94 

    0x13ae3ad5,// 122 PAY  95 

    0x28c2c728,// 123 PAY  96 

    0xeee04328,// 124 PAY  97 

    0x6501c1ce,// 125 PAY  98 

    0xc45cb21f,// 126 PAY  99 

    0x37587be7,// 127 PAY 100 

    0x8208d06f,// 128 PAY 101 

    0x0a8eab3f,// 129 PAY 102 

    0x4701e407,// 130 PAY 103 

    0x61cd5faf,// 131 PAY 104 

    0x9cb14d83,// 132 PAY 105 

    0x5cc7243f,// 133 PAY 106 

    0x471c2a37,// 134 PAY 107 

    0x19d82f90,// 135 PAY 108 

    0x3d5f1b92,// 136 PAY 109 

    0x7f0b1952,// 137 PAY 110 

    0x24917db8,// 138 PAY 111 

    0x43d3e209,// 139 PAY 112 

    0x286a2343,// 140 PAY 113 

    0x1f95f9d8,// 141 PAY 114 

    0xa4e08fe3,// 142 PAY 115 

    0x6d9df744,// 143 PAY 116 

    0x6f72c9fe,// 144 PAY 117 

    0x2731d023,// 145 PAY 118 

    0xae23b2a1,// 146 PAY 119 

    0x1d92846f,// 147 PAY 120 

    0x0e84f3e6,// 148 PAY 121 

    0xe47cb13b,// 149 PAY 122 

    0x6f5ef634,// 150 PAY 123 

    0x40836755,// 151 PAY 124 

    0xca0810b2,// 152 PAY 125 

    0x312f2e6f,// 153 PAY 126 

    0xa8000000,// 154 PAY 127 

/// STA is 1 words. 

/// STA num_pkts       : 132 

/// STA pkt_idx        : 124 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x26 

    0x01f12684 // 155 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc !incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt15_tmpl[] = {
    0xa8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x804228cc,// 4 SCX   2 

    0x00003100,// 5 SCX   3 

    0x862562e5,// 6 SCX   4 

    0x15ae2cc8,// 7 SCX   5 

    0x0e4b2bf0,// 8 SCX   6 

    0x7281fb5b,// 9 SCX   7 

    0x3bc20a0b,// 10 SCX   8 

    0x5bb02459,// 11 SCX   9 

    0xb2f9de07,// 12 SCX  10 

    0x33024147,// 13 SCX  11 

    0x81c97049,// 14 SCX  12 

    0x8fe16794,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1410 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 155 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 155 

/// BFD lencrypto      : 24 

/// BFD ofstcrypto     : 120 

/// BFD (ofst+len)cry  : 144 

/// BFD ofstiv         : 68 

/// BFD ofsticv        : 1376 

    0x0000009b,// 16 BFD   1 

    0x00780018,// 17 BFD   2 

    0x05600044,// 18 BFD   3 

/// BDA is 354 words. 

/// BDA size     is 1410 (0x582) 

/// BDA id       is 0xa24 

    0x05820a24,// 19 BDA   1 

/// PAY Generic Data size   : 1410 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xd427529a,// 20 PAY   1 

    0xf83e0f0e,// 21 PAY   2 

    0x69d29a24,// 22 PAY   3 

    0x655cbdd7,// 23 PAY   4 

    0x3095ee69,// 24 PAY   5 

    0x48a392a7,// 25 PAY   6 

    0xcabaac65,// 26 PAY   7 

    0x64c343b8,// 27 PAY   8 

    0xfacf2976,// 28 PAY   9 

    0x0d4ee041,// 29 PAY  10 

    0xe59ffbe1,// 30 PAY  11 

    0x8d750442,// 31 PAY  12 

    0xe7c65a76,// 32 PAY  13 

    0xec71bcc3,// 33 PAY  14 

    0x6ebef965,// 34 PAY  15 

    0xcaf6d8f5,// 35 PAY  16 

    0xc3625f25,// 36 PAY  17 

    0x15c8c488,// 37 PAY  18 

    0xe90b662b,// 38 PAY  19 

    0x8ab4dfca,// 39 PAY  20 

    0x3cec9618,// 40 PAY  21 

    0x3f6f0af7,// 41 PAY  22 

    0x8fec12be,// 42 PAY  23 

    0xccc8bb0b,// 43 PAY  24 

    0x404ce64d,// 44 PAY  25 

    0x2b037e12,// 45 PAY  26 

    0x254ab6f6,// 46 PAY  27 

    0x46ea25e6,// 47 PAY  28 

    0xad64eb55,// 48 PAY  29 

    0x4a74e9fb,// 49 PAY  30 

    0x2592769d,// 50 PAY  31 

    0x3a0ea381,// 51 PAY  32 

    0x6637370d,// 52 PAY  33 

    0x97b0dfc6,// 53 PAY  34 

    0x9eff5db0,// 54 PAY  35 

    0xfa70709a,// 55 PAY  36 

    0x4b8a5020,// 56 PAY  37 

    0x3ff75de2,// 57 PAY  38 

    0xd8c83726,// 58 PAY  39 

    0x49dda4c2,// 59 PAY  40 

    0x83e27fcf,// 60 PAY  41 

    0x2800dd1a,// 61 PAY  42 

    0x92ddf78b,// 62 PAY  43 

    0x0a944ca4,// 63 PAY  44 

    0x583db4ce,// 64 PAY  45 

    0xf61331b7,// 65 PAY  46 

    0x86fe966e,// 66 PAY  47 

    0x9cfc09a0,// 67 PAY  48 

    0xb05c4aa8,// 68 PAY  49 

    0x3d6ef679,// 69 PAY  50 

    0xf0ff747e,// 70 PAY  51 

    0xd886d34b,// 71 PAY  52 

    0x099906ac,// 72 PAY  53 

    0x979a2504,// 73 PAY  54 

    0x018419ca,// 74 PAY  55 

    0x5f0313be,// 75 PAY  56 

    0x60fa39ed,// 76 PAY  57 

    0x468654f0,// 77 PAY  58 

    0xd41ccf1a,// 78 PAY  59 

    0x275fc545,// 79 PAY  60 

    0xdaac7016,// 80 PAY  61 

    0x6543429d,// 81 PAY  62 

    0x527ab93a,// 82 PAY  63 

    0x841f867a,// 83 PAY  64 

    0x6ace82e9,// 84 PAY  65 

    0x71c97049,// 85 PAY  66 

    0xc2308aa1,// 86 PAY  67 

    0xdef2a769,// 87 PAY  68 

    0xf768e050,// 88 PAY  69 

    0x89b08e13,// 89 PAY  70 

    0x07897d61,// 90 PAY  71 

    0xf0d90582,// 91 PAY  72 

    0x09a8959c,// 92 PAY  73 

    0x48e6dcbe,// 93 PAY  74 

    0xf4bd2a4b,// 94 PAY  75 

    0xec882cbf,// 95 PAY  76 

    0x330711d7,// 96 PAY  77 

    0x93a29386,// 97 PAY  78 

    0x34944943,// 98 PAY  79 

    0xd3eb792d,// 99 PAY  80 

    0xec64e611,// 100 PAY  81 

    0x8fd856e7,// 101 PAY  82 

    0x6c0f280e,// 102 PAY  83 

    0x62e04de8,// 103 PAY  84 

    0x938b8971,// 104 PAY  85 

    0x1d973874,// 105 PAY  86 

    0x3e678ff8,// 106 PAY  87 

    0xd102c596,// 107 PAY  88 

    0xc34a82ed,// 108 PAY  89 

    0xf518cbb3,// 109 PAY  90 

    0xd7d01058,// 110 PAY  91 

    0x83f958c8,// 111 PAY  92 

    0x378599b6,// 112 PAY  93 

    0x4b3dd9f0,// 113 PAY  94 

    0x37a5719c,// 114 PAY  95 

    0x68f29a39,// 115 PAY  96 

    0xbbf1a8ce,// 116 PAY  97 

    0x61cfe5a9,// 117 PAY  98 

    0xb40cfffa,// 118 PAY  99 

    0xc5e5f269,// 119 PAY 100 

    0x10ed55c2,// 120 PAY 101 

    0xc19be824,// 121 PAY 102 

    0x9b45cf8a,// 122 PAY 103 

    0xce98d0b3,// 123 PAY 104 

    0x35a39f85,// 124 PAY 105 

    0x8b11e32e,// 125 PAY 106 

    0x680f7a61,// 126 PAY 107 

    0xd9520a00,// 127 PAY 108 

    0xba51bdf6,// 128 PAY 109 

    0x17e73c1b,// 129 PAY 110 

    0xa740235b,// 130 PAY 111 

    0x22a1eb51,// 131 PAY 112 

    0x83e98b8f,// 132 PAY 113 

    0x5686db59,// 133 PAY 114 

    0xbcc42a68,// 134 PAY 115 

    0x8d52e030,// 135 PAY 116 

    0x12599bad,// 136 PAY 117 

    0x64884aca,// 137 PAY 118 

    0x85f6a283,// 138 PAY 119 

    0x73401252,// 139 PAY 120 

    0x9313099c,// 140 PAY 121 

    0xb8e00dc8,// 141 PAY 122 

    0x330a9d41,// 142 PAY 123 

    0x381a1358,// 143 PAY 124 

    0x31e3a22e,// 144 PAY 125 

    0x86779920,// 145 PAY 126 

    0xb7a9157d,// 146 PAY 127 

    0x0466f501,// 147 PAY 128 

    0x41c46b52,// 148 PAY 129 

    0xb3c909c7,// 149 PAY 130 

    0x4048ac4a,// 150 PAY 131 

    0x2b06f7fc,// 151 PAY 132 

    0x59663460,// 152 PAY 133 

    0xbfd96d97,// 153 PAY 134 

    0x3825c1b2,// 154 PAY 135 

    0x197a6b4c,// 155 PAY 136 

    0x07ed6160,// 156 PAY 137 

    0xac72048e,// 157 PAY 138 

    0x414ad589,// 158 PAY 139 

    0xa29eea4c,// 159 PAY 140 

    0xfc098f45,// 160 PAY 141 

    0x9e3445af,// 161 PAY 142 

    0x5d994404,// 162 PAY 143 

    0x3de07f07,// 163 PAY 144 

    0xe13ea340,// 164 PAY 145 

    0xde6cce38,// 165 PAY 146 

    0x16a8c05f,// 166 PAY 147 

    0xdd565888,// 167 PAY 148 

    0x814f3160,// 168 PAY 149 

    0x3f5b0ded,// 169 PAY 150 

    0x6a97b879,// 170 PAY 151 

    0x3d2c4d75,// 171 PAY 152 

    0x672a82ba,// 172 PAY 153 

    0x1c2c50b5,// 173 PAY 154 

    0x03b13766,// 174 PAY 155 

    0xbb748652,// 175 PAY 156 

    0x1a8884a0,// 176 PAY 157 

    0x611a7d5c,// 177 PAY 158 

    0x7060f5f9,// 178 PAY 159 

    0xe05076fa,// 179 PAY 160 

    0x5c19ee12,// 180 PAY 161 

    0x3fe2ff59,// 181 PAY 162 

    0xf34ff17e,// 182 PAY 163 

    0x408c9e2e,// 183 PAY 164 

    0xa7d03290,// 184 PAY 165 

    0xe0959904,// 185 PAY 166 

    0xdc99d830,// 186 PAY 167 

    0x4f681c9f,// 187 PAY 168 

    0xcbe92e8f,// 188 PAY 169 

    0x4f0dd563,// 189 PAY 170 

    0x6ddf99e1,// 190 PAY 171 

    0x3e59ff73,// 191 PAY 172 

    0x0c666ca7,// 192 PAY 173 

    0x76b70094,// 193 PAY 174 

    0x970b5b0b,// 194 PAY 175 

    0x12376b0f,// 195 PAY 176 

    0xd7ec1056,// 196 PAY 177 

    0xe8b793b3,// 197 PAY 178 

    0xcb9a2a58,// 198 PAY 179 

    0x27c04dc6,// 199 PAY 180 

    0x03be4bec,// 200 PAY 181 

    0x55653bf2,// 201 PAY 182 

    0xa65bd021,// 202 PAY 183 

    0x8444fb5f,// 203 PAY 184 

    0x4b28b659,// 204 PAY 185 

    0x1da0922e,// 205 PAY 186 

    0xf26275e9,// 206 PAY 187 

    0xf0acca6f,// 207 PAY 188 

    0x0a1c4f6e,// 208 PAY 189 

    0xa0d3dee6,// 209 PAY 190 

    0x6eda49f9,// 210 PAY 191 

    0xb79eebae,// 211 PAY 192 

    0x19bf8fcb,// 212 PAY 193 

    0x7ec2439d,// 213 PAY 194 

    0x972237e5,// 214 PAY 195 

    0x85145c73,// 215 PAY 196 

    0xe96d8b98,// 216 PAY 197 

    0xe4c85e95,// 217 PAY 198 

    0x02eb8511,// 218 PAY 199 

    0xc5e5b2cd,// 219 PAY 200 

    0xa94419eb,// 220 PAY 201 

    0x87ccb473,// 221 PAY 202 

    0x5207a401,// 222 PAY 203 

    0x42a3f112,// 223 PAY 204 

    0xae01bb76,// 224 PAY 205 

    0x2c9a20d6,// 225 PAY 206 

    0xed756fe9,// 226 PAY 207 

    0x5012d7c7,// 227 PAY 208 

    0x88ab2f4c,// 228 PAY 209 

    0xd4ca0707,// 229 PAY 210 

    0x96f52fe8,// 230 PAY 211 

    0x596103d7,// 231 PAY 212 

    0xb2ee6cd5,// 232 PAY 213 

    0x67e5a0b9,// 233 PAY 214 

    0x85406ab4,// 234 PAY 215 

    0xb7275d88,// 235 PAY 216 

    0x3d76fe21,// 236 PAY 217 

    0x43e0b4e7,// 237 PAY 218 

    0x1717e371,// 238 PAY 219 

    0x992a7758,// 239 PAY 220 

    0xc8bff934,// 240 PAY 221 

    0x37c4a577,// 241 PAY 222 

    0x26812f9a,// 242 PAY 223 

    0xc84ce29a,// 243 PAY 224 

    0x9c70bc0e,// 244 PAY 225 

    0x4488baa7,// 245 PAY 226 

    0xdf9304a5,// 246 PAY 227 

    0x20a2112a,// 247 PAY 228 

    0x55808236,// 248 PAY 229 

    0xb1f8a586,// 249 PAY 230 

    0x1cbd7ff7,// 250 PAY 231 

    0x071ae678,// 251 PAY 232 

    0xda234ace,// 252 PAY 233 

    0x2022789b,// 253 PAY 234 

    0x736fa92f,// 254 PAY 235 

    0x8e36475f,// 255 PAY 236 

    0xe2a3a79e,// 256 PAY 237 

    0x9adbbfc3,// 257 PAY 238 

    0x1626de70,// 258 PAY 239 

    0xa480805e,// 259 PAY 240 

    0x2dca6680,// 260 PAY 241 

    0x934dc46d,// 261 PAY 242 

    0x92eaec8e,// 262 PAY 243 

    0x351bcfb3,// 263 PAY 244 

    0x4d68f9aa,// 264 PAY 245 

    0x95fca2df,// 265 PAY 246 

    0x2e2e9d19,// 266 PAY 247 

    0x2e92cae0,// 267 PAY 248 

    0xd908ddca,// 268 PAY 249 

    0x430ac730,// 269 PAY 250 

    0xd3332444,// 270 PAY 251 

    0x85282262,// 271 PAY 252 

    0xf4051d72,// 272 PAY 253 

    0x3e0872c4,// 273 PAY 254 

    0xfaf0d49f,// 274 PAY 255 

    0x67726062,// 275 PAY 256 

    0xeca482a8,// 276 PAY 257 

    0x47aef03a,// 277 PAY 258 

    0xd882a59e,// 278 PAY 259 

    0x5f5f9c8b,// 279 PAY 260 

    0x95f3d1a1,// 280 PAY 261 

    0xfce808a8,// 281 PAY 262 

    0x934f6e0d,// 282 PAY 263 

    0xdea22300,// 283 PAY 264 

    0x65f5f8d8,// 284 PAY 265 

    0x411fbe28,// 285 PAY 266 

    0xd514933d,// 286 PAY 267 

    0x61007c9e,// 287 PAY 268 

    0xfa4373dc,// 288 PAY 269 

    0x6712531b,// 289 PAY 270 

    0x2e1ab091,// 290 PAY 271 

    0xe342e03a,// 291 PAY 272 

    0xba8c3713,// 292 PAY 273 

    0x418c52d4,// 293 PAY 274 

    0xd60898d1,// 294 PAY 275 

    0x8182a67c,// 295 PAY 276 

    0x6c78a494,// 296 PAY 277 

    0x65bf36ff,// 297 PAY 278 

    0x48aefdfd,// 298 PAY 279 

    0x2146eddb,// 299 PAY 280 

    0xc4e65fb0,// 300 PAY 281 

    0xbcff692e,// 301 PAY 282 

    0x268788ab,// 302 PAY 283 

    0xeed82f2f,// 303 PAY 284 

    0x1a551e4d,// 304 PAY 285 

    0xabb84eb7,// 305 PAY 286 

    0xd0d11b3d,// 306 PAY 287 

    0xc5c57d96,// 307 PAY 288 

    0x080e3c74,// 308 PAY 289 

    0xcbc46fbb,// 309 PAY 290 

    0x485385e8,// 310 PAY 291 

    0x1a8f3bd2,// 311 PAY 292 

    0x2fe9f5ce,// 312 PAY 293 

    0xaa7cbf16,// 313 PAY 294 

    0x32efcc51,// 314 PAY 295 

    0x864b274b,// 315 PAY 296 

    0xbb4b808c,// 316 PAY 297 

    0xee77e78c,// 317 PAY 298 

    0xc016f331,// 318 PAY 299 

    0xccacaeac,// 319 PAY 300 

    0x38845d1e,// 320 PAY 301 

    0x50e608a7,// 321 PAY 302 

    0x5daef07b,// 322 PAY 303 

    0xc79b7880,// 323 PAY 304 

    0x83601c74,// 324 PAY 305 

    0xb8394a90,// 325 PAY 306 

    0xe440ed5a,// 326 PAY 307 

    0x8772bc53,// 327 PAY 308 

    0x6dbf306a,// 328 PAY 309 

    0xa08a3160,// 329 PAY 310 

    0x0f5bc0bd,// 330 PAY 311 

    0x69882ecf,// 331 PAY 312 

    0x8bc8930a,// 332 PAY 313 

    0x62e73e7c,// 333 PAY 314 

    0x51462a73,// 334 PAY 315 

    0xab0cf552,// 335 PAY 316 

    0x2a6ecfb9,// 336 PAY 317 

    0x12f556be,// 337 PAY 318 

    0xac222cb3,// 338 PAY 319 

    0x69ff1604,// 339 PAY 320 

    0xf1a7e87b,// 340 PAY 321 

    0x213220ea,// 341 PAY 322 

    0x17c62717,// 342 PAY 323 

    0xe44ff878,// 343 PAY 324 

    0xef1275b1,// 344 PAY 325 

    0x1e5025ef,// 345 PAY 326 

    0xaaa37cf9,// 346 PAY 327 

    0xea90ec4c,// 347 PAY 328 

    0x6b9632c5,// 348 PAY 329 

    0x72468854,// 349 PAY 330 

    0x6db111a0,// 350 PAY 331 

    0xafb09e15,// 351 PAY 332 

    0xadcc3878,// 352 PAY 333 

    0x0da3055a,// 353 PAY 334 

    0x3ca71a0e,// 354 PAY 335 

    0xe810b713,// 355 PAY 336 

    0x386a26bb,// 356 PAY 337 

    0x3c0ece6c,// 357 PAY 338 

    0x9091a6f2,// 358 PAY 339 

    0x63613821,// 359 PAY 340 

    0x2fe91aa4,// 360 PAY 341 

    0xfdf663fc,// 361 PAY 342 

    0x5e5f1d54,// 362 PAY 343 

    0x5d2c06d3,// 363 PAY 344 

    0x3cd10519,// 364 PAY 345 

    0x384b1e10,// 365 PAY 346 

    0x1aa229aa,// 366 PAY 347 

    0xf6290650,// 367 PAY 348 

    0x5567fe1c,// 368 PAY 349 

    0xab1e73b8,// 369 PAY 350 

    0xa883c3b3,// 370 PAY 351 

    0x79ccc88b,// 371 PAY 352 

    0xbc560000,// 372 PAY 353 

/// STA is 1 words. 

/// STA num_pkts       : 92 

/// STA pkt_idx        : 100 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xde 

    0x0191de5c // 373 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt16_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x80402838,// 4 SCX   2 

    0x00003400,// 5 SCX   3 

    0x40c18299,// 6 SCX   4 

    0xacaba97e,// 7 SCX   5 

    0x7437eda9,// 8 SCX   6 

    0x43b9df14,// 9 SCX   7 

    0x491a0a9e,// 10 SCX   8 

    0xe4878813,// 11 SCX   9 

    0x12234475,// 12 SCX  10 

    0xc691e6de,// 13 SCX  11 

    0x35ccd899,// 14 SCX  12 

    0xa3fee89d,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1138 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 975 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 975 

/// BFD lencrypto      : 112 

/// BFD ofstcrypto     : 656 

/// BFD (ofst+len)cry  : 768 

/// BFD ofstiv         : 612 

/// BFD ofsticv        : 980 

    0x000003cf,// 16 BFD   1 

    0x02900070,// 17 BFD   2 

    0x03d40264,// 18 BFD   3 

/// MFM is 7 words. 

/// MFM vldnibs        : 2d 

    0x2d00cea4,// 19 MFM   1 

    0x36ab468c,// 20 MFM   2 

    0x1acd3716,// 21 MFM   3 

    0x73ddf837,// 22 MFM   4 

    0x5f853398,// 23 MFM   5 

    0x7f2a5be9,// 24 MFM   6 

    0x50000000,// 25 MFM   7 

/// BDA is 286 words. 

/// BDA size     is 1138 (0x472) 

/// BDA id       is 0x8a3d 

    0x04728a3d,// 26 BDA   1 

/// PAY Generic Data size   : 1138 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x14a592b1,// 27 PAY   1 

    0x1151c4f5,// 28 PAY   2 

    0xec86d0a4,// 29 PAY   3 

    0xe31a2eaa,// 30 PAY   4 

    0xe4769455,// 31 PAY   5 

    0xf01d083a,// 32 PAY   6 

    0xa7f3e069,// 33 PAY   7 

    0xe1284f5e,// 34 PAY   8 

    0xa0061f86,// 35 PAY   9 

    0x4fcf60dd,// 36 PAY  10 

    0x40696bc7,// 37 PAY  11 

    0x71ce182c,// 38 PAY  12 

    0x8a14d1da,// 39 PAY  13 

    0xcb79b2c6,// 40 PAY  14 

    0xf9695bbc,// 41 PAY  15 

    0xda092272,// 42 PAY  16 

    0x382f6db7,// 43 PAY  17 

    0x58a83c6d,// 44 PAY  18 

    0x6141f5eb,// 45 PAY  19 

    0x9c130718,// 46 PAY  20 

    0x24cdbae5,// 47 PAY  21 

    0x4ebf7281,// 48 PAY  22 

    0xb5e22747,// 49 PAY  23 

    0x92edc4b5,// 50 PAY  24 

    0xc19a4bbd,// 51 PAY  25 

    0x2361b47f,// 52 PAY  26 

    0xc7169c07,// 53 PAY  27 

    0x69361fbe,// 54 PAY  28 

    0xbd79a90b,// 55 PAY  29 

    0x0e841e51,// 56 PAY  30 

    0xdb66476a,// 57 PAY  31 

    0xdf2786df,// 58 PAY  32 

    0x435f719c,// 59 PAY  33 

    0x2938f58f,// 60 PAY  34 

    0x4d6603c2,// 61 PAY  35 

    0x29493f2b,// 62 PAY  36 

    0x6ec3258a,// 63 PAY  37 

    0xb9ab7588,// 64 PAY  38 

    0xe9bf9713,// 65 PAY  39 

    0x49cbd518,// 66 PAY  40 

    0xb50a1709,// 67 PAY  41 

    0x90b1cb0a,// 68 PAY  42 

    0x9b73bbd1,// 69 PAY  43 

    0x57ceee80,// 70 PAY  44 

    0xc62df69b,// 71 PAY  45 

    0x4fbfb668,// 72 PAY  46 

    0x8db814f7,// 73 PAY  47 

    0x3122cce9,// 74 PAY  48 

    0x5ba7d9a3,// 75 PAY  49 

    0x21b99f87,// 76 PAY  50 

    0x7cf3f8ed,// 77 PAY  51 

    0xbee8228b,// 78 PAY  52 

    0x5303aa81,// 79 PAY  53 

    0xc0feb368,// 80 PAY  54 

    0x922dd8a4,// 81 PAY  55 

    0xbd86e794,// 82 PAY  56 

    0xd5b7b8a8,// 83 PAY  57 

    0x13bcef17,// 84 PAY  58 

    0x80b5e900,// 85 PAY  59 

    0x886a212d,// 86 PAY  60 

    0x31b51011,// 87 PAY  61 

    0xeb6546a1,// 88 PAY  62 

    0xdebd9cc2,// 89 PAY  63 

    0x0f91759c,// 90 PAY  64 

    0x5ea9e83c,// 91 PAY  65 

    0xcdddc529,// 92 PAY  66 

    0x15cc9308,// 93 PAY  67 

    0xec13847d,// 94 PAY  68 

    0xc0ced4a5,// 95 PAY  69 

    0x276b7eff,// 96 PAY  70 

    0x7d22bf96,// 97 PAY  71 

    0x5bf7c067,// 98 PAY  72 

    0x0e5d5280,// 99 PAY  73 

    0xb671ade5,// 100 PAY  74 

    0x67d7a130,// 101 PAY  75 

    0xe63f51a3,// 102 PAY  76 

    0xfd28773b,// 103 PAY  77 

    0x5f28c63d,// 104 PAY  78 

    0xe75a1aa7,// 105 PAY  79 

    0xc382f564,// 106 PAY  80 

    0x17776950,// 107 PAY  81 

    0xd00b9849,// 108 PAY  82 

    0xd94c3b7f,// 109 PAY  83 

    0x963a3224,// 110 PAY  84 

    0xa363c0f4,// 111 PAY  85 

    0x835980b4,// 112 PAY  86 

    0xbfdb0a6e,// 113 PAY  87 

    0x2271fbab,// 114 PAY  88 

    0x37ab8c80,// 115 PAY  89 

    0x2f4a11b7,// 116 PAY  90 

    0x929757f1,// 117 PAY  91 

    0x1283927c,// 118 PAY  92 

    0x9ec79676,// 119 PAY  93 

    0xc5642db7,// 120 PAY  94 

    0x63918551,// 121 PAY  95 

    0x8125df92,// 122 PAY  96 

    0xd815eed8,// 123 PAY  97 

    0x7add9ee2,// 124 PAY  98 

    0x47aa6194,// 125 PAY  99 

    0xac5d0be4,// 126 PAY 100 

    0xd40d3f53,// 127 PAY 101 

    0xe24a569e,// 128 PAY 102 

    0x418e493c,// 129 PAY 103 

    0x0ab6f72c,// 130 PAY 104 

    0xdf5a11c8,// 131 PAY 105 

    0xe4e0ab53,// 132 PAY 106 

    0x388a4278,// 133 PAY 107 

    0x2ccf7699,// 134 PAY 108 

    0x38ad4102,// 135 PAY 109 

    0xfcdd290a,// 136 PAY 110 

    0x874f6d46,// 137 PAY 111 

    0x7ab94b28,// 138 PAY 112 

    0xced073f3,// 139 PAY 113 

    0x6f27b6f4,// 140 PAY 114 

    0xa54a17ae,// 141 PAY 115 

    0x287350ed,// 142 PAY 116 

    0x9195a2a9,// 143 PAY 117 

    0x2a2354fb,// 144 PAY 118 

    0x0c56e25c,// 145 PAY 119 

    0xaed29bc7,// 146 PAY 120 

    0xcd026b8c,// 147 PAY 121 

    0x3eeb7911,// 148 PAY 122 

    0x0be12220,// 149 PAY 123 

    0x29fa3f47,// 150 PAY 124 

    0xcce266c4,// 151 PAY 125 

    0xe2300172,// 152 PAY 126 

    0x05bec114,// 153 PAY 127 

    0x2bcc3875,// 154 PAY 128 

    0x94d5f33b,// 155 PAY 129 

    0x09d01443,// 156 PAY 130 

    0x9f2a561c,// 157 PAY 131 

    0xffc452ed,// 158 PAY 132 

    0x032a82cb,// 159 PAY 133 

    0x44d3ba43,// 160 PAY 134 

    0x42fc8b33,// 161 PAY 135 

    0xc30366a0,// 162 PAY 136 

    0xfb09f0ed,// 163 PAY 137 

    0x431d8963,// 164 PAY 138 

    0xa3ddb623,// 165 PAY 139 

    0x10e8b99d,// 166 PAY 140 

    0x53eb6e90,// 167 PAY 141 

    0x4060314c,// 168 PAY 142 

    0x6b48765a,// 169 PAY 143 

    0x2763cb98,// 170 PAY 144 

    0xb10511c7,// 171 PAY 145 

    0x7263c971,// 172 PAY 146 

    0x926184f4,// 173 PAY 147 

    0xe8842a54,// 174 PAY 148 

    0x98e7d032,// 175 PAY 149 

    0xc78d6ea3,// 176 PAY 150 

    0x728abd4c,// 177 PAY 151 

    0xda88b301,// 178 PAY 152 

    0x60171cff,// 179 PAY 153 

    0x148380df,// 180 PAY 154 

    0x93b94327,// 181 PAY 155 

    0xfa1310e9,// 182 PAY 156 

    0x97e09827,// 183 PAY 157 

    0x2f74e1dc,// 184 PAY 158 

    0x69a2dda2,// 185 PAY 159 

    0x4def17f3,// 186 PAY 160 

    0x0e7e2795,// 187 PAY 161 

    0x0709c709,// 188 PAY 162 

    0x22fe80c5,// 189 PAY 163 

    0xa8ac577a,// 190 PAY 164 

    0xade18ef8,// 191 PAY 165 

    0x003504c9,// 192 PAY 166 

    0x7a855e50,// 193 PAY 167 

    0x3690af99,// 194 PAY 168 

    0x228b8e39,// 195 PAY 169 

    0xd770a813,// 196 PAY 170 

    0x3afb2b7a,// 197 PAY 171 

    0xb190c057,// 198 PAY 172 

    0xe43f2510,// 199 PAY 173 

    0xb24d0e8d,// 200 PAY 174 

    0xf47bb83a,// 201 PAY 175 

    0x484df90b,// 202 PAY 176 

    0xde80456f,// 203 PAY 177 

    0x99f12b73,// 204 PAY 178 

    0x93702883,// 205 PAY 179 

    0x383d36f2,// 206 PAY 180 

    0x8bdd9d07,// 207 PAY 181 

    0x3bc5f05b,// 208 PAY 182 

    0x00b85e11,// 209 PAY 183 

    0x95c42717,// 210 PAY 184 

    0x0f36f889,// 211 PAY 185 

    0x153407c7,// 212 PAY 186 

    0xffd36ff9,// 213 PAY 187 

    0x1f1cd486,// 214 PAY 188 

    0xb8bc9d86,// 215 PAY 189 

    0x0f44ce65,// 216 PAY 190 

    0xe37f27cf,// 217 PAY 191 

    0x04654e59,// 218 PAY 192 

    0xdb2e19ee,// 219 PAY 193 

    0xebc88bb3,// 220 PAY 194 

    0x9bbb4c24,// 221 PAY 195 

    0x76fe69e5,// 222 PAY 196 

    0x27e87231,// 223 PAY 197 

    0x18762a89,// 224 PAY 198 

    0xcdef1e26,// 225 PAY 199 

    0xec42ab5b,// 226 PAY 200 

    0xe55de240,// 227 PAY 201 

    0x6154083d,// 228 PAY 202 

    0x20064b62,// 229 PAY 203 

    0x7f7f4c63,// 230 PAY 204 

    0xa693eeac,// 231 PAY 205 

    0x102d8e09,// 232 PAY 206 

    0x78b69c4b,// 233 PAY 207 

    0xafe1aa20,// 234 PAY 208 

    0xc66fff4c,// 235 PAY 209 

    0x8ce3f5df,// 236 PAY 210 

    0x04c08767,// 237 PAY 211 

    0x3677a8c7,// 238 PAY 212 

    0xf57f39b4,// 239 PAY 213 

    0xfc490016,// 240 PAY 214 

    0x14280703,// 241 PAY 215 

    0x9c71c744,// 242 PAY 216 

    0x839c2dd5,// 243 PAY 217 

    0x94214bc0,// 244 PAY 218 

    0x0bfdc141,// 245 PAY 219 

    0x34f64a1f,// 246 PAY 220 

    0x7048e85a,// 247 PAY 221 

    0x3c99f2fc,// 248 PAY 222 

    0x8d6dea05,// 249 PAY 223 

    0xf237719e,// 250 PAY 224 

    0x9572b3c7,// 251 PAY 225 

    0xdb662fbf,// 252 PAY 226 

    0xe98042a4,// 253 PAY 227 

    0x4acd94a8,// 254 PAY 228 

    0x9e98f2b9,// 255 PAY 229 

    0x7b762bcd,// 256 PAY 230 

    0xad43e742,// 257 PAY 231 

    0x6bc3772e,// 258 PAY 232 

    0x2bf20e12,// 259 PAY 233 

    0xd841a469,// 260 PAY 234 

    0x0f12c13d,// 261 PAY 235 

    0x83b1b096,// 262 PAY 236 

    0xef02fb04,// 263 PAY 237 

    0x84a4e878,// 264 PAY 238 

    0x2b141186,// 265 PAY 239 

    0x14a3dd2f,// 266 PAY 240 

    0x89ad8eba,// 267 PAY 241 

    0x930e961a,// 268 PAY 242 

    0x92c54f42,// 269 PAY 243 

    0x578ee017,// 270 PAY 244 

    0x005f3628,// 271 PAY 245 

    0x7d5524e7,// 272 PAY 246 

    0xf603f214,// 273 PAY 247 

    0x900992e9,// 274 PAY 248 

    0x07305b76,// 275 PAY 249 

    0x97eaad75,// 276 PAY 250 

    0x441f454a,// 277 PAY 251 

    0xfe68e806,// 278 PAY 252 

    0x2bc37eb9,// 279 PAY 253 

    0x044d274e,// 280 PAY 254 

    0xf03f437e,// 281 PAY 255 

    0xcaa80530,// 282 PAY 256 

    0x0ec008d5,// 283 PAY 257 

    0xe2de1f1a,// 284 PAY 258 

    0xf15388df,// 285 PAY 259 

    0x44da4ceb,// 286 PAY 260 

    0x72ff0f84,// 287 PAY 261 

    0x4d6fbb66,// 288 PAY 262 

    0xb6e2d550,// 289 PAY 263 

    0x3bb1f6c5,// 290 PAY 264 

    0x319a497e,// 291 PAY 265 

    0xa22b1e3b,// 292 PAY 266 

    0x796e6a21,// 293 PAY 267 

    0x78f5e7d8,// 294 PAY 268 

    0xf2590dde,// 295 PAY 269 

    0x3f605c30,// 296 PAY 270 

    0x12ba37e8,// 297 PAY 271 

    0x541d8dea,// 298 PAY 272 

    0x467812eb,// 299 PAY 273 

    0xbb46d039,// 300 PAY 274 

    0x803c48a5,// 301 PAY 275 

    0x1c46752e,// 302 PAY 276 

    0x469752ec,// 303 PAY 277 

    0xde21673e,// 304 PAY 278 

    0xe5d3d820,// 305 PAY 279 

    0x8bca9357,// 306 PAY 280 

    0x52a3d9fb,// 307 PAY 281 

    0xc3d96503,// 308 PAY 282 

    0xf912092a,// 309 PAY 283 

    0x9d4b6763,// 310 PAY 284 

    0x31c90000,// 311 PAY 285 

/// STA is 1 words. 

/// STA num_pkts       : 124 

/// STA pkt_idx        : 247 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc5 

    0x03dcc57c // 312 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt17_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x0f 

/// ECH pdu_tag        : 0x00 

    0x000f0000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x8040287b,// 4 SCX   2 

    0x00002400,// 5 SCX   3 

    0x645d57b7,// 6 SCX   4 

    0xb4b092d3,// 7 SCX   5 

    0xa5757684,// 8 SCX   6 

    0xbe89e9fb,// 9 SCX   7 

    0xae9ecf92,// 10 SCX   8 

    0x719c5dc9,// 11 SCX   9 

    0xaec511ee,// 12 SCX  10 

    0x5d5eb4a0,// 13 SCX  11 

    0x3eec2f49,// 14 SCX  12 

    0x257643de,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 182 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 84 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 84 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 44 

/// BFD (ofst+len)cry  : 52 

/// BFD ofstiv         : 8 

/// BFD ofsticv        : 120 

    0x00000054,// 16 BFD   1 

    0x002c0008,// 17 BFD   2 

    0x00780008,// 18 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 13 

    0x1300fc6a,// 19 MFM   1 

    0x3a5f7d78,// 20 MFM   2 

    0xc20662c0,// 21 MFM   3 

/// BDA is 47 words. 

/// BDA size     is 182 (0xb6) 

/// BDA id       is 0xc3ba 

    0x00b6c3ba,// 22 BDA   1 

/// PAY Generic Data size   : 182 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x8e1c0abf,// 23 PAY   1 

    0x680b03cf,// 24 PAY   2 

    0xb58f5caa,// 25 PAY   3 

    0x48903301,// 26 PAY   4 

    0xd560125d,// 27 PAY   5 

    0xd16939a2,// 28 PAY   6 

    0x8495b648,// 29 PAY   7 

    0x62083b13,// 30 PAY   8 

    0xfe2db590,// 31 PAY   9 

    0x7cb399fd,// 32 PAY  10 

    0xdd277b25,// 33 PAY  11 

    0x8be64457,// 34 PAY  12 

    0x08e247fd,// 35 PAY  13 

    0x5eb1bec0,// 36 PAY  14 

    0x76c38205,// 37 PAY  15 

    0x50b03b5a,// 38 PAY  16 

    0x879d3a22,// 39 PAY  17 

    0xf55619d2,// 40 PAY  18 

    0x2312b2f4,// 41 PAY  19 

    0x8b773bd2,// 42 PAY  20 

    0xabc23b37,// 43 PAY  21 

    0x7597fd38,// 44 PAY  22 

    0x303fcaaf,// 45 PAY  23 

    0xd3e39c74,// 46 PAY  24 

    0x5a973d9b,// 47 PAY  25 

    0xb8333ebe,// 48 PAY  26 

    0x0e5045dd,// 49 PAY  27 

    0x9ce92bce,// 50 PAY  28 

    0x43b78583,// 51 PAY  29 

    0x2073b36c,// 52 PAY  30 

    0x649ed528,// 53 PAY  31 

    0x75b9f89d,// 54 PAY  32 

    0xed6a2e70,// 55 PAY  33 

    0x91c7d3c8,// 56 PAY  34 

    0x5ec6dae5,// 57 PAY  35 

    0xac24fcf1,// 58 PAY  36 

    0xd4084c25,// 59 PAY  37 

    0xe426b64d,// 60 PAY  38 

    0xe8bd03c6,// 61 PAY  39 

    0x926d1a6d,// 62 PAY  40 

    0x1e705504,// 63 PAY  41 

    0xaebaf796,// 64 PAY  42 

    0x033e66af,// 65 PAY  43 

    0xf93d5d41,// 66 PAY  44 

    0x75f0a1ca,// 67 PAY  45 

    0x223e0000,// 68 PAY  46 

/// STA is 1 words. 

/// STA num_pkts       : 137 

/// STA pkt_idx        : 109 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc0 

    0x01b5c089 // 69 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt18_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x804428a9,// 4 SCX   2 

    0x00004142,// 5 SCX   3 

    0x5aa6df11,// 6 SCX   4 

    0xae8f0351,// 7 SCX   5 

    0xc925b30c,// 8 SCX   6 

    0x5d5cbec3,// 9 SCX   7 

    0x30b2a671,// 10 SCX   8 

    0xed2a7fe1,// 11 SCX   9 

    0xcdb31492,// 12 SCX  10 

    0x66d84def,// 13 SCX  11 

    0xf6dc0409,// 14 SCX  12 

    0xddd7e84a,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1144 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 802 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 802 

/// BFD lencrypto      : 224 

/// BFD ofstcrypto     : 564 

/// BFD (ofst+len)cry  : 788 

/// BFD ofstiv         : 304 

/// BFD ofsticv        : 828 

    0x00000322,// 16 BFD   1 

    0x023400e0,// 17 BFD   2 

    0x033c0130,// 18 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 6 

    0x0600e870,// 19 MFM   1 

    0xd9000000,// 20 MFM   2 

/// BDA is 287 words. 

/// BDA size     is 1144 (0x478) 

/// BDA id       is 0xdbea 

    0x0478dbea,// 21 BDA   1 

/// PAY Generic Data size   : 1144 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x313219ab,// 22 PAY   1 

    0xa04f3bc1,// 23 PAY   2 

    0xf73fb9dd,// 24 PAY   3 

    0xf76c7e49,// 25 PAY   4 

    0xcc01be39,// 26 PAY   5 

    0xe3e18d30,// 27 PAY   6 

    0x000cc02e,// 28 PAY   7 

    0x2d1e6ba6,// 29 PAY   8 

    0xfd52f8ee,// 30 PAY   9 

    0xdd3097c9,// 31 PAY  10 

    0x42503f38,// 32 PAY  11 

    0xe5043679,// 33 PAY  12 

    0xca16e35c,// 34 PAY  13 

    0x2464c037,// 35 PAY  14 

    0xfe7392fc,// 36 PAY  15 

    0x4402643e,// 37 PAY  16 

    0x722a2666,// 38 PAY  17 

    0x37245b18,// 39 PAY  18 

    0xf71d9ee2,// 40 PAY  19 

    0x8188d981,// 41 PAY  20 

    0x09520c73,// 42 PAY  21 

    0x3d247d60,// 43 PAY  22 

    0x2fa06c30,// 44 PAY  23 

    0x7882c538,// 45 PAY  24 

    0xe31e75d0,// 46 PAY  25 

    0x93fa30c1,// 47 PAY  26 

    0xe5119aa4,// 48 PAY  27 

    0x95446dff,// 49 PAY  28 

    0x3c33fa6d,// 50 PAY  29 

    0x3f02270e,// 51 PAY  30 

    0x351a381b,// 52 PAY  31 

    0xb5d3041e,// 53 PAY  32 

    0xeae98d7c,// 54 PAY  33 

    0x8f98c650,// 55 PAY  34 

    0x8a87ed0d,// 56 PAY  35 

    0x25de9c2b,// 57 PAY  36 

    0x615b9142,// 58 PAY  37 

    0x7d7454f5,// 59 PAY  38 

    0x8ee83150,// 60 PAY  39 

    0xcd73239e,// 61 PAY  40 

    0xbf7dc450,// 62 PAY  41 

    0x47d80201,// 63 PAY  42 

    0xf19f1f81,// 64 PAY  43 

    0xe56e63d9,// 65 PAY  44 

    0x6974fa61,// 66 PAY  45 

    0x6563485d,// 67 PAY  46 

    0x9cbfdbd3,// 68 PAY  47 

    0x7cac7634,// 69 PAY  48 

    0xe02fde3a,// 70 PAY  49 

    0x7da24c43,// 71 PAY  50 

    0x38c1d29b,// 72 PAY  51 

    0xfa92c803,// 73 PAY  52 

    0xc1a5dac2,// 74 PAY  53 

    0x8efcc84c,// 75 PAY  54 

    0xe28298b1,// 76 PAY  55 

    0x895530d0,// 77 PAY  56 

    0xbaa1eff4,// 78 PAY  57 

    0xae3012f6,// 79 PAY  58 

    0xb871d61f,// 80 PAY  59 

    0x7487cd10,// 81 PAY  60 

    0xbd8a4366,// 82 PAY  61 

    0x9ab54827,// 83 PAY  62 

    0x9f0a8bee,// 84 PAY  63 

    0x17fe389b,// 85 PAY  64 

    0xe77501a9,// 86 PAY  65 

    0x2ebc46b1,// 87 PAY  66 

    0x48892657,// 88 PAY  67 

    0xbc8f3183,// 89 PAY  68 

    0xc01c4c7f,// 90 PAY  69 

    0x2da2abfd,// 91 PAY  70 

    0x45be9507,// 92 PAY  71 

    0x15062cbb,// 93 PAY  72 

    0xf587f0fa,// 94 PAY  73 

    0x8d167ab3,// 95 PAY  74 

    0x94c14b48,// 96 PAY  75 

    0x1a6ef857,// 97 PAY  76 

    0xcf3ac294,// 98 PAY  77 

    0xec96d44e,// 99 PAY  78 

    0x59d9a749,// 100 PAY  79 

    0x9c7d3d48,// 101 PAY  80 

    0x2592ca0e,// 102 PAY  81 

    0xb6002341,// 103 PAY  82 

    0x11c2b7f2,// 104 PAY  83 

    0x4de7b67a,// 105 PAY  84 

    0x63f01663,// 106 PAY  85 

    0xc4b99156,// 107 PAY  86 

    0x4f3d1ba2,// 108 PAY  87 

    0x90e430d0,// 109 PAY  88 

    0xa7ea9e64,// 110 PAY  89 

    0x413b2729,// 111 PAY  90 

    0x1489cbd0,// 112 PAY  91 

    0xac6881a5,// 113 PAY  92 

    0x7ac44728,// 114 PAY  93 

    0x402dea35,// 115 PAY  94 

    0xca7cf804,// 116 PAY  95 

    0x98a020d0,// 117 PAY  96 

    0x818cdb55,// 118 PAY  97 

    0xdb7f2739,// 119 PAY  98 

    0x8c2c91a3,// 120 PAY  99 

    0xca28639a,// 121 PAY 100 

    0x9e9f804a,// 122 PAY 101 

    0xca14bd2a,// 123 PAY 102 

    0x01823f41,// 124 PAY 103 

    0xa0bfae01,// 125 PAY 104 

    0x4dff26fb,// 126 PAY 105 

    0x4863b2e2,// 127 PAY 106 

    0x21c924a4,// 128 PAY 107 

    0x21330288,// 129 PAY 108 

    0x8bb4a971,// 130 PAY 109 

    0xba6e1ff1,// 131 PAY 110 

    0x27290be7,// 132 PAY 111 

    0x38e98c15,// 133 PAY 112 

    0x12ca6860,// 134 PAY 113 

    0x9f2a1ffc,// 135 PAY 114 

    0x28af3462,// 136 PAY 115 

    0xda8c0ac6,// 137 PAY 116 

    0x0164cece,// 138 PAY 117 

    0x64611691,// 139 PAY 118 

    0xf178be3a,// 140 PAY 119 

    0x7d3c3244,// 141 PAY 120 

    0xb6b4cbb7,// 142 PAY 121 

    0x68c34838,// 143 PAY 122 

    0xac63e28c,// 144 PAY 123 

    0x9dcff1a7,// 145 PAY 124 

    0x962d163e,// 146 PAY 125 

    0x393059b9,// 147 PAY 126 

    0x9d6f3375,// 148 PAY 127 

    0xcfba57a6,// 149 PAY 128 

    0x08f27c1b,// 150 PAY 129 

    0xee829178,// 151 PAY 130 

    0xb07281af,// 152 PAY 131 

    0x6b6b5b3b,// 153 PAY 132 

    0xee230c65,// 154 PAY 133 

    0xa871224a,// 155 PAY 134 

    0x56e43fac,// 156 PAY 135 

    0xbe09cdbb,// 157 PAY 136 

    0x6d2b39b0,// 158 PAY 137 

    0xe49c815b,// 159 PAY 138 

    0x64bf8578,// 160 PAY 139 

    0x92919ce6,// 161 PAY 140 

    0xf0a183ed,// 162 PAY 141 

    0x30db9e3c,// 163 PAY 142 

    0x942aa41d,// 164 PAY 143 

    0xd97fd376,// 165 PAY 144 

    0xd96361b6,// 166 PAY 145 

    0x8fbea13c,// 167 PAY 146 

    0x072da86c,// 168 PAY 147 

    0xb2e0bf26,// 169 PAY 148 

    0x11e2c185,// 170 PAY 149 

    0xc6bfb7a4,// 171 PAY 150 

    0x882f0b1e,// 172 PAY 151 

    0x99eaff99,// 173 PAY 152 

    0xc9b7fdd3,// 174 PAY 153 

    0xc9ac39e7,// 175 PAY 154 

    0xd7572fd8,// 176 PAY 155 

    0xb7791367,// 177 PAY 156 

    0x85685fc9,// 178 PAY 157 

    0x84b1eeff,// 179 PAY 158 

    0xbd8073a3,// 180 PAY 159 

    0xf4651031,// 181 PAY 160 

    0x0b9e0fc6,// 182 PAY 161 

    0xfc907a72,// 183 PAY 162 

    0x18d96adf,// 184 PAY 163 

    0xd3d30b11,// 185 PAY 164 

    0x0eceee41,// 186 PAY 165 

    0x040d3c9a,// 187 PAY 166 

    0x3caa106f,// 188 PAY 167 

    0x883b8c4f,// 189 PAY 168 

    0xd787aa7a,// 190 PAY 169 

    0x37d2e8e5,// 191 PAY 170 

    0x065c9702,// 192 PAY 171 

    0x4932b470,// 193 PAY 172 

    0x60b0dd61,// 194 PAY 173 

    0xd3ba5ec6,// 195 PAY 174 

    0xd7075cbc,// 196 PAY 175 

    0x0360ecc9,// 197 PAY 176 

    0x134e09a8,// 198 PAY 177 

    0xfd730951,// 199 PAY 178 

    0x35ef7c93,// 200 PAY 179 

    0xa74e59e9,// 201 PAY 180 

    0x4662793e,// 202 PAY 181 

    0x0bff27b2,// 203 PAY 182 

    0x1adcb85e,// 204 PAY 183 

    0x0390d759,// 205 PAY 184 

    0x3bd1b728,// 206 PAY 185 

    0x2e3019d4,// 207 PAY 186 

    0xb4346a67,// 208 PAY 187 

    0xdfedbeef,// 209 PAY 188 

    0x61973194,// 210 PAY 189 

    0x29e03422,// 211 PAY 190 

    0x38348c29,// 212 PAY 191 

    0x7878be2d,// 213 PAY 192 

    0xa882fa87,// 214 PAY 193 

    0xa3e335f1,// 215 PAY 194 

    0x4b9aaec2,// 216 PAY 195 

    0xa3fa6434,// 217 PAY 196 

    0x42016ce2,// 218 PAY 197 

    0x624f9cdc,// 219 PAY 198 

    0x4a6be3f9,// 220 PAY 199 

    0x880c5129,// 221 PAY 200 

    0x7ee09287,// 222 PAY 201 

    0x06db1bc1,// 223 PAY 202 

    0xaa794952,// 224 PAY 203 

    0xc2db4100,// 225 PAY 204 

    0x5cb05a1e,// 226 PAY 205 

    0xbfe07c49,// 227 PAY 206 

    0x8b73127d,// 228 PAY 207 

    0xf7a41fa5,// 229 PAY 208 

    0xd761a9ab,// 230 PAY 209 

    0x0902835a,// 231 PAY 210 

    0xb227d11b,// 232 PAY 211 

    0x13a8603a,// 233 PAY 212 

    0x6984e729,// 234 PAY 213 

    0x1a756e72,// 235 PAY 214 

    0x75d6912b,// 236 PAY 215 

    0xd26a3c9a,// 237 PAY 216 

    0x71eac7be,// 238 PAY 217 

    0xaa36782f,// 239 PAY 218 

    0x0d23d558,// 240 PAY 219 

    0x6957f122,// 241 PAY 220 

    0xc7400d69,// 242 PAY 221 

    0x73d23671,// 243 PAY 222 

    0xfbbdbd10,// 244 PAY 223 

    0x6fe0cb78,// 245 PAY 224 

    0x7cc07b22,// 246 PAY 225 

    0x83aeb5e6,// 247 PAY 226 

    0x451fe760,// 248 PAY 227 

    0x12cf177c,// 249 PAY 228 

    0x19a13fb7,// 250 PAY 229 

    0x666c6cc4,// 251 PAY 230 

    0xf0d0a554,// 252 PAY 231 

    0x428bafa7,// 253 PAY 232 

    0x29c16f1c,// 254 PAY 233 

    0x5d937706,// 255 PAY 234 

    0xbc879775,// 256 PAY 235 

    0x266e14af,// 257 PAY 236 

    0xf09b4c40,// 258 PAY 237 

    0xf945853c,// 259 PAY 238 

    0xe2258519,// 260 PAY 239 

    0xbfca556c,// 261 PAY 240 

    0x95444964,// 262 PAY 241 

    0x9a944986,// 263 PAY 242 

    0xaac172ce,// 264 PAY 243 

    0xdfb271f6,// 265 PAY 244 

    0x6b995f51,// 266 PAY 245 

    0x181f441d,// 267 PAY 246 

    0x44eb9e91,// 268 PAY 247 

    0x12b233a7,// 269 PAY 248 

    0xf217b53e,// 270 PAY 249 

    0xa8aa8661,// 271 PAY 250 

    0x1028f734,// 272 PAY 251 

    0xea5db38a,// 273 PAY 252 

    0x8cb526fe,// 274 PAY 253 

    0x7c683eea,// 275 PAY 254 

    0xc03d2950,// 276 PAY 255 

    0x65e877d4,// 277 PAY 256 

    0x1ca5a22e,// 278 PAY 257 

    0xe64caf61,// 279 PAY 258 

    0x71c3cada,// 280 PAY 259 

    0x88afd8b4,// 281 PAY 260 

    0xbc38ffa3,// 282 PAY 261 

    0x376b6c87,// 283 PAY 262 

    0xa5e5c1f9,// 284 PAY 263 

    0xfc2e25df,// 285 PAY 264 

    0x8659646d,// 286 PAY 265 

    0x30da1ace,// 287 PAY 266 

    0x77fde0f0,// 288 PAY 267 

    0xd6e6b012,// 289 PAY 268 

    0x92c050b0,// 290 PAY 269 

    0x428779d0,// 291 PAY 270 

    0xccfe1d48,// 292 PAY 271 

    0x07eb6190,// 293 PAY 272 

    0xe0821607,// 294 PAY 273 

    0xf844d3d1,// 295 PAY 274 

    0x06e54c6d,// 296 PAY 275 

    0xebe50335,// 297 PAY 276 

    0xc296c0a8,// 298 PAY 277 

    0xe5b5def8,// 299 PAY 278 

    0x3bed1c69,// 300 PAY 279 

    0xfe30934b,// 301 PAY 280 

    0xe7c8f679,// 302 PAY 281 

    0x651cda10,// 303 PAY 282 

    0x53207572,// 304 PAY 283 

    0x4f2802ba,// 305 PAY 284 

    0x313f13b0,// 306 PAY 285 

    0x3e595848,// 307 PAY 286 

/// STA is 1 words. 

/// STA num_pkts       : 212 

/// STA pkt_idx        : 86 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xe6 

    0x0158e6d4 // 308 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt19_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x804128c6,// 4 SCX   2 

    0x00006400,// 5 SCX   3 

    0x77e4262a,// 6 SCX   4 

    0xadd4a2a9,// 7 SCX   5 

    0xf384d6b2,// 8 SCX   6 

    0x4c3120ea,// 9 SCX   7 

    0x6ae61ec3,// 10 SCX   8 

    0x7248417e,// 11 SCX   9 

    0x79a78b39,// 12 SCX  10 

    0xfcc04107,// 13 SCX  11 

    0xbec2581a,// 14 SCX  12 

    0xa9b299e4,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 218 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 112 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 112 

/// BFD lencrypto      : 40 

/// BFD ofstcrypto     : 68 

/// BFD (ofst+len)cry  : 108 

/// BFD ofstiv         : 20 

/// BFD ofsticv        : 128 

    0x00000070,// 16 BFD   1 

    0x00440028,// 17 BFD   2 

    0x00800014,// 18 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 9 

    0x0900a275,// 19 MFM   1 

    0xa2e52000,// 20 MFM   2 

/// BDA is 56 words. 

/// BDA size     is 218 (0xda) 

/// BDA id       is 0x426c 

    0x00da426c,// 21 BDA   1 

/// PAY Generic Data size   : 218 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x0beb7dbf,// 22 PAY   1 

    0x5ecadbb4,// 23 PAY   2 

    0x65071c52,// 24 PAY   3 

    0x2b83d669,// 25 PAY   4 

    0xa215162e,// 26 PAY   5 

    0x55e822d9,// 27 PAY   6 

    0x44b1b620,// 28 PAY   7 

    0xecffa843,// 29 PAY   8 

    0xeff6f4ef,// 30 PAY   9 

    0x3b794e8d,// 31 PAY  10 

    0x497945e1,// 32 PAY  11 

    0x0fab4181,// 33 PAY  12 

    0xc60cc56a,// 34 PAY  13 

    0x9cb36323,// 35 PAY  14 

    0xcecc69c4,// 36 PAY  15 

    0x23b6d830,// 37 PAY  16 

    0xed457ba4,// 38 PAY  17 

    0x22e565d9,// 39 PAY  18 

    0x36d9d969,// 40 PAY  19 

    0x966fa907,// 41 PAY  20 

    0xf23f31b7,// 42 PAY  21 

    0xb96a69ab,// 43 PAY  22 

    0xa93ff7ae,// 44 PAY  23 

    0xf1c229f7,// 45 PAY  24 

    0xc598b50b,// 46 PAY  25 

    0x71702ec3,// 47 PAY  26 

    0x51514916,// 48 PAY  27 

    0x87145ff7,// 49 PAY  28 

    0xbbad2053,// 50 PAY  29 

    0x4e9006ba,// 51 PAY  30 

    0x086eb00c,// 52 PAY  31 

    0xb5556976,// 53 PAY  32 

    0xdfe7f2d2,// 54 PAY  33 

    0x92413599,// 55 PAY  34 

    0x0b01a317,// 56 PAY  35 

    0xe798d63f,// 57 PAY  36 

    0x7de045c7,// 58 PAY  37 

    0x38292758,// 59 PAY  38 

    0xaca509bf,// 60 PAY  39 

    0x2f489dec,// 61 PAY  40 

    0x4e0d167e,// 62 PAY  41 

    0x1c4e32a9,// 63 PAY  42 

    0xf6c0b554,// 64 PAY  43 

    0x515cb24b,// 65 PAY  44 

    0xaa8d00b8,// 66 PAY  45 

    0x37300051,// 67 PAY  46 

    0x921f7e30,// 68 PAY  47 

    0x1edaa9a4,// 69 PAY  48 

    0xe67ed09d,// 70 PAY  49 

    0x512a2f27,// 71 PAY  50 

    0xd69d7eca,// 72 PAY  51 

    0x9ff59006,// 73 PAY  52 

    0x214e632d,// 74 PAY  53 

    0xcbd5eec8,// 75 PAY  54 

    0xcc6a0000,// 76 PAY  55 

/// STA is 1 words. 

/// STA num_pkts       : 27 

/// STA pkt_idx        : 179 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3c 

    0x02cc3c1b // 77 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt20_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x07 

/// ECH pdu_tag        : 0x00 

    0x00070000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x804028a8,// 4 SCX   2 

    0x00004300,// 5 SCX   3 

    0xb9fdd983,// 6 SCX   4 

    0x6e0a3159,// 7 SCX   5 

    0x34f1dfc5,// 8 SCX   6 

    0x3301f00c,// 9 SCX   7 

    0x8cb7fcb0,// 10 SCX   8 

    0xe46fd4fa,// 11 SCX   9 

    0x27cd181b,// 12 SCX  10 

    0xcb8f32aa,// 13 SCX  11 

    0x20b24ad1,// 14 SCX  12 

    0x93e976d3,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 364 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 289 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 289 

/// BFD lencrypto      : 24 

/// BFD ofstcrypto     : 264 

/// BFD (ofst+len)cry  : 288 

/// BFD ofstiv         : 64 

/// BFD ofsticv        : 340 

    0x00000121,// 16 BFD   1 

    0x01080018,// 17 BFD   2 

    0x01540040,// 18 BFD   3 

/// MFM is 10 words. 

/// MFM vldnibs        : 45 

    0x4500f845,// 19 MFM   1 

    0xbb1274c1,// 20 MFM   2 

    0x01651677,// 21 MFM   3 

    0xc738ef34,// 22 MFM   4 

    0x9668334b,// 23 MFM   5 

    0xa2be690d,// 24 MFM   6 

    0x8e22a52b,// 25 MFM   7 

    0xe97455e0,// 26 MFM   8 

    0x42244a7c,// 27 MFM   9 

    0xb0000000,// 28 MFM  10 

/// BDA is 92 words. 

/// BDA size     is 364 (0x16c) 

/// BDA id       is 0x1692 

    0x016c1692,// 29 BDA   1 

/// PAY Generic Data size   : 364 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xb7bfe802,// 30 PAY   1 

    0x4f36d580,// 31 PAY   2 

    0xa2bdaa35,// 32 PAY   3 

    0xa504eed0,// 33 PAY   4 

    0xf2920c72,// 34 PAY   5 

    0x6b97e3da,// 35 PAY   6 

    0x8cb67451,// 36 PAY   7 

    0xbd11eab9,// 37 PAY   8 

    0x09197788,// 38 PAY   9 

    0x5c449632,// 39 PAY  10 

    0xc86b91d5,// 40 PAY  11 

    0x73ae6ae9,// 41 PAY  12 

    0x4b19d117,// 42 PAY  13 

    0xac5a9480,// 43 PAY  14 

    0x75893b29,// 44 PAY  15 

    0x7137fca9,// 45 PAY  16 

    0xc9402de5,// 46 PAY  17 

    0x1014d603,// 47 PAY  18 

    0x37123c8c,// 48 PAY  19 

    0xd54c59f9,// 49 PAY  20 

    0xbecbce21,// 50 PAY  21 

    0xb2c5250e,// 51 PAY  22 

    0x3f2e4d99,// 52 PAY  23 

    0x7816e514,// 53 PAY  24 

    0xf44c7ea3,// 54 PAY  25 

    0x3cc9810f,// 55 PAY  26 

    0xe434a574,// 56 PAY  27 

    0xfb302d56,// 57 PAY  28 

    0x92ba7fb3,// 58 PAY  29 

    0xa1e47385,// 59 PAY  30 

    0x03a6d4a5,// 60 PAY  31 

    0x512c8bcc,// 61 PAY  32 

    0xb08a6b70,// 62 PAY  33 

    0x417804d6,// 63 PAY  34 

    0x8e1a1782,// 64 PAY  35 

    0x4d41f650,// 65 PAY  36 

    0xad211852,// 66 PAY  37 

    0xb9c0e050,// 67 PAY  38 

    0x826db892,// 68 PAY  39 

    0x69d2f13e,// 69 PAY  40 

    0x027911c3,// 70 PAY  41 

    0x213061cd,// 71 PAY  42 

    0xfd4d096a,// 72 PAY  43 

    0x1583258d,// 73 PAY  44 

    0x45e141bf,// 74 PAY  45 

    0x2b58f540,// 75 PAY  46 

    0x273ba6a0,// 76 PAY  47 

    0x503724d0,// 77 PAY  48 

    0xbe8a6d93,// 78 PAY  49 

    0x80a69d79,// 79 PAY  50 

    0xe06ff9fd,// 80 PAY  51 

    0xecf31502,// 81 PAY  52 

    0xe2d22cda,// 82 PAY  53 

    0x81168baf,// 83 PAY  54 

    0x740cd847,// 84 PAY  55 

    0xcdf4e874,// 85 PAY  56 

    0x89263463,// 86 PAY  57 

    0xdb564a4e,// 87 PAY  58 

    0x66a45457,// 88 PAY  59 

    0xa7b388b6,// 89 PAY  60 

    0xc232a774,// 90 PAY  61 

    0x1fe96dda,// 91 PAY  62 

    0x63ec0bc9,// 92 PAY  63 

    0xf215849b,// 93 PAY  64 

    0xafe017f4,// 94 PAY  65 

    0x899e2cd1,// 95 PAY  66 

    0x749791ff,// 96 PAY  67 

    0xf857a90b,// 97 PAY  68 

    0x52ec5137,// 98 PAY  69 

    0xc2c6e8e3,// 99 PAY  70 

    0xe7ef3bcf,// 100 PAY  71 

    0xcad17601,// 101 PAY  72 

    0xefea54ad,// 102 PAY  73 

    0x31a0470d,// 103 PAY  74 

    0x7a0655ce,// 104 PAY  75 

    0xb814fe17,// 105 PAY  76 

    0x49976485,// 106 PAY  77 

    0x80f57f2c,// 107 PAY  78 

    0xd47bc2ce,// 108 PAY  79 

    0xb9e1ccb1,// 109 PAY  80 

    0x77f4e999,// 110 PAY  81 

    0xb969c159,// 111 PAY  82 

    0x2666ecaf,// 112 PAY  83 

    0x254e666f,// 113 PAY  84 

    0xea3b1934,// 114 PAY  85 

    0x75b8700d,// 115 PAY  86 

    0xff05843b,// 116 PAY  87 

    0x20837362,// 117 PAY  88 

    0x086b8f84,// 118 PAY  89 

    0x8f525ee4,// 119 PAY  90 

    0xf38976e9,// 120 PAY  91 

/// STA is 1 words. 

/// STA num_pkts       : 230 

/// STA pkt_idx        : 23 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x5b 

    0x005c5be6 // 121 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt21_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x80412811,// 4 SCX   2 

    0x00003200,// 5 SCX   3 

    0xbb1b0f32,// 6 SCX   4 

    0x81137322,// 7 SCX   5 

    0x30f13512,// 8 SCX   6 

    0x316fbac1,// 9 SCX   7 

    0xbb22197c,// 10 SCX   8 

    0x57dedb2b,// 11 SCX   9 

    0x8f54cafa,// 12 SCX  10 

    0xab1c2ea3,// 13 SCX  11 

    0x7b82ea71,// 14 SCX  12 

    0x3db1e274,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 442 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 414 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 414 

/// BFD lencrypto      : 184 

/// BFD ofstcrypto     : 132 

/// BFD (ofst+len)cry  : 316 

/// BFD ofstiv         : 112 

/// BFD ofsticv        : 416 

    0x0000019e,// 16 BFD   1 

    0x008400b8,// 17 BFD   2 

    0x01a00070,// 18 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 6 

    0x060063e2,// 19 MFM   1 

    0x6f000000,// 20 MFM   2 

/// BDA is 112 words. 

/// BDA size     is 442 (0x1ba) 

/// BDA id       is 0xb7c2 

    0x01bab7c2,// 21 BDA   1 

/// PAY Generic Data size   : 442 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xc3b1c1f0,// 22 PAY   1 

    0xa623d261,// 23 PAY   2 

    0xdfaffdbe,// 24 PAY   3 

    0x5c566f38,// 25 PAY   4 

    0xfb253181,// 26 PAY   5 

    0x4ecc12d4,// 27 PAY   6 

    0xcdd4abc5,// 28 PAY   7 

    0x0dc0dbd6,// 29 PAY   8 

    0x0896647e,// 30 PAY   9 

    0x86f9caaf,// 31 PAY  10 

    0x09d3d721,// 32 PAY  11 

    0xf60047f0,// 33 PAY  12 

    0xdb8d5bf3,// 34 PAY  13 

    0x4261605d,// 35 PAY  14 

    0x3c83d69a,// 36 PAY  15 

    0xbca4fe8f,// 37 PAY  16 

    0xd006ce1c,// 38 PAY  17 

    0x53f02c0d,// 39 PAY  18 

    0x65d864f4,// 40 PAY  19 

    0xf6ff76e4,// 41 PAY  20 

    0xabd769aa,// 42 PAY  21 

    0x8592bba8,// 43 PAY  22 

    0x6bca728b,// 44 PAY  23 

    0x8153856f,// 45 PAY  24 

    0xfbc075fd,// 46 PAY  25 

    0xc0d2eac4,// 47 PAY  26 

    0xd98178e1,// 48 PAY  27 

    0x17f71a62,// 49 PAY  28 

    0xd134f851,// 50 PAY  29 

    0xcc6ea311,// 51 PAY  30 

    0xd9c1ca12,// 52 PAY  31 

    0xb9e9f8b1,// 53 PAY  32 

    0xa1822f3c,// 54 PAY  33 

    0x84e4be81,// 55 PAY  34 

    0xaeee2603,// 56 PAY  35 

    0xd73aabc1,// 57 PAY  36 

    0x0decdfb5,// 58 PAY  37 

    0xa249335a,// 59 PAY  38 

    0x8f5ecd93,// 60 PAY  39 

    0x840c0b68,// 61 PAY  40 

    0xcf4b7e01,// 62 PAY  41 

    0xe7cc5a4f,// 63 PAY  42 

    0x19ede53c,// 64 PAY  43 

    0x6354cb5e,// 65 PAY  44 

    0x622dd417,// 66 PAY  45 

    0x3e5a1e79,// 67 PAY  46 

    0x39242179,// 68 PAY  47 

    0xe334c8a3,// 69 PAY  48 

    0x88544f07,// 70 PAY  49 

    0xa9aa0909,// 71 PAY  50 

    0x572e01aa,// 72 PAY  51 

    0x45016514,// 73 PAY  52 

    0xd2994a5d,// 74 PAY  53 

    0x7c2f4a9c,// 75 PAY  54 

    0xd0b7d5c8,// 76 PAY  55 

    0x6bb49984,// 77 PAY  56 

    0x556f9dcb,// 78 PAY  57 

    0xff4140f1,// 79 PAY  58 

    0x53306eb2,// 80 PAY  59 

    0x2840731f,// 81 PAY  60 

    0x7fa6f48a,// 82 PAY  61 

    0x5e615742,// 83 PAY  62 

    0x107bfe8e,// 84 PAY  63 

    0x455838ea,// 85 PAY  64 

    0x9e106ada,// 86 PAY  65 

    0x6b6c3753,// 87 PAY  66 

    0x020815f4,// 88 PAY  67 

    0x019f55a3,// 89 PAY  68 

    0xb3c62752,// 90 PAY  69 

    0xfd2941c3,// 91 PAY  70 

    0xe3b641a0,// 92 PAY  71 

    0x2622ba89,// 93 PAY  72 

    0xb786c6d3,// 94 PAY  73 

    0xe7f0c1b4,// 95 PAY  74 

    0xec4f7290,// 96 PAY  75 

    0xb5b880f5,// 97 PAY  76 

    0xcc860239,// 98 PAY  77 

    0x5064ee57,// 99 PAY  78 

    0x3441b8d7,// 100 PAY  79 

    0x5a6fd67a,// 101 PAY  80 

    0x34824930,// 102 PAY  81 

    0xa45557f5,// 103 PAY  82 

    0xaa190428,// 104 PAY  83 

    0xad735a3b,// 105 PAY  84 

    0xa3671d47,// 106 PAY  85 

    0xa225254f,// 107 PAY  86 

    0x7be260a6,// 108 PAY  87 

    0x75a70932,// 109 PAY  88 

    0x4314e949,// 110 PAY  89 

    0x0bddcd86,// 111 PAY  90 

    0xf4ad681e,// 112 PAY  91 

    0xc2d0adfa,// 113 PAY  92 

    0x142f2d20,// 114 PAY  93 

    0xb928cfae,// 115 PAY  94 

    0x69b35a4a,// 116 PAY  95 

    0x74795b0c,// 117 PAY  96 

    0x26111565,// 118 PAY  97 

    0x8fb49b1a,// 119 PAY  98 

    0xac978841,// 120 PAY  99 

    0xc0391fb9,// 121 PAY 100 

    0x4c72967f,// 122 PAY 101 

    0x676f15c1,// 123 PAY 102 

    0xe3f04e55,// 124 PAY 103 

    0x6dd3dd83,// 125 PAY 104 

    0xfbdb94a6,// 126 PAY 105 

    0x575d9911,// 127 PAY 106 

    0x640ad9cf,// 128 PAY 107 

    0x57071785,// 129 PAY 108 

    0xbe689f08,// 130 PAY 109 

    0x03e7a23c,// 131 PAY 110 

    0x43fb0000,// 132 PAY 111 

/// STA is 1 words. 

/// STA num_pkts       : 133 

/// STA pkt_idx        : 59 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x14 

    0x00ec1485 // 133 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt22_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x804028e0,// 4 SCX   2 

    0x00002100,// 5 SCX   3 

    0x603a58c9,// 6 SCX   4 

    0x761f9780,// 7 SCX   5 

    0xa3ce17ab,// 8 SCX   6 

    0x8ac270cd,// 9 SCX   7 

    0xadfd9c0c,// 10 SCX   8 

    0xf6c9867d,// 11 SCX   9 

    0x7f7bb2da,// 12 SCX  10 

    0x8f55a53f,// 13 SCX  11 

    0xa4983056,// 14 SCX  12 

    0xc0347b9d,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1652 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 251 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 251 

/// BFD lencrypto      : 24 

/// BFD ofstcrypto     : 192 

/// BFD (ofst+len)cry  : 216 

/// BFD ofstiv         : 128 

/// BFD ofsticv        : 332 

    0x000000fb,// 16 BFD   1 

    0x00c00018,// 17 BFD   2 

    0x014c0080,// 18 BFD   3 

/// MFM is 7 words. 

/// MFM vldnibs        : 32 

    0x32009d3c,// 19 MFM   1 

    0x717981db,// 20 MFM   2 

    0xd60254e0,// 21 MFM   3 

    0x4714964d,// 22 MFM   4 

    0x068f545f,// 23 MFM   5 

    0xd5d83f78,// 24 MFM   6 

    0xae763b00,// 25 MFM   7 

/// BDA is 414 words. 

/// BDA size     is 1652 (0x674) 

/// BDA id       is 0x393e 

    0x0674393e,// 26 BDA   1 

/// PAY Generic Data size   : 1652 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xe3af2ffd,// 27 PAY   1 

    0x489c6e5b,// 28 PAY   2 

    0xa1748dbc,// 29 PAY   3 

    0x916e4acd,// 30 PAY   4 

    0x687bea98,// 31 PAY   5 

    0x9e2d0265,// 32 PAY   6 

    0x0c6202a4,// 33 PAY   7 

    0x6c615cd7,// 34 PAY   8 

    0xb506d6b3,// 35 PAY   9 

    0xd156c133,// 36 PAY  10 

    0xb6b588a5,// 37 PAY  11 

    0x83060d7e,// 38 PAY  12 

    0x8d5a4df9,// 39 PAY  13 

    0x2ef1695c,// 40 PAY  14 

    0x3305a263,// 41 PAY  15 

    0xae9465cb,// 42 PAY  16 

    0xdbfe1cfc,// 43 PAY  17 

    0xbaf5ac32,// 44 PAY  18 

    0x4cd302ab,// 45 PAY  19 

    0x60171234,// 46 PAY  20 

    0x58c3d240,// 47 PAY  21 

    0xa84a1a70,// 48 PAY  22 

    0x6150ffcb,// 49 PAY  23 

    0x737ce8aa,// 50 PAY  24 

    0x824d8c3b,// 51 PAY  25 

    0xc5df7ee7,// 52 PAY  26 

    0x4647a120,// 53 PAY  27 

    0xdb3d93c1,// 54 PAY  28 

    0x32c81bda,// 55 PAY  29 

    0xd2dbdbb0,// 56 PAY  30 

    0x530fdc7f,// 57 PAY  31 

    0x8239d704,// 58 PAY  32 

    0xef46383d,// 59 PAY  33 

    0x0f21f153,// 60 PAY  34 

    0x0a66459b,// 61 PAY  35 

    0xc65612ab,// 62 PAY  36 

    0x688283e6,// 63 PAY  37 

    0x8c34f36e,// 64 PAY  38 

    0xad2c1789,// 65 PAY  39 

    0xe979aad8,// 66 PAY  40 

    0x3033591d,// 67 PAY  41 

    0x838351b0,// 68 PAY  42 

    0x19b23530,// 69 PAY  43 

    0xa378d9bc,// 70 PAY  44 

    0xa0424354,// 71 PAY  45 

    0x6c897288,// 72 PAY  46 

    0x3e5b3df9,// 73 PAY  47 

    0xbc6d3e62,// 74 PAY  48 

    0x059318a8,// 75 PAY  49 

    0x172503f4,// 76 PAY  50 

    0xfed9d6b0,// 77 PAY  51 

    0x6c3b6d5c,// 78 PAY  52 

    0x6d57a1dd,// 79 PAY  53 

    0x7f838f5f,// 80 PAY  54 

    0xf2049d91,// 81 PAY  55 

    0x3e19d1f3,// 82 PAY  56 

    0xcd33bba5,// 83 PAY  57 

    0x04154796,// 84 PAY  58 

    0x61f2a978,// 85 PAY  59 

    0x8e121b63,// 86 PAY  60 

    0xeaf42c49,// 87 PAY  61 

    0x6e0c5d65,// 88 PAY  62 

    0x2ac16ae5,// 89 PAY  63 

    0xb1cb6316,// 90 PAY  64 

    0x6c1f5479,// 91 PAY  65 

    0xd3bdd75f,// 92 PAY  66 

    0x6a09d672,// 93 PAY  67 

    0xa6fbf972,// 94 PAY  68 

    0x5a362ac7,// 95 PAY  69 

    0x3d3c8a13,// 96 PAY  70 

    0x2e095bce,// 97 PAY  71 

    0xa84101aa,// 98 PAY  72 

    0x70546116,// 99 PAY  73 

    0xd65613ee,// 100 PAY  74 

    0x6e97b9cb,// 101 PAY  75 

    0x38ee7556,// 102 PAY  76 

    0x0fa4533d,// 103 PAY  77 

    0x43aff3b7,// 104 PAY  78 

    0xd6d8a8fe,// 105 PAY  79 

    0xd6c84c56,// 106 PAY  80 

    0x435b8673,// 107 PAY  81 

    0xa81b21d4,// 108 PAY  82 

    0x78ddb9d8,// 109 PAY  83 

    0x0be7d86e,// 110 PAY  84 

    0x624f6623,// 111 PAY  85 

    0x7fd20f00,// 112 PAY  86 

    0x78683270,// 113 PAY  87 

    0x05f7b962,// 114 PAY  88 

    0x9fed3d89,// 115 PAY  89 

    0x58bbc8a9,// 116 PAY  90 

    0x29bf9241,// 117 PAY  91 

    0xcb21b67b,// 118 PAY  92 

    0x02e64205,// 119 PAY  93 

    0x147dc6b3,// 120 PAY  94 

    0x2bc0d7bf,// 121 PAY  95 

    0xfb657218,// 122 PAY  96 

    0xf993871f,// 123 PAY  97 

    0x405168e5,// 124 PAY  98 

    0x97e41617,// 125 PAY  99 

    0xe05e06d6,// 126 PAY 100 

    0x503b19ad,// 127 PAY 101 

    0x1f0ec989,// 128 PAY 102 

    0x45058cd2,// 129 PAY 103 

    0xf4e1185f,// 130 PAY 104 

    0xc4ae5eff,// 131 PAY 105 

    0x080d5c11,// 132 PAY 106 

    0x6161f607,// 133 PAY 107 

    0x4817e38c,// 134 PAY 108 

    0x719d5669,// 135 PAY 109 

    0x60eb33b7,// 136 PAY 110 

    0x59230c9c,// 137 PAY 111 

    0x2617860f,// 138 PAY 112 

    0xdff05d10,// 139 PAY 113 

    0xafb54a32,// 140 PAY 114 

    0xde29b200,// 141 PAY 115 

    0x64baf386,// 142 PAY 116 

    0xbb4ddecd,// 143 PAY 117 

    0x822c3a2a,// 144 PAY 118 

    0x47c8b2c2,// 145 PAY 119 

    0xfde6ba05,// 146 PAY 120 

    0x65ac8446,// 147 PAY 121 

    0xcf89eb07,// 148 PAY 122 

    0x6d6b3946,// 149 PAY 123 

    0xd9192196,// 150 PAY 124 

    0x09f4c9d2,// 151 PAY 125 

    0x0cc08864,// 152 PAY 126 

    0x9a40435f,// 153 PAY 127 

    0xa74ed7b4,// 154 PAY 128 

    0x0245ac17,// 155 PAY 129 

    0x43ec83ac,// 156 PAY 130 

    0x49b8d962,// 157 PAY 131 

    0xb52e938d,// 158 PAY 132 

    0xe42e45d9,// 159 PAY 133 

    0x5a9e5e4c,// 160 PAY 134 

    0xb8142ffc,// 161 PAY 135 

    0x585fb562,// 162 PAY 136 

    0xfbca8810,// 163 PAY 137 

    0x1bc2d526,// 164 PAY 138 

    0x9696dbfd,// 165 PAY 139 

    0x0caa88a8,// 166 PAY 140 

    0xacdfd7b0,// 167 PAY 141 

    0x6c61857c,// 168 PAY 142 

    0xa23b6f30,// 169 PAY 143 

    0x750e55d8,// 170 PAY 144 

    0x0795c718,// 171 PAY 145 

    0xa6460fa4,// 172 PAY 146 

    0xb919857c,// 173 PAY 147 

    0x42e3c066,// 174 PAY 148 

    0xfe1a69db,// 175 PAY 149 

    0xd1394d0c,// 176 PAY 150 

    0xb22efe1e,// 177 PAY 151 

    0x0fb59192,// 178 PAY 152 

    0x411a39f5,// 179 PAY 153 

    0x600b3bac,// 180 PAY 154 

    0xbda712dc,// 181 PAY 155 

    0x033bbf79,// 182 PAY 156 

    0x8d720e73,// 183 PAY 157 

    0x90c52c11,// 184 PAY 158 

    0x7b074b5b,// 185 PAY 159 

    0x11635b4b,// 186 PAY 160 

    0xf61b2e56,// 187 PAY 161 

    0x1cd6f4c0,// 188 PAY 162 

    0x4eded6c8,// 189 PAY 163 

    0x81a54c4d,// 190 PAY 164 

    0x3a5329b0,// 191 PAY 165 

    0x9e408791,// 192 PAY 166 

    0x46f81498,// 193 PAY 167 

    0xce15539e,// 194 PAY 168 

    0xe5d0a4ce,// 195 PAY 169 

    0x7012cdb1,// 196 PAY 170 

    0x7147741f,// 197 PAY 171 

    0x9aa39799,// 198 PAY 172 

    0xf3dee3fe,// 199 PAY 173 

    0x30eebdf9,// 200 PAY 174 

    0x268b7c93,// 201 PAY 175 

    0x66aa2cff,// 202 PAY 176 

    0x9627cbb2,// 203 PAY 177 

    0x72435d4e,// 204 PAY 178 

    0xb75d6187,// 205 PAY 179 

    0xd7cef32f,// 206 PAY 180 

    0x2421b92d,// 207 PAY 181 

    0x691689c3,// 208 PAY 182 

    0xaba18801,// 209 PAY 183 

    0x2814a9cd,// 210 PAY 184 

    0x40b3c0dc,// 211 PAY 185 

    0xf22df363,// 212 PAY 186 

    0xf10488ad,// 213 PAY 187 

    0xb20bc1aa,// 214 PAY 188 

    0xb0d05aee,// 215 PAY 189 

    0x5a834f2f,// 216 PAY 190 

    0x2ca4165c,// 217 PAY 191 

    0xff6b4354,// 218 PAY 192 

    0xb363dbbf,// 219 PAY 193 

    0xb0dce2ce,// 220 PAY 194 

    0xeb891d86,// 221 PAY 195 

    0x8847964b,// 222 PAY 196 

    0x55e699f6,// 223 PAY 197 

    0x863aa4e8,// 224 PAY 198 

    0xd054d6ac,// 225 PAY 199 

    0x9b46a27b,// 226 PAY 200 

    0x8e8d22bd,// 227 PAY 201 

    0xdb1e684b,// 228 PAY 202 

    0xfaea1aa1,// 229 PAY 203 

    0x6efb5b18,// 230 PAY 204 

    0xc62f8187,// 231 PAY 205 

    0xb169283e,// 232 PAY 206 

    0xdea18f38,// 233 PAY 207 

    0x7c54ee1d,// 234 PAY 208 

    0x3deb6f49,// 235 PAY 209 

    0x913bf9c7,// 236 PAY 210 

    0xd71943a0,// 237 PAY 211 

    0x5236997c,// 238 PAY 212 

    0xefb4cbb7,// 239 PAY 213 

    0x8675a6fe,// 240 PAY 214 

    0x100e721f,// 241 PAY 215 

    0xe482b4fc,// 242 PAY 216 

    0x8a7aefb8,// 243 PAY 217 

    0x7fcea9b9,// 244 PAY 218 

    0x2d0a576b,// 245 PAY 219 

    0xbddd229c,// 246 PAY 220 

    0x631aef47,// 247 PAY 221 

    0xc6164e52,// 248 PAY 222 

    0x4b9ace60,// 249 PAY 223 

    0xd34e5ae3,// 250 PAY 224 

    0x7df6b48b,// 251 PAY 225 

    0xabfe1ec2,// 252 PAY 226 

    0x901b8241,// 253 PAY 227 

    0x8720ccdf,// 254 PAY 228 

    0x3a4dd39d,// 255 PAY 229 

    0x58e4ec93,// 256 PAY 230 

    0xb206fe74,// 257 PAY 231 

    0x367e0c49,// 258 PAY 232 

    0xe38403f5,// 259 PAY 233 

    0xdc31e3c5,// 260 PAY 234 

    0x5f58f2be,// 261 PAY 235 

    0x7827337a,// 262 PAY 236 

    0x8bfe249a,// 263 PAY 237 

    0x082994da,// 264 PAY 238 

    0xab8f694b,// 265 PAY 239 

    0xec0455d7,// 266 PAY 240 

    0x730a0ccf,// 267 PAY 241 

    0xa987cfbe,// 268 PAY 242 

    0x67409e6a,// 269 PAY 243 

    0xacbbb3a0,// 270 PAY 244 

    0x5e849e86,// 271 PAY 245 

    0x4f8c997a,// 272 PAY 246 

    0x1c288e4d,// 273 PAY 247 

    0xc43fb796,// 274 PAY 248 

    0xf67542fc,// 275 PAY 249 

    0xfac9db84,// 276 PAY 250 

    0x12403215,// 277 PAY 251 

    0x8ceb1388,// 278 PAY 252 

    0xa7b01db4,// 279 PAY 253 

    0xe89ffae8,// 280 PAY 254 

    0xb05372d6,// 281 PAY 255 

    0xa4947a88,// 282 PAY 256 

    0x8211d4f0,// 283 PAY 257 

    0x01ffb03b,// 284 PAY 258 

    0xb15bfcdc,// 285 PAY 259 

    0xa00dec10,// 286 PAY 260 

    0x0f07a8d1,// 287 PAY 261 

    0xab2ada92,// 288 PAY 262 

    0xd6a3dc94,// 289 PAY 263 

    0xfa65c286,// 290 PAY 264 

    0x23086f05,// 291 PAY 265 

    0xfe6f3069,// 292 PAY 266 

    0x3c3c693a,// 293 PAY 267 

    0x054784a0,// 294 PAY 268 

    0x31074d06,// 295 PAY 269 

    0xb5684b75,// 296 PAY 270 

    0x3da12273,// 297 PAY 271 

    0x9ed9e0ec,// 298 PAY 272 

    0x030bfa87,// 299 PAY 273 

    0xd8032d8d,// 300 PAY 274 

    0x57fa1918,// 301 PAY 275 

    0x1aad5a56,// 302 PAY 276 

    0x945b1333,// 303 PAY 277 

    0x8dd48205,// 304 PAY 278 

    0x27e7fc1f,// 305 PAY 279 

    0x28d83440,// 306 PAY 280 

    0x565f1ca1,// 307 PAY 281 

    0xecc970b7,// 308 PAY 282 

    0x4051b677,// 309 PAY 283 

    0x8314ccd8,// 310 PAY 284 

    0xc5eb6f6a,// 311 PAY 285 

    0x0ff07c96,// 312 PAY 286 

    0xadfc5516,// 313 PAY 287 

    0xcc4e41da,// 314 PAY 288 

    0x196b48cb,// 315 PAY 289 

    0xd08775aa,// 316 PAY 290 

    0x0f402a63,// 317 PAY 291 

    0x44916331,// 318 PAY 292 

    0x041f0520,// 319 PAY 293 

    0x6bffce90,// 320 PAY 294 

    0x0f7011a5,// 321 PAY 295 

    0xecfa8423,// 322 PAY 296 

    0x9f258aa5,// 323 PAY 297 

    0x281cbf17,// 324 PAY 298 

    0x9ba3f553,// 325 PAY 299 

    0xbc069319,// 326 PAY 300 

    0x61955b5a,// 327 PAY 301 

    0x6a92dddf,// 328 PAY 302 

    0xfa1589cb,// 329 PAY 303 

    0xae124ae5,// 330 PAY 304 

    0xe0b8618b,// 331 PAY 305 

    0x53117441,// 332 PAY 306 

    0x56b0ddc8,// 333 PAY 307 

    0x5f3865ad,// 334 PAY 308 

    0x7da0d06c,// 335 PAY 309 

    0xead315f0,// 336 PAY 310 

    0xbcdc841d,// 337 PAY 311 

    0x26acda4f,// 338 PAY 312 

    0x394bd7a0,// 339 PAY 313 

    0x8c8dbe70,// 340 PAY 314 

    0x5e018770,// 341 PAY 315 

    0xe9182a4a,// 342 PAY 316 

    0xca7250b3,// 343 PAY 317 

    0x4441250c,// 344 PAY 318 

    0xd3c15dfd,// 345 PAY 319 

    0x5fa097f0,// 346 PAY 320 

    0x93ed43cc,// 347 PAY 321 

    0x1ccc5d94,// 348 PAY 322 

    0x2ec5f415,// 349 PAY 323 

    0x723d2198,// 350 PAY 324 

    0xde1c9150,// 351 PAY 325 

    0x83cbf64d,// 352 PAY 326 

    0x7072ff52,// 353 PAY 327 

    0xaef836a0,// 354 PAY 328 

    0x79ba1ae1,// 355 PAY 329 

    0x69becff5,// 356 PAY 330 

    0x3a1c0ac0,// 357 PAY 331 

    0xa9998935,// 358 PAY 332 

    0x608f00db,// 359 PAY 333 

    0xbcd8b78f,// 360 PAY 334 

    0xd64f1d54,// 361 PAY 335 

    0xcffc5051,// 362 PAY 336 

    0x40a5e207,// 363 PAY 337 

    0xc0b4458c,// 364 PAY 338 

    0x08611fdc,// 365 PAY 339 

    0x72948bed,// 366 PAY 340 

    0x07233761,// 367 PAY 341 

    0x66350b8d,// 368 PAY 342 

    0x19c61606,// 369 PAY 343 

    0xd72eb0de,// 370 PAY 344 

    0x2850fada,// 371 PAY 345 

    0x5d349cba,// 372 PAY 346 

    0xcc9f9f6b,// 373 PAY 347 

    0xe015e97f,// 374 PAY 348 

    0x22c12daa,// 375 PAY 349 

    0xab9ad980,// 376 PAY 350 

    0x2642dde8,// 377 PAY 351 

    0xdb0f459c,// 378 PAY 352 

    0x16d0949f,// 379 PAY 353 

    0xede1a76d,// 380 PAY 354 

    0xb7ff6532,// 381 PAY 355 

    0x2624b5e8,// 382 PAY 356 

    0x76efd4fb,// 383 PAY 357 

    0x1f359db2,// 384 PAY 358 

    0x8f1b50e1,// 385 PAY 359 

    0x1dd446c5,// 386 PAY 360 

    0xef59c556,// 387 PAY 361 

    0x3eebbe29,// 388 PAY 362 

    0xf1b783fd,// 389 PAY 363 

    0x523575ae,// 390 PAY 364 

    0x0dd0ea5c,// 391 PAY 365 

    0xfdc99a37,// 392 PAY 366 

    0x00963b62,// 393 PAY 367 

    0x99713762,// 394 PAY 368 

    0xa0063407,// 395 PAY 369 

    0x89113364,// 396 PAY 370 

    0x086386b9,// 397 PAY 371 

    0xfbedf101,// 398 PAY 372 

    0xad423951,// 399 PAY 373 

    0xb858f229,// 400 PAY 374 

    0x4e1f4400,// 401 PAY 375 

    0x2da8a955,// 402 PAY 376 

    0x81f877a1,// 403 PAY 377 

    0x3cbccedc,// 404 PAY 378 

    0x51f9a3ff,// 405 PAY 379 

    0x783d7f74,// 406 PAY 380 

    0x6c4d2011,// 407 PAY 381 

    0x46696f0a,// 408 PAY 382 

    0xc42713dc,// 409 PAY 383 

    0x447f65d2,// 410 PAY 384 

    0x9eb80b7b,// 411 PAY 385 

    0xfa9f5fc7,// 412 PAY 386 

    0x195e9885,// 413 PAY 387 

    0xc22de9b3,// 414 PAY 388 

    0xb39c6805,// 415 PAY 389 

    0xf38fffbe,// 416 PAY 390 

    0xee53baa2,// 417 PAY 391 

    0x16c3e49e,// 418 PAY 392 

    0x4c31b1e4,// 419 PAY 393 

    0x1647e421,// 420 PAY 394 

    0x5ced6fe4,// 421 PAY 395 

    0xffc8ebe3,// 422 PAY 396 

    0x8200bbc0,// 423 PAY 397 

    0x577aa2bb,// 424 PAY 398 

    0x4a2808cd,// 425 PAY 399 

    0x06afcb35,// 426 PAY 400 

    0x14a0bb5b,// 427 PAY 401 

    0xb3ba0fc9,// 428 PAY 402 

    0xc5e90469,// 429 PAY 403 

    0x77a756e8,// 430 PAY 404 

    0xd48b61b4,// 431 PAY 405 

    0x0829650b,// 432 PAY 406 

    0x011084c1,// 433 PAY 407 

    0x8d73b55d,// 434 PAY 408 

    0xe86c1d0a,// 435 PAY 409 

    0x508f99d2,// 436 PAY 410 

    0xd81c644d,// 437 PAY 411 

    0xa964ab09,// 438 PAY 412 

    0xaf7f7cac,// 439 PAY 413 

/// STA is 1 words. 

/// STA num_pkts       : 76 

/// STA pkt_idx        : 88 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x80 

    0x0160804c // 440 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt23_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x80462813,// 4 SCX   2 

    0x00007342,// 5 SCX   3 

    0x05526058,// 6 SCX   4 

    0xb9576bea,// 7 SCX   5 

    0x162c9591,// 8 SCX   6 

    0x444c1e97,// 9 SCX   7 

    0x14ac4baa,// 10 SCX   8 

    0xad240fe7,// 11 SCX   9 

    0x48f3dc2f,// 12 SCX  10 

    0x42ecac40,// 13 SCX  11 

    0x33b65972,// 14 SCX  12 

    0xcf62274c,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1131 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 957 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 957 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 908 

/// BFD (ofst+len)cry  : 940 

/// BFD ofstiv         : 500 

/// BFD ofsticv        : 1096 

    0x000003bd,// 16 BFD   1 

    0x038c0020,// 17 BFD   2 

    0x044801f4,// 18 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c000e92,// 19 MFM   1 

    0x85ff8b1c,// 20 MFM   2 

    0x58534b24,// 21 MFM   3 

    0x35b2d183,// 22 MFM   4 

    0x2937a062,// 23 MFM   5 

    0x381f449a,// 24 MFM   6 

    0x78235803,// 25 MFM   7 

    0x22363071,// 26 MFM   8 

    0x6abfbfc6,// 27 MFM   9 

    0xb53f60ad,// 28 MFM  10 

    0x70a1c5de,// 29 MFM  11 

    0xd233f89b,// 30 MFM  12 

    0xef410042,// 31 MFM  13 

    0x13e4cc7f,// 32 MFM  14 

    0xe11fc735,// 33 MFM  15 

    0xefeab109,// 34 MFM  16 

/// BDA is 284 words. 

/// BDA size     is 1131 (0x46b) 

/// BDA id       is 0x6a15 

    0x046b6a15,// 35 BDA   1 

/// PAY Generic Data size   : 1131 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x9c72253c,// 36 PAY   1 

    0xe1c5b1b3,// 37 PAY   2 

    0x3eeca832,// 38 PAY   3 

    0xd9b6052a,// 39 PAY   4 

    0x686709a7,// 40 PAY   5 

    0xd3608b6f,// 41 PAY   6 

    0xfffbb6f0,// 42 PAY   7 

    0x6571bc8d,// 43 PAY   8 

    0x5e357df0,// 44 PAY   9 

    0x759a57f4,// 45 PAY  10 

    0x1d18a297,// 46 PAY  11 

    0xf3aea47f,// 47 PAY  12 

    0xabaf006d,// 48 PAY  13 

    0x0d4f1c68,// 49 PAY  14 

    0x6e60d984,// 50 PAY  15 

    0xdf4139b4,// 51 PAY  16 

    0x215f0c2a,// 52 PAY  17 

    0x3f128837,// 53 PAY  18 

    0xd7bf3830,// 54 PAY  19 

    0x918ac106,// 55 PAY  20 

    0x23e41595,// 56 PAY  21 

    0xd65601fb,// 57 PAY  22 

    0x21c2743c,// 58 PAY  23 

    0x91372caf,// 59 PAY  24 

    0x3d58574f,// 60 PAY  25 

    0xeb6f9d15,// 61 PAY  26 

    0xae5c513f,// 62 PAY  27 

    0x069edebe,// 63 PAY  28 

    0x20601538,// 64 PAY  29 

    0xea7a2f70,// 65 PAY  30 

    0xdd96bf5e,// 66 PAY  31 

    0xf67eb667,// 67 PAY  32 

    0x3c3a1daa,// 68 PAY  33 

    0xaf859d40,// 69 PAY  34 

    0x4f00dd1f,// 70 PAY  35 

    0xd1d0e712,// 71 PAY  36 

    0x4535aea6,// 72 PAY  37 

    0xd49111ce,// 73 PAY  38 

    0x00cfdb89,// 74 PAY  39 

    0x93a27741,// 75 PAY  40 

    0xd82d2464,// 76 PAY  41 

    0xba3b5c1c,// 77 PAY  42 

    0x1b35fcf0,// 78 PAY  43 

    0x3554f991,// 79 PAY  44 

    0x1c337275,// 80 PAY  45 

    0x609b12c4,// 81 PAY  46 

    0x5394dabe,// 82 PAY  47 

    0x5a77bb68,// 83 PAY  48 

    0xe1b125e8,// 84 PAY  49 

    0xca2ff296,// 85 PAY  50 

    0x9c984c61,// 86 PAY  51 

    0x7e896a54,// 87 PAY  52 

    0x53dd02d0,// 88 PAY  53 

    0x7eadb562,// 89 PAY  54 

    0x8fbd92e2,// 90 PAY  55 

    0x334ce669,// 91 PAY  56 

    0xb0f45eb0,// 92 PAY  57 

    0x23ec22ba,// 93 PAY  58 

    0xaac8a4b2,// 94 PAY  59 

    0x4bf1fa9b,// 95 PAY  60 

    0x07bbecb4,// 96 PAY  61 

    0xe71d5e67,// 97 PAY  62 

    0x7f9ae1a8,// 98 PAY  63 

    0xaaf1663d,// 99 PAY  64 

    0x7334742e,// 100 PAY  65 

    0x896a27c5,// 101 PAY  66 

    0x961ff471,// 102 PAY  67 

    0xeb172cb5,// 103 PAY  68 

    0x464e7ab1,// 104 PAY  69 

    0x46254c0b,// 105 PAY  70 

    0xe7167be1,// 106 PAY  71 

    0xca492531,// 107 PAY  72 

    0x09985603,// 108 PAY  73 

    0x7fc0507b,// 109 PAY  74 

    0x0c3de502,// 110 PAY  75 

    0x84fc822c,// 111 PAY  76 

    0xec87d0c0,// 112 PAY  77 

    0xa81cff77,// 113 PAY  78 

    0xbff8fa17,// 114 PAY  79 

    0xc5a9c3f0,// 115 PAY  80 

    0x8efc5f5d,// 116 PAY  81 

    0x630f2c00,// 117 PAY  82 

    0x1bf8afac,// 118 PAY  83 

    0x37e72f5e,// 119 PAY  84 

    0x5c92f060,// 120 PAY  85 

    0xc262ce29,// 121 PAY  86 

    0x9c856ade,// 122 PAY  87 

    0x751b00d7,// 123 PAY  88 

    0x81fa0c2d,// 124 PAY  89 

    0x2252387d,// 125 PAY  90 

    0x96953931,// 126 PAY  91 

    0x1f077641,// 127 PAY  92 

    0xcca1c566,// 128 PAY  93 

    0xb1f3b200,// 129 PAY  94 

    0x035f6c3f,// 130 PAY  95 

    0x40ae7d8e,// 131 PAY  96 

    0x5a288352,// 132 PAY  97 

    0xa72a687e,// 133 PAY  98 

    0x0448c21d,// 134 PAY  99 

    0xbb6f5487,// 135 PAY 100 

    0xb8f252df,// 136 PAY 101 

    0x74ccb5f0,// 137 PAY 102 

    0x1aece0ce,// 138 PAY 103 

    0x910edfea,// 139 PAY 104 

    0x7189e639,// 140 PAY 105 

    0xfd8e718a,// 141 PAY 106 

    0x68b29105,// 142 PAY 107 

    0x1f4be6b8,// 143 PAY 108 

    0x6e510058,// 144 PAY 109 

    0xee5a9d7f,// 145 PAY 110 

    0x5b3c13e7,// 146 PAY 111 

    0xac4ae5d3,// 147 PAY 112 

    0x0e998aa2,// 148 PAY 113 

    0x8bc26b4c,// 149 PAY 114 

    0x89273a69,// 150 PAY 115 

    0x7d779966,// 151 PAY 116 

    0xccb59f31,// 152 PAY 117 

    0x2f8fee43,// 153 PAY 118 

    0xe1416717,// 154 PAY 119 

    0x4c593f9f,// 155 PAY 120 

    0x6388fd72,// 156 PAY 121 

    0x51882379,// 157 PAY 122 

    0xb31a8e39,// 158 PAY 123 

    0x210a39dd,// 159 PAY 124 

    0x567df4b3,// 160 PAY 125 

    0xa723a060,// 161 PAY 126 

    0x682bae00,// 162 PAY 127 

    0x104eac15,// 163 PAY 128 

    0xb7fe6b27,// 164 PAY 129 

    0x017cfb34,// 165 PAY 130 

    0x4e1b6328,// 166 PAY 131 

    0x7f0ccc04,// 167 PAY 132 

    0x88daa6e3,// 168 PAY 133 

    0x6d59f5e7,// 169 PAY 134 

    0xf9e8d79d,// 170 PAY 135 

    0x0431fff6,// 171 PAY 136 

    0xeb883f40,// 172 PAY 137 

    0x5d090735,// 173 PAY 138 

    0xfa8d49d8,// 174 PAY 139 

    0x74672930,// 175 PAY 140 

    0xd8d99a54,// 176 PAY 141 

    0xba66c8fc,// 177 PAY 142 

    0x5a4767a0,// 178 PAY 143 

    0x6b2451bf,// 179 PAY 144 

    0x583abf34,// 180 PAY 145 

    0x5b27f07e,// 181 PAY 146 

    0x4a348499,// 182 PAY 147 

    0x8a76c64b,// 183 PAY 148 

    0xc848e899,// 184 PAY 149 

    0x1442dba6,// 185 PAY 150 

    0xbf383f4e,// 186 PAY 151 

    0x1805d380,// 187 PAY 152 

    0x35d3f012,// 188 PAY 153 

    0x542c818b,// 189 PAY 154 

    0xa1be5ed3,// 190 PAY 155 

    0x8dd7769b,// 191 PAY 156 

    0x762f676e,// 192 PAY 157 

    0x6c3a8867,// 193 PAY 158 

    0xc7cab5b6,// 194 PAY 159 

    0xfd387165,// 195 PAY 160 

    0x78814fb2,// 196 PAY 161 

    0x0a3ad9a0,// 197 PAY 162 

    0x5389794b,// 198 PAY 163 

    0xcae715cf,// 199 PAY 164 

    0x4206ffa9,// 200 PAY 165 

    0x650f4d0b,// 201 PAY 166 

    0xe14807b6,// 202 PAY 167 

    0x99add00c,// 203 PAY 168 

    0x1370f00d,// 204 PAY 169 

    0x657406f6,// 205 PAY 170 

    0x6d4d56d3,// 206 PAY 171 

    0x811d15b7,// 207 PAY 172 

    0x0bf9e5c9,// 208 PAY 173 

    0x4f762f39,// 209 PAY 174 

    0x47253758,// 210 PAY 175 

    0x10b2379d,// 211 PAY 176 

    0x2dc83fff,// 212 PAY 177 

    0x7239345e,// 213 PAY 178 

    0xd0a9f877,// 214 PAY 179 

    0x432a992a,// 215 PAY 180 

    0x9cd6a7dd,// 216 PAY 181 

    0xd5395ff3,// 217 PAY 182 

    0x49141133,// 218 PAY 183 

    0x0bf069a8,// 219 PAY 184 

    0x82fe5860,// 220 PAY 185 

    0x50c3415b,// 221 PAY 186 

    0x31081b9d,// 222 PAY 187 

    0xc60229d0,// 223 PAY 188 

    0xf74657f6,// 224 PAY 189 

    0x897922ef,// 225 PAY 190 

    0x38af1e60,// 226 PAY 191 

    0x6a2593da,// 227 PAY 192 

    0xc17db52a,// 228 PAY 193 

    0x6d1b3364,// 229 PAY 194 

    0x246ac585,// 230 PAY 195 

    0x09b21465,// 231 PAY 196 

    0x4a4e177f,// 232 PAY 197 

    0x8dae3465,// 233 PAY 198 

    0x958ff289,// 234 PAY 199 

    0x547358fe,// 235 PAY 200 

    0x09d8aad5,// 236 PAY 201 

    0x28a25697,// 237 PAY 202 

    0x18ff95e0,// 238 PAY 203 

    0xf9c12193,// 239 PAY 204 

    0xa6513a8c,// 240 PAY 205 

    0x8c215bfb,// 241 PAY 206 

    0xdee9106d,// 242 PAY 207 

    0x5122db8f,// 243 PAY 208 

    0x41a38880,// 244 PAY 209 

    0x96c2c08c,// 245 PAY 210 

    0x9a130361,// 246 PAY 211 

    0x70da903f,// 247 PAY 212 

    0x9f78cf48,// 248 PAY 213 

    0x6865e75a,// 249 PAY 214 

    0xdb27ddc7,// 250 PAY 215 

    0x9cf18611,// 251 PAY 216 

    0xcdfb8bad,// 252 PAY 217 

    0x661dd859,// 253 PAY 218 

    0x36fc3421,// 254 PAY 219 

    0xcaba4698,// 255 PAY 220 

    0x4d4d32f4,// 256 PAY 221 

    0xe58cee2c,// 257 PAY 222 

    0xa1245d21,// 258 PAY 223 

    0x12a6db22,// 259 PAY 224 

    0xd3515355,// 260 PAY 225 

    0xc565a8a6,// 261 PAY 226 

    0x83790d20,// 262 PAY 227 

    0x8daacd55,// 263 PAY 228 

    0xf40a3ccf,// 264 PAY 229 

    0x4cbb1cc2,// 265 PAY 230 

    0x2a56580c,// 266 PAY 231 

    0x8e44c0da,// 267 PAY 232 

    0x97c112fd,// 268 PAY 233 

    0x59fe0288,// 269 PAY 234 

    0xab230da5,// 270 PAY 235 

    0xf77b90d7,// 271 PAY 236 

    0x031968d9,// 272 PAY 237 

    0x311edd04,// 273 PAY 238 

    0x2e7a4a40,// 274 PAY 239 

    0x463ecece,// 275 PAY 240 

    0xf41032da,// 276 PAY 241 

    0x1635ecf2,// 277 PAY 242 

    0x4b889296,// 278 PAY 243 

    0x9d23944f,// 279 PAY 244 

    0x42805ddd,// 280 PAY 245 

    0x02cbce32,// 281 PAY 246 

    0x3b4de8c5,// 282 PAY 247 

    0xbfe15359,// 283 PAY 248 

    0x677f5319,// 284 PAY 249 

    0x71272ff8,// 285 PAY 250 

    0x88b2d154,// 286 PAY 251 

    0x9f0130bc,// 287 PAY 252 

    0x7bcc7d06,// 288 PAY 253 

    0xee1434b5,// 289 PAY 254 

    0x12cd0abd,// 290 PAY 255 

    0x4975fcc2,// 291 PAY 256 

    0xb9ab1582,// 292 PAY 257 

    0x1e90225b,// 293 PAY 258 

    0x1f400f70,// 294 PAY 259 

    0xc6893a07,// 295 PAY 260 

    0x3f314454,// 296 PAY 261 

    0xca4045fc,// 297 PAY 262 

    0xd56674c9,// 298 PAY 263 

    0xa789b3a3,// 299 PAY 264 

    0x7f4f3d1c,// 300 PAY 265 

    0x9e10bb0d,// 301 PAY 266 

    0x70ac7c14,// 302 PAY 267 

    0x8efef134,// 303 PAY 268 

    0x2ab19480,// 304 PAY 269 

    0x954eed78,// 305 PAY 270 

    0xed8a0244,// 306 PAY 271 

    0xa30a2e68,// 307 PAY 272 

    0xf5c8b771,// 308 PAY 273 

    0xf6f0cec2,// 309 PAY 274 

    0xd6e9aa78,// 310 PAY 275 

    0x9316192c,// 311 PAY 276 

    0xa8f55d5f,// 312 PAY 277 

    0x6d782326,// 313 PAY 278 

    0x10d34c02,// 314 PAY 279 

    0x601f684c,// 315 PAY 280 

    0xa8fdeba7,// 316 PAY 281 

    0x7d82fc7a,// 317 PAY 282 

    0x20d08f00,// 318 PAY 283 

/// STA is 1 words. 

/// STA num_pkts       : 23 

/// STA pkt_idx        : 246 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xd8 

    0x03d9d817 // 319 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt24_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x0f 

/// ECH pdu_tag        : 0x00 

    0x000f0000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x8044287f,// 4 SCX   2 

    0x00003242,// 5 SCX   3 

    0x986b4f9c,// 6 SCX   4 

    0xb6831d6e,// 7 SCX   5 

    0x0fd95763,// 8 SCX   6 

    0xf87a7ade,// 9 SCX   7 

    0x25b1f1c3,// 10 SCX   8 

    0xc11b0040,// 11 SCX   9 

    0x5a2968a0,// 12 SCX  10 

    0xd348d9b5,// 13 SCX  11 

    0x4c586807,// 14 SCX  12 

    0x21c0267f,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1457 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 460 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 460 

/// BFD lencrypto      : 104 

/// BFD ofstcrypto     : 348 

/// BFD (ofst+len)cry  : 452 

/// BFD ofstiv         : 156 

/// BFD ofsticv        : 488 

    0x000001cc,// 16 BFD   1 

    0x015c0068,// 17 BFD   2 

    0x01e8009c,// 18 BFD   3 

/// MFM is 8 words. 

/// MFM vldnibs        : 3c 

    0x3c004673,// 19 MFM   1 

    0x43edc513,// 20 MFM   2 

    0x8870c35f,// 21 MFM   3 

    0x00c538d9,// 22 MFM   4 

    0x5a879ed2,// 23 MFM   5 

    0xde3a96ad,// 24 MFM   6 

    0x72b80d64,// 25 MFM   7 

    0xbdb429c7,// 26 MFM   8 

/// BDA is 366 words. 

/// BDA size     is 1457 (0x5b1) 

/// BDA id       is 0x2a9b 

    0x05b12a9b,// 27 BDA   1 

/// PAY Generic Data size   : 1457 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x2925892c,// 28 PAY   1 

    0x6e9e13a4,// 29 PAY   2 

    0x549ab820,// 30 PAY   3 

    0x63c6fec9,// 31 PAY   4 

    0x43707279,// 32 PAY   5 

    0xbf7a3c55,// 33 PAY   6 

    0x30696545,// 34 PAY   7 

    0xdc215c81,// 35 PAY   8 

    0x61ed6494,// 36 PAY   9 

    0x4e062b47,// 37 PAY  10 

    0x0b6d1f5f,// 38 PAY  11 

    0x657715d3,// 39 PAY  12 

    0xa2373b06,// 40 PAY  13 

    0xb183ef53,// 41 PAY  14 

    0x3c4e5545,// 42 PAY  15 

    0xbe2f2fd7,// 43 PAY  16 

    0xcd0f28ba,// 44 PAY  17 

    0x0ede6b6a,// 45 PAY  18 

    0x10fbddb8,// 46 PAY  19 

    0xc9391b86,// 47 PAY  20 

    0x97d6d358,// 48 PAY  21 

    0xe25449d8,// 49 PAY  22 

    0x1dff35db,// 50 PAY  23 

    0xcef21b91,// 51 PAY  24 

    0xcb502799,// 52 PAY  25 

    0xeb09a772,// 53 PAY  26 

    0xd28bdac0,// 54 PAY  27 

    0x1b35a946,// 55 PAY  28 

    0x6b5fb813,// 56 PAY  29 

    0x40233fd3,// 57 PAY  30 

    0x69f71886,// 58 PAY  31 

    0x54d8a8bd,// 59 PAY  32 

    0x8fab434e,// 60 PAY  33 

    0x0bb355be,// 61 PAY  34 

    0xa09dd0bb,// 62 PAY  35 

    0x30458666,// 63 PAY  36 

    0x489f19c4,// 64 PAY  37 

    0x24f656f0,// 65 PAY  38 

    0xcf3bc443,// 66 PAY  39 

    0x6067a823,// 67 PAY  40 

    0x9ba9a018,// 68 PAY  41 

    0x4fb7c7ca,// 69 PAY  42 

    0xfa2806f6,// 70 PAY  43 

    0x51463dbd,// 71 PAY  44 

    0x266a290a,// 72 PAY  45 

    0xdad4e60a,// 73 PAY  46 

    0x708604a3,// 74 PAY  47 

    0x88d84a7f,// 75 PAY  48 

    0x3e5ac9a9,// 76 PAY  49 

    0x235e3d9f,// 77 PAY  50 

    0x6447663f,// 78 PAY  51 

    0xc2f87018,// 79 PAY  52 

    0xb28e39b2,// 80 PAY  53 

    0x4085fe54,// 81 PAY  54 

    0xab9ec9c1,// 82 PAY  55 

    0xe42fcfa7,// 83 PAY  56 

    0xf5f78ff4,// 84 PAY  57 

    0xf68a204f,// 85 PAY  58 

    0xf5258b62,// 86 PAY  59 

    0xf30785fc,// 87 PAY  60 

    0xbc59fd91,// 88 PAY  61 

    0x94732e91,// 89 PAY  62 

    0x8d2312d4,// 90 PAY  63 

    0x071d254d,// 91 PAY  64 

    0xa1f5165f,// 92 PAY  65 

    0xda0fff3d,// 93 PAY  66 

    0x148ca7b7,// 94 PAY  67 

    0xaf6243ea,// 95 PAY  68 

    0x359f05e6,// 96 PAY  69 

    0xa7107044,// 97 PAY  70 

    0x23a654b7,// 98 PAY  71 

    0x4fe1fa57,// 99 PAY  72 

    0x10f97228,// 100 PAY  73 

    0x5060b8c1,// 101 PAY  74 

    0xf9cd9e16,// 102 PAY  75 

    0xfc114b16,// 103 PAY  76 

    0x4f942479,// 104 PAY  77 

    0x85c76346,// 105 PAY  78 

    0xbe21d250,// 106 PAY  79 

    0x50db7306,// 107 PAY  80 

    0xcf614709,// 108 PAY  81 

    0x84998627,// 109 PAY  82 

    0xb9e0834b,// 110 PAY  83 

    0xc76509be,// 111 PAY  84 

    0x5a9b0d1c,// 112 PAY  85 

    0x369eaaa4,// 113 PAY  86 

    0xdaf6790e,// 114 PAY  87 

    0xe2535b9c,// 115 PAY  88 

    0xbf2f12f3,// 116 PAY  89 

    0x58f6373a,// 117 PAY  90 

    0x799c6895,// 118 PAY  91 

    0x681bda16,// 119 PAY  92 

    0xe921e0cd,// 120 PAY  93 

    0x352f3636,// 121 PAY  94 

    0x851c4696,// 122 PAY  95 

    0xd63454a3,// 123 PAY  96 

    0x62a5e952,// 124 PAY  97 

    0xc69a8f09,// 125 PAY  98 

    0xaf428d00,// 126 PAY  99 

    0xa5576797,// 127 PAY 100 

    0x457ee0a5,// 128 PAY 101 

    0x30623e7e,// 129 PAY 102 

    0x9602384b,// 130 PAY 103 

    0x47f69b5b,// 131 PAY 104 

    0xee206df6,// 132 PAY 105 

    0xd569ebad,// 133 PAY 106 

    0x3b1ae03c,// 134 PAY 107 

    0x573d7181,// 135 PAY 108 

    0x80f49b67,// 136 PAY 109 

    0x5ed94da0,// 137 PAY 110 

    0xb2c7e207,// 138 PAY 111 

    0xce3df5ba,// 139 PAY 112 

    0x6e485aec,// 140 PAY 113 

    0x3646d7cf,// 141 PAY 114 

    0x0d916670,// 142 PAY 115 

    0x7caea41e,// 143 PAY 116 

    0x8c0253c1,// 144 PAY 117 

    0xbde8eba9,// 145 PAY 118 

    0x6ea54282,// 146 PAY 119 

    0x31719bcd,// 147 PAY 120 

    0x030d0fe7,// 148 PAY 121 

    0x95b0c7a6,// 149 PAY 122 

    0x08ce37c8,// 150 PAY 123 

    0xde41253c,// 151 PAY 124 

    0xbcb5efca,// 152 PAY 125 

    0xf348c518,// 153 PAY 126 

    0x6eab1f9c,// 154 PAY 127 

    0x912e8066,// 155 PAY 128 

    0x246597cf,// 156 PAY 129 

    0xef244605,// 157 PAY 130 

    0x4baf4282,// 158 PAY 131 

    0xffcebe5f,// 159 PAY 132 

    0x89a2662a,// 160 PAY 133 

    0x70f066d9,// 161 PAY 134 

    0xbcd42656,// 162 PAY 135 

    0x95f76f9d,// 163 PAY 136 

    0x6b51a52f,// 164 PAY 137 

    0x8436f1f7,// 165 PAY 138 

    0xc5c1183a,// 166 PAY 139 

    0x88f334c0,// 167 PAY 140 

    0x6997b0b8,// 168 PAY 141 

    0x44737bba,// 169 PAY 142 

    0x54da4072,// 170 PAY 143 

    0x09cdf752,// 171 PAY 144 

    0x2a1da16d,// 172 PAY 145 

    0xcefe4e10,// 173 PAY 146 

    0x3d0ef6ee,// 174 PAY 147 

    0x836d983d,// 175 PAY 148 

    0xf71394d6,// 176 PAY 149 

    0xbb97319b,// 177 PAY 150 

    0x3401ec65,// 178 PAY 151 

    0x2c83f2a3,// 179 PAY 152 

    0xae86afc0,// 180 PAY 153 

    0x494f58cb,// 181 PAY 154 

    0x4e46ae3d,// 182 PAY 155 

    0x2bcb5b61,// 183 PAY 156 

    0xddfb7e91,// 184 PAY 157 

    0x4a8750fc,// 185 PAY 158 

    0x1b0927ab,// 186 PAY 159 

    0x413d05a5,// 187 PAY 160 

    0x692d7c13,// 188 PAY 161 

    0x28421a61,// 189 PAY 162 

    0x03f60817,// 190 PAY 163 

    0x55a094fa,// 191 PAY 164 

    0xc159a35d,// 192 PAY 165 

    0x1f468196,// 193 PAY 166 

    0xec7a55d5,// 194 PAY 167 

    0x9b4236b3,// 195 PAY 168 

    0x4cb94f02,// 196 PAY 169 

    0x22aebf68,// 197 PAY 170 

    0xdddbec70,// 198 PAY 171 

    0x957eeb0b,// 199 PAY 172 

    0xcd980a45,// 200 PAY 173 

    0x6b90d376,// 201 PAY 174 

    0xcb425232,// 202 PAY 175 

    0xab523b04,// 203 PAY 176 

    0x38ef2afb,// 204 PAY 177 

    0xa6c89718,// 205 PAY 178 

    0x5f8d49c6,// 206 PAY 179 

    0x4091aeaf,// 207 PAY 180 

    0x969a6c93,// 208 PAY 181 

    0x094ae59c,// 209 PAY 182 

    0x01fa44b0,// 210 PAY 183 

    0x6e065ef2,// 211 PAY 184 

    0x40b4dd19,// 212 PAY 185 

    0x03398b74,// 213 PAY 186 

    0x95eee99f,// 214 PAY 187 

    0xd93f9154,// 215 PAY 188 

    0x44b281ac,// 216 PAY 189 

    0x3bf552a6,// 217 PAY 190 

    0x8e82e2b9,// 218 PAY 191 

    0x1799ef59,// 219 PAY 192 

    0x84d9b2b7,// 220 PAY 193 

    0xb33dca79,// 221 PAY 194 

    0x01106e4d,// 222 PAY 195 

    0x6b1c91d8,// 223 PAY 196 

    0xb6d2cb0d,// 224 PAY 197 

    0x05f6a94c,// 225 PAY 198 

    0x36301011,// 226 PAY 199 

    0x3fa25cd4,// 227 PAY 200 

    0xd1d9995a,// 228 PAY 201 

    0x383265cf,// 229 PAY 202 

    0xb745cb6a,// 230 PAY 203 

    0xbc4781e9,// 231 PAY 204 

    0xc4da061f,// 232 PAY 205 

    0x769c7142,// 233 PAY 206 

    0x0422d762,// 234 PAY 207 

    0x7ba5fa5c,// 235 PAY 208 

    0xb9024a7f,// 236 PAY 209 

    0x0b78f4c8,// 237 PAY 210 

    0x1fe4af63,// 238 PAY 211 

    0x3b81dbf0,// 239 PAY 212 

    0xf6043690,// 240 PAY 213 

    0xc0b9698d,// 241 PAY 214 

    0x91d3fe47,// 242 PAY 215 

    0x9dbccc99,// 243 PAY 216 

    0x345bc19a,// 244 PAY 217 

    0xefe25556,// 245 PAY 218 

    0x5aac0377,// 246 PAY 219 

    0xa4df94f1,// 247 PAY 220 

    0x99a50150,// 248 PAY 221 

    0xb93b7c4a,// 249 PAY 222 

    0xf8d430c7,// 250 PAY 223 

    0xbed7b2ab,// 251 PAY 224 

    0x513089ca,// 252 PAY 225 

    0xa542a31f,// 253 PAY 226 

    0xda2e6a87,// 254 PAY 227 

    0x85024d40,// 255 PAY 228 

    0x6644c0e3,// 256 PAY 229 

    0x71a348b0,// 257 PAY 230 

    0x9b329b00,// 258 PAY 231 

    0x979b37d6,// 259 PAY 232 

    0xb4ec20e9,// 260 PAY 233 

    0xd46a738d,// 261 PAY 234 

    0x1dac5041,// 262 PAY 235 

    0x61e7ed33,// 263 PAY 236 

    0x5f53265b,// 264 PAY 237 

    0x64ae5326,// 265 PAY 238 

    0xd1556110,// 266 PAY 239 

    0x60e74c10,// 267 PAY 240 

    0x0facacdf,// 268 PAY 241 

    0xa7b61a02,// 269 PAY 242 

    0x140df53f,// 270 PAY 243 

    0x55ba32ed,// 271 PAY 244 

    0x1b911dd9,// 272 PAY 245 

    0xd2c7bb7b,// 273 PAY 246 

    0x12793d36,// 274 PAY 247 

    0x04937993,// 275 PAY 248 

    0xee940935,// 276 PAY 249 

    0xd487b034,// 277 PAY 250 

    0xf804c2a2,// 278 PAY 251 

    0xa5fbddc1,// 279 PAY 252 

    0xa177e7ea,// 280 PAY 253 

    0xaeeec320,// 281 PAY 254 

    0xb804c3e2,// 282 PAY 255 

    0x7fef1071,// 283 PAY 256 

    0x7a2d41e4,// 284 PAY 257 

    0xfc0d21d3,// 285 PAY 258 

    0x0afed52f,// 286 PAY 259 

    0x98d8e13b,// 287 PAY 260 

    0x9fcbb082,// 288 PAY 261 

    0x7ae4168a,// 289 PAY 262 

    0xce249e5f,// 290 PAY 263 

    0xf0d8f580,// 291 PAY 264 

    0x743518e9,// 292 PAY 265 

    0x771fff12,// 293 PAY 266 

    0xb1a36e70,// 294 PAY 267 

    0x8cf39d8a,// 295 PAY 268 

    0x9a8478ed,// 296 PAY 269 

    0xe1979b72,// 297 PAY 270 

    0xfd0a721d,// 298 PAY 271 

    0xd733021c,// 299 PAY 272 

    0x823cfbb3,// 300 PAY 273 

    0x29cff339,// 301 PAY 274 

    0xe4b6817c,// 302 PAY 275 

    0x258ec3b4,// 303 PAY 276 

    0x0c3418de,// 304 PAY 277 

    0x15a4eb2d,// 305 PAY 278 

    0x85ed4d87,// 306 PAY 279 

    0xda2824a7,// 307 PAY 280 

    0xedb16750,// 308 PAY 281 

    0xd4c6bf97,// 309 PAY 282 

    0x7be8fc17,// 310 PAY 283 

    0xe9af424a,// 311 PAY 284 

    0x74227c7d,// 312 PAY 285 

    0xc794277d,// 313 PAY 286 

    0xfa3bb3f5,// 314 PAY 287 

    0xc66b78b9,// 315 PAY 288 

    0x0cb215cb,// 316 PAY 289 

    0x5cb59d70,// 317 PAY 290 

    0xd73031a9,// 318 PAY 291 

    0x28d40085,// 319 PAY 292 

    0xea5c4fb5,// 320 PAY 293 

    0x0de93448,// 321 PAY 294 

    0x3cfa7142,// 322 PAY 295 

    0x0851234e,// 323 PAY 296 

    0x6bb09621,// 324 PAY 297 

    0x44fb28ed,// 325 PAY 298 

    0xc014056a,// 326 PAY 299 

    0xbad7e500,// 327 PAY 300 

    0x7731078a,// 328 PAY 301 

    0x9963e54a,// 329 PAY 302 

    0xb13665db,// 330 PAY 303 

    0xf0aa34a9,// 331 PAY 304 

    0xad96da86,// 332 PAY 305 

    0xab8055b3,// 333 PAY 306 

    0x4b72c9c2,// 334 PAY 307 

    0x93092018,// 335 PAY 308 

    0x721a18c2,// 336 PAY 309 

    0xee55d621,// 337 PAY 310 

    0xc9fc6bf4,// 338 PAY 311 

    0x6f6fa126,// 339 PAY 312 

    0xbfeff0a7,// 340 PAY 313 

    0xfe9811a7,// 341 PAY 314 

    0xb63fcb22,// 342 PAY 315 

    0x389fbdaa,// 343 PAY 316 

    0xf5d6e886,// 344 PAY 317 

    0xc30b05a3,// 345 PAY 318 

    0x4e5ab0e9,// 346 PAY 319 

    0x9f54d24d,// 347 PAY 320 

    0x38fae6c1,// 348 PAY 321 

    0x67cb9d76,// 349 PAY 322 

    0xc78e5169,// 350 PAY 323 

    0x88f74f7e,// 351 PAY 324 

    0xcbcd211b,// 352 PAY 325 

    0xe02c5729,// 353 PAY 326 

    0xd7572720,// 354 PAY 327 

    0xd785241e,// 355 PAY 328 

    0x3617f120,// 356 PAY 329 

    0x7f931991,// 357 PAY 330 

    0x0facf5eb,// 358 PAY 331 

    0x08ec273d,// 359 PAY 332 

    0x39f0574a,// 360 PAY 333 

    0xaed03c4a,// 361 PAY 334 

    0x386218fd,// 362 PAY 335 

    0x7da04401,// 363 PAY 336 

    0xdb25b1f1,// 364 PAY 337 

    0xefb689a9,// 365 PAY 338 

    0xdb5e3fb7,// 366 PAY 339 

    0xc15d08c7,// 367 PAY 340 

    0x8dd20ce4,// 368 PAY 341 

    0x1ba21329,// 369 PAY 342 

    0x613b247a,// 370 PAY 343 

    0x3f45b009,// 371 PAY 344 

    0xd7f20566,// 372 PAY 345 

    0x54e4b6ff,// 373 PAY 346 

    0x038ef826,// 374 PAY 347 

    0xf0735369,// 375 PAY 348 

    0x176eb81a,// 376 PAY 349 

    0x81bcf51d,// 377 PAY 350 

    0x09dd71e2,// 378 PAY 351 

    0x3ca34708,// 379 PAY 352 

    0x9ed60315,// 380 PAY 353 

    0xf9ddaa4e,// 381 PAY 354 

    0xe8548d3a,// 382 PAY 355 

    0x1d33acfe,// 383 PAY 356 

    0xe9ce01b5,// 384 PAY 357 

    0xb84189e5,// 385 PAY 358 

    0x85391d98,// 386 PAY 359 

    0x6cece17d,// 387 PAY 360 

    0x761939b0,// 388 PAY 361 

    0x40ad74dc,// 389 PAY 362 

    0x2933a88e,// 390 PAY 363 

    0x774deb6d,// 391 PAY 364 

    0x46000000,// 392 PAY 365 

/// STA is 1 words. 

/// STA num_pkts       : 151 

/// STA pkt_idx        : 156 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3c 

    0x02703c97 // 393 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt25_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x07 

/// ECH pdu_tag        : 0x00 

    0x00070000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x80402846,// 4 SCX   2 

    0x00004300,// 5 SCX   3 

    0xd2e3b44b,// 6 SCX   4 

    0x5f3cb2ee,// 7 SCX   5 

    0x353a8a01,// 8 SCX   6 

    0x724b61e5,// 9 SCX   7 

    0x6ec4ed59,// 10 SCX   8 

    0x1f1d2f16,// 11 SCX   9 

    0xea72c941,// 12 SCX  10 

    0xa3360e5e,// 13 SCX  11 

    0xde37de17,// 14 SCX  12 

    0x526d7767,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1284 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 793 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 793 

/// BFD lencrypto      : 480 

/// BFD ofstcrypto     : 84 

/// BFD (ofst+len)cry  : 564 

/// BFD ofstiv         : 56 

/// BFD ofsticv        : 964 

    0x00000319,// 16 BFD   1 

    0x005401e0,// 17 BFD   2 

    0x03c40038,// 18 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c0039ec,// 19 MFM   1 

    0x31f21406,// 20 MFM   2 

    0x63b5d948,// 21 MFM   3 

    0xfe12c277,// 22 MFM   4 

    0x1f6a4164,// 23 MFM   5 

    0x97530d81,// 24 MFM   6 

    0xb34c3f7c,// 25 MFM   7 

    0x9f7036d2,// 26 MFM   8 

    0xc058332e,// 27 MFM   9 

    0xd8e1cc05,// 28 MFM  10 

    0x377e38a9,// 29 MFM  11 

    0xb90dfceb,// 30 MFM  12 

    0x57b3fcdd,// 31 MFM  13 

    0xb7c521be,// 32 MFM  14 

    0x724cc6cb,// 33 MFM  15 

    0x873ee439,// 34 MFM  16 

/// BDA is 322 words. 

/// BDA size     is 1284 (0x504) 

/// BDA id       is 0xdca0 

    0x0504dca0,// 35 BDA   1 

/// PAY Generic Data size   : 1284 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x837034ef,// 36 PAY   1 

    0x951db558,// 37 PAY   2 

    0xb7483f5f,// 38 PAY   3 

    0x046abba2,// 39 PAY   4 

    0xbb1a4c20,// 40 PAY   5 

    0x01d1db32,// 41 PAY   6 

    0x8285c5d7,// 42 PAY   7 

    0x3b1f4cf2,// 43 PAY   8 

    0x40fe26b9,// 44 PAY   9 

    0x0fa95211,// 45 PAY  10 

    0x33378c03,// 46 PAY  11 

    0xc5985311,// 47 PAY  12 

    0x01c1f203,// 48 PAY  13 

    0x1bc5869a,// 49 PAY  14 

    0x3902e8e1,// 50 PAY  15 

    0xde58e18f,// 51 PAY  16 

    0x674bc1ad,// 52 PAY  17 

    0x77392798,// 53 PAY  18 

    0x12a1ba28,// 54 PAY  19 

    0x1bd6bfa3,// 55 PAY  20 

    0x71c20d5c,// 56 PAY  21 

    0x11ed8565,// 57 PAY  22 

    0x64f4f94c,// 58 PAY  23 

    0xf80f5a06,// 59 PAY  24 

    0xbf5ab03e,// 60 PAY  25 

    0x08c958f5,// 61 PAY  26 

    0x1ecf4ff7,// 62 PAY  27 

    0x8505b37b,// 63 PAY  28 

    0xf52b1c36,// 64 PAY  29 

    0xd9f09f27,// 65 PAY  30 

    0xd0030693,// 66 PAY  31 

    0x41174ed4,// 67 PAY  32 

    0x9d17a5c7,// 68 PAY  33 

    0x08f85f5f,// 69 PAY  34 

    0xd2b11893,// 70 PAY  35 

    0xd076f176,// 71 PAY  36 

    0xe0365a25,// 72 PAY  37 

    0xfe7f1180,// 73 PAY  38 

    0x274d3492,// 74 PAY  39 

    0xa7afe402,// 75 PAY  40 

    0x43b845af,// 76 PAY  41 

    0xc1a6ef36,// 77 PAY  42 

    0x9bd11ccf,// 78 PAY  43 

    0x75e100c7,// 79 PAY  44 

    0x1b9ed1d0,// 80 PAY  45 

    0x9a519c83,// 81 PAY  46 

    0x47903676,// 82 PAY  47 

    0xf931d144,// 83 PAY  48 

    0x6c866c1e,// 84 PAY  49 

    0x346c507b,// 85 PAY  50 

    0xdedc4ef3,// 86 PAY  51 

    0x28060579,// 87 PAY  52 

    0x49dfb94f,// 88 PAY  53 

    0x7ff32f1a,// 89 PAY  54 

    0x5c99b9b8,// 90 PAY  55 

    0x09b9af4e,// 91 PAY  56 

    0x261ffac6,// 92 PAY  57 

    0x94c6648f,// 93 PAY  58 

    0x76107f4d,// 94 PAY  59 

    0xb5651cd7,// 95 PAY  60 

    0x22441da9,// 96 PAY  61 

    0xa71ec3d1,// 97 PAY  62 

    0x39c8c723,// 98 PAY  63 

    0x7d32dbee,// 99 PAY  64 

    0xaf7da132,// 100 PAY  65 

    0x252dc2df,// 101 PAY  66 

    0x07e25438,// 102 PAY  67 

    0xf5815280,// 103 PAY  68 

    0xfaede86c,// 104 PAY  69 

    0xc8292cbf,// 105 PAY  70 

    0x5e3f1359,// 106 PAY  71 

    0xfb48dfa5,// 107 PAY  72 

    0x74f28381,// 108 PAY  73 

    0x68a3b25f,// 109 PAY  74 

    0x64260f0d,// 110 PAY  75 

    0x50d2fbce,// 111 PAY  76 

    0x5ee8ee3b,// 112 PAY  77 

    0xbe4e8beb,// 113 PAY  78 

    0x232bac75,// 114 PAY  79 

    0x24183887,// 115 PAY  80 

    0x85a3a7a3,// 116 PAY  81 

    0xf5d379a8,// 117 PAY  82 

    0x0a6ac4f1,// 118 PAY  83 

    0x38dbd1aa,// 119 PAY  84 

    0x523179cd,// 120 PAY  85 

    0x0406c2da,// 121 PAY  86 

    0x095e2b1a,// 122 PAY  87 

    0x280d63a8,// 123 PAY  88 

    0x082ffd48,// 124 PAY  89 

    0xff8c697d,// 125 PAY  90 

    0x9c3c9264,// 126 PAY  91 

    0xf49e3d17,// 127 PAY  92 

    0xf841f5d3,// 128 PAY  93 

    0x169b4bfe,// 129 PAY  94 

    0xeeb26f32,// 130 PAY  95 

    0xb7c2c087,// 131 PAY  96 

    0x41b5430a,// 132 PAY  97 

    0xd9b0db4f,// 133 PAY  98 

    0xd6c36fc1,// 134 PAY  99 

    0xe3537ef7,// 135 PAY 100 

    0xa0a2c5b6,// 136 PAY 101 

    0x2b2bf23a,// 137 PAY 102 

    0x6c247326,// 138 PAY 103 

    0x0e9367c1,// 139 PAY 104 

    0xeffd0df0,// 140 PAY 105 

    0xdc5b8f7f,// 141 PAY 106 

    0xaee26435,// 142 PAY 107 

    0xc306a776,// 143 PAY 108 

    0x21a38bf7,// 144 PAY 109 

    0xa5ac594e,// 145 PAY 110 

    0x27dbfa4a,// 146 PAY 111 

    0xebd81bdf,// 147 PAY 112 

    0x0c376b44,// 148 PAY 113 

    0x891a8dbb,// 149 PAY 114 

    0xef85fc64,// 150 PAY 115 

    0x77beaf2f,// 151 PAY 116 

    0x1553d4a6,// 152 PAY 117 

    0x49de9d22,// 153 PAY 118 

    0x4623188e,// 154 PAY 119 

    0xbd026f25,// 155 PAY 120 

    0x53abd450,// 156 PAY 121 

    0xd5eb0ec4,// 157 PAY 122 

    0xaaa5603d,// 158 PAY 123 

    0x2253d435,// 159 PAY 124 

    0x9a2654eb,// 160 PAY 125 

    0x5b794f2d,// 161 PAY 126 

    0x1c478522,// 162 PAY 127 

    0x0a1b5664,// 163 PAY 128 

    0x207c87db,// 164 PAY 129 

    0xad371ec2,// 165 PAY 130 

    0x4d531bb5,// 166 PAY 131 

    0xb4c830de,// 167 PAY 132 

    0x3ac2e3e8,// 168 PAY 133 

    0x85869c69,// 169 PAY 134 

    0xf1842560,// 170 PAY 135 

    0xed8eac28,// 171 PAY 136 

    0x14dce315,// 172 PAY 137 

    0xe45124d0,// 173 PAY 138 

    0x4c57d06b,// 174 PAY 139 

    0x802a98a6,// 175 PAY 140 

    0xf9d7c914,// 176 PAY 141 

    0x3f5032e5,// 177 PAY 142 

    0xbad5cb70,// 178 PAY 143 

    0x8fb6cc3f,// 179 PAY 144 

    0x97cd8776,// 180 PAY 145 

    0x91676797,// 181 PAY 146 

    0xb0a7b15b,// 182 PAY 147 

    0x5efd490e,// 183 PAY 148 

    0xabe7bdf0,// 184 PAY 149 

    0xe28f9348,// 185 PAY 150 

    0x235287ae,// 186 PAY 151 

    0xd7bd47ab,// 187 PAY 152 

    0x4638ceb0,// 188 PAY 153 

    0x128278b4,// 189 PAY 154 

    0xe3f9048d,// 190 PAY 155 

    0x46789858,// 191 PAY 156 

    0xae62f628,// 192 PAY 157 

    0xe0c4da65,// 193 PAY 158 

    0x3e777ad4,// 194 PAY 159 

    0x19c0f945,// 195 PAY 160 

    0x0080a70f,// 196 PAY 161 

    0x76de0814,// 197 PAY 162 

    0xd02477ce,// 198 PAY 163 

    0x24404dd8,// 199 PAY 164 

    0x0348b361,// 200 PAY 165 

    0x5fcea812,// 201 PAY 166 

    0xed65708c,// 202 PAY 167 

    0xd149cd20,// 203 PAY 168 

    0x55679bcf,// 204 PAY 169 

    0x9443b042,// 205 PAY 170 

    0x395be7b7,// 206 PAY 171 

    0x2cff4347,// 207 PAY 172 

    0xb12f4413,// 208 PAY 173 

    0x1d62391b,// 209 PAY 174 

    0x023c884b,// 210 PAY 175 

    0x452d0a64,// 211 PAY 176 

    0x0e09985f,// 212 PAY 177 

    0x0fbd6c03,// 213 PAY 178 

    0x43dc6a9d,// 214 PAY 179 

    0x170ea0bb,// 215 PAY 180 

    0x88d3566a,// 216 PAY 181 

    0x0bfb1eb3,// 217 PAY 182 

    0x98eb758b,// 218 PAY 183 

    0xe03faa3e,// 219 PAY 184 

    0xcec43488,// 220 PAY 185 

    0xbc9e8de0,// 221 PAY 186 

    0xe85bbfb7,// 222 PAY 187 

    0x1c72b412,// 223 PAY 188 

    0x133040c4,// 224 PAY 189 

    0x7c66f642,// 225 PAY 190 

    0x75928b35,// 226 PAY 191 

    0xb8fa3d42,// 227 PAY 192 

    0x6d15c4e4,// 228 PAY 193 

    0x65136da3,// 229 PAY 194 

    0x342e0380,// 230 PAY 195 

    0xc97c56ec,// 231 PAY 196 

    0x98412435,// 232 PAY 197 

    0x7a77c477,// 233 PAY 198 

    0x22ca98f8,// 234 PAY 199 

    0x731d080e,// 235 PAY 200 

    0xb503fd55,// 236 PAY 201 

    0xf4563b6c,// 237 PAY 202 

    0x5a7659c1,// 238 PAY 203 

    0xa2fca8f9,// 239 PAY 204 

    0x0ffde924,// 240 PAY 205 

    0x390c755e,// 241 PAY 206 

    0xdd8d0946,// 242 PAY 207 

    0xf8fdf425,// 243 PAY 208 

    0x86e1276e,// 244 PAY 209 

    0x9621c6e3,// 245 PAY 210 

    0x7a62dc66,// 246 PAY 211 

    0xa4140d0e,// 247 PAY 212 

    0x1348e101,// 248 PAY 213 

    0xb6fce2d0,// 249 PAY 214 

    0xb0fcfc29,// 250 PAY 215 

    0xef1aa321,// 251 PAY 216 

    0x8286c34c,// 252 PAY 217 

    0x76af8167,// 253 PAY 218 

    0x4056f1f8,// 254 PAY 219 

    0x3950e849,// 255 PAY 220 

    0x0a03ec7f,// 256 PAY 221 

    0x089caba4,// 257 PAY 222 

    0x1b294921,// 258 PAY 223 

    0xe315a485,// 259 PAY 224 

    0x17905273,// 260 PAY 225 

    0x37cc4da8,// 261 PAY 226 

    0x3836f389,// 262 PAY 227 

    0xb7146700,// 263 PAY 228 

    0x44e7afc8,// 264 PAY 229 

    0x5df16b6f,// 265 PAY 230 

    0x1566e156,// 266 PAY 231 

    0x0309f79e,// 267 PAY 232 

    0xf567cefd,// 268 PAY 233 

    0xdcee7c8c,// 269 PAY 234 

    0x3189fef4,// 270 PAY 235 

    0x02faf92b,// 271 PAY 236 

    0x91a6d600,// 272 PAY 237 

    0x10dfed4e,// 273 PAY 238 

    0x230cdee3,// 274 PAY 239 

    0x0f9886d4,// 275 PAY 240 

    0x9486bdca,// 276 PAY 241 

    0x873dadb4,// 277 PAY 242 

    0x1c7c42a0,// 278 PAY 243 

    0x2da45b39,// 279 PAY 244 

    0x0ec7cbc5,// 280 PAY 245 

    0x053ee180,// 281 PAY 246 

    0x2f07496b,// 282 PAY 247 

    0xc812148d,// 283 PAY 248 

    0xe4ddbf7e,// 284 PAY 249 

    0x795ba4d2,// 285 PAY 250 

    0x753a2ca5,// 286 PAY 251 

    0xc862b71c,// 287 PAY 252 

    0x8fb0f614,// 288 PAY 253 

    0x558aaf9a,// 289 PAY 254 

    0x73c41ff3,// 290 PAY 255 

    0x6370fe7d,// 291 PAY 256 

    0xe949ef96,// 292 PAY 257 

    0x78705d82,// 293 PAY 258 

    0x93e5daa4,// 294 PAY 259 

    0xd0eda3ed,// 295 PAY 260 

    0xe4ed34d6,// 296 PAY 261 

    0xce94c044,// 297 PAY 262 

    0x5f5567db,// 298 PAY 263 

    0x0668f162,// 299 PAY 264 

    0x4832501c,// 300 PAY 265 

    0x505839c5,// 301 PAY 266 

    0xf79c1109,// 302 PAY 267 

    0xe0175a1e,// 303 PAY 268 

    0xc6ee369d,// 304 PAY 269 

    0x95ad2d49,// 305 PAY 270 

    0xbe405f9c,// 306 PAY 271 

    0x74edb043,// 307 PAY 272 

    0xc7f244d8,// 308 PAY 273 

    0x5e8f04ff,// 309 PAY 274 

    0x5791db54,// 310 PAY 275 

    0xdb4a8468,// 311 PAY 276 

    0x3829c2bf,// 312 PAY 277 

    0x853976a0,// 313 PAY 278 

    0x56e7a466,// 314 PAY 279 

    0x86dc4fdf,// 315 PAY 280 

    0x6530669d,// 316 PAY 281 

    0x73ff6d86,// 317 PAY 282 

    0x11c2e020,// 318 PAY 283 

    0x2df8edb8,// 319 PAY 284 

    0x3a2aab2e,// 320 PAY 285 

    0xd3ab356b,// 321 PAY 286 

    0xfc49e3e7,// 322 PAY 287 

    0x1992fa4b,// 323 PAY 288 

    0x0aee296b,// 324 PAY 289 

    0x43a03ed8,// 325 PAY 290 

    0x2008ad64,// 326 PAY 291 

    0xe42fde82,// 327 PAY 292 

    0x6f6789fe,// 328 PAY 293 

    0xeb5882ec,// 329 PAY 294 

    0x627a03af,// 330 PAY 295 

    0x211c0d99,// 331 PAY 296 

    0x2ce1e3a9,// 332 PAY 297 

    0x03f2cd9c,// 333 PAY 298 

    0xe7205e64,// 334 PAY 299 

    0x25336ac9,// 335 PAY 300 

    0x30dc372c,// 336 PAY 301 

    0x5833e5f7,// 337 PAY 302 

    0xe2c478e6,// 338 PAY 303 

    0x62f3b20a,// 339 PAY 304 

    0xc4bb28b6,// 340 PAY 305 

    0x71d09764,// 341 PAY 306 

    0xfebdab4e,// 342 PAY 307 

    0x3a7ebe23,// 343 PAY 308 

    0x09a49319,// 344 PAY 309 

    0x950d9067,// 345 PAY 310 

    0xa976e332,// 346 PAY 311 

    0xed3f0092,// 347 PAY 312 

    0x5daa3500,// 348 PAY 313 

    0xe2d84d4b,// 349 PAY 314 

    0x4bb47bca,// 350 PAY 315 

    0x1e2ef813,// 351 PAY 316 

    0x17f1228a,// 352 PAY 317 

    0x9dc02f2e,// 353 PAY 318 

    0x290f0c3f,// 354 PAY 319 

    0x04659c81,// 355 PAY 320 

    0x618576ef,// 356 PAY 321 

/// STA is 1 words. 

/// STA num_pkts       : 145 

/// STA pkt_idx        : 230 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4d 

    0x03994d91 // 357 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt26_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x8041280c,// 4 SCX   2 

    0x00001400,// 5 SCX   3 

    0x088e0f43,// 6 SCX   4 

    0xe3fd26f4,// 7 SCX   5 

    0x21c89581,// 8 SCX   6 

    0x91e8ee3f,// 9 SCX   7 

    0x2ddebcc4,// 10 SCX   8 

    0x2ead8d11,// 11 SCX   9 

    0x0325c5e8,// 12 SCX  10 

    0x486e0243,// 13 SCX  11 

    0x85df8166,// 14 SCX  12 

    0x25f84af2,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 431 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 265 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 265 

/// BFD lencrypto      : 40 

/// BFD ofstcrypto     : 60 

/// BFD (ofst+len)cry  : 100 

/// BFD ofstiv         : 40 

/// BFD ofsticv        : 344 

    0x00000109,// 16 BFD   1 

    0x003c0028,// 17 BFD   2 

    0x01580028,// 18 BFD   3 

/// MFM is 6 words. 

/// MFM vldnibs        : 25 

    0x2500d6e3,// 19 MFM   1 

    0x3515c43f,// 20 MFM   2 

    0xf8fb4d59,// 21 MFM   3 

    0xf5947e22,// 22 MFM   4 

    0x8e4c30e0,// 23 MFM   5 

    0xc0000000,// 24 MFM   6 

/// BDA is 109 words. 

/// BDA size     is 431 (0x1af) 

/// BDA id       is 0x9ed4 

    0x01af9ed4,// 25 BDA   1 

/// PAY Generic Data size   : 431 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x91cb524d,// 26 PAY   1 

    0xcc58a94e,// 27 PAY   2 

    0x24cbf6cf,// 28 PAY   3 

    0x592e44eb,// 29 PAY   4 

    0xf82ed209,// 30 PAY   5 

    0xea49eb19,// 31 PAY   6 

    0x177841a5,// 32 PAY   7 

    0xa45bedfc,// 33 PAY   8 

    0xb22db768,// 34 PAY   9 

    0x3ef59a2d,// 35 PAY  10 

    0xd8af37d5,// 36 PAY  11 

    0xa52d0ce3,// 37 PAY  12 

    0x08527a93,// 38 PAY  13 

    0x2073b8c8,// 39 PAY  14 

    0x644f9464,// 40 PAY  15 

    0x78ef915e,// 41 PAY  16 

    0x916bc800,// 42 PAY  17 

    0xe6e59dfc,// 43 PAY  18 

    0x39b4760d,// 44 PAY  19 

    0x42324a9c,// 45 PAY  20 

    0x2f5aacb8,// 46 PAY  21 

    0x9567ae4c,// 47 PAY  22 

    0xbe862f9a,// 48 PAY  23 

    0xc4635d28,// 49 PAY  24 

    0x0d18257a,// 50 PAY  25 

    0x8e8c378b,// 51 PAY  26 

    0x8b671aa0,// 52 PAY  27 

    0xcb33880a,// 53 PAY  28 

    0xff4327f4,// 54 PAY  29 

    0x9d3df710,// 55 PAY  30 

    0x9354f1c1,// 56 PAY  31 

    0x382bf611,// 57 PAY  32 

    0x21dc8b2b,// 58 PAY  33 

    0x6a73bc09,// 59 PAY  34 

    0x3eae9d06,// 60 PAY  35 

    0x9316af64,// 61 PAY  36 

    0xc4e18e1a,// 62 PAY  37 

    0xf49aea38,// 63 PAY  38 

    0x0b9868d7,// 64 PAY  39 

    0x05a9a0d7,// 65 PAY  40 

    0xe3e1fb86,// 66 PAY  41 

    0xd8343454,// 67 PAY  42 

    0xa000e436,// 68 PAY  43 

    0x3b3bdf14,// 69 PAY  44 

    0xed05ead4,// 70 PAY  45 

    0x4b027c29,// 71 PAY  46 

    0x38ee210b,// 72 PAY  47 

    0x2e91cd5f,// 73 PAY  48 

    0xf43b74e4,// 74 PAY  49 

    0x696d8afd,// 75 PAY  50 

    0x4f4f6e5f,// 76 PAY  51 

    0x4396cbc1,// 77 PAY  52 

    0xef24f167,// 78 PAY  53 

    0x8991652e,// 79 PAY  54 

    0x65ceb360,// 80 PAY  55 

    0xa4a0770e,// 81 PAY  56 

    0xe50403f0,// 82 PAY  57 

    0xd4558315,// 83 PAY  58 

    0xc4583d3d,// 84 PAY  59 

    0x6ef38285,// 85 PAY  60 

    0xab2722b3,// 86 PAY  61 

    0xb29022ea,// 87 PAY  62 

    0xacebedbd,// 88 PAY  63 

    0x1aa7c2c1,// 89 PAY  64 

    0x8b4b55ee,// 90 PAY  65 

    0x4cfb8727,// 91 PAY  66 

    0x84da03cb,// 92 PAY  67 

    0xe5828565,// 93 PAY  68 

    0x831a7850,// 94 PAY  69 

    0x3b47a2a6,// 95 PAY  70 

    0x54766f96,// 96 PAY  71 

    0x5fd7898c,// 97 PAY  72 

    0x7ef58e24,// 98 PAY  73 

    0x5a2f1ed3,// 99 PAY  74 

    0x7386f35c,// 100 PAY  75 

    0x3dfcb22a,// 101 PAY  76 

    0x4986d726,// 102 PAY  77 

    0x92eafc60,// 103 PAY  78 

    0xdbafe7f4,// 104 PAY  79 

    0xd69c8066,// 105 PAY  80 

    0x67215cd5,// 106 PAY  81 

    0x798d6f58,// 107 PAY  82 

    0xbc472451,// 108 PAY  83 

    0x2c4a8bd6,// 109 PAY  84 

    0xc8d07247,// 110 PAY  85 

    0xe1d4acf8,// 111 PAY  86 

    0xf991998f,// 112 PAY  87 

    0xf57c9eb1,// 113 PAY  88 

    0xbb8cefa3,// 114 PAY  89 

    0xc56073c2,// 115 PAY  90 

    0x69d4762a,// 116 PAY  91 

    0x422184da,// 117 PAY  92 

    0x8f1a3eb3,// 118 PAY  93 

    0x2722c683,// 119 PAY  94 

    0x61f01701,// 120 PAY  95 

    0x2100ba74,// 121 PAY  96 

    0x01f7ebfd,// 122 PAY  97 

    0x3e2f12af,// 123 PAY  98 

    0x7e048828,// 124 PAY  99 

    0x35b7935d,// 125 PAY 100 

    0x08b82bac,// 126 PAY 101 

    0xb49bb4d1,// 127 PAY 102 

    0x6379dfb8,// 128 PAY 103 

    0xfd55d600,// 129 PAY 104 

    0xc9d995cf,// 130 PAY 105 

    0x71d31730,// 131 PAY 106 

    0x7c848e1d,// 132 PAY 107 

    0x3b598b00,// 133 PAY 108 

/// STA is 1 words. 

/// STA num_pkts       : 14 

/// STA pkt_idx        : 249 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc8 

    0x03e4c80e // 134 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt27_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x804528b1,// 4 SCX   2 

    0x000033c2,// 5 SCX   3 

    0x6d37041a,// 6 SCX   4 

    0x0fa72df2,// 7 SCX   5 

    0x5cf699eb,// 8 SCX   6 

    0x2d268707,// 9 SCX   7 

    0x06bd6d64,// 10 SCX   8 

    0xb319e891,// 11 SCX   9 

    0xe593196d,// 12 SCX  10 

    0x5a45ec5f,// 13 SCX  11 

    0x6d58203d,// 14 SCX  12 

    0xca1d6679,// 15 SCX  13 

    0x681cda68,// 16 SCX  14 

    0x0f4dcef0,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1554 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1289 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1289 

/// BFD lencrypto      : 112 

/// BFD ofstcrypto     : 1160 

/// BFD (ofst+len)cry  : 1272 

/// BFD ofstiv         : 356 

/// BFD ofsticv        : 1488 

    0x00000509,// 18 BFD   1 

    0x04880070,// 19 BFD   2 

    0x05d00164,// 20 BFD   3 

/// MFM is 4 words. 

/// MFM vldnibs        : 18 

    0x1800d5b3,// 21 MFM   1 

    0x6870e20f,// 22 MFM   2 

    0x03ed5c23,// 23 MFM   3 

    0x5a110000,// 24 MFM   4 

/// BDA is 390 words. 

/// BDA size     is 1554 (0x612) 

/// BDA id       is 0x601b 

    0x0612601b,// 25 BDA   1 

/// PAY Generic Data size   : 1554 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xa57d737d,// 26 PAY   1 

    0x01302fe7,// 27 PAY   2 

    0xcc121e3b,// 28 PAY   3 

    0x87091841,// 29 PAY   4 

    0x7242d89f,// 30 PAY   5 

    0x5a288f0c,// 31 PAY   6 

    0xa47fdff5,// 32 PAY   7 

    0x56639dbe,// 33 PAY   8 

    0x1b357158,// 34 PAY   9 

    0x3ce07c3a,// 35 PAY  10 

    0x96e297f4,// 36 PAY  11 

    0xb9820cfd,// 37 PAY  12 

    0x3e01059d,// 38 PAY  13 

    0x53361fdc,// 39 PAY  14 

    0x67cb1a5f,// 40 PAY  15 

    0xb05a5d67,// 41 PAY  16 

    0x09405e9c,// 42 PAY  17 

    0x78192904,// 43 PAY  18 

    0x6b24762d,// 44 PAY  19 

    0x477ce8c9,// 45 PAY  20 

    0xe9dc6b6f,// 46 PAY  21 

    0xfbe18a6f,// 47 PAY  22 

    0xbaad6b80,// 48 PAY  23 

    0x185b715b,// 49 PAY  24 

    0x71807f30,// 50 PAY  25 

    0x89c42d3e,// 51 PAY  26 

    0xe3fb553a,// 52 PAY  27 

    0x7aca9c59,// 53 PAY  28 

    0xbc13885e,// 54 PAY  29 

    0x0dc7c515,// 55 PAY  30 

    0x330f1501,// 56 PAY  31 

    0x5a8f8dfc,// 57 PAY  32 

    0x0bfa3aed,// 58 PAY  33 

    0x2f311227,// 59 PAY  34 

    0x7d596f70,// 60 PAY  35 

    0xc110326c,// 61 PAY  36 

    0x589c933d,// 62 PAY  37 

    0xb41eb0a1,// 63 PAY  38 

    0x15a50847,// 64 PAY  39 

    0x7a6d776f,// 65 PAY  40 

    0xb9712836,// 66 PAY  41 

    0xc403ab5d,// 67 PAY  42 

    0x77310bbe,// 68 PAY  43 

    0x49257e3b,// 69 PAY  44 

    0xf80a5bc5,// 70 PAY  45 

    0xf5a8c967,// 71 PAY  46 

    0x8afcfd89,// 72 PAY  47 

    0xa4728d07,// 73 PAY  48 

    0x383d57f3,// 74 PAY  49 

    0x765946c3,// 75 PAY  50 

    0xbeb51b4f,// 76 PAY  51 

    0xc998ac49,// 77 PAY  52 

    0x172903b9,// 78 PAY  53 

    0x67dd3da8,// 79 PAY  54 

    0xa7542968,// 80 PAY  55 

    0x91aff946,// 81 PAY  56 

    0x88b0ae56,// 82 PAY  57 

    0x96ddaef9,// 83 PAY  58 

    0x9378d248,// 84 PAY  59 

    0xb91992a8,// 85 PAY  60 

    0x10b366b5,// 86 PAY  61 

    0xb4325802,// 87 PAY  62 

    0xe5348fa5,// 88 PAY  63 

    0x710ed7d0,// 89 PAY  64 

    0xb07ee624,// 90 PAY  65 

    0x4e46caf1,// 91 PAY  66 

    0x35452fdb,// 92 PAY  67 

    0xae2bc2dc,// 93 PAY  68 

    0xff4a493a,// 94 PAY  69 

    0xcb4678bb,// 95 PAY  70 

    0xf74e25fd,// 96 PAY  71 

    0x577b6633,// 97 PAY  72 

    0x5d405d3f,// 98 PAY  73 

    0xf47d5bb9,// 99 PAY  74 

    0x3152ef9a,// 100 PAY  75 

    0x768181b4,// 101 PAY  76 

    0x0bff2877,// 102 PAY  77 

    0x03478903,// 103 PAY  78 

    0xc75d15cf,// 104 PAY  79 

    0x24bad10c,// 105 PAY  80 

    0xd5d0ab45,// 106 PAY  81 

    0xb8ab37ff,// 107 PAY  82 

    0x49bd7ed0,// 108 PAY  83 

    0xb0f8e685,// 109 PAY  84 

    0x54099f91,// 110 PAY  85 

    0x65ada0d0,// 111 PAY  86 

    0x6b151460,// 112 PAY  87 

    0x88059661,// 113 PAY  88 

    0x733560d1,// 114 PAY  89 

    0xae67dc6f,// 115 PAY  90 

    0xf07c56a6,// 116 PAY  91 

    0xc08fc5a1,// 117 PAY  92 

    0x1417515e,// 118 PAY  93 

    0xb7feec1b,// 119 PAY  94 

    0xebbf2996,// 120 PAY  95 

    0x99c9ea6a,// 121 PAY  96 

    0x3188399c,// 122 PAY  97 

    0xc38d12dc,// 123 PAY  98 

    0xba485b91,// 124 PAY  99 

    0x0259d4a0,// 125 PAY 100 

    0x77eebae2,// 126 PAY 101 

    0xcb7b6316,// 127 PAY 102 

    0x2beac27e,// 128 PAY 103 

    0xad5d5ef6,// 129 PAY 104 

    0x59dc9588,// 130 PAY 105 

    0xd3206589,// 131 PAY 106 

    0x42a5ee23,// 132 PAY 107 

    0x8b2f5423,// 133 PAY 108 

    0x3d00d0d7,// 134 PAY 109 

    0x63bfcf39,// 135 PAY 110 

    0xb9d40d86,// 136 PAY 111 

    0x0b97dbe3,// 137 PAY 112 

    0x3775585d,// 138 PAY 113 

    0xd465d292,// 139 PAY 114 

    0x5fe82a12,// 140 PAY 115 

    0x057ece70,// 141 PAY 116 

    0x0f8ef99c,// 142 PAY 117 

    0x197ff913,// 143 PAY 118 

    0x48cdc151,// 144 PAY 119 

    0x88d01b9e,// 145 PAY 120 

    0x8a853f9e,// 146 PAY 121 

    0xe278d1ad,// 147 PAY 122 

    0xc2a7b8b4,// 148 PAY 123 

    0xb82d2b82,// 149 PAY 124 

    0x9e4b56e1,// 150 PAY 125 

    0x97841017,// 151 PAY 126 

    0x2081fe67,// 152 PAY 127 

    0xeac125a5,// 153 PAY 128 

    0xd102170a,// 154 PAY 129 

    0x79563095,// 155 PAY 130 

    0x7cd41db1,// 156 PAY 131 

    0x1f62e5e3,// 157 PAY 132 

    0xd272644d,// 158 PAY 133 

    0x3232000d,// 159 PAY 134 

    0xbd30db2b,// 160 PAY 135 

    0x89dbb70e,// 161 PAY 136 

    0x8950aa89,// 162 PAY 137 

    0xd564a8c9,// 163 PAY 138 

    0x3c01cc3b,// 164 PAY 139 

    0x5f271e3a,// 165 PAY 140 

    0x6a11cca9,// 166 PAY 141 

    0x2cd1fddc,// 167 PAY 142 

    0x2326774f,// 168 PAY 143 

    0x940b6a2a,// 169 PAY 144 

    0xbd848ee6,// 170 PAY 145 

    0x53f38aca,// 171 PAY 146 

    0x30e849ef,// 172 PAY 147 

    0x2541a435,// 173 PAY 148 

    0xd3b16b02,// 174 PAY 149 

    0xe66a512d,// 175 PAY 150 

    0x1150280a,// 176 PAY 151 

    0xb24a8bd0,// 177 PAY 152 

    0x552c9cea,// 178 PAY 153 

    0x0c15b879,// 179 PAY 154 

    0x744112bb,// 180 PAY 155 

    0x70dad1b9,// 181 PAY 156 

    0x8169dd62,// 182 PAY 157 

    0x9734f44a,// 183 PAY 158 

    0xc0b885de,// 184 PAY 159 

    0x89f7e2b8,// 185 PAY 160 

    0x14edc88d,// 186 PAY 161 

    0x4786ec3f,// 187 PAY 162 

    0xd2d8bb14,// 188 PAY 163 

    0xda1c82bc,// 189 PAY 164 

    0x3d16deb6,// 190 PAY 165 

    0xd177ae74,// 191 PAY 166 

    0x47db56c5,// 192 PAY 167 

    0x0ee470bc,// 193 PAY 168 

    0x4cf9a364,// 194 PAY 169 

    0xa8e39c34,// 195 PAY 170 

    0xea33485f,// 196 PAY 171 

    0x7ecd35b6,// 197 PAY 172 

    0xa6aaf191,// 198 PAY 173 

    0x05c6fba1,// 199 PAY 174 

    0x57bb6ce0,// 200 PAY 175 

    0x9a33be40,// 201 PAY 176 

    0xdd219c97,// 202 PAY 177 

    0x236308d8,// 203 PAY 178 

    0x09e5854b,// 204 PAY 179 

    0x81f895c4,// 205 PAY 180 

    0x46cf58c2,// 206 PAY 181 

    0x31a8440e,// 207 PAY 182 

    0x467be644,// 208 PAY 183 

    0xe0c4e5f9,// 209 PAY 184 

    0x725de6cd,// 210 PAY 185 

    0x570a6804,// 211 PAY 186 

    0x50c727ed,// 212 PAY 187 

    0xdf55edc3,// 213 PAY 188 

    0x5bc22aa2,// 214 PAY 189 

    0x46a7c7b8,// 215 PAY 190 

    0x9fc750e0,// 216 PAY 191 

    0xafac88d5,// 217 PAY 192 

    0x3bd6e73f,// 218 PAY 193 

    0xa6a171c9,// 219 PAY 194 

    0x69872811,// 220 PAY 195 

    0x8cdd8892,// 221 PAY 196 

    0xf878d851,// 222 PAY 197 

    0x777b0808,// 223 PAY 198 

    0x4719896e,// 224 PAY 199 

    0x5bda652b,// 225 PAY 200 

    0x30fd72cb,// 226 PAY 201 

    0xfc03431c,// 227 PAY 202 

    0xde6eafe3,// 228 PAY 203 

    0x3b914c6c,// 229 PAY 204 

    0xa3ffe7c3,// 230 PAY 205 

    0xfa74bf16,// 231 PAY 206 

    0x9a28d113,// 232 PAY 207 

    0xd8f72409,// 233 PAY 208 

    0x4e701c1b,// 234 PAY 209 

    0x895a330f,// 235 PAY 210 

    0xca135905,// 236 PAY 211 

    0x2e391d17,// 237 PAY 212 

    0x9ed43e10,// 238 PAY 213 

    0x90fe5a8e,// 239 PAY 214 

    0x90916b5b,// 240 PAY 215 

    0x27607a13,// 241 PAY 216 

    0x42b550c8,// 242 PAY 217 

    0x131276f6,// 243 PAY 218 

    0x915c7000,// 244 PAY 219 

    0xde716093,// 245 PAY 220 

    0x956c6486,// 246 PAY 221 

    0x7b5bb622,// 247 PAY 222 

    0x8dc8c867,// 248 PAY 223 

    0x622ca148,// 249 PAY 224 

    0x557a722f,// 250 PAY 225 

    0xf4ad73e4,// 251 PAY 226 

    0x2fbcc474,// 252 PAY 227 

    0x55cdf18a,// 253 PAY 228 

    0x40d3f621,// 254 PAY 229 

    0x83927759,// 255 PAY 230 

    0x84e34236,// 256 PAY 231 

    0xbbb44a59,// 257 PAY 232 

    0x34711730,// 258 PAY 233 

    0x1984e46f,// 259 PAY 234 

    0x875000fe,// 260 PAY 235 

    0x1f794ba6,// 261 PAY 236 

    0x9d9d8b4f,// 262 PAY 237 

    0x8f5b108b,// 263 PAY 238 

    0x2e186ae6,// 264 PAY 239 

    0x1f12a9c8,// 265 PAY 240 

    0x91a3304b,// 266 PAY 241 

    0xf1b89059,// 267 PAY 242 

    0x3b4576f2,// 268 PAY 243 

    0x16c60bb5,// 269 PAY 244 

    0xd7d9db3d,// 270 PAY 245 

    0x56cf73be,// 271 PAY 246 

    0x06056187,// 272 PAY 247 

    0x5d37b2ba,// 273 PAY 248 

    0xaa2093da,// 274 PAY 249 

    0xc61be865,// 275 PAY 250 

    0x1ffc1ffd,// 276 PAY 251 

    0x3c5b3490,// 277 PAY 252 

    0x2dd27c45,// 278 PAY 253 

    0x75a5a69a,// 279 PAY 254 

    0x3548a09f,// 280 PAY 255 

    0x4d6e6f1b,// 281 PAY 256 

    0x1bb5bfac,// 282 PAY 257 

    0xbeafa63d,// 283 PAY 258 

    0x08beddd1,// 284 PAY 259 

    0x329c5a65,// 285 PAY 260 

    0x802473f5,// 286 PAY 261 

    0x68490a6d,// 287 PAY 262 

    0xcfd04eac,// 288 PAY 263 

    0x19b85990,// 289 PAY 264 

    0x4f6d8089,// 290 PAY 265 

    0x80e288de,// 291 PAY 266 

    0xda0b3f9d,// 292 PAY 267 

    0xa08166e5,// 293 PAY 268 

    0x40ce50ac,// 294 PAY 269 

    0xb0c98a92,// 295 PAY 270 

    0xfc86fe57,// 296 PAY 271 

    0x6c5ae172,// 297 PAY 272 

    0xca639282,// 298 PAY 273 

    0xa2bdd619,// 299 PAY 274 

    0x9787d949,// 300 PAY 275 

    0x3dedde60,// 301 PAY 276 

    0x02da1947,// 302 PAY 277 

    0x4cf46865,// 303 PAY 278 

    0x6bc8c807,// 304 PAY 279 

    0xbbf4dedd,// 305 PAY 280 

    0x31046391,// 306 PAY 281 

    0x4b48e8d0,// 307 PAY 282 

    0x6588828a,// 308 PAY 283 

    0xdc565a15,// 309 PAY 284 

    0x92990dc5,// 310 PAY 285 

    0x3cb3f40b,// 311 PAY 286 

    0x41f66e05,// 312 PAY 287 

    0xe7171cc5,// 313 PAY 288 

    0x619a9d57,// 314 PAY 289 

    0x78fbe60d,// 315 PAY 290 

    0xde05502a,// 316 PAY 291 

    0x074d6f30,// 317 PAY 292 

    0xaf22aa64,// 318 PAY 293 

    0x0632ec4f,// 319 PAY 294 

    0xf6826513,// 320 PAY 295 

    0x3cac9ecc,// 321 PAY 296 

    0x2dbe1979,// 322 PAY 297 

    0x03001a60,// 323 PAY 298 

    0x01cd550c,// 324 PAY 299 

    0xf51da91f,// 325 PAY 300 

    0x75c4c189,// 326 PAY 301 

    0x6098bc43,// 327 PAY 302 

    0x77d2bd14,// 328 PAY 303 

    0x071e6764,// 329 PAY 304 

    0xae28a057,// 330 PAY 305 

    0x30623c76,// 331 PAY 306 

    0xe2c3d99e,// 332 PAY 307 

    0x2a809d17,// 333 PAY 308 

    0x65c5586b,// 334 PAY 309 

    0x180012ce,// 335 PAY 310 

    0x227223db,// 336 PAY 311 

    0x57522973,// 337 PAY 312 

    0xfc826f9e,// 338 PAY 313 

    0x0f94188f,// 339 PAY 314 

    0xa6e72a6f,// 340 PAY 315 

    0xa0a573b2,// 341 PAY 316 

    0x1d09528a,// 342 PAY 317 

    0x0407595f,// 343 PAY 318 

    0xaa7686f9,// 344 PAY 319 

    0x1cb518e7,// 345 PAY 320 

    0x89455af8,// 346 PAY 321 

    0x8aa746d6,// 347 PAY 322 

    0x725d680e,// 348 PAY 323 

    0x978116d2,// 349 PAY 324 

    0x277f33ce,// 350 PAY 325 

    0x8ab42368,// 351 PAY 326 

    0x2f7b3014,// 352 PAY 327 

    0xde08fc9f,// 353 PAY 328 

    0x244cd3b5,// 354 PAY 329 

    0x354c4f12,// 355 PAY 330 

    0x7a5aff0f,// 356 PAY 331 

    0x2eb3b45e,// 357 PAY 332 

    0xac89c311,// 358 PAY 333 

    0xee2607ec,// 359 PAY 334 

    0x4d17101c,// 360 PAY 335 

    0x40cab3b6,// 361 PAY 336 

    0xb91cdb5a,// 362 PAY 337 

    0x98e7d4e5,// 363 PAY 338 

    0xc62fe91b,// 364 PAY 339 

    0x5591d25b,// 365 PAY 340 

    0xdff0564c,// 366 PAY 341 

    0xe9660d0e,// 367 PAY 342 

    0x82381b3a,// 368 PAY 343 

    0xc0cf0237,// 369 PAY 344 

    0x07ec3a74,// 370 PAY 345 

    0x445feb55,// 371 PAY 346 

    0xe2a0eb1d,// 372 PAY 347 

    0xdbd3ccf2,// 373 PAY 348 

    0x037385ed,// 374 PAY 349 

    0x934ee0dc,// 375 PAY 350 

    0x6991a2ca,// 376 PAY 351 

    0x006cc4e8,// 377 PAY 352 

    0x832d4fa6,// 378 PAY 353 

    0xf4748cea,// 379 PAY 354 

    0x69d6dc2b,// 380 PAY 355 

    0x653b4862,// 381 PAY 356 

    0x4bf70f13,// 382 PAY 357 

    0xc924dbdb,// 383 PAY 358 

    0xdc0c25e6,// 384 PAY 359 

    0x2a55cbcc,// 385 PAY 360 

    0x03a7b78e,// 386 PAY 361 

    0x50e9d0be,// 387 PAY 362 

    0x1a027991,// 388 PAY 363 

    0x1d917b5f,// 389 PAY 364 

    0xcf3f741c,// 390 PAY 365 

    0xc1fc9fc5,// 391 PAY 366 

    0x0eafe0b0,// 392 PAY 367 

    0x3a9c11f8,// 393 PAY 368 

    0x1e4170b3,// 394 PAY 369 

    0xda49db9a,// 395 PAY 370 

    0x28ce0f61,// 396 PAY 371 

    0xc68353d0,// 397 PAY 372 

    0x422fe239,// 398 PAY 373 

    0x072f158c,// 399 PAY 374 

    0xbb11eb85,// 400 PAY 375 

    0x649fe8f6,// 401 PAY 376 

    0x140aa172,// 402 PAY 377 

    0xcbb926da,// 403 PAY 378 

    0xd97a1927,// 404 PAY 379 

    0xca305cd4,// 405 PAY 380 

    0x13ece921,// 406 PAY 381 

    0x3ba55c2a,// 407 PAY 382 

    0xf6b27d73,// 408 PAY 383 

    0xdc82a765,// 409 PAY 384 

    0xd1300ed7,// 410 PAY 385 

    0xbcc133e1,// 411 PAY 386 

    0xc1c7a7e4,// 412 PAY 387 

    0x15480f00,// 413 PAY 388 

    0x80ba0000,// 414 PAY 389 

/// STA is 1 words. 

/// STA num_pkts       : 214 

/// STA pkt_idx        : 254 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc1 

    0x03f8c1d6 // 415 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt28_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x8040287b,// 4 SCX   2 

    0x00003400,// 5 SCX   3 

    0xa5af314d,// 6 SCX   4 

    0x2249d787,// 7 SCX   5 

    0x63298fd8,// 8 SCX   6 

    0xd8dc7a5b,// 9 SCX   7 

    0x27f1780c,// 10 SCX   8 

    0x70bfbfd8,// 11 SCX   9 

    0x45de8e14,// 12 SCX  10 

    0x724fc48f,// 13 SCX  11 

    0x1bd385cb,// 14 SCX  12 

    0x5a1ae741,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1021 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 578 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 578 

/// BFD lencrypto      : 112 

/// BFD ofstcrypto     : 192 

/// BFD (ofst+len)cry  : 304 

/// BFD ofstiv         : 168 

/// BFD ofsticv        : 848 

    0x00000242,// 16 BFD   1 

    0x00c00070,// 17 BFD   2 

    0x035000a8,// 18 BFD   3 

/// MFM is 15 words. 

/// MFM vldnibs        : 6e 

    0x6e007c8a,// 19 MFM   1 

    0x4779b0e9,// 20 MFM   2 

    0x657cfed4,// 21 MFM   3 

    0xfd1fe0b1,// 22 MFM   4 

    0x9b2dfbaf,// 23 MFM   5 

    0x0c343e15,// 24 MFM   6 

    0xf96a9b1b,// 25 MFM   7 

    0x7288844b,// 26 MFM   8 

    0xdff44671,// 27 MFM   9 

    0x082249ae,// 28 MFM  10 

    0x728ca4d8,// 29 MFM  11 

    0x9c1af03f,// 30 MFM  12 

    0xa1245f48,// 31 MFM  13 

    0x0330ee1b,// 32 MFM  14 

    0xd5000000,// 33 MFM  15 

/// BDA is 257 words. 

/// BDA size     is 1021 (0x3fd) 

/// BDA id       is 0x24a3 

    0x03fd24a3,// 34 BDA   1 

/// PAY Generic Data size   : 1021 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xc32ee435,// 35 PAY   1 

    0x8d2acb39,// 36 PAY   2 

    0x5692b5d9,// 37 PAY   3 

    0x8273505a,// 38 PAY   4 

    0x0aa4bf83,// 39 PAY   5 

    0x873264f7,// 40 PAY   6 

    0xeb1eecf2,// 41 PAY   7 

    0xcdb23c37,// 42 PAY   8 

    0xc2992c03,// 43 PAY   9 

    0x52037d28,// 44 PAY  10 

    0x25a07776,// 45 PAY  11 

    0xa028d155,// 46 PAY  12 

    0x1f82399d,// 47 PAY  13 

    0x982f342a,// 48 PAY  14 

    0xba992a9e,// 49 PAY  15 

    0x051cfec0,// 50 PAY  16 

    0xc878113b,// 51 PAY  17 

    0x49727d3b,// 52 PAY  18 

    0xe1785fa4,// 53 PAY  19 

    0x72e93368,// 54 PAY  20 

    0xbb7fa5f0,// 55 PAY  21 

    0x3f21ce41,// 56 PAY  22 

    0xa9a3dcab,// 57 PAY  23 

    0x506eb64a,// 58 PAY  24 

    0xa7aa0dd8,// 59 PAY  25 

    0xeab594bc,// 60 PAY  26 

    0x9160f567,// 61 PAY  27 

    0xfa8face6,// 62 PAY  28 

    0x1eea097b,// 63 PAY  29 

    0x7bbc1573,// 64 PAY  30 

    0xd64f9a75,// 65 PAY  31 

    0x191bb291,// 66 PAY  32 

    0xfd0bfb7b,// 67 PAY  33 

    0x17f556c9,// 68 PAY  34 

    0xc77013bd,// 69 PAY  35 

    0xb6ffa46c,// 70 PAY  36 

    0xcc5889d2,// 71 PAY  37 

    0x32d7ec71,// 72 PAY  38 

    0xdc7b166f,// 73 PAY  39 

    0x979eb0ea,// 74 PAY  40 

    0x6910db74,// 75 PAY  41 

    0xd2f3e2ed,// 76 PAY  42 

    0x53b1464e,// 77 PAY  43 

    0xa9856a6f,// 78 PAY  44 

    0xf746f743,// 79 PAY  45 

    0x3900880c,// 80 PAY  46 

    0x11415935,// 81 PAY  47 

    0xc0f746df,// 82 PAY  48 

    0x3e30f5ed,// 83 PAY  49 

    0xfc1fa190,// 84 PAY  50 

    0x473a3cb8,// 85 PAY  51 

    0x79b4110c,// 86 PAY  52 

    0xb2fe6836,// 87 PAY  53 

    0x786424a4,// 88 PAY  54 

    0x8f810e5a,// 89 PAY  55 

    0xdd9d4d36,// 90 PAY  56 

    0x7439d9f9,// 91 PAY  57 

    0x7d68bd31,// 92 PAY  58 

    0x7038f8eb,// 93 PAY  59 

    0x318fdd44,// 94 PAY  60 

    0x62ac9847,// 95 PAY  61 

    0x6f2ac785,// 96 PAY  62 

    0x9999dde1,// 97 PAY  63 

    0x2668ba9b,// 98 PAY  64 

    0x5434be81,// 99 PAY  65 

    0xfd8d879a,// 100 PAY  66 

    0x7ca251ac,// 101 PAY  67 

    0xef5a3941,// 102 PAY  68 

    0x1a2d963d,// 103 PAY  69 

    0x08612b3b,// 104 PAY  70 

    0xc0defec6,// 105 PAY  71 

    0xb3ef06b0,// 106 PAY  72 

    0x0d7b97a0,// 107 PAY  73 

    0xfcb5eb49,// 108 PAY  74 

    0x6332e236,// 109 PAY  75 

    0x7aa94ab0,// 110 PAY  76 

    0xa5f5afe8,// 111 PAY  77 

    0xb34646cb,// 112 PAY  78 

    0xb7662c7e,// 113 PAY  79 

    0xaa3c5e34,// 114 PAY  80 

    0x7f6b4b40,// 115 PAY  81 

    0xdaec2fd3,// 116 PAY  82 

    0x6456a198,// 117 PAY  83 

    0x8198852b,// 118 PAY  84 

    0x443b5b3f,// 119 PAY  85 

    0x38b37d67,// 120 PAY  86 

    0xa0f6b846,// 121 PAY  87 

    0xa376cf1a,// 122 PAY  88 

    0xc5dd71fa,// 123 PAY  89 

    0x9daee8d2,// 124 PAY  90 

    0x8bb3709b,// 125 PAY  91 

    0xf0da03d5,// 126 PAY  92 

    0xef138c40,// 127 PAY  93 

    0x4311b42e,// 128 PAY  94 

    0xcf813c61,// 129 PAY  95 

    0x832313e9,// 130 PAY  96 

    0x63afab6d,// 131 PAY  97 

    0xf4c7f629,// 132 PAY  98 

    0xc4862d82,// 133 PAY  99 

    0xa7b3a0b4,// 134 PAY 100 

    0x048017e0,// 135 PAY 101 

    0x9914fc4c,// 136 PAY 102 

    0x1999d726,// 137 PAY 103 

    0x7b3e9432,// 138 PAY 104 

    0x78ccf98f,// 139 PAY 105 

    0x5281b683,// 140 PAY 106 

    0xe5e018f0,// 141 PAY 107 

    0x96ea5ef9,// 142 PAY 108 

    0xc65edbf0,// 143 PAY 109 

    0x4b17321e,// 144 PAY 110 

    0x456a680f,// 145 PAY 111 

    0xeb82e43e,// 146 PAY 112 

    0xa1886725,// 147 PAY 113 

    0x0d63daf6,// 148 PAY 114 

    0x876bcee6,// 149 PAY 115 

    0x24bc23d3,// 150 PAY 116 

    0xf7b059b4,// 151 PAY 117 

    0x34c241c7,// 152 PAY 118 

    0x3cbdf39f,// 153 PAY 119 

    0x1b46098b,// 154 PAY 120 

    0x764726bf,// 155 PAY 121 

    0xbd129e65,// 156 PAY 122 

    0x4f455fb6,// 157 PAY 123 

    0x4833cf59,// 158 PAY 124 

    0xa242e543,// 159 PAY 125 

    0xd4012e9a,// 160 PAY 126 

    0xe414be0a,// 161 PAY 127 

    0x1b32b674,// 162 PAY 128 

    0x555bdb71,// 163 PAY 129 

    0x26c48856,// 164 PAY 130 

    0x435821da,// 165 PAY 131 

    0xa2ff2e67,// 166 PAY 132 

    0xe4ba417c,// 167 PAY 133 

    0x50eb72c5,// 168 PAY 134 

    0x5fde15c7,// 169 PAY 135 

    0x3d4b1279,// 170 PAY 136 

    0x93cedc79,// 171 PAY 137 

    0x36210f83,// 172 PAY 138 

    0xb236c79a,// 173 PAY 139 

    0x444e4606,// 174 PAY 140 

    0x7b361b78,// 175 PAY 141 

    0x66f16b0b,// 176 PAY 142 

    0x3fa0e109,// 177 PAY 143 

    0xf06a4c75,// 178 PAY 144 

    0x23d652b1,// 179 PAY 145 

    0x8cad38c9,// 180 PAY 146 

    0xaaa5ac2a,// 181 PAY 147 

    0x693c049f,// 182 PAY 148 

    0x6bb0998f,// 183 PAY 149 

    0x2416a403,// 184 PAY 150 

    0xcc45d594,// 185 PAY 151 

    0x8800da2c,// 186 PAY 152 

    0x5d292a4e,// 187 PAY 153 

    0xb4bbb3e4,// 188 PAY 154 

    0x7bfbd9d3,// 189 PAY 155 

    0x491e13f5,// 190 PAY 156 

    0xf000faa6,// 191 PAY 157 

    0x748db314,// 192 PAY 158 

    0xb78aa874,// 193 PAY 159 

    0x5d54588b,// 194 PAY 160 

    0x9680279f,// 195 PAY 161 

    0x477be0eb,// 196 PAY 162 

    0xb850c16e,// 197 PAY 163 

    0x9c7c9af5,// 198 PAY 164 

    0xbda129e4,// 199 PAY 165 

    0x50cd9771,// 200 PAY 166 

    0x0016764d,// 201 PAY 167 

    0xc2472122,// 202 PAY 168 

    0x89621328,// 203 PAY 169 

    0x8e24aed4,// 204 PAY 170 

    0xca7c324c,// 205 PAY 171 

    0x7f189795,// 206 PAY 172 

    0x5f58b822,// 207 PAY 173 

    0xca54a471,// 208 PAY 174 

    0xf30c16a7,// 209 PAY 175 

    0x2e2a264a,// 210 PAY 176 

    0x7043b09f,// 211 PAY 177 

    0x618f8560,// 212 PAY 178 

    0xc677f045,// 213 PAY 179 

    0x5c04a204,// 214 PAY 180 

    0x2540381f,// 215 PAY 181 

    0x90b552af,// 216 PAY 182 

    0xd3e56bc8,// 217 PAY 183 

    0x68275515,// 218 PAY 184 

    0x7ba22af0,// 219 PAY 185 

    0x32fa4c9e,// 220 PAY 186 

    0x77bcfd12,// 221 PAY 187 

    0xe3ac6f6b,// 222 PAY 188 

    0x2ca92b8c,// 223 PAY 189 

    0x4aba183b,// 224 PAY 190 

    0x68f99bc5,// 225 PAY 191 

    0x89b66a18,// 226 PAY 192 

    0xf4c6d27f,// 227 PAY 193 

    0x7a6554fb,// 228 PAY 194 

    0xb50d9d83,// 229 PAY 195 

    0xebec3013,// 230 PAY 196 

    0xaf9cb832,// 231 PAY 197 

    0x4d23dfed,// 232 PAY 198 

    0x195272a4,// 233 PAY 199 

    0x3a281290,// 234 PAY 200 

    0x6d5d2b95,// 235 PAY 201 

    0x7967be10,// 236 PAY 202 

    0x3c454e76,// 237 PAY 203 

    0x92527cca,// 238 PAY 204 

    0xec992af8,// 239 PAY 205 

    0x43075d32,// 240 PAY 206 

    0x7cc59548,// 241 PAY 207 

    0x18735ead,// 242 PAY 208 

    0x798bab01,// 243 PAY 209 

    0x3bff890b,// 244 PAY 210 

    0x2a766b17,// 245 PAY 211 

    0x7126a85c,// 246 PAY 212 

    0x64052c64,// 247 PAY 213 

    0xb2d18178,// 248 PAY 214 

    0xf4a36095,// 249 PAY 215 

    0xc3f6026f,// 250 PAY 216 

    0x2dcf0c58,// 251 PAY 217 

    0xd0dff559,// 252 PAY 218 

    0x697f297f,// 253 PAY 219 

    0x0a5232ee,// 254 PAY 220 

    0x6bc4aa66,// 255 PAY 221 

    0x478667c3,// 256 PAY 222 

    0x4955ebe4,// 257 PAY 223 

    0xf06231d9,// 258 PAY 224 

    0x4c5c8589,// 259 PAY 225 

    0x8a5761e2,// 260 PAY 226 

    0x8fee4efb,// 261 PAY 227 

    0x0b506283,// 262 PAY 228 

    0x8b01ff65,// 263 PAY 229 

    0x819d838f,// 264 PAY 230 

    0x73abe9d9,// 265 PAY 231 

    0xda52b2a7,// 266 PAY 232 

    0x17ca0ae7,// 267 PAY 233 

    0x4865d07b,// 268 PAY 234 

    0x24b53aff,// 269 PAY 235 

    0x003e76ab,// 270 PAY 236 

    0x2b89a2df,// 271 PAY 237 

    0x3618b470,// 272 PAY 238 

    0x7d1741af,// 273 PAY 239 

    0x5508f324,// 274 PAY 240 

    0x4d93b217,// 275 PAY 241 

    0x03126563,// 276 PAY 242 

    0x63d53c5c,// 277 PAY 243 

    0xd69faa27,// 278 PAY 244 

    0x535ff50a,// 279 PAY 245 

    0x1d0f5b3f,// 280 PAY 246 

    0x024943f7,// 281 PAY 247 

    0x75c2aa81,// 282 PAY 248 

    0x2ec15bef,// 283 PAY 249 

    0x82574ce5,// 284 PAY 250 

    0xc8655fce,// 285 PAY 251 

    0x7be5553d,// 286 PAY 252 

    0xcbf1d357,// 287 PAY 253 

    0xc400021b,// 288 PAY 254 

    0x86f8a3f6,// 289 PAY 255 

    0x59000000,// 290 PAY 256 

/// STA is 1 words. 

/// STA num_pkts       : 128 

/// STA pkt_idx        : 122 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xe5 

    0x01e8e580 // 291 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt29_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x80462802,// 4 SCX   2 

    0x00006282,// 5 SCX   3 

    0x6976fa41,// 6 SCX   4 

    0xade53cb2,// 7 SCX   5 

    0x68105704,// 8 SCX   6 

    0x0bf5d9d4,// 9 SCX   7 

    0x0c3c73f3,// 10 SCX   8 

    0x3a3f7a18,// 11 SCX   9 

    0x59945a01,// 12 SCX  10 

    0xe625d74f,// 13 SCX  11 

    0xd9a8992d,// 14 SCX  12 

    0xff0de7a0,// 15 SCX  13 

    0x63e7647f,// 16 SCX  14 

    0xbea95b62,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1463 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 971 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 971 

/// BFD lencrypto      : 88 

/// BFD ofstcrypto     : 756 

/// BFD (ofst+len)cry  : 844 

/// BFD ofstiv         : 720 

/// BFD ofsticv        : 1420 

    0x000003cb,// 18 BFD   1 

    0x02f40058,// 19 BFD   2 

    0x058c02d0,// 20 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c004c8f,// 21 MFM   1 

    0xc6ad9aa0,// 22 MFM   2 

    0x3e31f1e9,// 23 MFM   3 

    0x5a6236ad,// 24 MFM   4 

    0x094d59ff,// 25 MFM   5 

    0x40722eb7,// 26 MFM   6 

    0xb2af56e3,// 27 MFM   7 

    0xc02dc356,// 28 MFM   8 

    0x97580e39,// 29 MFM   9 

    0x28efc91c,// 30 MFM  10 

    0x20bf83ca,// 31 MFM  11 

    0xe7dd4633,// 32 MFM  12 

    0xfd88ca89,// 33 MFM  13 

    0x0d2f4891,// 34 MFM  14 

    0x18b1dc95,// 35 MFM  15 

    0x9bbfcb59,// 36 MFM  16 

/// BDA is 367 words. 

/// BDA size     is 1463 (0x5b7) 

/// BDA id       is 0x31c5 

    0x05b731c5,// 37 BDA   1 

/// PAY Generic Data size   : 1463 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x4f8b40e1,// 38 PAY   1 

    0x1d65da9e,// 39 PAY   2 

    0x5306fa45,// 40 PAY   3 

    0xd20c01d9,// 41 PAY   4 

    0x37b70c49,// 42 PAY   5 

    0xa6baf927,// 43 PAY   6 

    0xb74b0b15,// 44 PAY   7 

    0x7ed7f06a,// 45 PAY   8 

    0x104b4a9b,// 46 PAY   9 

    0xd02545ae,// 47 PAY  10 

    0xb3714988,// 48 PAY  11 

    0x39f0e5c9,// 49 PAY  12 

    0xdfe92a59,// 50 PAY  13 

    0x654af32a,// 51 PAY  14 

    0x9674f2f2,// 52 PAY  15 

    0x0393647c,// 53 PAY  16 

    0xb4523744,// 54 PAY  17 

    0x083183d5,// 55 PAY  18 

    0x34e423a4,// 56 PAY  19 

    0x933a3f1f,// 57 PAY  20 

    0xcc402871,// 58 PAY  21 

    0xb7b9c88a,// 59 PAY  22 

    0x3f614c14,// 60 PAY  23 

    0x8408fcb9,// 61 PAY  24 

    0xdb600bb3,// 62 PAY  25 

    0xd3c8bd16,// 63 PAY  26 

    0xe46be464,// 64 PAY  27 

    0xd6ea03d2,// 65 PAY  28 

    0x76b0ef48,// 66 PAY  29 

    0x6ddcc8e2,// 67 PAY  30 

    0x1d2461fe,// 68 PAY  31 

    0x30a97d17,// 69 PAY  32 

    0xfac16eff,// 70 PAY  33 

    0xa90527ff,// 71 PAY  34 

    0x33b7f059,// 72 PAY  35 

    0x11ca82ad,// 73 PAY  36 

    0x1eecf4b3,// 74 PAY  37 

    0x0f86f155,// 75 PAY  38 

    0x7f72a861,// 76 PAY  39 

    0x9a27e3f5,// 77 PAY  40 

    0xdae6e14e,// 78 PAY  41 

    0x4d8508da,// 79 PAY  42 

    0xe4ed2a7a,// 80 PAY  43 

    0x1cf55ec8,// 81 PAY  44 

    0x7fb2b258,// 82 PAY  45 

    0x11ae51e9,// 83 PAY  46 

    0xd0007996,// 84 PAY  47 

    0x02a7a5b9,// 85 PAY  48 

    0xc88e4207,// 86 PAY  49 

    0x3908bbc7,// 87 PAY  50 

    0xc4ca33d6,// 88 PAY  51 

    0x415d6933,// 89 PAY  52 

    0x47f9f655,// 90 PAY  53 

    0xb07bf970,// 91 PAY  54 

    0x4b1cc118,// 92 PAY  55 

    0x8f9d7488,// 93 PAY  56 

    0xc6885a50,// 94 PAY  57 

    0x71a0fc0d,// 95 PAY  58 

    0x4f155524,// 96 PAY  59 

    0x456ceff5,// 97 PAY  60 

    0x939cf0c3,// 98 PAY  61 

    0xaf30c985,// 99 PAY  62 

    0xc95eb642,// 100 PAY  63 

    0xde251884,// 101 PAY  64 

    0x92845f61,// 102 PAY  65 

    0xc35ca720,// 103 PAY  66 

    0x7c9ca7e8,// 104 PAY  67 

    0x1e34917a,// 105 PAY  68 

    0x4e77a3b7,// 106 PAY  69 

    0x62ee2278,// 107 PAY  70 

    0x096b8a69,// 108 PAY  71 

    0xcaa4e8f9,// 109 PAY  72 

    0xb2418186,// 110 PAY  73 

    0xd579b2f1,// 111 PAY  74 

    0x2c31851f,// 112 PAY  75 

    0x12d00c66,// 113 PAY  76 

    0x23319a97,// 114 PAY  77 

    0x7e432b03,// 115 PAY  78 

    0xbe604377,// 116 PAY  79 

    0x7ab510d7,// 117 PAY  80 

    0x3f74d11c,// 118 PAY  81 

    0x0097964c,// 119 PAY  82 

    0xd59da03f,// 120 PAY  83 

    0xe8e4bfa6,// 121 PAY  84 

    0x27b92579,// 122 PAY  85 

    0x018b1ea5,// 123 PAY  86 

    0x06916f8f,// 124 PAY  87 

    0xda537b42,// 125 PAY  88 

    0x28829413,// 126 PAY  89 

    0x33061b83,// 127 PAY  90 

    0xb0e6282a,// 128 PAY  91 

    0x41d0fc28,// 129 PAY  92 

    0x55ea3aff,// 130 PAY  93 

    0x469b0701,// 131 PAY  94 

    0x243b4370,// 132 PAY  95 

    0xbe811ff6,// 133 PAY  96 

    0x4d1d8a95,// 134 PAY  97 

    0x6a662ad9,// 135 PAY  98 

    0x93dd55eb,// 136 PAY  99 

    0x560107d5,// 137 PAY 100 

    0x20995800,// 138 PAY 101 

    0xe4b601fe,// 139 PAY 102 

    0x98175199,// 140 PAY 103 

    0xa4f209a4,// 141 PAY 104 

    0x614e847c,// 142 PAY 105 

    0x2294b9e2,// 143 PAY 106 

    0xb250dfd1,// 144 PAY 107 

    0x8fe2cd49,// 145 PAY 108 

    0xc63c4a90,// 146 PAY 109 

    0x9c5a89d7,// 147 PAY 110 

    0x994b7622,// 148 PAY 111 

    0xa63bac38,// 149 PAY 112 

    0xd9de9334,// 150 PAY 113 

    0xa904c0c3,// 151 PAY 114 

    0x2003ba24,// 152 PAY 115 

    0x72e452b2,// 153 PAY 116 

    0xc7ed71cd,// 154 PAY 117 

    0x3738017a,// 155 PAY 118 

    0x488c39eb,// 156 PAY 119 

    0x37c75334,// 157 PAY 120 

    0xab2f28d2,// 158 PAY 121 

    0x48fb48fb,// 159 PAY 122 

    0xe5e55632,// 160 PAY 123 

    0x82d23804,// 161 PAY 124 

    0xf6d9f558,// 162 PAY 125 

    0x4d02e0c8,// 163 PAY 126 

    0x1d469fd1,// 164 PAY 127 

    0xc472208c,// 165 PAY 128 

    0x132278ca,// 166 PAY 129 

    0xb05166ac,// 167 PAY 130 

    0x2ae0ecc1,// 168 PAY 131 

    0x7bf7ae33,// 169 PAY 132 

    0xa2cf8326,// 170 PAY 133 

    0xdcd7e261,// 171 PAY 134 

    0x242c2df0,// 172 PAY 135 

    0xa3c66e46,// 173 PAY 136 

    0x577e2f0c,// 174 PAY 137 

    0x2fc9c54e,// 175 PAY 138 

    0xf2f4925a,// 176 PAY 139 

    0x3dc8a830,// 177 PAY 140 

    0x16f8c985,// 178 PAY 141 

    0x12fb4d90,// 179 PAY 142 

    0x2adea9fd,// 180 PAY 143 

    0xe5c171d4,// 181 PAY 144 

    0x4ca933e6,// 182 PAY 145 

    0xbb8a729d,// 183 PAY 146 

    0x13346c49,// 184 PAY 147 

    0x16733b6a,// 185 PAY 148 

    0xfd9439c4,// 186 PAY 149 

    0x778cb88a,// 187 PAY 150 

    0x14623871,// 188 PAY 151 

    0x14c0daba,// 189 PAY 152 

    0xb72ef37a,// 190 PAY 153 

    0x24ae7de6,// 191 PAY 154 

    0x00382e34,// 192 PAY 155 

    0x6c475dbe,// 193 PAY 156 

    0xad267448,// 194 PAY 157 

    0x864f6e64,// 195 PAY 158 

    0x4938f51d,// 196 PAY 159 

    0x8951f9d9,// 197 PAY 160 

    0x08c36268,// 198 PAY 161 

    0x4d96ec72,// 199 PAY 162 

    0xa7fd8e54,// 200 PAY 163 

    0x38e0c1c7,// 201 PAY 164 

    0xa00af3a7,// 202 PAY 165 

    0x2254febf,// 203 PAY 166 

    0x72267066,// 204 PAY 167 

    0x53d29d78,// 205 PAY 168 

    0x3b228e73,// 206 PAY 169 

    0xdcccc8c5,// 207 PAY 170 

    0x9c3b3cd3,// 208 PAY 171 

    0xd0214db1,// 209 PAY 172 

    0x11994723,// 210 PAY 173 

    0x5bd3b5d6,// 211 PAY 174 

    0x3ec8b269,// 212 PAY 175 

    0xcbe16cda,// 213 PAY 176 

    0x4aa07623,// 214 PAY 177 

    0xcd4682fc,// 215 PAY 178 

    0x14721f55,// 216 PAY 179 

    0x61bbfb88,// 217 PAY 180 

    0x298c97e7,// 218 PAY 181 

    0xc2bb8a0b,// 219 PAY 182 

    0xb0986a58,// 220 PAY 183 

    0x422145f2,// 221 PAY 184 

    0x4433c358,// 222 PAY 185 

    0x1bcce3d5,// 223 PAY 186 

    0xefa74849,// 224 PAY 187 

    0xb323ed99,// 225 PAY 188 

    0x8d4ed436,// 226 PAY 189 

    0xbba06e5a,// 227 PAY 190 

    0x5095a905,// 228 PAY 191 

    0xb70933bf,// 229 PAY 192 

    0x95769f55,// 230 PAY 193 

    0x616f2a6c,// 231 PAY 194 

    0xd126e7c1,// 232 PAY 195 

    0x0d765613,// 233 PAY 196 

    0xd841d656,// 234 PAY 197 

    0xc69e6493,// 235 PAY 198 

    0xd82ab1e7,// 236 PAY 199 

    0x171bf26e,// 237 PAY 200 

    0x0c5343c2,// 238 PAY 201 

    0x961d6922,// 239 PAY 202 

    0x0e337775,// 240 PAY 203 

    0x91c925b0,// 241 PAY 204 

    0x438e3f0c,// 242 PAY 205 

    0x898d05fb,// 243 PAY 206 

    0xafcfa163,// 244 PAY 207 

    0x08b6bcc2,// 245 PAY 208 

    0xbb1fbcdd,// 246 PAY 209 

    0xe344e902,// 247 PAY 210 

    0xe6b704dc,// 248 PAY 211 

    0x0e30aa13,// 249 PAY 212 

    0x542bb53f,// 250 PAY 213 

    0x1f874acc,// 251 PAY 214 

    0x98089caf,// 252 PAY 215 

    0x8ae6f424,// 253 PAY 216 

    0x2b3ad38f,// 254 PAY 217 

    0x8fd07439,// 255 PAY 218 

    0x91a4b6b5,// 256 PAY 219 

    0x46490b9b,// 257 PAY 220 

    0x6710e2d1,// 258 PAY 221 

    0x2b1203a7,// 259 PAY 222 

    0xeecf633a,// 260 PAY 223 

    0xfac1311a,// 261 PAY 224 

    0x03e452a4,// 262 PAY 225 

    0x6311561b,// 263 PAY 226 

    0x3f3aa77e,// 264 PAY 227 

    0xc09be41d,// 265 PAY 228 

    0x4e77992a,// 266 PAY 229 

    0x8ecde911,// 267 PAY 230 

    0x60be04b1,// 268 PAY 231 

    0xe2bd31a0,// 269 PAY 232 

    0x1c87e278,// 270 PAY 233 

    0xcfa6e3b9,// 271 PAY 234 

    0x7bc8bc72,// 272 PAY 235 

    0x0e038cc9,// 273 PAY 236 

    0x9294ca67,// 274 PAY 237 

    0x25419164,// 275 PAY 238 

    0x89babc96,// 276 PAY 239 

    0x20e662bf,// 277 PAY 240 

    0xfd79d9ab,// 278 PAY 241 

    0x8628c252,// 279 PAY 242 

    0x20916bf9,// 280 PAY 243 

    0xfe274369,// 281 PAY 244 

    0x2ad1dd1f,// 282 PAY 245 

    0x6178d11f,// 283 PAY 246 

    0x0b6d479f,// 284 PAY 247 

    0x312e92f3,// 285 PAY 248 

    0x90124922,// 286 PAY 249 

    0xbaf82b70,// 287 PAY 250 

    0xbfb14f64,// 288 PAY 251 

    0xc3eaf093,// 289 PAY 252 

    0x2e399875,// 290 PAY 253 

    0xd876feab,// 291 PAY 254 

    0xce4c79bd,// 292 PAY 255 

    0x6f503e4d,// 293 PAY 256 

    0x564b7b24,// 294 PAY 257 

    0x0baa53ce,// 295 PAY 258 

    0xadad0818,// 296 PAY 259 

    0x3b01feeb,// 297 PAY 260 

    0x1d0192b5,// 298 PAY 261 

    0xa10c6f49,// 299 PAY 262 

    0x3a67d05f,// 300 PAY 263 

    0x65b62b43,// 301 PAY 264 

    0xdebf5738,// 302 PAY 265 

    0x9e5285c5,// 303 PAY 266 

    0x73eb350d,// 304 PAY 267 

    0x33d5ae71,// 305 PAY 268 

    0x62d489eb,// 306 PAY 269 

    0xe873bb5b,// 307 PAY 270 

    0x8d84ba27,// 308 PAY 271 

    0xe72beab2,// 309 PAY 272 

    0xfd3fe1a6,// 310 PAY 273 

    0x63ffab63,// 311 PAY 274 

    0xc9fbca15,// 312 PAY 275 

    0x4d248eec,// 313 PAY 276 

    0xa9319df3,// 314 PAY 277 

    0x26b6b359,// 315 PAY 278 

    0xdefe6e9f,// 316 PAY 279 

    0x0fc344c4,// 317 PAY 280 

    0xefcb1f17,// 318 PAY 281 

    0x37d976ae,// 319 PAY 282 

    0xbf1bd335,// 320 PAY 283 

    0x24fb2e1c,// 321 PAY 284 

    0xc420993c,// 322 PAY 285 

    0x73421364,// 323 PAY 286 

    0xe5c4cbe2,// 324 PAY 287 

    0x5d448a3f,// 325 PAY 288 

    0xea48a347,// 326 PAY 289 

    0xee5f7557,// 327 PAY 290 

    0x859dc015,// 328 PAY 291 

    0x3c3701e0,// 329 PAY 292 

    0xa75ee144,// 330 PAY 293 

    0xfec1666f,// 331 PAY 294 

    0x8c97e0cb,// 332 PAY 295 

    0x41f179f3,// 333 PAY 296 

    0x31a3f847,// 334 PAY 297 

    0x81ac6f55,// 335 PAY 298 

    0xf66936b5,// 336 PAY 299 

    0xc9f11a37,// 337 PAY 300 

    0xe476ff76,// 338 PAY 301 

    0x5de2fd1d,// 339 PAY 302 

    0x9200cfd4,// 340 PAY 303 

    0x470cdc1a,// 341 PAY 304 

    0x96cd4e84,// 342 PAY 305 

    0x8b0dba15,// 343 PAY 306 

    0x9dab3a58,// 344 PAY 307 

    0x10fd2c0d,// 345 PAY 308 

    0xb1af086e,// 346 PAY 309 

    0xb5ac9d08,// 347 PAY 310 

    0x338e5229,// 348 PAY 311 

    0xc8a95715,// 349 PAY 312 

    0xc70bb72e,// 350 PAY 313 

    0x6137a0e5,// 351 PAY 314 

    0xf1d76e3f,// 352 PAY 315 

    0x3ff384d1,// 353 PAY 316 

    0xc4282a86,// 354 PAY 317 

    0xfa97a66e,// 355 PAY 318 

    0xc9e4d52f,// 356 PAY 319 

    0xcde2c7d6,// 357 PAY 320 

    0x3825aee1,// 358 PAY 321 

    0x44d8653c,// 359 PAY 322 

    0xcaaffb51,// 360 PAY 323 

    0x6d22e808,// 361 PAY 324 

    0x9937a653,// 362 PAY 325 

    0x8f259508,// 363 PAY 326 

    0xe4fb6351,// 364 PAY 327 

    0xbf9e05da,// 365 PAY 328 

    0x0f56a1ea,// 366 PAY 329 

    0x519ecc08,// 367 PAY 330 

    0x7906adea,// 368 PAY 331 

    0x3d12bc70,// 369 PAY 332 

    0xca58886d,// 370 PAY 333 

    0x36bd466c,// 371 PAY 334 

    0xea6842c8,// 372 PAY 335 

    0x23abb37c,// 373 PAY 336 

    0x83710f02,// 374 PAY 337 

    0xde8f91b8,// 375 PAY 338 

    0xae1f2391,// 376 PAY 339 

    0x8cb028b8,// 377 PAY 340 

    0xcbcfaca3,// 378 PAY 341 

    0x5902577d,// 379 PAY 342 

    0x1c200432,// 380 PAY 343 

    0x5a35d67c,// 381 PAY 344 

    0x2de067fe,// 382 PAY 345 

    0x963efeb6,// 383 PAY 346 

    0x5a491443,// 384 PAY 347 

    0x4ee22746,// 385 PAY 348 

    0xf12563be,// 386 PAY 349 

    0x5f21d50e,// 387 PAY 350 

    0x1a83697a,// 388 PAY 351 

    0x71772c43,// 389 PAY 352 

    0x222dac4e,// 390 PAY 353 

    0x29245153,// 391 PAY 354 

    0xdb27cec1,// 392 PAY 355 

    0x49fffd90,// 393 PAY 356 

    0x78581178,// 394 PAY 357 

    0x4470650e,// 395 PAY 358 

    0x031481f0,// 396 PAY 359 

    0x1952c600,// 397 PAY 360 

    0xa59181ba,// 398 PAY 361 

    0x7d280840,// 399 PAY 362 

    0x7396fef7,// 400 PAY 363 

    0xfaca1bc6,// 401 PAY 364 

    0x80ff6115,// 402 PAY 365 

    0xfb901800,// 403 PAY 366 

/// STA is 1 words. 

/// STA num_pkts       : 28 

/// STA pkt_idx        : 43 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x6e 

    0x00ac6e1c // 404 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt30_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x03 

/// ECH pdu_tag        : 0x00 

    0x00030000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x8042283e,// 4 SCX   2 

    0x00005100,// 5 SCX   3 

    0xf1164af3,// 6 SCX   4 

    0xeac5db3c,// 7 SCX   5 

    0xbe39f96e,// 8 SCX   6 

    0xe65017a5,// 9 SCX   7 

    0xbc0c8951,// 10 SCX   8 

    0xa09b5ba0,// 11 SCX   9 

    0x7c7d20df,// 12 SCX  10 

    0xab729544,// 13 SCX  11 

    0xd5cc2c6e,// 14 SCX  12 

    0x303ef685,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 542 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 206 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 206 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 84 

/// BFD (ofst+len)cry  : 100 

/// BFD ofstiv         : 28 

/// BFD ofsticv        : 460 

    0x000000ce,// 16 BFD   1 

    0x00540010,// 17 BFD   2 

    0x01cc001c,// 18 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : b 

    0x0b00e957,// 19 MFM   1 

    0x32070530,// 20 MFM   2 

/// BDA is 137 words. 

/// BDA size     is 542 (0x21e) 

/// BDA id       is 0x15c 

    0x021e015c,// 21 BDA   1 

/// PAY Generic Data size   : 542 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xd2ceba4a,// 22 PAY   1 

    0xdd45d0a8,// 23 PAY   2 

    0x3ab5efa3,// 24 PAY   3 

    0x00b79393,// 25 PAY   4 

    0x2978ea9a,// 26 PAY   5 

    0xdb5d39e2,// 27 PAY   6 

    0x602e43bc,// 28 PAY   7 

    0x36e14a0e,// 29 PAY   8 

    0x3af18044,// 30 PAY   9 

    0x028efb78,// 31 PAY  10 

    0x1603eb35,// 32 PAY  11 

    0x0ceb9214,// 33 PAY  12 

    0x50705bad,// 34 PAY  13 

    0xd38244a4,// 35 PAY  14 

    0x12a1e0ef,// 36 PAY  15 

    0x84fa8a69,// 37 PAY  16 

    0xbd5af0a6,// 38 PAY  17 

    0x64535df4,// 39 PAY  18 

    0x8cae1410,// 40 PAY  19 

    0x8a8d5a7c,// 41 PAY  20 

    0x776df535,// 42 PAY  21 

    0xdc158c4f,// 43 PAY  22 

    0x41db1e05,// 44 PAY  23 

    0x8fd24202,// 45 PAY  24 

    0x645efdc5,// 46 PAY  25 

    0x314a1492,// 47 PAY  26 

    0x2c00f38a,// 48 PAY  27 

    0x16a96fbf,// 49 PAY  28 

    0xed418395,// 50 PAY  29 

    0x1211d079,// 51 PAY  30 

    0x5bb441db,// 52 PAY  31 

    0xbd3cd183,// 53 PAY  32 

    0x8c4be505,// 54 PAY  33 

    0x5da33c7f,// 55 PAY  34 

    0x220c7b9f,// 56 PAY  35 

    0xeab0587a,// 57 PAY  36 

    0x448178a3,// 58 PAY  37 

    0xddb1f7cc,// 59 PAY  38 

    0x953e51e5,// 60 PAY  39 

    0xb8813fe8,// 61 PAY  40 

    0x3069ad6c,// 62 PAY  41 

    0x32ac74fe,// 63 PAY  42 

    0x659c8d07,// 64 PAY  43 

    0x1fb86ff7,// 65 PAY  44 

    0x5bed8df3,// 66 PAY  45 

    0x9c869d15,// 67 PAY  46 

    0x3a2bcea4,// 68 PAY  47 

    0xb9bf262c,// 69 PAY  48 

    0x72d3626f,// 70 PAY  49 

    0x38acc4cc,// 71 PAY  50 

    0xe02ceb22,// 72 PAY  51 

    0xb4c356ca,// 73 PAY  52 

    0xe1bfa310,// 74 PAY  53 

    0x312665ac,// 75 PAY  54 

    0xcfd1cf40,// 76 PAY  55 

    0x8685231a,// 77 PAY  56 

    0x2dae3dd3,// 78 PAY  57 

    0x9dcda84f,// 79 PAY  58 

    0xbdc83a90,// 80 PAY  59 

    0x74a77dc2,// 81 PAY  60 

    0x69c51ae4,// 82 PAY  61 

    0xcbed9743,// 83 PAY  62 

    0x2ef1ad4d,// 84 PAY  63 

    0xbecd01c9,// 85 PAY  64 

    0x5b15d28c,// 86 PAY  65 

    0x437606aa,// 87 PAY  66 

    0xad52e28a,// 88 PAY  67 

    0x68fecd51,// 89 PAY  68 

    0xbebe1aee,// 90 PAY  69 

    0x75c0cef3,// 91 PAY  70 

    0xe264427c,// 92 PAY  71 

    0x46eed095,// 93 PAY  72 

    0x66db09f6,// 94 PAY  73 

    0x56385851,// 95 PAY  74 

    0xd22f9f61,// 96 PAY  75 

    0x8a4ac323,// 97 PAY  76 

    0x7665aded,// 98 PAY  77 

    0x9fbfd3aa,// 99 PAY  78 

    0x84a84f36,// 100 PAY  79 

    0x48fc195c,// 101 PAY  80 

    0x90411d14,// 102 PAY  81 

    0x06526bc2,// 103 PAY  82 

    0x6462a488,// 104 PAY  83 

    0x1b504883,// 105 PAY  84 

    0x613b2680,// 106 PAY  85 

    0x0d571876,// 107 PAY  86 

    0x3dce694e,// 108 PAY  87 

    0xd185b54e,// 109 PAY  88 

    0x61ecfcf2,// 110 PAY  89 

    0xa0b9ef5a,// 111 PAY  90 

    0xcbaee0b7,// 112 PAY  91 

    0x6345bf0b,// 113 PAY  92 

    0xc7d42e9b,// 114 PAY  93 

    0xfe687fba,// 115 PAY  94 

    0xc78eeae2,// 116 PAY  95 

    0x78a49853,// 117 PAY  96 

    0x7e152387,// 118 PAY  97 

    0x0e4947ed,// 119 PAY  98 

    0x26e2da49,// 120 PAY  99 

    0x730cfe45,// 121 PAY 100 

    0xc0ff756f,// 122 PAY 101 

    0xda5188b8,// 123 PAY 102 

    0xce1d16cf,// 124 PAY 103 

    0xbd4c5857,// 125 PAY 104 

    0x9e237104,// 126 PAY 105 

    0x78113c41,// 127 PAY 106 

    0xc08da435,// 128 PAY 107 

    0xca4c81d4,// 129 PAY 108 

    0x6969d434,// 130 PAY 109 

    0x74b4a269,// 131 PAY 110 

    0x82c76e4d,// 132 PAY 111 

    0xa85e776f,// 133 PAY 112 

    0xef04a495,// 134 PAY 113 

    0x8a77163f,// 135 PAY 114 

    0x2e0614ef,// 136 PAY 115 

    0x83ea180e,// 137 PAY 116 

    0x96babb57,// 138 PAY 117 

    0x5b007cdd,// 139 PAY 118 

    0x82e548d3,// 140 PAY 119 

    0xb6a2d438,// 141 PAY 120 

    0xe04b5cc7,// 142 PAY 121 

    0x9687cea4,// 143 PAY 122 

    0x184eff9e,// 144 PAY 123 

    0xb5e58791,// 145 PAY 124 

    0xac5f05b8,// 146 PAY 125 

    0x1d173a6c,// 147 PAY 126 

    0x8254f645,// 148 PAY 127 

    0x65c293c2,// 149 PAY 128 

    0x5d7c314b,// 150 PAY 129 

    0x3f437bea,// 151 PAY 130 

    0x6b0bbcc4,// 152 PAY 131 

    0x694155a7,// 153 PAY 132 

    0x5b8dc653,// 154 PAY 133 

    0x7966a7c0,// 155 PAY 134 

    0x863f1b43,// 156 PAY 135 

    0xb86f0000,// 157 PAY 136 

/// STA is 1 words. 

/// STA num_pkts       : 6 

/// STA pkt_idx        : 105 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x53 

    0x01a55306 // 158 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt31_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0000000f,// 3 SCX   1 

    0x80452870,// 4 SCX   2 

    0x000061c2,// 5 SCX   3 

    0xa2c93d46,// 6 SCX   4 

    0x461a0a91,// 7 SCX   5 

    0x965bc7b0,// 8 SCX   6 

    0xf936a766,// 9 SCX   7 

    0x414ab14f,// 10 SCX   8 

    0x48ac1645,// 11 SCX   9 

    0x300104e8,// 12 SCX  10 

    0x3d2d60a4,// 13 SCX  11 

    0xa1d01263,// 14 SCX  12 

    0x4d5c304e,// 15 SCX  13 

    0xa27b4bf0,// 16 SCX  14 

    0x2f913d52,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 217 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 127 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 127 

/// BFD lencrypto      : 40 

/// BFD ofstcrypto     : 36 

/// BFD (ofst+len)cry  : 76 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 200 

    0x0000007f,// 18 BFD   1 

    0x00240028,// 19 BFD   2 

    0x00c80004,// 20 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 4 

    0x0400e6af,// 21 MFM   1 

/// BDA is 56 words. 

/// BDA size     is 217 (0xd9) 

/// BDA id       is 0x2b67 

    0x00d92b67,// 22 BDA   1 

/// PAY Generic Data size   : 217 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x7c6e9ecc,// 23 PAY   1 

    0x0975d10e,// 24 PAY   2 

    0x05f00124,// 25 PAY   3 

    0x3dce1cc1,// 26 PAY   4 

    0xfc80c47f,// 27 PAY   5 

    0x173b72f4,// 28 PAY   6 

    0x6b1bfe98,// 29 PAY   7 

    0xa33d18c7,// 30 PAY   8 

    0x57d2d0a4,// 31 PAY   9 

    0x152aa8fa,// 32 PAY  10 

    0xf22e0550,// 33 PAY  11 

    0xa751a062,// 34 PAY  12 

    0xb82eb853,// 35 PAY  13 

    0xe7b79dff,// 36 PAY  14 

    0x34f85051,// 37 PAY  15 

    0x495b5e6e,// 38 PAY  16 

    0x16a33903,// 39 PAY  17 

    0x1387abfc,// 40 PAY  18 

    0x803c990c,// 41 PAY  19 

    0x2dad3a64,// 42 PAY  20 

    0x2f8073d6,// 43 PAY  21 

    0xb8b21c78,// 44 PAY  22 

    0x800bd08c,// 45 PAY  23 

    0x51e4f908,// 46 PAY  24 

    0x7765c2da,// 47 PAY  25 

    0x99b2b11a,// 48 PAY  26 

    0xd5cbb4b1,// 49 PAY  27 

    0x6c7e95cc,// 50 PAY  28 

    0x4e2c2c60,// 51 PAY  29 

    0xcf802244,// 52 PAY  30 

    0x5a817dbf,// 53 PAY  31 

    0xb0ee223f,// 54 PAY  32 

    0xcf53851b,// 55 PAY  33 

    0x00aaa4e6,// 56 PAY  34 

    0x6d332eb6,// 57 PAY  35 

    0x9f53cb6f,// 58 PAY  36 

    0x8817581c,// 59 PAY  37 

    0x13309474,// 60 PAY  38 

    0xc778e06b,// 61 PAY  39 

    0x47d71c26,// 62 PAY  40 

    0xb797ce4f,// 63 PAY  41 

    0x32c75569,// 64 PAY  42 

    0xc16eac66,// 65 PAY  43 

    0xccd825e6,// 66 PAY  44 

    0xcb435f09,// 67 PAY  45 

    0xf622e233,// 68 PAY  46 

    0x56a0f6cb,// 69 PAY  47 

    0x9db25123,// 70 PAY  48 

    0xf9925efd,// 71 PAY  49 

    0x03ceb460,// 72 PAY  50 

    0x17d141d3,// 73 PAY  51 

    0x5b6568eb,// 74 PAY  52 

    0xaca34ae7,// 75 PAY  53 

    0xefae466a,// 76 PAY  54 

    0xc8000000,// 77 PAY  55 

/// STA is 1 words. 

/// STA num_pkts       : 179 

/// STA pkt_idx        : 154 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb8 

    0x0269b8b3 // 78 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt32_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x804528f5,// 4 SCX   2 

    0x000042c2,// 5 SCX   3 

    0x45755211,// 6 SCX   4 

    0xc8d42ec6,// 7 SCX   5 

    0xcbbed1b9,// 8 SCX   6 

    0xd1668e25,// 9 SCX   7 

    0x824765a2,// 10 SCX   8 

    0x42ca4286,// 11 SCX   9 

    0xf0e607c4,// 12 SCX  10 

    0x248eabac,// 13 SCX  11 

    0xaf56675e,// 14 SCX  12 

    0xcefdfa57,// 15 SCX  13 

    0x3d584de7,// 16 SCX  14 

    0x7cbea924,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1180 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 288 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 288 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 276 

/// BFD (ofst+len)cry  : 284 

/// BFD ofstiv         : 128 

/// BFD ofsticv        : 352 

    0x00000120,// 18 BFD   1 

    0x01140008,// 19 BFD   2 

    0x01600080,// 20 BFD   3 

/// MFM is 6 words. 

/// MFM vldnibs        : 28 

    0x2800d012,// 21 MFM   1 

    0x4f962e05,// 22 MFM   2 

    0x8fe6fb00,// 23 MFM   3 

    0x0c4766ac,// 24 MFM   4 

    0x60577e11,// 25 MFM   5 

    0x2c830000,// 26 MFM   6 

/// BDA is 296 words. 

/// BDA size     is 1180 (0x49c) 

/// BDA id       is 0x1659 

    0x049c1659,// 27 BDA   1 

/// PAY Generic Data size   : 1180 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x0981550a,// 28 PAY   1 

    0x97d28bfb,// 29 PAY   2 

    0x5421b0ba,// 30 PAY   3 

    0x9a985b00,// 31 PAY   4 

    0x92b6f676,// 32 PAY   5 

    0x7d201e87,// 33 PAY   6 

    0x68d94a9c,// 34 PAY   7 

    0x6a482faf,// 35 PAY   8 

    0xe7a04a31,// 36 PAY   9 

    0x7f60d6ac,// 37 PAY  10 

    0x7e58a854,// 38 PAY  11 

    0xf47e6927,// 39 PAY  12 

    0x55850a40,// 40 PAY  13 

    0xf911e6b2,// 41 PAY  14 

    0x7ceda1f2,// 42 PAY  15 

    0x83df8bad,// 43 PAY  16 

    0xe09eaeac,// 44 PAY  17 

    0x14fcc4b9,// 45 PAY  18 

    0xdb5d68ed,// 46 PAY  19 

    0x457270a5,// 47 PAY  20 

    0x289543cc,// 48 PAY  21 

    0xf0d68512,// 49 PAY  22 

    0xf8d70f96,// 50 PAY  23 

    0xcc0f7d53,// 51 PAY  24 

    0x4c42c4e0,// 52 PAY  25 

    0x68709158,// 53 PAY  26 

    0xa7faaa6f,// 54 PAY  27 

    0xe3e11682,// 55 PAY  28 

    0x6ce6f122,// 56 PAY  29 

    0x5fe448df,// 57 PAY  30 

    0x2ed558f0,// 58 PAY  31 

    0x1c582ac9,// 59 PAY  32 

    0x9b26337d,// 60 PAY  33 

    0x7ca6877c,// 61 PAY  34 

    0xeb519d8a,// 62 PAY  35 

    0xa98a6dcd,// 63 PAY  36 

    0x44546879,// 64 PAY  37 

    0x2b853595,// 65 PAY  38 

    0x62363c2d,// 66 PAY  39 

    0x662997dc,// 67 PAY  40 

    0x5d04c0bb,// 68 PAY  41 

    0xd15e1838,// 69 PAY  42 

    0xac2c6067,// 70 PAY  43 

    0xc860719a,// 71 PAY  44 

    0x94436586,// 72 PAY  45 

    0xe11eab69,// 73 PAY  46 

    0xa1736c83,// 74 PAY  47 

    0x6f543f8e,// 75 PAY  48 

    0xfe3b06b7,// 76 PAY  49 

    0x2753ccc9,// 77 PAY  50 

    0x1ed6260b,// 78 PAY  51 

    0xf3a059dd,// 79 PAY  52 

    0xbc51a405,// 80 PAY  53 

    0x316affc2,// 81 PAY  54 

    0x2d777d49,// 82 PAY  55 

    0x20219c21,// 83 PAY  56 

    0x8e48a16e,// 84 PAY  57 

    0xb8a1f739,// 85 PAY  58 

    0x63cfd480,// 86 PAY  59 

    0x2afdb21b,// 87 PAY  60 

    0x52770be1,// 88 PAY  61 

    0x55fe5403,// 89 PAY  62 

    0xf790fda9,// 90 PAY  63 

    0xc74d3b2d,// 91 PAY  64 

    0x5c6f829a,// 92 PAY  65 

    0x64eb4c61,// 93 PAY  66 

    0x1d0f38b5,// 94 PAY  67 

    0x7ab0523c,// 95 PAY  68 

    0xd4143530,// 96 PAY  69 

    0xb6fd4a76,// 97 PAY  70 

    0x66eab702,// 98 PAY  71 

    0xb139b0c1,// 99 PAY  72 

    0x70f1eb90,// 100 PAY  73 

    0x9956d31b,// 101 PAY  74 

    0x20e48e35,// 102 PAY  75 

    0xbb65d496,// 103 PAY  76 

    0x2f855c44,// 104 PAY  77 

    0x30f9e957,// 105 PAY  78 

    0x64c70319,// 106 PAY  79 

    0x9d309894,// 107 PAY  80 

    0x793fcd17,// 108 PAY  81 

    0x479b7857,// 109 PAY  82 

    0x9e6454e4,// 110 PAY  83 

    0x4bd08c98,// 111 PAY  84 

    0xee3d5558,// 112 PAY  85 

    0xc5e7058a,// 113 PAY  86 

    0x59d8425e,// 114 PAY  87 

    0x314ef0f5,// 115 PAY  88 

    0x04854337,// 116 PAY  89 

    0xb6c04c0e,// 117 PAY  90 

    0x1158b5f6,// 118 PAY  91 

    0x9f4ad3f3,// 119 PAY  92 

    0x0592ad47,// 120 PAY  93 

    0x2540efee,// 121 PAY  94 

    0xbcb17a77,// 122 PAY  95 

    0x70fcc651,// 123 PAY  96 

    0x0946df42,// 124 PAY  97 

    0xb828a4d5,// 125 PAY  98 

    0xa94cc6b6,// 126 PAY  99 

    0xb5f2eaaa,// 127 PAY 100 

    0xeea47f98,// 128 PAY 101 

    0x1864447c,// 129 PAY 102 

    0x6c52202a,// 130 PAY 103 

    0xfa9774f1,// 131 PAY 104 

    0x306c6a6e,// 132 PAY 105 

    0x1d5c23c6,// 133 PAY 106 

    0x1b979186,// 134 PAY 107 

    0xf6af1ef0,// 135 PAY 108 

    0xfd839aa4,// 136 PAY 109 

    0xaf8c03b0,// 137 PAY 110 

    0xd66e3f74,// 138 PAY 111 

    0x59d96b20,// 139 PAY 112 

    0x8c815dae,// 140 PAY 113 

    0xb652bd56,// 141 PAY 114 

    0xace4fb2c,// 142 PAY 115 

    0xaf92bdab,// 143 PAY 116 

    0x92949cd8,// 144 PAY 117 

    0xffe5b3d6,// 145 PAY 118 

    0xc81fdba3,// 146 PAY 119 

    0xa72fef16,// 147 PAY 120 

    0x301a2011,// 148 PAY 121 

    0xdf157854,// 149 PAY 122 

    0x72f7c331,// 150 PAY 123 

    0xc220ff8a,// 151 PAY 124 

    0xc0f9d67e,// 152 PAY 125 

    0xd572ce5f,// 153 PAY 126 

    0x8b22933d,// 154 PAY 127 

    0x8c930082,// 155 PAY 128 

    0xbcaa9a51,// 156 PAY 129 

    0x31859a70,// 157 PAY 130 

    0x6eaf6b87,// 158 PAY 131 

    0x73ab0652,// 159 PAY 132 

    0xce0eb0ba,// 160 PAY 133 

    0x5b3f81fb,// 161 PAY 134 

    0x5b3d3c77,// 162 PAY 135 

    0xbe206c8a,// 163 PAY 136 

    0x9392fe18,// 164 PAY 137 

    0xbdd66538,// 165 PAY 138 

    0xb3a50421,// 166 PAY 139 

    0xadb34218,// 167 PAY 140 

    0x82947629,// 168 PAY 141 

    0xa2a58b03,// 169 PAY 142 

    0x9f86a174,// 170 PAY 143 

    0xff7e249d,// 171 PAY 144 

    0x5bca5076,// 172 PAY 145 

    0x8acc21ce,// 173 PAY 146 

    0xe246c692,// 174 PAY 147 

    0x3cb04808,// 175 PAY 148 

    0xb27b474e,// 176 PAY 149 

    0xd10e2c71,// 177 PAY 150 

    0x2b963a6f,// 178 PAY 151 

    0xbeb985e1,// 179 PAY 152 

    0x667b76ca,// 180 PAY 153 

    0x952a090c,// 181 PAY 154 

    0x88b44bcc,// 182 PAY 155 

    0x6a705571,// 183 PAY 156 

    0x0b2b27df,// 184 PAY 157 

    0xcacfad69,// 185 PAY 158 

    0xda9fb245,// 186 PAY 159 

    0x14fa8cd8,// 187 PAY 160 

    0x39927342,// 188 PAY 161 

    0x0f054867,// 189 PAY 162 

    0x79b9e119,// 190 PAY 163 

    0x4cd66fd6,// 191 PAY 164 

    0x11839461,// 192 PAY 165 

    0xe480b3c4,// 193 PAY 166 

    0x2f792723,// 194 PAY 167 

    0x9f478d4d,// 195 PAY 168 

    0x24770dff,// 196 PAY 169 

    0xeb37641b,// 197 PAY 170 

    0xca0326e9,// 198 PAY 171 

    0x096113ca,// 199 PAY 172 

    0x046aa317,// 200 PAY 173 

    0x16714986,// 201 PAY 174 

    0x9eb79df3,// 202 PAY 175 

    0x351a163a,// 203 PAY 176 

    0x4fca6f16,// 204 PAY 177 

    0x76381202,// 205 PAY 178 

    0xf59a1712,// 206 PAY 179 

    0x48184c41,// 207 PAY 180 

    0x7c8736a0,// 208 PAY 181 

    0x2122c969,// 209 PAY 182 

    0xe46132fd,// 210 PAY 183 

    0xa9f7b8b4,// 211 PAY 184 

    0xfffb6202,// 212 PAY 185 

    0x5b81096d,// 213 PAY 186 

    0x5e9aae75,// 214 PAY 187 

    0x904cfefb,// 215 PAY 188 

    0x4a85e84f,// 216 PAY 189 

    0xd90c31af,// 217 PAY 190 

    0x7d59eca0,// 218 PAY 191 

    0x1af9bb89,// 219 PAY 192 

    0xa4901c73,// 220 PAY 193 

    0x59838242,// 221 PAY 194 

    0xe984f97f,// 222 PAY 195 

    0x79c39adb,// 223 PAY 196 

    0x5ce6f846,// 224 PAY 197 

    0x2229b824,// 225 PAY 198 

    0xa34dab44,// 226 PAY 199 

    0x8bdd32e6,// 227 PAY 200 

    0x4083171a,// 228 PAY 201 

    0x8ce54246,// 229 PAY 202 

    0x39fc4077,// 230 PAY 203 

    0x4957fd95,// 231 PAY 204 

    0x54960afe,// 232 PAY 205 

    0x9c200f7a,// 233 PAY 206 

    0x00f04868,// 234 PAY 207 

    0x1c0ee7c8,// 235 PAY 208 

    0xa83efb9d,// 236 PAY 209 

    0xed8322d9,// 237 PAY 210 

    0x8b601365,// 238 PAY 211 

    0x282e85d9,// 239 PAY 212 

    0x9589278a,// 240 PAY 213 

    0x297701ec,// 241 PAY 214 

    0xcc25c0e4,// 242 PAY 215 

    0xbc7ab40d,// 243 PAY 216 

    0x8273a98e,// 244 PAY 217 

    0xa55f6ee4,// 245 PAY 218 

    0x9f9d3563,// 246 PAY 219 

    0x6fc4c702,// 247 PAY 220 

    0x11eb9d7b,// 248 PAY 221 

    0xfe7b8d90,// 249 PAY 222 

    0xe5ba815f,// 250 PAY 223 

    0x1e490633,// 251 PAY 224 

    0x19b7b733,// 252 PAY 225 

    0xd6c43348,// 253 PAY 226 

    0x8da1a1a9,// 254 PAY 227 

    0x17d55d71,// 255 PAY 228 

    0x1cf9753c,// 256 PAY 229 

    0x4ab2bba2,// 257 PAY 230 

    0xb9aecef0,// 258 PAY 231 

    0x089c6abe,// 259 PAY 232 

    0xfe07dfe1,// 260 PAY 233 

    0x3b9eb742,// 261 PAY 234 

    0xfb9ef00b,// 262 PAY 235 

    0x6b31548a,// 263 PAY 236 

    0x7e576bf3,// 264 PAY 237 

    0x190728bb,// 265 PAY 238 

    0x9ab4f73c,// 266 PAY 239 

    0x8a3a4aae,// 267 PAY 240 

    0x32519a85,// 268 PAY 241 

    0x5ec8d2d1,// 269 PAY 242 

    0x6e3cc4f9,// 270 PAY 243 

    0x9fc1c1b4,// 271 PAY 244 

    0xbf1e6964,// 272 PAY 245 

    0x46e629f5,// 273 PAY 246 

    0xe318d596,// 274 PAY 247 

    0xaafc62b3,// 275 PAY 248 

    0xb7ea6b44,// 276 PAY 249 

    0x107d8ea5,// 277 PAY 250 

    0x3ec3e886,// 278 PAY 251 

    0x7a81af13,// 279 PAY 252 

    0x76b195ea,// 280 PAY 253 

    0x39cdc935,// 281 PAY 254 

    0xda6b6144,// 282 PAY 255 

    0x0465f66a,// 283 PAY 256 

    0x4954bbd2,// 284 PAY 257 

    0x4a691c43,// 285 PAY 258 

    0xc1a65885,// 286 PAY 259 

    0xe0ffa591,// 287 PAY 260 

    0xfc96f0e2,// 288 PAY 261 

    0xef1a29f0,// 289 PAY 262 

    0x743ab6ee,// 290 PAY 263 

    0xfd84f9a7,// 291 PAY 264 

    0xb7cd35e4,// 292 PAY 265 

    0x0b0e91a6,// 293 PAY 266 

    0x00ac369f,// 294 PAY 267 

    0x3b28f1cf,// 295 PAY 268 

    0x3b47c8a8,// 296 PAY 269 

    0x889110e2,// 297 PAY 270 

    0xcbda37ab,// 298 PAY 271 

    0xf5b1f0d0,// 299 PAY 272 

    0x6badef20,// 300 PAY 273 

    0x2886f89a,// 301 PAY 274 

    0xa5221ecc,// 302 PAY 275 

    0xaed93499,// 303 PAY 276 

    0x8c380e4b,// 304 PAY 277 

    0x076e5b06,// 305 PAY 278 

    0xf4cba67d,// 306 PAY 279 

    0xb84cd1cc,// 307 PAY 280 

    0xa118ca56,// 308 PAY 281 

    0x7a5ac668,// 309 PAY 282 

    0x6087176e,// 310 PAY 283 

    0xb5d52a78,// 311 PAY 284 

    0x24fb1116,// 312 PAY 285 

    0x83edeb4a,// 313 PAY 286 

    0xf85eaa16,// 314 PAY 287 

    0x440224e4,// 315 PAY 288 

    0xef605a7d,// 316 PAY 289 

    0x61dfe84d,// 317 PAY 290 

    0xc0da5f83,// 318 PAY 291 

    0x7493ef05,// 319 PAY 292 

    0xb2e5da4f,// 320 PAY 293 

    0x0a3f8904,// 321 PAY 294 

    0xd05b1459,// 322 PAY 295 

/// STA is 1 words. 

/// STA num_pkts       : 75 

/// STA pkt_idx        : 68 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x28 

    0x0111284b // 323 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt33_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x8041285f,// 4 SCX   2 

    0x00001400,// 5 SCX   3 

    0x35f37f50,// 6 SCX   4 

    0xc0b3d5e5,// 7 SCX   5 

    0x38bd79e6,// 8 SCX   6 

    0xa25f8216,// 9 SCX   7 

    0xec9804c1,// 10 SCX   8 

    0xdceeb8b8,// 11 SCX   9 

    0xfc389fa8,// 12 SCX  10 

    0x94cac2e3,// 13 SCX  11 

    0x1efa2a46,// 14 SCX  12 

    0x75c906a3,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1621 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1556 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1556 

/// BFD lencrypto      : 96 

/// BFD ofstcrypto     : 920 

/// BFD (ofst+len)cry  : 1016 

/// BFD ofstiv         : 680 

/// BFD ofsticv        : 1556 

    0x00000614,// 16 BFD   1 

    0x03980060,// 17 BFD   2 

    0x061402a8,// 18 BFD   3 

/// MFM is 12 words. 

/// MFM vldnibs        : 56 

    0x5600cd83,// 19 MFM   1 

    0xefcbe2bc,// 20 MFM   2 

    0x243a179d,// 21 MFM   3 

    0xa57e70ef,// 22 MFM   4 

    0xd23eb48e,// 23 MFM   5 

    0x61557dc5,// 24 MFM   6 

    0x2b9c7871,// 25 MFM   7 

    0x625f7a56,// 26 MFM   8 

    0x154f2943,// 27 MFM   9 

    0x864708a4,// 28 MFM  10 

    0x38c8db42,// 29 MFM  11 

    0x46000000,// 30 MFM  12 

/// BDA is 407 words. 

/// BDA size     is 1621 (0x655) 

/// BDA id       is 0x8db2 

    0x06558db2,// 31 BDA   1 

/// PAY Generic Data size   : 1621 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xe90c381d,// 32 PAY   1 

    0x21253887,// 33 PAY   2 

    0x83521b44,// 34 PAY   3 

    0x83ba30c3,// 35 PAY   4 

    0x96ae08b5,// 36 PAY   5 

    0xf2ce9e74,// 37 PAY   6 

    0xf602cf3c,// 38 PAY   7 

    0xbc87a4aa,// 39 PAY   8 

    0xa0e4f1f7,// 40 PAY   9 

    0xaa48762c,// 41 PAY  10 

    0xb7b3900a,// 42 PAY  11 

    0x839854d1,// 43 PAY  12 

    0xbf9a27d2,// 44 PAY  13 

    0x4009b783,// 45 PAY  14 

    0xc90f14b0,// 46 PAY  15 

    0x4d7408b7,// 47 PAY  16 

    0x420eead1,// 48 PAY  17 

    0x6900c8dd,// 49 PAY  18 

    0x7b3d59bd,// 50 PAY  19 

    0x9ee15267,// 51 PAY  20 

    0xdc172585,// 52 PAY  21 

    0xc7613b08,// 53 PAY  22 

    0x61c31ca0,// 54 PAY  23 

    0x0e0a8a9f,// 55 PAY  24 

    0xd7172dc6,// 56 PAY  25 

    0x3b93cddb,// 57 PAY  26 

    0x1ef6ed4f,// 58 PAY  27 

    0x6e7c3a61,// 59 PAY  28 

    0x15349a13,// 60 PAY  29 

    0x613006ed,// 61 PAY  30 

    0xce29c284,// 62 PAY  31 

    0xf2c8a447,// 63 PAY  32 

    0xf6f06e9b,// 64 PAY  33 

    0xa26b1531,// 65 PAY  34 

    0x50537162,// 66 PAY  35 

    0x9ea65629,// 67 PAY  36 

    0xa8844f83,// 68 PAY  37 

    0x2aebe292,// 69 PAY  38 

    0xd3ee7c39,// 70 PAY  39 

    0x6b94f80d,// 71 PAY  40 

    0xbedfe334,// 72 PAY  41 

    0x278c36c8,// 73 PAY  42 

    0x963041b3,// 74 PAY  43 

    0x5e929bf7,// 75 PAY  44 

    0x9561fd77,// 76 PAY  45 

    0xcb388331,// 77 PAY  46 

    0x80e66b5a,// 78 PAY  47 

    0x70957cc3,// 79 PAY  48 

    0xd59a704b,// 80 PAY  49 

    0xc52b25cc,// 81 PAY  50 

    0x98b85508,// 82 PAY  51 

    0xfd00c1ec,// 83 PAY  52 

    0xe2820b1e,// 84 PAY  53 

    0x58920b9a,// 85 PAY  54 

    0x555ec779,// 86 PAY  55 

    0xddbcf506,// 87 PAY  56 

    0x12f849e0,// 88 PAY  57 

    0xc528711d,// 89 PAY  58 

    0x2c13cf87,// 90 PAY  59 

    0xd165b0d0,// 91 PAY  60 

    0x7b88587b,// 92 PAY  61 

    0xd519e896,// 93 PAY  62 

    0xa4638ea7,// 94 PAY  63 

    0x3e523fd6,// 95 PAY  64 

    0xa25693c0,// 96 PAY  65 

    0x5e97527c,// 97 PAY  66 

    0x78e2aa1b,// 98 PAY  67 

    0xcab75821,// 99 PAY  68 

    0x7e07a93d,// 100 PAY  69 

    0xd2ee6fbf,// 101 PAY  70 

    0xf81f72e0,// 102 PAY  71 

    0xa88e752f,// 103 PAY  72 

    0x25de4a22,// 104 PAY  73 

    0xb3a38224,// 105 PAY  74 

    0x718599a7,// 106 PAY  75 

    0x770fafd1,// 107 PAY  76 

    0x15d3cba9,// 108 PAY  77 

    0x04be3598,// 109 PAY  78 

    0x55ed6c06,// 110 PAY  79 

    0x61a6a77b,// 111 PAY  80 

    0xd4dce8a2,// 112 PAY  81 

    0x0169d013,// 113 PAY  82 

    0x309a3039,// 114 PAY  83 

    0x13f62cf5,// 115 PAY  84 

    0x6b694ef1,// 116 PAY  85 

    0x2e94b632,// 117 PAY  86 

    0xb09a2e78,// 118 PAY  87 

    0xc6e5243f,// 119 PAY  88 

    0x581f9cec,// 120 PAY  89 

    0x72e28cf8,// 121 PAY  90 

    0xbc3531e3,// 122 PAY  91 

    0xa3841a06,// 123 PAY  92 

    0xce355f7a,// 124 PAY  93 

    0x04585036,// 125 PAY  94 

    0x69433980,// 126 PAY  95 

    0x0f6f2ff7,// 127 PAY  96 

    0x98ff57cd,// 128 PAY  97 

    0x1a435129,// 129 PAY  98 

    0x7efff22e,// 130 PAY  99 

    0xf60640c9,// 131 PAY 100 

    0x1860c115,// 132 PAY 101 

    0x65c894a7,// 133 PAY 102 

    0xbd0feb8a,// 134 PAY 103 

    0x7684d49e,// 135 PAY 104 

    0x0e127fe6,// 136 PAY 105 

    0x1a7230b1,// 137 PAY 106 

    0x8fb6deda,// 138 PAY 107 

    0x937df72b,// 139 PAY 108 

    0x6f6b90a3,// 140 PAY 109 

    0xbad6632d,// 141 PAY 110 

    0x4751b736,// 142 PAY 111 

    0x0c1b7b87,// 143 PAY 112 

    0xfdce8b08,// 144 PAY 113 

    0x0157dafd,// 145 PAY 114 

    0x24cc714f,// 146 PAY 115 

    0xc96d64cd,// 147 PAY 116 

    0x8ae9eb60,// 148 PAY 117 

    0x7a178864,// 149 PAY 118 

    0xca2411ac,// 150 PAY 119 

    0x8ae76eb7,// 151 PAY 120 

    0x8c5f4653,// 152 PAY 121 

    0xdecba7b8,// 153 PAY 122 

    0xdb400265,// 154 PAY 123 

    0x961ea054,// 155 PAY 124 

    0xb1ab37a8,// 156 PAY 125 

    0x07f2565d,// 157 PAY 126 

    0xe49e6b04,// 158 PAY 127 

    0xf78c51ba,// 159 PAY 128 

    0x18ef07ae,// 160 PAY 129 

    0x36931b1b,// 161 PAY 130 

    0x47780ad6,// 162 PAY 131 

    0x1f3ca8e8,// 163 PAY 132 

    0x1ed896b1,// 164 PAY 133 

    0x0931f2e7,// 165 PAY 134 

    0xd3f1d907,// 166 PAY 135 

    0xb381a2ae,// 167 PAY 136 

    0x427716c7,// 168 PAY 137 

    0x4bceddc4,// 169 PAY 138 

    0x9bfdb80a,// 170 PAY 139 

    0x10689d23,// 171 PAY 140 

    0x144e3b02,// 172 PAY 141 

    0x66108c8f,// 173 PAY 142 

    0x85e58975,// 174 PAY 143 

    0x83d7ead5,// 175 PAY 144 

    0x8a2f73cf,// 176 PAY 145 

    0x1ba7ef5d,// 177 PAY 146 

    0x496f7266,// 178 PAY 147 

    0x2c558ad1,// 179 PAY 148 

    0xec00d638,// 180 PAY 149 

    0x2e5b410d,// 181 PAY 150 

    0x829ddd1a,// 182 PAY 151 

    0x4d4a8f62,// 183 PAY 152 

    0xdcf98780,// 184 PAY 153 

    0x1c29789f,// 185 PAY 154 

    0xcd0e9f6a,// 186 PAY 155 

    0x7a4c7717,// 187 PAY 156 

    0xcb6f7e7f,// 188 PAY 157 

    0xf3888f4f,// 189 PAY 158 

    0x554faecb,// 190 PAY 159 

    0x128705d0,// 191 PAY 160 

    0x13ba3ade,// 192 PAY 161 

    0xda232b3e,// 193 PAY 162 

    0xd1d6f636,// 194 PAY 163 

    0x14b433cb,// 195 PAY 164 

    0x1d9a9841,// 196 PAY 165 

    0x331ef720,// 197 PAY 166 

    0x4b3819bb,// 198 PAY 167 

    0x953dfb18,// 199 PAY 168 

    0x9d1aa90e,// 200 PAY 169 

    0xa7338743,// 201 PAY 170 

    0xc6a7fa6f,// 202 PAY 171 

    0x1f7e0aeb,// 203 PAY 172 

    0x651f4ac5,// 204 PAY 173 

    0x6b0d3f93,// 205 PAY 174 

    0xf790f411,// 206 PAY 175 

    0x1a45c3d4,// 207 PAY 176 

    0xed745e3e,// 208 PAY 177 

    0x694ed9be,// 209 PAY 178 

    0xae92141b,// 210 PAY 179 

    0xa4d4c325,// 211 PAY 180 

    0x77b561e3,// 212 PAY 181 

    0xc371b1e6,// 213 PAY 182 

    0x316af308,// 214 PAY 183 

    0x6c08a8a0,// 215 PAY 184 

    0x73bbd37a,// 216 PAY 185 

    0x0c477a45,// 217 PAY 186 

    0xdd784d0d,// 218 PAY 187 

    0xba7e5a55,// 219 PAY 188 

    0x85dea188,// 220 PAY 189 

    0x8a1f5ef7,// 221 PAY 190 

    0x99c25d80,// 222 PAY 191 

    0x324c4890,// 223 PAY 192 

    0xb6433015,// 224 PAY 193 

    0xcfa00e15,// 225 PAY 194 

    0x14eb1953,// 226 PAY 195 

    0xa42c4d76,// 227 PAY 196 

    0x4ce2a4d4,// 228 PAY 197 

    0x9b4cd1ae,// 229 PAY 198 

    0xad2c6dc0,// 230 PAY 199 

    0x81614f17,// 231 PAY 200 

    0x558ee608,// 232 PAY 201 

    0xf229a065,// 233 PAY 202 

    0x3c93a8f4,// 234 PAY 203 

    0x63caea84,// 235 PAY 204 

    0xe6a60939,// 236 PAY 205 

    0x724439f1,// 237 PAY 206 

    0x46d94ba7,// 238 PAY 207 

    0x3e125262,// 239 PAY 208 

    0x171bad54,// 240 PAY 209 

    0x56601712,// 241 PAY 210 

    0x4f7f1327,// 242 PAY 211 

    0xe08f9896,// 243 PAY 212 

    0xd9deaa61,// 244 PAY 213 

    0x9333b225,// 245 PAY 214 

    0x4f6bacd1,// 246 PAY 215 

    0xb34a2bbd,// 247 PAY 216 

    0xf5bf880d,// 248 PAY 217 

    0x8181d765,// 249 PAY 218 

    0xecb3b7de,// 250 PAY 219 

    0xb8499907,// 251 PAY 220 

    0xc96e28b6,// 252 PAY 221 

    0x219b31b0,// 253 PAY 222 

    0x2d596cb5,// 254 PAY 223 

    0xe825ca38,// 255 PAY 224 

    0x8bba4790,// 256 PAY 225 

    0x2beacfe7,// 257 PAY 226 

    0x27cc33ea,// 258 PAY 227 

    0x7b8f71d4,// 259 PAY 228 

    0xac42e979,// 260 PAY 229 

    0x85dc5db8,// 261 PAY 230 

    0x1747ac73,// 262 PAY 231 

    0x2ff1230b,// 263 PAY 232 

    0xd12aef1d,// 264 PAY 233 

    0xf3f1dfd3,// 265 PAY 234 

    0x0688df12,// 266 PAY 235 

    0x06864aec,// 267 PAY 236 

    0x4709405c,// 268 PAY 237 

    0xf3dcbc1a,// 269 PAY 238 

    0x162a7714,// 270 PAY 239 

    0x93a6f871,// 271 PAY 240 

    0xb6f1c3fa,// 272 PAY 241 

    0xe760cf15,// 273 PAY 242 

    0xb22171bf,// 274 PAY 243 

    0x4f681e6f,// 275 PAY 244 

    0x6d5f763c,// 276 PAY 245 

    0x3ce4cbbd,// 277 PAY 246 

    0x7cdabbdb,// 278 PAY 247 

    0x256a7d1b,// 279 PAY 248 

    0x74ca2974,// 280 PAY 249 

    0x1c588100,// 281 PAY 250 

    0x6a44169e,// 282 PAY 251 

    0x9ec1db32,// 283 PAY 252 

    0x9ed21580,// 284 PAY 253 

    0xc1f2d358,// 285 PAY 254 

    0xc959bd49,// 286 PAY 255 

    0xdec68cba,// 287 PAY 256 

    0x13848c41,// 288 PAY 257 

    0xb726fa04,// 289 PAY 258 

    0x0929aea0,// 290 PAY 259 

    0x8deb2bc0,// 291 PAY 260 

    0x7e93a834,// 292 PAY 261 

    0x50f2dd78,// 293 PAY 262 

    0x8017f19f,// 294 PAY 263 

    0xee7539ec,// 295 PAY 264 

    0xbd91d663,// 296 PAY 265 

    0xbe04b1a6,// 297 PAY 266 

    0xe3f01bb2,// 298 PAY 267 

    0x2f5e1a6b,// 299 PAY 268 

    0xa1e27727,// 300 PAY 269 

    0x79549205,// 301 PAY 270 

    0x6cc0093a,// 302 PAY 271 

    0xbb083943,// 303 PAY 272 

    0xa1bf595a,// 304 PAY 273 

    0xed7b3a9f,// 305 PAY 274 

    0x732d7f59,// 306 PAY 275 

    0x7259a81c,// 307 PAY 276 

    0xadddfebd,// 308 PAY 277 

    0x3e954a97,// 309 PAY 278 

    0x54769ac1,// 310 PAY 279 

    0xa5c3777f,// 311 PAY 280 

    0x2bc7cd36,// 312 PAY 281 

    0x2dcb4226,// 313 PAY 282 

    0x963ff68d,// 314 PAY 283 

    0xfe924176,// 315 PAY 284 

    0x347f45db,// 316 PAY 285 

    0x0232b214,// 317 PAY 286 

    0xf9d9b90c,// 318 PAY 287 

    0xa3f82095,// 319 PAY 288 

    0xd0eb2cb3,// 320 PAY 289 

    0x3cccfa16,// 321 PAY 290 

    0x206c1497,// 322 PAY 291 

    0xb171c348,// 323 PAY 292 

    0x1ccb9e82,// 324 PAY 293 

    0x53ad6d24,// 325 PAY 294 

    0x84bc47bb,// 326 PAY 295 

    0xc99b2f9e,// 327 PAY 296 

    0x5c5e5c4d,// 328 PAY 297 

    0x9df5151a,// 329 PAY 298 

    0x2e3eaa04,// 330 PAY 299 

    0x0a00c275,// 331 PAY 300 

    0x00ed4b48,// 332 PAY 301 

    0xd4548018,// 333 PAY 302 

    0x39fb96c6,// 334 PAY 303 

    0xc923242f,// 335 PAY 304 

    0xc1bcd72c,// 336 PAY 305 

    0x38745d9e,// 337 PAY 306 

    0x80fdc648,// 338 PAY 307 

    0x8417df21,// 339 PAY 308 

    0xfc07279e,// 340 PAY 309 

    0xd91713e8,// 341 PAY 310 

    0x78e6cacd,// 342 PAY 311 

    0xc0faebbe,// 343 PAY 312 

    0xfbc5b8e0,// 344 PAY 313 

    0x89136ae3,// 345 PAY 314 

    0x434dd055,// 346 PAY 315 

    0xea99b5d3,// 347 PAY 316 

    0x230ad611,// 348 PAY 317 

    0xea53093e,// 349 PAY 318 

    0xd743d417,// 350 PAY 319 

    0x34c8a5f6,// 351 PAY 320 

    0xfec531d1,// 352 PAY 321 

    0x2bd1c66c,// 353 PAY 322 

    0xef9a1bd4,// 354 PAY 323 

    0x74c3e167,// 355 PAY 324 

    0xce6565d1,// 356 PAY 325 

    0x31f7bc01,// 357 PAY 326 

    0xa531187c,// 358 PAY 327 

    0x6667ff70,// 359 PAY 328 

    0xae480537,// 360 PAY 329 

    0x629d1f1b,// 361 PAY 330 

    0x4b11648b,// 362 PAY 331 

    0xd3daec35,// 363 PAY 332 

    0x09effa22,// 364 PAY 333 

    0x9ae0f85e,// 365 PAY 334 

    0x029a873a,// 366 PAY 335 

    0x80be1ad0,// 367 PAY 336 

    0x8ba248e1,// 368 PAY 337 

    0x4c62929a,// 369 PAY 338 

    0x2510a4ad,// 370 PAY 339 

    0x31b7b1e5,// 371 PAY 340 

    0x7d65e72f,// 372 PAY 341 

    0x4bcd178e,// 373 PAY 342 

    0x6f4866ed,// 374 PAY 343 

    0x535c4dc5,// 375 PAY 344 

    0x81dbbcd7,// 376 PAY 345 

    0x138db0ca,// 377 PAY 346 

    0x34e8183f,// 378 PAY 347 

    0x1c1b9a4c,// 379 PAY 348 

    0x3d5f9f61,// 380 PAY 349 

    0x7a3e58f7,// 381 PAY 350 

    0x6a9b4112,// 382 PAY 351 

    0x0e7dd904,// 383 PAY 352 

    0x82bd861b,// 384 PAY 353 

    0xf6eba995,// 385 PAY 354 

    0xa7eb7828,// 386 PAY 355 

    0x708cc61f,// 387 PAY 356 

    0xf2451b82,// 388 PAY 357 

    0x3e4fca35,// 389 PAY 358 

    0x2e5e70d4,// 390 PAY 359 

    0x8bb3655d,// 391 PAY 360 

    0xdb3528bf,// 392 PAY 361 

    0x4ef9ca4e,// 393 PAY 362 

    0x980e9360,// 394 PAY 363 

    0x472d7135,// 395 PAY 364 

    0xf45f6707,// 396 PAY 365 

    0x3b7ad946,// 397 PAY 366 

    0xde3075fc,// 398 PAY 367 

    0x39636fd6,// 399 PAY 368 

    0xf8c29558,// 400 PAY 369 

    0x1e690ba5,// 401 PAY 370 

    0xcc484d99,// 402 PAY 371 

    0x3608b1ba,// 403 PAY 372 

    0xd3653680,// 404 PAY 373 

    0xc4fb00d8,// 405 PAY 374 

    0x00ed547b,// 406 PAY 375 

    0x9d9a6e6f,// 407 PAY 376 

    0xfe96de8f,// 408 PAY 377 

    0xc168cb30,// 409 PAY 378 

    0x7847d2d9,// 410 PAY 379 

    0x4a95fa56,// 411 PAY 380 

    0xf5d636a1,// 412 PAY 381 

    0x9fa6b8b3,// 413 PAY 382 

    0x2e72b2e8,// 414 PAY 383 

    0x84c42893,// 415 PAY 384 

    0xfc9890df,// 416 PAY 385 

    0xa9bdc6d2,// 417 PAY 386 

    0x111f32ac,// 418 PAY 387 

    0x05dea20b,// 419 PAY 388 

    0x1dab9347,// 420 PAY 389 

    0xdbc34b1e,// 421 PAY 390 

    0x3455e10f,// 422 PAY 391 

    0xab4da4cf,// 423 PAY 392 

    0x57d0e88e,// 424 PAY 393 

    0xa3f0c605,// 425 PAY 394 

    0x437b78b6,// 426 PAY 395 

    0xc58b7f86,// 427 PAY 396 

    0x0ded6940,// 428 PAY 397 

    0xd2b13150,// 429 PAY 398 

    0x8b08e36f,// 430 PAY 399 

    0x18ea4785,// 431 PAY 400 

    0x20bc6b1b,// 432 PAY 401 

    0x68f4b9c6,// 433 PAY 402 

    0xa331d34c,// 434 PAY 403 

    0xae72b2f3,// 435 PAY 404 

    0x1deede18,// 436 PAY 405 

    0xbe000000,// 437 PAY 406 

/// STA is 1 words. 

/// STA num_pkts       : 55 

/// STA pkt_idx        : 141 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb2 

    0x0234b237 // 438 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt34_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x8042284a,// 4 SCX   2 

    0x00006300,// 5 SCX   3 

    0xa4864581,// 6 SCX   4 

    0xf74f0404,// 7 SCX   5 

    0x3ec0667e,// 8 SCX   6 

    0xd468d66d,// 9 SCX   7 

    0xea048b29,// 10 SCX   8 

    0xd5a588b8,// 11 SCX   9 

    0xa2d318be,// 12 SCX  10 

    0x3ba8139d,// 13 SCX  11 

    0x02d709eb,// 14 SCX  12 

    0x2e5a7d44,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1751 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1627 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1627 

/// BFD lencrypto      : 936 

/// BFD ofstcrypto     : 192 

/// BFD (ofst+len)cry  : 1128 

/// BFD ofstiv         : 172 

/// BFD ofsticv        : 1732 

    0x0000065b,// 16 BFD   1 

    0x00c003a8,// 17 BFD   2 

    0x06c400ac,// 18 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00e74f,// 19 MFM   1 

    0xa8f48d0a,// 20 MFM   2 

    0xd9fe9328,// 21 MFM   3 

    0x2f828502,// 22 MFM   4 

    0x4b35efa8,// 23 MFM   5 

    0xf90b0970,// 24 MFM   6 

    0x55e6f652,// 25 MFM   7 

    0x4b0b1c92,// 26 MFM   8 

    0x30f1b394,// 27 MFM   9 

    0x112406f0,// 28 MFM  10 

    0xfbcde2e3,// 29 MFM  11 

    0x50532645,// 30 MFM  12 

    0xbc16ae2d,// 31 MFM  13 

    0x7a1c62fa,// 32 MFM  14 

    0xe01724ae,// 33 MFM  15 

    0xce30f367,// 34 MFM  16 

/// BDA is 439 words. 

/// BDA size     is 1751 (0x6d7) 

/// BDA id       is 0xaed0 

    0x06d7aed0,// 35 BDA   1 

/// PAY Generic Data size   : 1751 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xbf5d63f4,// 36 PAY   1 

    0xd8a26cea,// 37 PAY   2 

    0x224630bd,// 38 PAY   3 

    0xb9bc71c1,// 39 PAY   4 

    0x8b284107,// 40 PAY   5 

    0x90713570,// 41 PAY   6 

    0x969afc99,// 42 PAY   7 

    0x1dca7df7,// 43 PAY   8 

    0xc5204b46,// 44 PAY   9 

    0x285632af,// 45 PAY  10 

    0x1c8fbcf6,// 46 PAY  11 

    0xe36aea93,// 47 PAY  12 

    0x3b6b8eb6,// 48 PAY  13 

    0x27958877,// 49 PAY  14 

    0xb7ca9c97,// 50 PAY  15 

    0x630cc3e8,// 51 PAY  16 

    0xd467bb4a,// 52 PAY  17 

    0xd639a5f0,// 53 PAY  18 

    0xa5f2f909,// 54 PAY  19 

    0xf7d15f70,// 55 PAY  20 

    0x727d44f0,// 56 PAY  21 

    0xfb2b9e55,// 57 PAY  22 

    0xbb9b2d45,// 58 PAY  23 

    0x5ae8008b,// 59 PAY  24 

    0x0785d2b3,// 60 PAY  25 

    0x16452d8f,// 61 PAY  26 

    0xd8e67bb9,// 62 PAY  27 

    0x37314b27,// 63 PAY  28 

    0x96e1334a,// 64 PAY  29 

    0x45699698,// 65 PAY  30 

    0x9b8cbdf8,// 66 PAY  31 

    0xc63418c4,// 67 PAY  32 

    0xd92b1331,// 68 PAY  33 

    0x3cccb362,// 69 PAY  34 

    0x76688afa,// 70 PAY  35 

    0xa7eca16c,// 71 PAY  36 

    0x73b127af,// 72 PAY  37 

    0x38047244,// 73 PAY  38 

    0xe4c80ed9,// 74 PAY  39 

    0x33986ab5,// 75 PAY  40 

    0x363692d5,// 76 PAY  41 

    0xaf74a572,// 77 PAY  42 

    0x9c7a20f8,// 78 PAY  43 

    0x98eaa150,// 79 PAY  44 

    0x0262cb53,// 80 PAY  45 

    0xe409b369,// 81 PAY  46 

    0x03632373,// 82 PAY  47 

    0x9eeaef2c,// 83 PAY  48 

    0xd4da13ff,// 84 PAY  49 

    0x3eaaf824,// 85 PAY  50 

    0xe78956fb,// 86 PAY  51 

    0x28932f27,// 87 PAY  52 

    0xa4831d7f,// 88 PAY  53 

    0x2f1a7862,// 89 PAY  54 

    0xe4fcfdc9,// 90 PAY  55 

    0x7846a42c,// 91 PAY  56 

    0xd469a47f,// 92 PAY  57 

    0x57d50d66,// 93 PAY  58 

    0xb6e645d1,// 94 PAY  59 

    0xbb45a42a,// 95 PAY  60 

    0x03d6354e,// 96 PAY  61 

    0x74ba0026,// 97 PAY  62 

    0x423db95d,// 98 PAY  63 

    0x4bf9c14d,// 99 PAY  64 

    0x8a045a7e,// 100 PAY  65 

    0xbc42eef1,// 101 PAY  66 

    0x049e1b5a,// 102 PAY  67 

    0xdff1f01e,// 103 PAY  68 

    0x6a251199,// 104 PAY  69 

    0x87395f4a,// 105 PAY  70 

    0x99579711,// 106 PAY  71 

    0x9cd355ba,// 107 PAY  72 

    0x06c0eddd,// 108 PAY  73 

    0x45255cae,// 109 PAY  74 

    0xa37a7075,// 110 PAY  75 

    0xb00f3442,// 111 PAY  76 

    0x2a1ea96a,// 112 PAY  77 

    0x884d7510,// 113 PAY  78 

    0x8f442e90,// 114 PAY  79 

    0x6190b8ff,// 115 PAY  80 

    0xb7835b8c,// 116 PAY  81 

    0xe1707a22,// 117 PAY  82 

    0x2d52a703,// 118 PAY  83 

    0x7f41a1f9,// 119 PAY  84 

    0x1dc59912,// 120 PAY  85 

    0x38066e19,// 121 PAY  86 

    0x3ce0a405,// 122 PAY  87 

    0xad8fb5f7,// 123 PAY  88 

    0xa99853d3,// 124 PAY  89 

    0xf9a71e3b,// 125 PAY  90 

    0xf772fdf1,// 126 PAY  91 

    0x99490b86,// 127 PAY  92 

    0x177d503b,// 128 PAY  93 

    0x03ab1ac4,// 129 PAY  94 

    0xf483e22c,// 130 PAY  95 

    0x6af8815f,// 131 PAY  96 

    0x130c1ab0,// 132 PAY  97 

    0xae380a0a,// 133 PAY  98 

    0x36fa6ca9,// 134 PAY  99 

    0x0464dd55,// 135 PAY 100 

    0xa449544c,// 136 PAY 101 

    0x9d6c9a70,// 137 PAY 102 

    0xfd5a27de,// 138 PAY 103 

    0xd7057d59,// 139 PAY 104 

    0x7afe2887,// 140 PAY 105 

    0xdfd24ed1,// 141 PAY 106 

    0xe68aa54c,// 142 PAY 107 

    0xc9f00984,// 143 PAY 108 

    0x4d378300,// 144 PAY 109 

    0x0e468aed,// 145 PAY 110 

    0xa968c810,// 146 PAY 111 

    0x853317e6,// 147 PAY 112 

    0x99f2d448,// 148 PAY 113 

    0x142f57a2,// 149 PAY 114 

    0xd3550e79,// 150 PAY 115 

    0x685af3b8,// 151 PAY 116 

    0x8acfd835,// 152 PAY 117 

    0x95fd94ee,// 153 PAY 118 

    0xfbc68f5e,// 154 PAY 119 

    0x055ddb5e,// 155 PAY 120 

    0x1cb3ba3e,// 156 PAY 121 

    0xd72fbf16,// 157 PAY 122 

    0xe83bda27,// 158 PAY 123 

    0x1d995ac8,// 159 PAY 124 

    0xac7f2a24,// 160 PAY 125 

    0x18b2ccc6,// 161 PAY 126 

    0xca6d8d5b,// 162 PAY 127 

    0x87f7d2b9,// 163 PAY 128 

    0x30b5c5ed,// 164 PAY 129 

    0xa89c8621,// 165 PAY 130 

    0x71d10a0c,// 166 PAY 131 

    0xfa6acd78,// 167 PAY 132 

    0x31ebb1ce,// 168 PAY 133 

    0x40a0299e,// 169 PAY 134 

    0xb2426c4a,// 170 PAY 135 

    0x8c420f2e,// 171 PAY 136 

    0xaa6c6e12,// 172 PAY 137 

    0xb4fe1744,// 173 PAY 138 

    0x1f9420e0,// 174 PAY 139 

    0xe9303b6e,// 175 PAY 140 

    0x0eae68ee,// 176 PAY 141 

    0x40d3bc99,// 177 PAY 142 

    0xf88af2dc,// 178 PAY 143 

    0x1612a7ee,// 179 PAY 144 

    0x6b8e5418,// 180 PAY 145 

    0x9a18b42e,// 181 PAY 146 

    0xc997f7da,// 182 PAY 147 

    0x102f39f1,// 183 PAY 148 

    0x7db556a5,// 184 PAY 149 

    0x63616326,// 185 PAY 150 

    0x8950221a,// 186 PAY 151 

    0x36f60b67,// 187 PAY 152 

    0x8f851233,// 188 PAY 153 

    0x37dadfb1,// 189 PAY 154 

    0xe9b6c02d,// 190 PAY 155 

    0x2af20a22,// 191 PAY 156 

    0xe8bb02c1,// 192 PAY 157 

    0x45551526,// 193 PAY 158 

    0x5377d2d1,// 194 PAY 159 

    0xba67a1cd,// 195 PAY 160 

    0x42d6cd39,// 196 PAY 161 

    0x8acbcbf2,// 197 PAY 162 

    0x6ef179a4,// 198 PAY 163 

    0x068789a2,// 199 PAY 164 

    0x9278c083,// 200 PAY 165 

    0xc0896d69,// 201 PAY 166 

    0x40b4514e,// 202 PAY 167 

    0x0a088e32,// 203 PAY 168 

    0xd4bacf25,// 204 PAY 169 

    0xc6089f4e,// 205 PAY 170 

    0x48e02db9,// 206 PAY 171 

    0x9e015d53,// 207 PAY 172 

    0xa1bf2b3b,// 208 PAY 173 

    0x7fbd536b,// 209 PAY 174 

    0x4cadb78c,// 210 PAY 175 

    0x88976488,// 211 PAY 176 

    0x08c89d3a,// 212 PAY 177 

    0x05bd23db,// 213 PAY 178 

    0x4a0339bf,// 214 PAY 179 

    0x8835b946,// 215 PAY 180 

    0x463402de,// 216 PAY 181 

    0xf8b3f17b,// 217 PAY 182 

    0x132c3f4a,// 218 PAY 183 

    0xee60f690,// 219 PAY 184 

    0xcac77e1b,// 220 PAY 185 

    0x21671db9,// 221 PAY 186 

    0xa595bd7b,// 222 PAY 187 

    0x0887eefd,// 223 PAY 188 

    0x7faafe25,// 224 PAY 189 

    0x3c73474f,// 225 PAY 190 

    0xc9c97b3b,// 226 PAY 191 

    0x69f8d998,// 227 PAY 192 

    0x20603125,// 228 PAY 193 

    0x61ce151b,// 229 PAY 194 

    0xab8f7556,// 230 PAY 195 

    0xb438c878,// 231 PAY 196 

    0x25e80251,// 232 PAY 197 

    0x66ab8159,// 233 PAY 198 

    0x9cf3e0f5,// 234 PAY 199 

    0xcff2ff83,// 235 PAY 200 

    0x39908899,// 236 PAY 201 

    0x5e70ec7b,// 237 PAY 202 

    0xb719f503,// 238 PAY 203 

    0xae0e01d9,// 239 PAY 204 

    0x297bc3fc,// 240 PAY 205 

    0xd75fcdbd,// 241 PAY 206 

    0xb7cc518d,// 242 PAY 207 

    0x9132a352,// 243 PAY 208 

    0x08d01fe3,// 244 PAY 209 

    0xf0574037,// 245 PAY 210 

    0x61b41ee5,// 246 PAY 211 

    0x9fbce867,// 247 PAY 212 

    0x95039b15,// 248 PAY 213 

    0xed7ebff8,// 249 PAY 214 

    0x1ed03d10,// 250 PAY 215 

    0xb718bbc6,// 251 PAY 216 

    0x63f7d246,// 252 PAY 217 

    0x2b5241cb,// 253 PAY 218 

    0x232af837,// 254 PAY 219 

    0xecb2cf25,// 255 PAY 220 

    0x19485ea7,// 256 PAY 221 

    0x8d554f55,// 257 PAY 222 

    0x1bae78df,// 258 PAY 223 

    0xcbd7cbe8,// 259 PAY 224 

    0x89138651,// 260 PAY 225 

    0x70bb9118,// 261 PAY 226 

    0xc593eb98,// 262 PAY 227 

    0x6b29dfff,// 263 PAY 228 

    0x798cbe14,// 264 PAY 229 

    0x707484ce,// 265 PAY 230 

    0x1c9e8844,// 266 PAY 231 

    0x3e2a0e8a,// 267 PAY 232 

    0x0f923188,// 268 PAY 233 

    0x3d03f342,// 269 PAY 234 

    0xca718fe9,// 270 PAY 235 

    0x6eef4b87,// 271 PAY 236 

    0xcc2ac770,// 272 PAY 237 

    0xd8743434,// 273 PAY 238 

    0x49c14a64,// 274 PAY 239 

    0x0f123388,// 275 PAY 240 

    0x18d7bc55,// 276 PAY 241 

    0x75ddf3d8,// 277 PAY 242 

    0x4a9b5334,// 278 PAY 243 

    0x038021f8,// 279 PAY 244 

    0x5e419aae,// 280 PAY 245 

    0xa8ae2b4b,// 281 PAY 246 

    0xc82a0ab7,// 282 PAY 247 

    0x55ed7caa,// 283 PAY 248 

    0x7074909a,// 284 PAY 249 

    0x2f9c41e8,// 285 PAY 250 

    0x2aae5ade,// 286 PAY 251 

    0x6207d763,// 287 PAY 252 

    0x82b08cea,// 288 PAY 253 

    0xc8455f3c,// 289 PAY 254 

    0x01c3659d,// 290 PAY 255 

    0x33eaf6d9,// 291 PAY 256 

    0xf606bd8d,// 292 PAY 257 

    0x9dd92c02,// 293 PAY 258 

    0xfcceb0b4,// 294 PAY 259 

    0x2bedf3df,// 295 PAY 260 

    0x4bb23952,// 296 PAY 261 

    0x73e6402c,// 297 PAY 262 

    0x2cdc38ff,// 298 PAY 263 

    0x600948c1,// 299 PAY 264 

    0x11f8f8e2,// 300 PAY 265 

    0xcd08b163,// 301 PAY 266 

    0x27dc7aa0,// 302 PAY 267 

    0xdb8702dd,// 303 PAY 268 

    0xbbf2b2c1,// 304 PAY 269 

    0x596889b3,// 305 PAY 270 

    0x4b820a23,// 306 PAY 271 

    0x46770b2c,// 307 PAY 272 

    0xb1c14c3a,// 308 PAY 273 

    0x83ec5894,// 309 PAY 274 

    0xf58e36cc,// 310 PAY 275 

    0x8fdb409c,// 311 PAY 276 

    0x45dbf325,// 312 PAY 277 

    0x595a0645,// 313 PAY 278 

    0xc91bf458,// 314 PAY 279 

    0xd8abdd44,// 315 PAY 280 

    0x94cc25e9,// 316 PAY 281 

    0x7c0b6e19,// 317 PAY 282 

    0x6d74db25,// 318 PAY 283 

    0x2087dcb5,// 319 PAY 284 

    0xcbd87c15,// 320 PAY 285 

    0x30311473,// 321 PAY 286 

    0x49d723ce,// 322 PAY 287 

    0xddcc1723,// 323 PAY 288 

    0x391b5636,// 324 PAY 289 

    0xb2bdee3f,// 325 PAY 290 

    0x2d7fbc9d,// 326 PAY 291 

    0xae8c8fa1,// 327 PAY 292 

    0x8b353883,// 328 PAY 293 

    0x6ee0dc02,// 329 PAY 294 

    0x4b7f16e5,// 330 PAY 295 

    0x2d8f014c,// 331 PAY 296 

    0x609e3e79,// 332 PAY 297 

    0xf1a7405c,// 333 PAY 298 

    0x193b8f5f,// 334 PAY 299 

    0x64bd5ca0,// 335 PAY 300 

    0xe50938e2,// 336 PAY 301 

    0xcfc5b8e5,// 337 PAY 302 

    0xd8959317,// 338 PAY 303 

    0x2ed36dc3,// 339 PAY 304 

    0x7cfa32f3,// 340 PAY 305 

    0x60adc777,// 341 PAY 306 

    0x598eb1a3,// 342 PAY 307 

    0xaf49a61e,// 343 PAY 308 

    0x041193e7,// 344 PAY 309 

    0x11385dd0,// 345 PAY 310 

    0x4d6921b3,// 346 PAY 311 

    0xa0e68ddc,// 347 PAY 312 

    0x799e7c8f,// 348 PAY 313 

    0x2fd75c97,// 349 PAY 314 

    0x344253c6,// 350 PAY 315 

    0x45a9f4ae,// 351 PAY 316 

    0x8d669b85,// 352 PAY 317 

    0xac032eac,// 353 PAY 318 

    0x4482366b,// 354 PAY 319 

    0x6dfd82c6,// 355 PAY 320 

    0xbe39fdd8,// 356 PAY 321 

    0x8c5beff2,// 357 PAY 322 

    0x7ce14dc5,// 358 PAY 323 

    0x7b3b8f59,// 359 PAY 324 

    0x289e9d7e,// 360 PAY 325 

    0x6a5bf21e,// 361 PAY 326 

    0x5fcff832,// 362 PAY 327 

    0xa7af6f3a,// 363 PAY 328 

    0xf6be0584,// 364 PAY 329 

    0x456616a2,// 365 PAY 330 

    0x086744cb,// 366 PAY 331 

    0x7eeab153,// 367 PAY 332 

    0x39e32d65,// 368 PAY 333 

    0xd046cbcd,// 369 PAY 334 

    0xa7fed317,// 370 PAY 335 

    0x48f8101e,// 371 PAY 336 

    0x10bc5bb3,// 372 PAY 337 

    0xd3453575,// 373 PAY 338 

    0xae9e03c1,// 374 PAY 339 

    0x562d155b,// 375 PAY 340 

    0x85ce7503,// 376 PAY 341 

    0x9f2e65a9,// 377 PAY 342 

    0xf42d5c15,// 378 PAY 343 

    0x8b602445,// 379 PAY 344 

    0xa7cd6983,// 380 PAY 345 

    0x22c9988b,// 381 PAY 346 

    0x12765876,// 382 PAY 347 

    0x38784a36,// 383 PAY 348 

    0x89de0dfa,// 384 PAY 349 

    0x889fafe2,// 385 PAY 350 

    0x827188fb,// 386 PAY 351 

    0x3675cb2f,// 387 PAY 352 

    0x57f2af32,// 388 PAY 353 

    0x3cc0d9a1,// 389 PAY 354 

    0xa0d39adf,// 390 PAY 355 

    0x3b5fbbf3,// 391 PAY 356 

    0xd31c4544,// 392 PAY 357 

    0x0b236ed4,// 393 PAY 358 

    0xddeaea33,// 394 PAY 359 

    0x62f0fbff,// 395 PAY 360 

    0x5296a89b,// 396 PAY 361 

    0x9cb418f0,// 397 PAY 362 

    0xc4148163,// 398 PAY 363 

    0x2f105c27,// 399 PAY 364 

    0x660b7c07,// 400 PAY 365 

    0x01643565,// 401 PAY 366 

    0x9c9413d5,// 402 PAY 367 

    0xdc99ac87,// 403 PAY 368 

    0xb582ef6e,// 404 PAY 369 

    0xac083e08,// 405 PAY 370 

    0xed721e13,// 406 PAY 371 

    0xaad280a9,// 407 PAY 372 

    0xa90c1b96,// 408 PAY 373 

    0x36e107b3,// 409 PAY 374 

    0xac74e8cc,// 410 PAY 375 

    0x3c971f62,// 411 PAY 376 

    0x73bb0ff2,// 412 PAY 377 

    0xc368fe1a,// 413 PAY 378 

    0x89aacac6,// 414 PAY 379 

    0x818263ec,// 415 PAY 380 

    0xc770234f,// 416 PAY 381 

    0x8d15136c,// 417 PAY 382 

    0x37b995ff,// 418 PAY 383 

    0xd3f8f764,// 419 PAY 384 

    0x261ade06,// 420 PAY 385 

    0xf8868496,// 421 PAY 386 

    0x71e65046,// 422 PAY 387 

    0x6c1bd15c,// 423 PAY 388 

    0xd74da15c,// 424 PAY 389 

    0x3d4812ba,// 425 PAY 390 

    0x276a0159,// 426 PAY 391 

    0x4f676751,// 427 PAY 392 

    0x065e26da,// 428 PAY 393 

    0xd8260b87,// 429 PAY 394 

    0x89bd941f,// 430 PAY 395 

    0x50f97e4d,// 431 PAY 396 

    0x8d428774,// 432 PAY 397 

    0xbc55ea8a,// 433 PAY 398 

    0x94ccb5b2,// 434 PAY 399 

    0x1e82ad1a,// 435 PAY 400 

    0x26f42cad,// 436 PAY 401 

    0x16bb4f67,// 437 PAY 402 

    0x71bcb186,// 438 PAY 403 

    0x75e59f9a,// 439 PAY 404 

    0xd165d466,// 440 PAY 405 

    0x56b7e8f2,// 441 PAY 406 

    0x46838d6d,// 442 PAY 407 

    0xc17766d1,// 443 PAY 408 

    0xde366c32,// 444 PAY 409 

    0x74d6a101,// 445 PAY 410 

    0x11fc4b16,// 446 PAY 411 

    0xaec89687,// 447 PAY 412 

    0x2ae94e41,// 448 PAY 413 

    0x1144fb49,// 449 PAY 414 

    0xd90fb5a8,// 450 PAY 415 

    0x40374c84,// 451 PAY 416 

    0x023912bc,// 452 PAY 417 

    0xe07566b3,// 453 PAY 418 

    0x5ed3097b,// 454 PAY 419 

    0x5a442524,// 455 PAY 420 

    0x116836ae,// 456 PAY 421 

    0xd2dbedbd,// 457 PAY 422 

    0x4285933c,// 458 PAY 423 

    0x7c1662f0,// 459 PAY 424 

    0x3c8b1b40,// 460 PAY 425 

    0x95545f22,// 461 PAY 426 

    0x8480aa38,// 462 PAY 427 

    0xfd219bbd,// 463 PAY 428 

    0x05bc3d82,// 464 PAY 429 

    0xc5e04016,// 465 PAY 430 

    0x21260e1f,// 466 PAY 431 

    0x728828e6,// 467 PAY 432 

    0x573a5d94,// 468 PAY 433 

    0x53d8abb5,// 469 PAY 434 

    0xcfba3a2c,// 470 PAY 435 

    0xb49cdc7c,// 471 PAY 436 

    0x4b452f37,// 472 PAY 437 

    0x47adec00,// 473 PAY 438 

/// STA is 1 words. 

/// STA num_pkts       : 84 

/// STA pkt_idx        : 173 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3d 

    0x02b53d54 // 474 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt35_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x80412840,// 4 SCX   2 

    0x00002200,// 5 SCX   3 

    0x39f4431d,// 6 SCX   4 

    0x3663c1bd,// 7 SCX   5 

    0x891d902c,// 8 SCX   6 

    0x6f9cdec4,// 9 SCX   7 

    0x3fca4df5,// 10 SCX   8 

    0x73d12d8c,// 11 SCX   9 

    0x0da1626e,// 12 SCX  10 

    0x8228806b,// 13 SCX  11 

    0x7a0036e0,// 14 SCX  12 

    0x7b1d2471,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1142 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1070 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1070 

/// BFD lencrypto      : 152 

/// BFD ofstcrypto     : 676 

/// BFD (ofst+len)cry  : 828 

/// BFD ofstiv         : 232 

/// BFD ofsticv        : 1100 

    0x0000042e,// 16 BFD   1 

    0x02a40098,// 17 BFD   2 

    0x044c00e8,// 18 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00bf35,// 19 MFM   1 

    0x934eb421,// 20 MFM   2 

    0x0cd14b00,// 21 MFM   3 

    0xd45b82bb,// 22 MFM   4 

    0xa5629213,// 23 MFM   5 

    0x1ef5b0f1,// 24 MFM   6 

    0x58254ee8,// 25 MFM   7 

    0x6010b019,// 26 MFM   8 

    0xdab5ce5b,// 27 MFM   9 

    0x997c476a,// 28 MFM  10 

    0xecd151a7,// 29 MFM  11 

    0x2160811f,// 30 MFM  12 

    0x75f3ef53,// 31 MFM  13 

    0x5cd42931,// 32 MFM  14 

    0x7cc1f50a,// 33 MFM  15 

    0x3106f8af,// 34 MFM  16 

/// BDA is 287 words. 

/// BDA size     is 1142 (0x476) 

/// BDA id       is 0x41dc 

    0x047641dc,// 35 BDA   1 

/// PAY Generic Data size   : 1142 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x12d3e180,// 36 PAY   1 

    0x4e27fea8,// 37 PAY   2 

    0x9c2a3f82,// 38 PAY   3 

    0x21665265,// 39 PAY   4 

    0xec1b3d84,// 40 PAY   5 

    0x409e2e81,// 41 PAY   6 

    0xc4924d39,// 42 PAY   7 

    0x6d10b6be,// 43 PAY   8 

    0xc3706033,// 44 PAY   9 

    0x7d6106e7,// 45 PAY  10 

    0x7e13c48f,// 46 PAY  11 

    0x6a86327c,// 47 PAY  12 

    0x672ac703,// 48 PAY  13 

    0xa2fe3488,// 49 PAY  14 

    0xf407aa95,// 50 PAY  15 

    0xc1dbfa38,// 51 PAY  16 

    0xadc0c315,// 52 PAY  17 

    0xa862de1d,// 53 PAY  18 

    0x822b27db,// 54 PAY  19 

    0x92d09a8f,// 55 PAY  20 

    0xb7cdc9c6,// 56 PAY  21 

    0xb95886a4,// 57 PAY  22 

    0x5e226bc8,// 58 PAY  23 

    0x344dc815,// 59 PAY  24 

    0xfd3d44a2,// 60 PAY  25 

    0x5cd7294c,// 61 PAY  26 

    0x91a5d416,// 62 PAY  27 

    0x2bfc53b7,// 63 PAY  28 

    0x195fb51e,// 64 PAY  29 

    0x615fd2df,// 65 PAY  30 

    0x75e63acf,// 66 PAY  31 

    0x60031149,// 67 PAY  32 

    0x39952cd2,// 68 PAY  33 

    0x1b65623f,// 69 PAY  34 

    0xe049387c,// 70 PAY  35 

    0x8b2e10f5,// 71 PAY  36 

    0x6049e618,// 72 PAY  37 

    0x6814296a,// 73 PAY  38 

    0x24ffc449,// 74 PAY  39 

    0x402b73c5,// 75 PAY  40 

    0x5340ed6f,// 76 PAY  41 

    0x0ee34b4d,// 77 PAY  42 

    0x29891d4a,// 78 PAY  43 

    0x05e8d25b,// 79 PAY  44 

    0x03e1693f,// 80 PAY  45 

    0xaf82688e,// 81 PAY  46 

    0xdf7b720a,// 82 PAY  47 

    0xdd7ce800,// 83 PAY  48 

    0xee213ab1,// 84 PAY  49 

    0x9435a69f,// 85 PAY  50 

    0x2859006e,// 86 PAY  51 

    0x247e3b91,// 87 PAY  52 

    0x7cea0222,// 88 PAY  53 

    0x158e89f8,// 89 PAY  54 

    0x2a52e8a0,// 90 PAY  55 

    0x53fd072c,// 91 PAY  56 

    0x16a15d56,// 92 PAY  57 

    0xaf15821e,// 93 PAY  58 

    0x5e319ef7,// 94 PAY  59 

    0xa70bf509,// 95 PAY  60 

    0xac55bcdc,// 96 PAY  61 

    0x2e4719e8,// 97 PAY  62 

    0x39f09d1e,// 98 PAY  63 

    0xf204d219,// 99 PAY  64 

    0x283c3659,// 100 PAY  65 

    0x456232e1,// 101 PAY  66 

    0x7291d62f,// 102 PAY  67 

    0x78c5d141,// 103 PAY  68 

    0xb98066ca,// 104 PAY  69 

    0xb2abd9fa,// 105 PAY  70 

    0xe650da46,// 106 PAY  71 

    0x0d6fae8f,// 107 PAY  72 

    0xb27665e1,// 108 PAY  73 

    0x6c691e42,// 109 PAY  74 

    0xb923d113,// 110 PAY  75 

    0x34d8eeff,// 111 PAY  76 

    0x41d971f1,// 112 PAY  77 

    0x86da9294,// 113 PAY  78 

    0xd02db701,// 114 PAY  79 

    0xc2a5e2b3,// 115 PAY  80 

    0xeb0d0690,// 116 PAY  81 

    0x7c6b8230,// 117 PAY  82 

    0x2d8e3c4f,// 118 PAY  83 

    0xab634c74,// 119 PAY  84 

    0x17d92658,// 120 PAY  85 

    0x50fa97a8,// 121 PAY  86 

    0x4cd94115,// 122 PAY  87 

    0xd20d4a8f,// 123 PAY  88 

    0xd5c403f1,// 124 PAY  89 

    0xd4613fe0,// 125 PAY  90 

    0x087423f8,// 126 PAY  91 

    0x10ee0277,// 127 PAY  92 

    0x2939f281,// 128 PAY  93 

    0x63a0d281,// 129 PAY  94 

    0x652d26ca,// 130 PAY  95 

    0xee564647,// 131 PAY  96 

    0xbe7c7e48,// 132 PAY  97 

    0xd8999ffe,// 133 PAY  98 

    0x818ef1ad,// 134 PAY  99 

    0x54758579,// 135 PAY 100 

    0x2f282e65,// 136 PAY 101 

    0x78aa780d,// 137 PAY 102 

    0xc5aeb73e,// 138 PAY 103 

    0x9be63c2c,// 139 PAY 104 

    0x7ea28529,// 140 PAY 105 

    0x21754c0d,// 141 PAY 106 

    0xe51da996,// 142 PAY 107 

    0xd186ab37,// 143 PAY 108 

    0x2122efd8,// 144 PAY 109 

    0xa7138d5a,// 145 PAY 110 

    0xdb3ced60,// 146 PAY 111 

    0x631de8ab,// 147 PAY 112 

    0x2eb553f2,// 148 PAY 113 

    0x79bd7633,// 149 PAY 114 

    0x504d6db0,// 150 PAY 115 

    0xbe43468c,// 151 PAY 116 

    0xe3a10c20,// 152 PAY 117 

    0x627e413d,// 153 PAY 118 

    0x3dfafce2,// 154 PAY 119 

    0xe5e078b1,// 155 PAY 120 

    0x3086cff4,// 156 PAY 121 

    0x181e5c0b,// 157 PAY 122 

    0xb034153c,// 158 PAY 123 

    0xa351e57f,// 159 PAY 124 

    0x88b19a8d,// 160 PAY 125 

    0xe6052ce4,// 161 PAY 126 

    0xf7eb5bd2,// 162 PAY 127 

    0x0c2eb0d7,// 163 PAY 128 

    0x5b358782,// 164 PAY 129 

    0x70356020,// 165 PAY 130 

    0x0d67189d,// 166 PAY 131 

    0xba77e307,// 167 PAY 132 

    0x3364b670,// 168 PAY 133 

    0xe29b4715,// 169 PAY 134 

    0xd7a164c5,// 170 PAY 135 

    0x62eedb86,// 171 PAY 136 

    0x4df96995,// 172 PAY 137 

    0xf71e28ee,// 173 PAY 138 

    0x0cf7e972,// 174 PAY 139 

    0x0378e741,// 175 PAY 140 

    0xf744cf38,// 176 PAY 141 

    0xd564f15b,// 177 PAY 142 

    0x9367033c,// 178 PAY 143 

    0xa801024b,// 179 PAY 144 

    0xc96d5c7a,// 180 PAY 145 

    0x9c372d55,// 181 PAY 146 

    0xfb4093d4,// 182 PAY 147 

    0x2c3b6208,// 183 PAY 148 

    0x81d9dae2,// 184 PAY 149 

    0x3778083d,// 185 PAY 150 

    0x47faf431,// 186 PAY 151 

    0x17d48cc5,// 187 PAY 152 

    0x97308ed6,// 188 PAY 153 

    0xe7cfdb89,// 189 PAY 154 

    0x18c7c712,// 190 PAY 155 

    0x0b01db2c,// 191 PAY 156 

    0xe2c17c57,// 192 PAY 157 

    0xa491e6b1,// 193 PAY 158 

    0x892cd6fa,// 194 PAY 159 

    0xba168a8b,// 195 PAY 160 

    0x8d07f44b,// 196 PAY 161 

    0xaee747b3,// 197 PAY 162 

    0x37439622,// 198 PAY 163 

    0x831def61,// 199 PAY 164 

    0xd23fe6a6,// 200 PAY 165 

    0x3587bf2e,// 201 PAY 166 

    0xea9f9089,// 202 PAY 167 

    0xd1bdfe66,// 203 PAY 168 

    0xa3efe0d2,// 204 PAY 169 

    0xefc009ff,// 205 PAY 170 

    0x4bc84151,// 206 PAY 171 

    0x52f4f6ac,// 207 PAY 172 

    0xa775b331,// 208 PAY 173 

    0x152f24c0,// 209 PAY 174 

    0x5cd91ee1,// 210 PAY 175 

    0x6ec5c4b6,// 211 PAY 176 

    0xa753be4b,// 212 PAY 177 

    0x88bd1a93,// 213 PAY 178 

    0xeeeb0958,// 214 PAY 179 

    0xdb8dddf3,// 215 PAY 180 

    0x432c2c68,// 216 PAY 181 

    0x13c6d59d,// 217 PAY 182 

    0xaf279e3e,// 218 PAY 183 

    0xa7328f88,// 219 PAY 184 

    0x05266c01,// 220 PAY 185 

    0x62a31e47,// 221 PAY 186 

    0x8cd6d263,// 222 PAY 187 

    0x271872f7,// 223 PAY 188 

    0x545b8b1d,// 224 PAY 189 

    0xb60266b8,// 225 PAY 190 

    0x099196d7,// 226 PAY 191 

    0x9ba34763,// 227 PAY 192 

    0x7a98c3ff,// 228 PAY 193 

    0x552fd3c0,// 229 PAY 194 

    0x7a82c80c,// 230 PAY 195 

    0x9916e535,// 231 PAY 196 

    0xc3f5040f,// 232 PAY 197 

    0x4d8d4de7,// 233 PAY 198 

    0xe3837ab2,// 234 PAY 199 

    0x271b472f,// 235 PAY 200 

    0xf891b655,// 236 PAY 201 

    0x44b6f924,// 237 PAY 202 

    0xfa1f77fc,// 238 PAY 203 

    0x249b41a7,// 239 PAY 204 

    0xc81a2520,// 240 PAY 205 

    0x42435ba2,// 241 PAY 206 

    0x3c8e161f,// 242 PAY 207 

    0xead4f973,// 243 PAY 208 

    0xedb75cc0,// 244 PAY 209 

    0xfe658c61,// 245 PAY 210 

    0xa2da90e5,// 246 PAY 211 

    0xeb4fe64b,// 247 PAY 212 

    0x16a41172,// 248 PAY 213 

    0x537c5d2d,// 249 PAY 214 

    0x25577f96,// 250 PAY 215 

    0x4d2f45de,// 251 PAY 216 

    0x378ea79a,// 252 PAY 217 

    0x659aec35,// 253 PAY 218 

    0x62cd576d,// 254 PAY 219 

    0xa7dadaaf,// 255 PAY 220 

    0xbdd95317,// 256 PAY 221 

    0x6c0036db,// 257 PAY 222 

    0x83461faf,// 258 PAY 223 

    0x8aebd39d,// 259 PAY 224 

    0xb41d758b,// 260 PAY 225 

    0x22feb7b8,// 261 PAY 226 

    0x35cfb5d0,// 262 PAY 227 

    0x2e02a379,// 263 PAY 228 

    0x399ff76c,// 264 PAY 229 

    0xb7f79c05,// 265 PAY 230 

    0x151d00f6,// 266 PAY 231 

    0x1d748789,// 267 PAY 232 

    0xb47fb179,// 268 PAY 233 

    0xc165ee72,// 269 PAY 234 

    0x2c3a19c4,// 270 PAY 235 

    0xc39f36e6,// 271 PAY 236 

    0x283d77b7,// 272 PAY 237 

    0x9a6d6463,// 273 PAY 238 

    0x02d9002b,// 274 PAY 239 

    0x562d07a6,// 275 PAY 240 

    0x0b9cb7cf,// 276 PAY 241 

    0xbae2f6be,// 277 PAY 242 

    0x1e5eb07d,// 278 PAY 243 

    0x34b6a1ac,// 279 PAY 244 

    0x62ac86fd,// 280 PAY 245 

    0xc6b6ed34,// 281 PAY 246 

    0xa50751ff,// 282 PAY 247 

    0xc84142f3,// 283 PAY 248 

    0xa3a25d6a,// 284 PAY 249 

    0xf41280f1,// 285 PAY 250 

    0x23b94d5f,// 286 PAY 251 

    0x16358dc3,// 287 PAY 252 

    0x74cc3a77,// 288 PAY 253 

    0x42988ca4,// 289 PAY 254 

    0x36d3e27f,// 290 PAY 255 

    0x9a8cd1a3,// 291 PAY 256 

    0xe71d26cf,// 292 PAY 257 

    0x5109591d,// 293 PAY 258 

    0x7de66e6e,// 294 PAY 259 

    0xabdf2061,// 295 PAY 260 

    0x7b8999f4,// 296 PAY 261 

    0xa0e716e8,// 297 PAY 262 

    0x73b93e9f,// 298 PAY 263 

    0x68163a4b,// 299 PAY 264 

    0x732b3373,// 300 PAY 265 

    0x314e631c,// 301 PAY 266 

    0x0a704cc3,// 302 PAY 267 

    0xd4b94b3c,// 303 PAY 268 

    0xe58310d1,// 304 PAY 269 

    0xfc0e46b0,// 305 PAY 270 

    0xf5e0c104,// 306 PAY 271 

    0x2e7697a9,// 307 PAY 272 

    0xd63a495b,// 308 PAY 273 

    0xa8fd770f,// 309 PAY 274 

    0x3f780201,// 310 PAY 275 

    0x92af4d3f,// 311 PAY 276 

    0x5864c036,// 312 PAY 277 

    0xf453fae4,// 313 PAY 278 

    0x83d6de1d,// 314 PAY 279 

    0x00c1ea8f,// 315 PAY 280 

    0xd1f6fc07,// 316 PAY 281 

    0x0852b756,// 317 PAY 282 

    0xe10e5a04,// 318 PAY 283 

    0x268f8199,// 319 PAY 284 

    0x64c5374a,// 320 PAY 285 

    0x08cf0000,// 321 PAY 286 

/// STA is 1 words. 

/// STA num_pkts       : 214 

/// STA pkt_idx        : 7 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xfa 

    0x001cfad6 // 322 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt36_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x03 

/// ECH pdu_tag        : 0x00 

    0x00030000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x80452879,// 4 SCX   2 

    0x00005342,// 5 SCX   3 

    0xe6009d69,// 6 SCX   4 

    0x2efd22ce,// 7 SCX   5 

    0x46ed1c19,// 8 SCX   6 

    0x38150954,// 9 SCX   7 

    0xc9e2ae96,// 10 SCX   8 

    0xfe07e242,// 11 SCX   9 

    0x125f9b8e,// 12 SCX  10 

    0x2e335692,// 13 SCX  11 

    0x30e99c54,// 14 SCX  12 

    0x4203d84e,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 2018 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1001 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1001 

/// BFD lencrypto      : 224 

/// BFD ofstcrypto     : 92 

/// BFD (ofst+len)cry  : 316 

/// BFD ofstiv         : 84 

/// BFD ofsticv        : 1908 

    0x000003e9,// 16 BFD   1 

    0x005c00e0,// 17 BFD   2 

    0x07740054,// 18 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00bc95,// 19 MFM   1 

    0x3f3bf411,// 20 MFM   2 

    0x3d66b62b,// 21 MFM   3 

    0xf3edf822,// 22 MFM   4 

    0xdbfad767,// 23 MFM   5 

    0x031bdf36,// 24 MFM   6 

    0xe7c21d4f,// 25 MFM   7 

    0x487f0dec,// 26 MFM   8 

    0xc953f18e,// 27 MFM   9 

    0x5287a7fd,// 28 MFM  10 

    0x2a9bc24e,// 29 MFM  11 

    0x2f94bd95,// 30 MFM  12 

    0x447b5456,// 31 MFM  13 

    0x1b2b9bb2,// 32 MFM  14 

    0x9f2fc8c7,// 33 MFM  15 

    0xec39e767,// 34 MFM  16 

/// BDA is 506 words. 

/// BDA size     is 2018 (0x7e2) 

/// BDA id       is 0xda48 

    0x07e2da48,// 35 BDA   1 

/// PAY Generic Data size   : 2018 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xa99a9fc3,// 36 PAY   1 

    0x2d793b24,// 37 PAY   2 

    0xcc4e0838,// 38 PAY   3 

    0xacfc823c,// 39 PAY   4 

    0xf85c8b99,// 40 PAY   5 

    0xc5c35769,// 41 PAY   6 

    0xfd49b5c9,// 42 PAY   7 

    0xa15161ed,// 43 PAY   8 

    0x60056d3d,// 44 PAY   9 

    0x2378f733,// 45 PAY  10 

    0x4b542ee2,// 46 PAY  11 

    0x26f81d2a,// 47 PAY  12 

    0x95778f69,// 48 PAY  13 

    0x1ace4d7d,// 49 PAY  14 

    0x780527be,// 50 PAY  15 

    0x79f979c4,// 51 PAY  16 

    0xc2c52ec6,// 52 PAY  17 

    0xe8b61cde,// 53 PAY  18 

    0x37f5daaf,// 54 PAY  19 

    0xc9efd3c5,// 55 PAY  20 

    0xdf0b4a6a,// 56 PAY  21 

    0x888dcd57,// 57 PAY  22 

    0x314a70b9,// 58 PAY  23 

    0x6f1bea7b,// 59 PAY  24 

    0x5feee461,// 60 PAY  25 

    0x0bd5a596,// 61 PAY  26 

    0xbe5ef6aa,// 62 PAY  27 

    0x0f955a3c,// 63 PAY  28 

    0x98deee66,// 64 PAY  29 

    0xb041cf6a,// 65 PAY  30 

    0x68d30e14,// 66 PAY  31 

    0xda00bd39,// 67 PAY  32 

    0xa37284a1,// 68 PAY  33 

    0x7977c644,// 69 PAY  34 

    0x60a23898,// 70 PAY  35 

    0xa5ff15ce,// 71 PAY  36 

    0x7fc6b1ab,// 72 PAY  37 

    0x39026092,// 73 PAY  38 

    0xf45cfaac,// 74 PAY  39 

    0x8257b146,// 75 PAY  40 

    0x7d200c13,// 76 PAY  41 

    0xc6e15284,// 77 PAY  42 

    0x4a1f9cbb,// 78 PAY  43 

    0x18a2a1df,// 79 PAY  44 

    0x0d0ffca7,// 80 PAY  45 

    0x6c2bed2c,// 81 PAY  46 

    0x0c199c08,// 82 PAY  47 

    0xc443759a,// 83 PAY  48 

    0x34315194,// 84 PAY  49 

    0x70279564,// 85 PAY  50 

    0x130da563,// 86 PAY  51 

    0x58f80576,// 87 PAY  52 

    0x5c3b579f,// 88 PAY  53 

    0x9025a0b7,// 89 PAY  54 

    0xb992d8b7,// 90 PAY  55 

    0x9ab65f7a,// 91 PAY  56 

    0x1fbd68e1,// 92 PAY  57 

    0x6987feb5,// 93 PAY  58 

    0xb2d7a0b3,// 94 PAY  59 

    0xcc32e4fa,// 95 PAY  60 

    0x3700f37e,// 96 PAY  61 

    0x476f30d6,// 97 PAY  62 

    0x87fee931,// 98 PAY  63 

    0x5511d158,// 99 PAY  64 

    0x7766eeee,// 100 PAY  65 

    0x66372153,// 101 PAY  66 

    0x8e46c5f5,// 102 PAY  67 

    0xac3855f7,// 103 PAY  68 

    0xa0a12dc5,// 104 PAY  69 

    0x3231101d,// 105 PAY  70 

    0x607fc71e,// 106 PAY  71 

    0x1d74c33a,// 107 PAY  72 

    0x635a300b,// 108 PAY  73 

    0x84eff2de,// 109 PAY  74 

    0x48ddcb8e,// 110 PAY  75 

    0xf66cacbe,// 111 PAY  76 

    0x1be55693,// 112 PAY  77 

    0x6a7db5c1,// 113 PAY  78 

    0xfe69a555,// 114 PAY  79 

    0xee13c9d8,// 115 PAY  80 

    0x015b72a4,// 116 PAY  81 

    0x75368370,// 117 PAY  82 

    0x06bd1442,// 118 PAY  83 

    0x04ad5142,// 119 PAY  84 

    0xef211270,// 120 PAY  85 

    0x5207aa28,// 121 PAY  86 

    0x37ed3e1d,// 122 PAY  87 

    0x4b5cf2b9,// 123 PAY  88 

    0x870b2af2,// 124 PAY  89 

    0x4a3c9a55,// 125 PAY  90 

    0x9acd9659,// 126 PAY  91 

    0xdf7c9829,// 127 PAY  92 

    0xc20c84fa,// 128 PAY  93 

    0x34a94eb8,// 129 PAY  94 

    0x8b19d8b2,// 130 PAY  95 

    0x59b454c8,// 131 PAY  96 

    0x9cc82386,// 132 PAY  97 

    0xf637c6b2,// 133 PAY  98 

    0xa4fb8512,// 134 PAY  99 

    0x12e9e44c,// 135 PAY 100 

    0xcaf02f19,// 136 PAY 101 

    0x8a8754b0,// 137 PAY 102 

    0x302c32c5,// 138 PAY 103 

    0x2d7e9efe,// 139 PAY 104 

    0x868d5c01,// 140 PAY 105 

    0xc6031c90,// 141 PAY 106 

    0x2749fed5,// 142 PAY 107 

    0xa404911c,// 143 PAY 108 

    0x2596d519,// 144 PAY 109 

    0xf9c37ba7,// 145 PAY 110 

    0x492430f1,// 146 PAY 111 

    0xe85075aa,// 147 PAY 112 

    0x4df9d25a,// 148 PAY 113 

    0xe7dbb4d2,// 149 PAY 114 

    0x2dc33677,// 150 PAY 115 

    0xd0778dc7,// 151 PAY 116 

    0x7e7ba748,// 152 PAY 117 

    0x66888604,// 153 PAY 118 

    0x44beba7c,// 154 PAY 119 

    0x1566b695,// 155 PAY 120 

    0x72c369c8,// 156 PAY 121 

    0x10c267d7,// 157 PAY 122 

    0x18adea9c,// 158 PAY 123 

    0x88420930,// 159 PAY 124 

    0x5bdc912c,// 160 PAY 125 

    0x0c8663da,// 161 PAY 126 

    0x02427f8b,// 162 PAY 127 

    0xa8ae4598,// 163 PAY 128 

    0x9fd77510,// 164 PAY 129 

    0xdc33d748,// 165 PAY 130 

    0x0b7cd491,// 166 PAY 131 

    0xddbd3201,// 167 PAY 132 

    0x349f76d1,// 168 PAY 133 

    0xa4bf0f54,// 169 PAY 134 

    0x86450c88,// 170 PAY 135 

    0x331135ee,// 171 PAY 136 

    0x092f0aaa,// 172 PAY 137 

    0xc08b19f3,// 173 PAY 138 

    0xe4ea32c3,// 174 PAY 139 

    0xdf0597ac,// 175 PAY 140 

    0x9332fa23,// 176 PAY 141 

    0x9f682c16,// 177 PAY 142 

    0x12e6bd2a,// 178 PAY 143 

    0x83eeeb7f,// 179 PAY 144 

    0x013d6cee,// 180 PAY 145 

    0xed077720,// 181 PAY 146 

    0x286fd9d1,// 182 PAY 147 

    0x373d3e18,// 183 PAY 148 

    0x05507c46,// 184 PAY 149 

    0xdee1eb01,// 185 PAY 150 

    0xe524699e,// 186 PAY 151 

    0xb9ed988a,// 187 PAY 152 

    0xecffe644,// 188 PAY 153 

    0xba382615,// 189 PAY 154 

    0x674a20b8,// 190 PAY 155 

    0x34b7e0ba,// 191 PAY 156 

    0x4a4238ac,// 192 PAY 157 

    0x80f7aad4,// 193 PAY 158 

    0x33ec42f2,// 194 PAY 159 

    0x246953fa,// 195 PAY 160 

    0x42dc9453,// 196 PAY 161 

    0xbd4593ba,// 197 PAY 162 

    0x2eafb682,// 198 PAY 163 

    0x994f83b0,// 199 PAY 164 

    0x68fca5b4,// 200 PAY 165 

    0x1e51dd88,// 201 PAY 166 

    0x7d158fff,// 202 PAY 167 

    0x3e3c66b4,// 203 PAY 168 

    0xb4e89601,// 204 PAY 169 

    0xe50a873a,// 205 PAY 170 

    0x56b51668,// 206 PAY 171 

    0x82a949b9,// 207 PAY 172 

    0xcf85cf6e,// 208 PAY 173 

    0x8483a78c,// 209 PAY 174 

    0xf77005ce,// 210 PAY 175 

    0x89453741,// 211 PAY 176 

    0x35a6212d,// 212 PAY 177 

    0x4188ae53,// 213 PAY 178 

    0x53109139,// 214 PAY 179 

    0x688b60de,// 215 PAY 180 

    0xb26d5207,// 216 PAY 181 

    0xd979cbe0,// 217 PAY 182 

    0x877ffa18,// 218 PAY 183 

    0x289aa95d,// 219 PAY 184 

    0xaa489736,// 220 PAY 185 

    0x457bd882,// 221 PAY 186 

    0x5f9e83ee,// 222 PAY 187 

    0xc0fbfe3f,// 223 PAY 188 

    0x5614cc74,// 224 PAY 189 

    0xc1954565,// 225 PAY 190 

    0x2dc693a9,// 226 PAY 191 

    0xf9057d40,// 227 PAY 192 

    0xdf5bda80,// 228 PAY 193 

    0x8b232273,// 229 PAY 194 

    0xa7e088d8,// 230 PAY 195 

    0x22b92393,// 231 PAY 196 

    0x90b118fe,// 232 PAY 197 

    0xfc8113de,// 233 PAY 198 

    0x9a557a81,// 234 PAY 199 

    0xd4591149,// 235 PAY 200 

    0xd76b35a1,// 236 PAY 201 

    0x14ffb0f3,// 237 PAY 202 

    0x8ded7388,// 238 PAY 203 

    0x43df54c5,// 239 PAY 204 

    0xa28a8787,// 240 PAY 205 

    0x5e191b76,// 241 PAY 206 

    0xb5e462b3,// 242 PAY 207 

    0xe66ddd28,// 243 PAY 208 

    0xae2489a1,// 244 PAY 209 

    0xa7366bd5,// 245 PAY 210 

    0xd0ab396e,// 246 PAY 211 

    0x83c12459,// 247 PAY 212 

    0x93514a95,// 248 PAY 213 

    0x53f441c4,// 249 PAY 214 

    0x4bbbab34,// 250 PAY 215 

    0x42c145c1,// 251 PAY 216 

    0xeb529e17,// 252 PAY 217 

    0x73ad364b,// 253 PAY 218 

    0xa4287dd9,// 254 PAY 219 

    0xff0b1a86,// 255 PAY 220 

    0xd6edc392,// 256 PAY 221 

    0xc523fa07,// 257 PAY 222 

    0x02c7d024,// 258 PAY 223 

    0xa2e98ab6,// 259 PAY 224 

    0x3404c55e,// 260 PAY 225 

    0xed8c3379,// 261 PAY 226 

    0x043bf689,// 262 PAY 227 

    0x8a2d9ed2,// 263 PAY 228 

    0xab52c933,// 264 PAY 229 

    0x3576fef7,// 265 PAY 230 

    0x3de63b26,// 266 PAY 231 

    0xc8907638,// 267 PAY 232 

    0x4d47370a,// 268 PAY 233 

    0xea8c6ef3,// 269 PAY 234 

    0xdd237b07,// 270 PAY 235 

    0xcc9e318d,// 271 PAY 236 

    0xd2e00c73,// 272 PAY 237 

    0x6d7d18ba,// 273 PAY 238 

    0x78ef0c89,// 274 PAY 239 

    0xe6a93253,// 275 PAY 240 

    0x742dc0d7,// 276 PAY 241 

    0x163e9cd9,// 277 PAY 242 

    0x85138daa,// 278 PAY 243 

    0x11c5a6c9,// 279 PAY 244 

    0x1ff947ba,// 280 PAY 245 

    0xe2cb008f,// 281 PAY 246 

    0x9ac3cbd3,// 282 PAY 247 

    0xcf96ff4e,// 283 PAY 248 

    0x5cde7d9e,// 284 PAY 249 

    0xa041242f,// 285 PAY 250 

    0xce91deb6,// 286 PAY 251 

    0xf7a075df,// 287 PAY 252 

    0x8bfc4dc5,// 288 PAY 253 

    0x09743f8b,// 289 PAY 254 

    0x9ca1f7af,// 290 PAY 255 

    0x07c95f32,// 291 PAY 256 

    0x941a742c,// 292 PAY 257 

    0x52f2c505,// 293 PAY 258 

    0x8c717513,// 294 PAY 259 

    0x7d114fd5,// 295 PAY 260 

    0x04193995,// 296 PAY 261 

    0x1bb58c9c,// 297 PAY 262 

    0xcfbeb79e,// 298 PAY 263 

    0xa3a777c7,// 299 PAY 264 

    0x37d1d3c5,// 300 PAY 265 

    0xf5ac4b3a,// 301 PAY 266 

    0x7fc9549e,// 302 PAY 267 

    0xc0028a41,// 303 PAY 268 

    0x318caebd,// 304 PAY 269 

    0xf33194de,// 305 PAY 270 

    0xf8070721,// 306 PAY 271 

    0xba9e9fb9,// 307 PAY 272 

    0x340e1c88,// 308 PAY 273 

    0xeefb0350,// 309 PAY 274 

    0x6de9555d,// 310 PAY 275 

    0x99dff289,// 311 PAY 276 

    0x5a65e188,// 312 PAY 277 

    0x81624a9d,// 313 PAY 278 

    0xd23d4dd0,// 314 PAY 279 

    0x7f27a065,// 315 PAY 280 

    0x3eb63a8f,// 316 PAY 281 

    0x5e47e6ff,// 317 PAY 282 

    0x8b6575ae,// 318 PAY 283 

    0x439428a8,// 319 PAY 284 

    0xdc3f413c,// 320 PAY 285 

    0xb02aa103,// 321 PAY 286 

    0xa87d40ea,// 322 PAY 287 

    0x7f665465,// 323 PAY 288 

    0xe4922c2c,// 324 PAY 289 

    0x009cdd3a,// 325 PAY 290 

    0x3c6d14bd,// 326 PAY 291 

    0x49bf5e78,// 327 PAY 292 

    0xcc53e25f,// 328 PAY 293 

    0xe4d9c1cf,// 329 PAY 294 

    0xef256d9f,// 330 PAY 295 

    0x981af0b0,// 331 PAY 296 

    0xc39104be,// 332 PAY 297 

    0xa3c705db,// 333 PAY 298 

    0x4639a7d1,// 334 PAY 299 

    0x8ea8355f,// 335 PAY 300 

    0x642f54bc,// 336 PAY 301 

    0x070c33ab,// 337 PAY 302 

    0xeac31928,// 338 PAY 303 

    0x742c1f25,// 339 PAY 304 

    0x0075466a,// 340 PAY 305 

    0xef8421cc,// 341 PAY 306 

    0x5837074b,// 342 PAY 307 

    0x8fd347a6,// 343 PAY 308 

    0xf847658e,// 344 PAY 309 

    0x24ff00b7,// 345 PAY 310 

    0x3a024f73,// 346 PAY 311 

    0x39dac282,// 347 PAY 312 

    0x454fb5b1,// 348 PAY 313 

    0xd5a7a97b,// 349 PAY 314 

    0xdb488102,// 350 PAY 315 

    0x2b257695,// 351 PAY 316 

    0x094dbb3f,// 352 PAY 317 

    0x111111de,// 353 PAY 318 

    0xb69bb39f,// 354 PAY 319 

    0x2c200f0b,// 355 PAY 320 

    0xc34b42e1,// 356 PAY 321 

    0xdb707342,// 357 PAY 322 

    0x202fe9e2,// 358 PAY 323 

    0xe6239ba8,// 359 PAY 324 

    0x48980e12,// 360 PAY 325 

    0xdff5b057,// 361 PAY 326 

    0xac345ced,// 362 PAY 327 

    0xd0c5d626,// 363 PAY 328 

    0xa9abb0ec,// 364 PAY 329 

    0x7aaffd01,// 365 PAY 330 

    0x78ff7fed,// 366 PAY 331 

    0x9abe8881,// 367 PAY 332 

    0xf4e2125d,// 368 PAY 333 

    0xd891f4de,// 369 PAY 334 

    0xd56a8174,// 370 PAY 335 

    0x0df4bb4d,// 371 PAY 336 

    0xb4d6a385,// 372 PAY 337 

    0xfed43e67,// 373 PAY 338 

    0x58587096,// 374 PAY 339 

    0x4f82db3f,// 375 PAY 340 

    0xb801c09c,// 376 PAY 341 

    0xc0b9b0aa,// 377 PAY 342 

    0xfa822306,// 378 PAY 343 

    0xa08906e2,// 379 PAY 344 

    0x8c8325df,// 380 PAY 345 

    0x08eeb756,// 381 PAY 346 

    0x7483e803,// 382 PAY 347 

    0x0736acef,// 383 PAY 348 

    0xcc2135bb,// 384 PAY 349 

    0x7d3f31ff,// 385 PAY 350 

    0xb37f9211,// 386 PAY 351 

    0xf1c88eeb,// 387 PAY 352 

    0xe800f012,// 388 PAY 353 

    0xb291de34,// 389 PAY 354 

    0x686734d7,// 390 PAY 355 

    0x83b8cc25,// 391 PAY 356 

    0x98f95149,// 392 PAY 357 

    0x2d775dee,// 393 PAY 358 

    0x3cde4ba5,// 394 PAY 359 

    0x9959d9fe,// 395 PAY 360 

    0xc1b711e6,// 396 PAY 361 

    0x2e02d654,// 397 PAY 362 

    0x01be395d,// 398 PAY 363 

    0xebbbf3c2,// 399 PAY 364 

    0x8506a3f5,// 400 PAY 365 

    0x3cfdd87e,// 401 PAY 366 

    0x510891a1,// 402 PAY 367 

    0x04d29623,// 403 PAY 368 

    0x97ec115f,// 404 PAY 369 

    0xd3649ae5,// 405 PAY 370 

    0x4fb7a429,// 406 PAY 371 

    0x28f4d97a,// 407 PAY 372 

    0x09a43eb5,// 408 PAY 373 

    0xac609d6c,// 409 PAY 374 

    0x31e37f16,// 410 PAY 375 

    0x1f86829d,// 411 PAY 376 

    0x0cc21463,// 412 PAY 377 

    0xe50d48a5,// 413 PAY 378 

    0x2503d36e,// 414 PAY 379 

    0x313d7d5b,// 415 PAY 380 

    0x485e1ae1,// 416 PAY 381 

    0xf560ab64,// 417 PAY 382 

    0xcedd1ca2,// 418 PAY 383 

    0x2df9702a,// 419 PAY 384 

    0x90c8f06d,// 420 PAY 385 

    0xc312828d,// 421 PAY 386 

    0x1597ec15,// 422 PAY 387 

    0x212013ba,// 423 PAY 388 

    0x4eb2dea2,// 424 PAY 389 

    0x707674e0,// 425 PAY 390 

    0xce3b5cf1,// 426 PAY 391 

    0x09400d9c,// 427 PAY 392 

    0xf96d329d,// 428 PAY 393 

    0xbd1dc68b,// 429 PAY 394 

    0x692d9f99,// 430 PAY 395 

    0x6da97b0e,// 431 PAY 396 

    0xfda48aca,// 432 PAY 397 

    0xe8a059a2,// 433 PAY 398 

    0x7f3d9221,// 434 PAY 399 

    0x92016f3d,// 435 PAY 400 

    0x20ef65a9,// 436 PAY 401 

    0xe7faf5fc,// 437 PAY 402 

    0x617cb335,// 438 PAY 403 

    0x0b9baa6b,// 439 PAY 404 

    0x78107619,// 440 PAY 405 

    0x27911ee8,// 441 PAY 406 

    0x51f8f823,// 442 PAY 407 

    0xa98e5aee,// 443 PAY 408 

    0x06121f9d,// 444 PAY 409 

    0x45e01e5c,// 445 PAY 410 

    0x3a7cac98,// 446 PAY 411 

    0x24cc67c8,// 447 PAY 412 

    0x7c53579d,// 448 PAY 413 

    0xb729f9a7,// 449 PAY 414 

    0xc7650f23,// 450 PAY 415 

    0x64d5a972,// 451 PAY 416 

    0xad3e53c6,// 452 PAY 417 

    0x6184caea,// 453 PAY 418 

    0x6ae7912b,// 454 PAY 419 

    0x88423ceb,// 455 PAY 420 

    0x969def02,// 456 PAY 421 

    0x810c71bd,// 457 PAY 422 

    0xfd7e6d8b,// 458 PAY 423 

    0x6e33e05e,// 459 PAY 424 

    0xd2a5827a,// 460 PAY 425 

    0xb8943cb7,// 461 PAY 426 

    0xd623c823,// 462 PAY 427 

    0x81f7aeaa,// 463 PAY 428 

    0x006fcb2a,// 464 PAY 429 

    0xca73b8d1,// 465 PAY 430 

    0x45258ad8,// 466 PAY 431 

    0x5d0242c4,// 467 PAY 432 

    0xd9180b63,// 468 PAY 433 

    0xe2ac5c9f,// 469 PAY 434 

    0x74f83b9a,// 470 PAY 435 

    0xcbd52057,// 471 PAY 436 

    0x77cb2dfc,// 472 PAY 437 

    0x0a1dabde,// 473 PAY 438 

    0x0330328a,// 474 PAY 439 

    0xb928330d,// 475 PAY 440 

    0x048f83f9,// 476 PAY 441 

    0xa90fc135,// 477 PAY 442 

    0x01139ee0,// 478 PAY 443 

    0x0463bede,// 479 PAY 444 

    0x3308d0a2,// 480 PAY 445 

    0x00cb7bb7,// 481 PAY 446 

    0xc2c1d325,// 482 PAY 447 

    0x70a56cdf,// 483 PAY 448 

    0x35a26485,// 484 PAY 449 

    0x3ed70dd2,// 485 PAY 450 

    0xa8830d11,// 486 PAY 451 

    0x60fc214c,// 487 PAY 452 

    0xe74a7ac2,// 488 PAY 453 

    0xba26baff,// 489 PAY 454 

    0x9629dcb9,// 490 PAY 455 

    0xeb943f2b,// 491 PAY 456 

    0x719f3e71,// 492 PAY 457 

    0x063df3fe,// 493 PAY 458 

    0xdc6920ad,// 494 PAY 459 

    0xbd096e5d,// 495 PAY 460 

    0x1837bda2,// 496 PAY 461 

    0x4d5c0771,// 497 PAY 462 

    0x450c0c15,// 498 PAY 463 

    0xad50db61,// 499 PAY 464 

    0xe30b1739,// 500 PAY 465 

    0x2aae2ab0,// 501 PAY 466 

    0x080cd3c0,// 502 PAY 467 

    0x50ccd98c,// 503 PAY 468 

    0xf59bcfc9,// 504 PAY 469 

    0xa6a29821,// 505 PAY 470 

    0xf72e28e3,// 506 PAY 471 

    0x12411e9b,// 507 PAY 472 

    0x67f63079,// 508 PAY 473 

    0x6ff2ee0c,// 509 PAY 474 

    0x338a9c54,// 510 PAY 475 

    0x2b9675c2,// 511 PAY 476 

    0xf449cf15,// 512 PAY 477 

    0x57672ab8,// 513 PAY 478 

    0x1d973cc9,// 514 PAY 479 

    0x1e554c15,// 515 PAY 480 

    0xd5be6c18,// 516 PAY 481 

    0x67069072,// 517 PAY 482 

    0xcdb8902a,// 518 PAY 483 

    0x7a9a32de,// 519 PAY 484 

    0x6dc0204d,// 520 PAY 485 

    0x2cb331a6,// 521 PAY 486 

    0x111a02cb,// 522 PAY 487 

    0xa000773c,// 523 PAY 488 

    0xea937fb6,// 524 PAY 489 

    0xdbffe4e1,// 525 PAY 490 

    0x85d49d20,// 526 PAY 491 

    0x3b7be657,// 527 PAY 492 

    0xc800a305,// 528 PAY 493 

    0x5343717f,// 529 PAY 494 

    0xbdebf321,// 530 PAY 495 

    0x761c3464,// 531 PAY 496 

    0x0b2b9626,// 532 PAY 497 

    0x3ffa9ddd,// 533 PAY 498 

    0x91ca9822,// 534 PAY 499 

    0x762e0cb6,// 535 PAY 500 

    0x965bfdc3,// 536 PAY 501 

    0x4d63d4a5,// 537 PAY 502 

    0x0227d28d,// 538 PAY 503 

    0x91f0ce97,// 539 PAY 504 

    0x58ed0000,// 540 PAY 505 

/// STA is 1 words. 

/// STA num_pkts       : 178 

/// STA pkt_idx        : 254 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x32 

    0x03f932b2 // 541 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt37_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x0b 

/// ECH pdu_tag        : 0x00 

    0x000b0000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x804128cd,// 4 SCX   2 

    0x00004100,// 5 SCX   3 

    0xe66fc8c8,// 6 SCX   4 

    0xcaf8e88b,// 7 SCX   5 

    0x7fa6cc30,// 8 SCX   6 

    0xa951ec99,// 9 SCX   7 

    0x55f2d818,// 10 SCX   8 

    0xd4826d8d,// 11 SCX   9 

    0x28e554c1,// 12 SCX  10 

    0x922e3602,// 13 SCX  11 

    0xf5115ccf,// 14 SCX  12 

    0x33bc2472,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1994 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1507 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1507 

/// BFD lencrypto      : 952 

/// BFD ofstcrypto     : 244 

/// BFD (ofst+len)cry  : 1196 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 1820 

    0x000005e3,// 16 BFD   1 

    0x00f403b8,// 17 BFD   2 

    0x071c0004,// 18 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c007e77,// 19 MFM   1 

    0xc09f58b7,// 20 MFM   2 

    0x112e0376,// 21 MFM   3 

    0x340d1075,// 22 MFM   4 

    0x3c7f706e,// 23 MFM   5 

    0x8c95303a,// 24 MFM   6 

    0xf8573eb9,// 25 MFM   7 

    0x639b52fe,// 26 MFM   8 

    0x927cc7e5,// 27 MFM   9 

    0x035e9a88,// 28 MFM  10 

    0xcc2fa51c,// 29 MFM  11 

    0x31e524d4,// 30 MFM  12 

    0x4bfab0a0,// 31 MFM  13 

    0xf0e14f12,// 32 MFM  14 

    0xae6e1439,// 33 MFM  15 

    0xe52552b0,// 34 MFM  16 

/// BDA is 500 words. 

/// BDA size     is 1994 (0x7ca) 

/// BDA id       is 0x1608 

    0x07ca1608,// 35 BDA   1 

/// PAY Generic Data size   : 1994 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xa9049b54,// 36 PAY   1 

    0xf10eb311,// 37 PAY   2 

    0x258a24f4,// 38 PAY   3 

    0x01aca27a,// 39 PAY   4 

    0x91864d1a,// 40 PAY   5 

    0xba83aee2,// 41 PAY   6 

    0x6fc71baf,// 42 PAY   7 

    0x42e99a96,// 43 PAY   8 

    0x4726736a,// 44 PAY   9 

    0xbb2e5108,// 45 PAY  10 

    0xda13aaac,// 46 PAY  11 

    0x6fce0a3e,// 47 PAY  12 

    0x2886eb68,// 48 PAY  13 

    0x82da17f7,// 49 PAY  14 

    0x48beb3cd,// 50 PAY  15 

    0x5eea6033,// 51 PAY  16 

    0x365521f5,// 52 PAY  17 

    0x015dd40a,// 53 PAY  18 

    0x0eea7dc6,// 54 PAY  19 

    0x7fa3949d,// 55 PAY  20 

    0xde551d52,// 56 PAY  21 

    0x739c5ca4,// 57 PAY  22 

    0x7df26ef2,// 58 PAY  23 

    0x74ffa896,// 59 PAY  24 

    0x4331d89a,// 60 PAY  25 

    0x7dbc09a0,// 61 PAY  26 

    0xc28fa981,// 62 PAY  27 

    0x42e8f73d,// 63 PAY  28 

    0x43cb69b4,// 64 PAY  29 

    0xc0b7421b,// 65 PAY  30 

    0x2eb5fe59,// 66 PAY  31 

    0x56590717,// 67 PAY  32 

    0x0a7ef424,// 68 PAY  33 

    0xe01dfc8d,// 69 PAY  34 

    0x13d4e9f7,// 70 PAY  35 

    0xc7394764,// 71 PAY  36 

    0xed7c8f6a,// 72 PAY  37 

    0x0996a4cd,// 73 PAY  38 

    0x11f3b0f0,// 74 PAY  39 

    0x2a6720ed,// 75 PAY  40 

    0x6f3ce026,// 76 PAY  41 

    0xbeaca972,// 77 PAY  42 

    0xaa3bce02,// 78 PAY  43 

    0x00c54c9c,// 79 PAY  44 

    0xd7b39983,// 80 PAY  45 

    0xfeafb6f4,// 81 PAY  46 

    0xb7224df8,// 82 PAY  47 

    0xb2a01604,// 83 PAY  48 

    0x1abae8eb,// 84 PAY  49 

    0x8e6f4512,// 85 PAY  50 

    0xc576693b,// 86 PAY  51 

    0x028468a2,// 87 PAY  52 

    0x00733a41,// 88 PAY  53 

    0xe612a0b4,// 89 PAY  54 

    0x592bfa14,// 90 PAY  55 

    0x3f312c6a,// 91 PAY  56 

    0xb0819426,// 92 PAY  57 

    0x01551127,// 93 PAY  58 

    0xd88252b2,// 94 PAY  59 

    0xa89c2afd,// 95 PAY  60 

    0xf327ae9e,// 96 PAY  61 

    0x010e40c8,// 97 PAY  62 

    0x5a0c9a9e,// 98 PAY  63 

    0x63420279,// 99 PAY  64 

    0x8eb2f37b,// 100 PAY  65 

    0x553a03c9,// 101 PAY  66 

    0xde63a691,// 102 PAY  67 

    0x70fc486b,// 103 PAY  68 

    0x36cccf0b,// 104 PAY  69 

    0xb7591c73,// 105 PAY  70 

    0xb1e73d62,// 106 PAY  71 

    0x7d032f74,// 107 PAY  72 

    0x4896f790,// 108 PAY  73 

    0x51d1afa3,// 109 PAY  74 

    0x606c653e,// 110 PAY  75 

    0xdef8a6e9,// 111 PAY  76 

    0x1ea9b337,// 112 PAY  77 

    0x920efa38,// 113 PAY  78 

    0x72da9668,// 114 PAY  79 

    0x5c480f81,// 115 PAY  80 

    0x19cd8192,// 116 PAY  81 

    0x702b77a4,// 117 PAY  82 

    0x222f4a01,// 118 PAY  83 

    0x6fa5831d,// 119 PAY  84 

    0x5887dfcd,// 120 PAY  85 

    0xf54e3393,// 121 PAY  86 

    0x7646ebba,// 122 PAY  87 

    0xd037223b,// 123 PAY  88 

    0x7f529736,// 124 PAY  89 

    0xe69ec391,// 125 PAY  90 

    0x4b9ffb8b,// 126 PAY  91 

    0xcd86fdda,// 127 PAY  92 

    0x272804b4,// 128 PAY  93 

    0x2118ae65,// 129 PAY  94 

    0x85656025,// 130 PAY  95 

    0x9d12f6b6,// 131 PAY  96 

    0x57687a52,// 132 PAY  97 

    0x44497340,// 133 PAY  98 

    0x43c3e2a6,// 134 PAY  99 

    0x4ac39cee,// 135 PAY 100 

    0x4688e8f1,// 136 PAY 101 

    0x651c0db7,// 137 PAY 102 

    0x949e1b90,// 138 PAY 103 

    0xeff10dfe,// 139 PAY 104 

    0x8bb0174b,// 140 PAY 105 

    0x5cb75a27,// 141 PAY 106 

    0x5a509eec,// 142 PAY 107 

    0xf50f556b,// 143 PAY 108 

    0xa2c564ae,// 144 PAY 109 

    0x23ea3ec6,// 145 PAY 110 

    0xed1a0f83,// 146 PAY 111 

    0x1a6e2d66,// 147 PAY 112 

    0x58a8aa9d,// 148 PAY 113 

    0x2c46c3d9,// 149 PAY 114 

    0x62956368,// 150 PAY 115 

    0x5d94fccc,// 151 PAY 116 

    0x37328f42,// 152 PAY 117 

    0x6c377aa4,// 153 PAY 118 

    0x98838c35,// 154 PAY 119 

    0x2c56645a,// 155 PAY 120 

    0x89c7ee04,// 156 PAY 121 

    0x48793046,// 157 PAY 122 

    0x799af475,// 158 PAY 123 

    0x1f78eda3,// 159 PAY 124 

    0x9a5ce2f6,// 160 PAY 125 

    0xbdb5ea38,// 161 PAY 126 

    0xf78134be,// 162 PAY 127 

    0xc3efe2fa,// 163 PAY 128 

    0xdb781718,// 164 PAY 129 

    0xaba0b19a,// 165 PAY 130 

    0x089158a4,// 166 PAY 131 

    0x397ed301,// 167 PAY 132 

    0x0df50ae2,// 168 PAY 133 

    0x0afa68f6,// 169 PAY 134 

    0x050baee7,// 170 PAY 135 

    0xd44f66c1,// 171 PAY 136 

    0x787cff0b,// 172 PAY 137 

    0xfd0a9108,// 173 PAY 138 

    0xe0d1b5f7,// 174 PAY 139 

    0xda0fce62,// 175 PAY 140 

    0x8ccd870c,// 176 PAY 141 

    0x97a15e19,// 177 PAY 142 

    0x938b2a82,// 178 PAY 143 

    0xf389d9a5,// 179 PAY 144 

    0x7b7919aa,// 180 PAY 145 

    0x6d8b2fcc,// 181 PAY 146 

    0x993ea778,// 182 PAY 147 

    0x8dcbe3f8,// 183 PAY 148 

    0xe774e4de,// 184 PAY 149 

    0xfb798e8b,// 185 PAY 150 

    0x23bb33ac,// 186 PAY 151 

    0xd1297b8d,// 187 PAY 152 

    0xf242d97f,// 188 PAY 153 

    0x42aedfec,// 189 PAY 154 

    0x9bbaca8d,// 190 PAY 155 

    0x5b43bac4,// 191 PAY 156 

    0xc1c8ecf6,// 192 PAY 157 

    0x6cdaa66d,// 193 PAY 158 

    0x92ac3efe,// 194 PAY 159 

    0xf51bca7a,// 195 PAY 160 

    0xbc7d471c,// 196 PAY 161 

    0x435498b4,// 197 PAY 162 

    0x79adb18c,// 198 PAY 163 

    0xfab04ae0,// 199 PAY 164 

    0x04283868,// 200 PAY 165 

    0x4028ec3d,// 201 PAY 166 

    0xc300b4b8,// 202 PAY 167 

    0x2a67c86f,// 203 PAY 168 

    0x58c5c2e4,// 204 PAY 169 

    0xe7884470,// 205 PAY 170 

    0x46c22f33,// 206 PAY 171 

    0x1862beb7,// 207 PAY 172 

    0x115e30c9,// 208 PAY 173 

    0x543b6a70,// 209 PAY 174 

    0xb1923191,// 210 PAY 175 

    0xffc8dfe7,// 211 PAY 176 

    0xbf0c98c1,// 212 PAY 177 

    0x8b289865,// 213 PAY 178 

    0x9b35ada4,// 214 PAY 179 

    0xfedad8a4,// 215 PAY 180 

    0x4b13f201,// 216 PAY 181 

    0x883da064,// 217 PAY 182 

    0x96ad23dd,// 218 PAY 183 

    0xbf2f11a1,// 219 PAY 184 

    0xde62e3c9,// 220 PAY 185 

    0xc167349a,// 221 PAY 186 

    0xea81d74d,// 222 PAY 187 

    0xb0775e4c,// 223 PAY 188 

    0x19e22d5c,// 224 PAY 189 

    0x148322a1,// 225 PAY 190 

    0x871cff55,// 226 PAY 191 

    0x06bcadbd,// 227 PAY 192 

    0xfa8b1edd,// 228 PAY 193 

    0xa5721328,// 229 PAY 194 

    0xcb50bda2,// 230 PAY 195 

    0xf6598ed7,// 231 PAY 196 

    0xf43684ec,// 232 PAY 197 

    0xf5b71708,// 233 PAY 198 

    0x944a0115,// 234 PAY 199 

    0xfb2bc4e8,// 235 PAY 200 

    0x58b85941,// 236 PAY 201 

    0x8dee7eb8,// 237 PAY 202 

    0xe08b0c0b,// 238 PAY 203 

    0x8d988e88,// 239 PAY 204 

    0x0622855c,// 240 PAY 205 

    0x21ee306f,// 241 PAY 206 

    0x6a634371,// 242 PAY 207 

    0xb551ef72,// 243 PAY 208 

    0x5f2a8397,// 244 PAY 209 

    0xf1332880,// 245 PAY 210 

    0x53fba1e4,// 246 PAY 211 

    0x538f6fbd,// 247 PAY 212 

    0x60e10936,// 248 PAY 213 

    0x3ba7e09a,// 249 PAY 214 

    0xc6949376,// 250 PAY 215 

    0x864e45bc,// 251 PAY 216 

    0x5c978bac,// 252 PAY 217 

    0x2009d588,// 253 PAY 218 

    0x24f59356,// 254 PAY 219 

    0xe5dee835,// 255 PAY 220 

    0x1292ca4a,// 256 PAY 221 

    0x7848b239,// 257 PAY 222 

    0x3598ddfe,// 258 PAY 223 

    0x87225c02,// 259 PAY 224 

    0xc3ea0cbc,// 260 PAY 225 

    0x30d27e06,// 261 PAY 226 

    0x4161e3e3,// 262 PAY 227 

    0x02be1100,// 263 PAY 228 

    0x9d72ce3a,// 264 PAY 229 

    0x8bf96648,// 265 PAY 230 

    0x8c2e379e,// 266 PAY 231 

    0x257ff0d8,// 267 PAY 232 

    0xee025797,// 268 PAY 233 

    0x8325694c,// 269 PAY 234 

    0xe2e9bc42,// 270 PAY 235 

    0x22f8078b,// 271 PAY 236 

    0x8ae6aac1,// 272 PAY 237 

    0xcd3c80ea,// 273 PAY 238 

    0xdf9adbe4,// 274 PAY 239 

    0x504e261c,// 275 PAY 240 

    0x7dfe4617,// 276 PAY 241 

    0x6f5691bd,// 277 PAY 242 

    0x95cc2c5e,// 278 PAY 243 

    0xc6e69d52,// 279 PAY 244 

    0xbd5c80e8,// 280 PAY 245 

    0x8f4ebe9c,// 281 PAY 246 

    0x95c6d738,// 282 PAY 247 

    0xc41d18ef,// 283 PAY 248 

    0xbdbd03d5,// 284 PAY 249 

    0xfe51f0d1,// 285 PAY 250 

    0x44a1e323,// 286 PAY 251 

    0xfbb8f673,// 287 PAY 252 

    0x739c6b03,// 288 PAY 253 

    0xc4a86bf7,// 289 PAY 254 

    0x189161b9,// 290 PAY 255 

    0x267b77c7,// 291 PAY 256 

    0xaa6aa44f,// 292 PAY 257 

    0xf3c7fc23,// 293 PAY 258 

    0x801a2b76,// 294 PAY 259 

    0x496b83a7,// 295 PAY 260 

    0x447a0edf,// 296 PAY 261 

    0x9adca8b1,// 297 PAY 262 

    0xaf38baeb,// 298 PAY 263 

    0x25c01d95,// 299 PAY 264 

    0xaeb742ed,// 300 PAY 265 

    0x9ec52898,// 301 PAY 266 

    0x70af9982,// 302 PAY 267 

    0x850e76dd,// 303 PAY 268 

    0xec110baa,// 304 PAY 269 

    0x522ccd73,// 305 PAY 270 

    0xb6dd57e2,// 306 PAY 271 

    0x41013f83,// 307 PAY 272 

    0x2524af5d,// 308 PAY 273 

    0x4f906a01,// 309 PAY 274 

    0x7704fde7,// 310 PAY 275 

    0x900630ff,// 311 PAY 276 

    0x177ce0ac,// 312 PAY 277 

    0x28746429,// 313 PAY 278 

    0x6b4e6bf7,// 314 PAY 279 

    0x0d01f442,// 315 PAY 280 

    0x79999588,// 316 PAY 281 

    0xad7283b5,// 317 PAY 282 

    0x927a713f,// 318 PAY 283 

    0xf1abcf40,// 319 PAY 284 

    0xf4dc25dc,// 320 PAY 285 

    0x907819f1,// 321 PAY 286 

    0xb4b8a452,// 322 PAY 287 

    0x5039c044,// 323 PAY 288 

    0xc307dab6,// 324 PAY 289 

    0x6650b62c,// 325 PAY 290 

    0xd1fc2c1f,// 326 PAY 291 

    0x8dd366ce,// 327 PAY 292 

    0x4aa0d229,// 328 PAY 293 

    0x5bb35e92,// 329 PAY 294 

    0x150faa18,// 330 PAY 295 

    0x16a80094,// 331 PAY 296 

    0x6852f028,// 332 PAY 297 

    0xa8b69b45,// 333 PAY 298 

    0xc5484232,// 334 PAY 299 

    0xf9c96831,// 335 PAY 300 

    0x71b91ece,// 336 PAY 301 

    0x3aa59136,// 337 PAY 302 

    0x6941647c,// 338 PAY 303 

    0x55e7a115,// 339 PAY 304 

    0x95ceb8eb,// 340 PAY 305 

    0xd1e9db8d,// 341 PAY 306 

    0x5949a5cd,// 342 PAY 307 

    0x723b2094,// 343 PAY 308 

    0xeff2abdf,// 344 PAY 309 

    0x65c04c8c,// 345 PAY 310 

    0x595e6b90,// 346 PAY 311 

    0xf9edab8c,// 347 PAY 312 

    0x0bf30441,// 348 PAY 313 

    0x3cb3ea35,// 349 PAY 314 

    0xcf4f59ed,// 350 PAY 315 

    0x5a9a0b75,// 351 PAY 316 

    0x4e3a5fe6,// 352 PAY 317 

    0x50a8309d,// 353 PAY 318 

    0x177b23ab,// 354 PAY 319 

    0xc25c3456,// 355 PAY 320 

    0xfe445a1d,// 356 PAY 321 

    0xecf49b39,// 357 PAY 322 

    0x46f7db3b,// 358 PAY 323 

    0xf3216f6d,// 359 PAY 324 

    0xfca6a228,// 360 PAY 325 

    0x37eb7a0c,// 361 PAY 326 

    0x87bbba57,// 362 PAY 327 

    0xb7ef432e,// 363 PAY 328 

    0x9d2fbd28,// 364 PAY 329 

    0x42571dee,// 365 PAY 330 

    0x0e3fa8a6,// 366 PAY 331 

    0xd056e47f,// 367 PAY 332 

    0x2b4d6f53,// 368 PAY 333 

    0xf4f9a600,// 369 PAY 334 

    0x7c9a71b0,// 370 PAY 335 

    0xf05f5c9d,// 371 PAY 336 

    0x986df09d,// 372 PAY 337 

    0x9612070a,// 373 PAY 338 

    0x846d9e03,// 374 PAY 339 

    0x3d3189d2,// 375 PAY 340 

    0xd69113c6,// 376 PAY 341 

    0x46e96321,// 377 PAY 342 

    0xcd77c506,// 378 PAY 343 

    0xeace73bb,// 379 PAY 344 

    0xc23db1a8,// 380 PAY 345 

    0x2d19c117,// 381 PAY 346 

    0xd2fbd9cf,// 382 PAY 347 

    0x7d002c60,// 383 PAY 348 

    0x5ef12e92,// 384 PAY 349 

    0x8f724ecb,// 385 PAY 350 

    0xd9cc35c3,// 386 PAY 351 

    0x98f028ed,// 387 PAY 352 

    0x416b4b00,// 388 PAY 353 

    0x7b657cd2,// 389 PAY 354 

    0x4eb42f55,// 390 PAY 355 

    0x42fd467f,// 391 PAY 356 

    0xf354fb0b,// 392 PAY 357 

    0x6f67871b,// 393 PAY 358 

    0x50fd03ca,// 394 PAY 359 

    0xf4c545fb,// 395 PAY 360 

    0x21f5ba41,// 396 PAY 361 

    0xb8912662,// 397 PAY 362 

    0x5c43b598,// 398 PAY 363 

    0x7db326d9,// 399 PAY 364 

    0xbd5d831d,// 400 PAY 365 

    0xbe47e475,// 401 PAY 366 

    0x9651b6a1,// 402 PAY 367 

    0x13d56bcb,// 403 PAY 368 

    0xb83c5db9,// 404 PAY 369 

    0xc4ba4013,// 405 PAY 370 

    0xbdf91fc5,// 406 PAY 371 

    0x04e975ae,// 407 PAY 372 

    0xa715f342,// 408 PAY 373 

    0x58fb5c59,// 409 PAY 374 

    0xb4a94ef4,// 410 PAY 375 

    0xb57808db,// 411 PAY 376 

    0xb9f0954f,// 412 PAY 377 

    0x7f0b1982,// 413 PAY 378 

    0xa51e715b,// 414 PAY 379 

    0x863b5a91,// 415 PAY 380 

    0x2a36e648,// 416 PAY 381 

    0xb8f3b5ae,// 417 PAY 382 

    0xd712b213,// 418 PAY 383 

    0x8897dbad,// 419 PAY 384 

    0xa6704e48,// 420 PAY 385 

    0xc180bca4,// 421 PAY 386 

    0xe42515e6,// 422 PAY 387 

    0x3b35331d,// 423 PAY 388 

    0x02ddc18d,// 424 PAY 389 

    0x72421405,// 425 PAY 390 

    0xaeeae95f,// 426 PAY 391 

    0x106a572a,// 427 PAY 392 

    0x1db52d42,// 428 PAY 393 

    0x9985c3e0,// 429 PAY 394 

    0xa1d7289f,// 430 PAY 395 

    0x9ff2ba5f,// 431 PAY 396 

    0x2e6b8845,// 432 PAY 397 

    0x402fa060,// 433 PAY 398 

    0x6539fdf1,// 434 PAY 399 

    0x6d371090,// 435 PAY 400 

    0xf62ca997,// 436 PAY 401 

    0xefbb6f81,// 437 PAY 402 

    0x1ac35c89,// 438 PAY 403 

    0xcbcff5c7,// 439 PAY 404 

    0xf8551b6e,// 440 PAY 405 

    0x01a54f62,// 441 PAY 406 

    0xa4df2dc3,// 442 PAY 407 

    0xa4ec7f89,// 443 PAY 408 

    0x128321e4,// 444 PAY 409 

    0x2f54cd4d,// 445 PAY 410 

    0xfba3329e,// 446 PAY 411 

    0x31ba9861,// 447 PAY 412 

    0xd2c08dd3,// 448 PAY 413 

    0x9a8633ff,// 449 PAY 414 

    0xc15ce407,// 450 PAY 415 

    0x751763c9,// 451 PAY 416 

    0xceefcd67,// 452 PAY 417 

    0xc1b030f9,// 453 PAY 418 

    0x671bb721,// 454 PAY 419 

    0x90461d18,// 455 PAY 420 

    0xd48b59e0,// 456 PAY 421 

    0xc982cf49,// 457 PAY 422 

    0x31a3af60,// 458 PAY 423 

    0xaf69cf47,// 459 PAY 424 

    0xbffd78a6,// 460 PAY 425 

    0x320646a9,// 461 PAY 426 

    0x90227be8,// 462 PAY 427 

    0xb985c8f7,// 463 PAY 428 

    0xe883fd4b,// 464 PAY 429 

    0x63946c94,// 465 PAY 430 

    0x3e375400,// 466 PAY 431 

    0xf47218ca,// 467 PAY 432 

    0x510daf7f,// 468 PAY 433 

    0x6842311b,// 469 PAY 434 

    0xb8e0fb23,// 470 PAY 435 

    0xa33f8bb9,// 471 PAY 436 

    0x52522ac6,// 472 PAY 437 

    0x78286c9c,// 473 PAY 438 

    0x0c30da94,// 474 PAY 439 

    0xc371708b,// 475 PAY 440 

    0xbee2106c,// 476 PAY 441 

    0x4b549321,// 477 PAY 442 

    0x65cc8007,// 478 PAY 443 

    0x27239179,// 479 PAY 444 

    0x941fe5bf,// 480 PAY 445 

    0xc54d0cfe,// 481 PAY 446 

    0x7c3b82cc,// 482 PAY 447 

    0xba01751d,// 483 PAY 448 

    0x845f9860,// 484 PAY 449 

    0x8aae209e,// 485 PAY 450 

    0x552c50f2,// 486 PAY 451 

    0x5f9fa005,// 487 PAY 452 

    0x89cb7401,// 488 PAY 453 

    0xa9259a39,// 489 PAY 454 

    0x4184ab5c,// 490 PAY 455 

    0x54399b0c,// 491 PAY 456 

    0x647c26fd,// 492 PAY 457 

    0x82b51a97,// 493 PAY 458 

    0x626e9faf,// 494 PAY 459 

    0xa205824d,// 495 PAY 460 

    0xb36377ae,// 496 PAY 461 

    0x4dc38c26,// 497 PAY 462 

    0x841db16d,// 498 PAY 463 

    0xe1f3d655,// 499 PAY 464 

    0xe69224a0,// 500 PAY 465 

    0xa56a69c8,// 501 PAY 466 

    0x19b66163,// 502 PAY 467 

    0x99b430d0,// 503 PAY 468 

    0x10eedaa7,// 504 PAY 469 

    0x4a8378db,// 505 PAY 470 

    0xe2a5077b,// 506 PAY 471 

    0xd21d4b2a,// 507 PAY 472 

    0xd81e38d0,// 508 PAY 473 

    0xbc12a989,// 509 PAY 474 

    0xb9a868c3,// 510 PAY 475 

    0x635bb610,// 511 PAY 476 

    0x5b7dd459,// 512 PAY 477 

    0x134beba6,// 513 PAY 478 

    0xfbef10be,// 514 PAY 479 

    0x6792b7ce,// 515 PAY 480 

    0x457b9c67,// 516 PAY 481 

    0xb4eb98ea,// 517 PAY 482 

    0xd93ad498,// 518 PAY 483 

    0x0ed7aa63,// 519 PAY 484 

    0x378af3e3,// 520 PAY 485 

    0x246da7e8,// 521 PAY 486 

    0x60c3bf9c,// 522 PAY 487 

    0xed8fc041,// 523 PAY 488 

    0x1cb6eea2,// 524 PAY 489 

    0x8ff67d24,// 525 PAY 490 

    0xa749f975,// 526 PAY 491 

    0x7e1ab472,// 527 PAY 492 

    0x452f26a5,// 528 PAY 493 

    0x8580144f,// 529 PAY 494 

    0xa2f8fdd6,// 530 PAY 495 

    0xb4b9e9fa,// 531 PAY 496 

    0xe9f02e92,// 532 PAY 497 

    0x40ebe005,// 533 PAY 498 

    0x657f0000,// 534 PAY 499 

/// STA is 1 words. 

/// STA num_pkts       : 164 

/// STA pkt_idx        : 88 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xbe 

    0x0161bea4 // 535 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc !incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt38_tmpl[] = {
    0xa8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0000000f,// 3 SCX   1 

    0x8044280c,// 4 SCX   2 

    0x000024c2,// 5 SCX   3 

    0xbbc07892,// 6 SCX   4 

    0x9dbd9995,// 7 SCX   5 

    0x2ed286ca,// 8 SCX   6 

    0xa68a93ea,// 9 SCX   7 

    0x350037b3,// 10 SCX   8 

    0xc000b8ed,// 11 SCX   9 

    0x434c09d6,// 12 SCX  10 

    0x1b3818ec,// 13 SCX  11 

    0x7152982c,// 14 SCX  12 

    0x3c1c4d04,// 15 SCX  13 

    0x36fae823,// 16 SCX  14 

    0xa4f8fff3,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1427 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 955 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 955 

/// BFD lencrypto      : 144 

/// BFD ofstcrypto     : 460 

/// BFD (ofst+len)cry  : 604 

/// BFD ofstiv         : 24 

/// BFD ofsticv        : 1192 

    0x000003bb,// 18 BFD   1 

    0x01cc0090,// 19 BFD   2 

    0x04a80018,// 20 BFD   3 

/// BDA is 358 words. 

/// BDA size     is 1427 (0x593) 

/// BDA id       is 0x1528 

    0x05931528,// 21 BDA   1 

/// PAY Generic Data size   : 1427 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x9788ad68,// 22 PAY   1 

    0x2e1d5e26,// 23 PAY   2 

    0x1305b129,// 24 PAY   3 

    0x249200e2,// 25 PAY   4 

    0xb0c90a63,// 26 PAY   5 

    0xc8573ea7,// 27 PAY   6 

    0x3bea80b8,// 28 PAY   7 

    0xf39e3f07,// 29 PAY   8 

    0x70b8639e,// 30 PAY   9 

    0xbced92b5,// 31 PAY  10 

    0x07586b7b,// 32 PAY  11 

    0x984a84c1,// 33 PAY  12 

    0x36dc5b0d,// 34 PAY  13 

    0x49209399,// 35 PAY  14 

    0x8b496b13,// 36 PAY  15 

    0x6c6a3647,// 37 PAY  16 

    0x707414ec,// 38 PAY  17 

    0x1498f614,// 39 PAY  18 

    0xea09dc3d,// 40 PAY  19 

    0xaebdd35e,// 41 PAY  20 

    0x2434f17e,// 42 PAY  21 

    0x3b06fc1d,// 43 PAY  22 

    0xba83ea8f,// 44 PAY  23 

    0x80725474,// 45 PAY  24 

    0x52c8eb1e,// 46 PAY  25 

    0xec44336a,// 47 PAY  26 

    0x51de0b6a,// 48 PAY  27 

    0xd669d18f,// 49 PAY  28 

    0x8746c3fc,// 50 PAY  29 

    0xd0fb43da,// 51 PAY  30 

    0x8fe2cb8c,// 52 PAY  31 

    0xeb74c195,// 53 PAY  32 

    0xe2340d85,// 54 PAY  33 

    0x4ac72f3e,// 55 PAY  34 

    0xa1a8d21e,// 56 PAY  35 

    0xb77303ac,// 57 PAY  36 

    0x0a2393c3,// 58 PAY  37 

    0x76684404,// 59 PAY  38 

    0x6d465ff8,// 60 PAY  39 

    0x2f37ab40,// 61 PAY  40 

    0xb27d6656,// 62 PAY  41 

    0xeda8b298,// 63 PAY  42 

    0xd9408b6a,// 64 PAY  43 

    0x12c6f246,// 65 PAY  44 

    0x282fc62e,// 66 PAY  45 

    0x33a19277,// 67 PAY  46 

    0x8b13ebac,// 68 PAY  47 

    0xe5008528,// 69 PAY  48 

    0x4a88ef0a,// 70 PAY  49 

    0xc22bbbaf,// 71 PAY  50 

    0xce83b8cc,// 72 PAY  51 

    0x0eb2a9c3,// 73 PAY  52 

    0x1a2b1427,// 74 PAY  53 

    0xc4698244,// 75 PAY  54 

    0x43f95134,// 76 PAY  55 

    0x4995db6e,// 77 PAY  56 

    0xe713f84e,// 78 PAY  57 

    0xc2480380,// 79 PAY  58 

    0x948e5775,// 80 PAY  59 

    0xf9de4f3a,// 81 PAY  60 

    0x2deabb35,// 82 PAY  61 

    0x74b253c3,// 83 PAY  62 

    0x4fdd1fab,// 84 PAY  63 

    0x13e210b2,// 85 PAY  64 

    0x3e3255a8,// 86 PAY  65 

    0xa1a0b588,// 87 PAY  66 

    0x984394f0,// 88 PAY  67 

    0x52eac021,// 89 PAY  68 

    0x3afd3e26,// 90 PAY  69 

    0x32fad573,// 91 PAY  70 

    0x28ccc01b,// 92 PAY  71 

    0x7604b53b,// 93 PAY  72 

    0x4c75f5b7,// 94 PAY  73 

    0xb4b5a56f,// 95 PAY  74 

    0x5c1ca95e,// 96 PAY  75 

    0xa99544d2,// 97 PAY  76 

    0xf9d7f2d3,// 98 PAY  77 

    0xb8419a59,// 99 PAY  78 

    0x2798a1c4,// 100 PAY  79 

    0x0f9c03a5,// 101 PAY  80 

    0x82819284,// 102 PAY  81 

    0x1394d3c2,// 103 PAY  82 

    0x9ea415a9,// 104 PAY  83 

    0x0c2fbbf6,// 105 PAY  84 

    0x2694ec9d,// 106 PAY  85 

    0x4a73140e,// 107 PAY  86 

    0xf0363881,// 108 PAY  87 

    0x862f760b,// 109 PAY  88 

    0x03dbcd6d,// 110 PAY  89 

    0x38874249,// 111 PAY  90 

    0xf29d0e95,// 112 PAY  91 

    0x0065ee4e,// 113 PAY  92 

    0xfb8b3595,// 114 PAY  93 

    0x7840c152,// 115 PAY  94 

    0xa6339256,// 116 PAY  95 

    0x7f4568d0,// 117 PAY  96 

    0x0e25b3fd,// 118 PAY  97 

    0x256bf599,// 119 PAY  98 

    0xfb70fa50,// 120 PAY  99 

    0x4fe18938,// 121 PAY 100 

    0x20cd9e0e,// 122 PAY 101 

    0x9ef30fab,// 123 PAY 102 

    0x56af4ede,// 124 PAY 103 

    0x842b200f,// 125 PAY 104 

    0x1fd5c673,// 126 PAY 105 

    0x66546dcd,// 127 PAY 106 

    0x449dc8fc,// 128 PAY 107 

    0xfa1eceaf,// 129 PAY 108 

    0x9304b60a,// 130 PAY 109 

    0x968abe46,// 131 PAY 110 

    0xbe5c587a,// 132 PAY 111 

    0xaef73359,// 133 PAY 112 

    0xcf41b2a4,// 134 PAY 113 

    0x1ba2b45e,// 135 PAY 114 

    0xa64321a8,// 136 PAY 115 

    0x60e6a733,// 137 PAY 116 

    0xfddd8965,// 138 PAY 117 

    0x6c9a6fa0,// 139 PAY 118 

    0x7267fcf5,// 140 PAY 119 

    0x03fee2d6,// 141 PAY 120 

    0xfcb0fed6,// 142 PAY 121 

    0x0348dd68,// 143 PAY 122 

    0x6667cc4e,// 144 PAY 123 

    0x1dac0826,// 145 PAY 124 

    0x03f43ca6,// 146 PAY 125 

    0x94375cbf,// 147 PAY 126 

    0xc8d632a4,// 148 PAY 127 

    0x70ce0fa2,// 149 PAY 128 

    0x9df49f73,// 150 PAY 129 

    0x0794dca5,// 151 PAY 130 

    0x44ed7f55,// 152 PAY 131 

    0x63045922,// 153 PAY 132 

    0x20f132b3,// 154 PAY 133 

    0xa3c87779,// 155 PAY 134 

    0x22338fc2,// 156 PAY 135 

    0x21cf7d2d,// 157 PAY 136 

    0x7414f122,// 158 PAY 137 

    0xb2750448,// 159 PAY 138 

    0xd6b4e0aa,// 160 PAY 139 

    0x323748e0,// 161 PAY 140 

    0x839e14a7,// 162 PAY 141 

    0xb0bb6cc1,// 163 PAY 142 

    0x68eb6a03,// 164 PAY 143 

    0x39ad82d8,// 165 PAY 144 

    0x58373a20,// 166 PAY 145 

    0xa2dcd7d5,// 167 PAY 146 

    0x0570fa6d,// 168 PAY 147 

    0x464a6e51,// 169 PAY 148 

    0x6fbc2ab9,// 170 PAY 149 

    0x2be54d35,// 171 PAY 150 

    0x24e4c5dc,// 172 PAY 151 

    0xceea63be,// 173 PAY 152 

    0x28c94448,// 174 PAY 153 

    0x1e5b7086,// 175 PAY 154 

    0x290fdced,// 176 PAY 155 

    0x9aa7b247,// 177 PAY 156 

    0x77f35b72,// 178 PAY 157 

    0xd7f9fab1,// 179 PAY 158 

    0x08e54ad6,// 180 PAY 159 

    0x7c8eede5,// 181 PAY 160 

    0x68879360,// 182 PAY 161 

    0x13636bf4,// 183 PAY 162 

    0xcd1fdf42,// 184 PAY 163 

    0x9a18cd6b,// 185 PAY 164 

    0xf0837d3d,// 186 PAY 165 

    0xcf269b53,// 187 PAY 166 

    0xdf519cbc,// 188 PAY 167 

    0xc81d75ae,// 189 PAY 168 

    0x911d5911,// 190 PAY 169 

    0x3a9d10a6,// 191 PAY 170 

    0x8ac6f809,// 192 PAY 171 

    0x0b77ba97,// 193 PAY 172 

    0x87249662,// 194 PAY 173 

    0xe1d056d9,// 195 PAY 174 

    0x0733ebcc,// 196 PAY 175 

    0x021f1250,// 197 PAY 176 

    0x939a3c25,// 198 PAY 177 

    0x553010cf,// 199 PAY 178 

    0x8d880bee,// 200 PAY 179 

    0x8364d7fe,// 201 PAY 180 

    0x8cda57bd,// 202 PAY 181 

    0x2903399c,// 203 PAY 182 

    0x68616a36,// 204 PAY 183 

    0x1e5274d4,// 205 PAY 184 

    0x1cd8c648,// 206 PAY 185 

    0xff970ecf,// 207 PAY 186 

    0x1503c3e0,// 208 PAY 187 

    0x8909974a,// 209 PAY 188 

    0x18e57b67,// 210 PAY 189 

    0x38b6e932,// 211 PAY 190 

    0x9eb5ae25,// 212 PAY 191 

    0xa857920b,// 213 PAY 192 

    0x5877eca0,// 214 PAY 193 

    0x08034fd4,// 215 PAY 194 

    0x5ee0dae2,// 216 PAY 195 

    0x01f09b59,// 217 PAY 196 

    0x8a208e24,// 218 PAY 197 

    0x31012f8d,// 219 PAY 198 

    0xcc419c18,// 220 PAY 199 

    0xbe0ad11b,// 221 PAY 200 

    0x4fbcf60d,// 222 PAY 201 

    0x2b2ad5d7,// 223 PAY 202 

    0x7d863660,// 224 PAY 203 

    0x0ddf820c,// 225 PAY 204 

    0x1c2a4a5a,// 226 PAY 205 

    0x2e2e0c7e,// 227 PAY 206 

    0xb45d9a7a,// 228 PAY 207 

    0xb53075e1,// 229 PAY 208 

    0x68a877d2,// 230 PAY 209 

    0x49819a62,// 231 PAY 210 

    0xc4a3ae72,// 232 PAY 211 

    0x6473d0e4,// 233 PAY 212 

    0x87c41ce1,// 234 PAY 213 

    0x1a600b7e,// 235 PAY 214 

    0xfdf83f69,// 236 PAY 215 

    0x3d6cd45f,// 237 PAY 216 

    0xee4596ed,// 238 PAY 217 

    0x1ff2550c,// 239 PAY 218 

    0x1ef91081,// 240 PAY 219 

    0x786193b7,// 241 PAY 220 

    0xc4739a56,// 242 PAY 221 

    0x81ea406f,// 243 PAY 222 

    0xca3bda60,// 244 PAY 223 

    0x6442f4bd,// 245 PAY 224 

    0x82c5c169,// 246 PAY 225 

    0xd399a424,// 247 PAY 226 

    0x35d2fe2a,// 248 PAY 227 

    0xe6584487,// 249 PAY 228 

    0xfec28b8e,// 250 PAY 229 

    0x8f84ec58,// 251 PAY 230 

    0xc1ae6aad,// 252 PAY 231 

    0x5b757014,// 253 PAY 232 

    0x70f8f8fc,// 254 PAY 233 

    0x62aefdf8,// 255 PAY 234 

    0xf88932ed,// 256 PAY 235 

    0x17fbb662,// 257 PAY 236 

    0x170f202e,// 258 PAY 237 

    0xeb63a80f,// 259 PAY 238 

    0x7ccb85e5,// 260 PAY 239 

    0x3d7678bb,// 261 PAY 240 

    0x0d7fe475,// 262 PAY 241 

    0xfb2de9ba,// 263 PAY 242 

    0xa84cf98e,// 264 PAY 243 

    0x2a0e482a,// 265 PAY 244 

    0xebd23e3d,// 266 PAY 245 

    0x476af6dd,// 267 PAY 246 

    0xd0c8c36e,// 268 PAY 247 

    0x56891f95,// 269 PAY 248 

    0x575c721a,// 270 PAY 249 

    0x394e4823,// 271 PAY 250 

    0xa4db1fd5,// 272 PAY 251 

    0xb3ca050c,// 273 PAY 252 

    0x27e32e6d,// 274 PAY 253 

    0x91bebb05,// 275 PAY 254 

    0x9e763796,// 276 PAY 255 

    0x27aa399a,// 277 PAY 256 

    0x9fd5eb88,// 278 PAY 257 

    0xd3eacebe,// 279 PAY 258 

    0x475f0227,// 280 PAY 259 

    0xb3c6de82,// 281 PAY 260 

    0x1e51a928,// 282 PAY 261 

    0xe7b2011a,// 283 PAY 262 

    0x3043357e,// 284 PAY 263 

    0xbf4c1fd3,// 285 PAY 264 

    0x499f86a3,// 286 PAY 265 

    0x6e08c696,// 287 PAY 266 

    0xf30dfca0,// 288 PAY 267 

    0x781fe9d9,// 289 PAY 268 

    0x7cafb9b8,// 290 PAY 269 

    0x52ea5654,// 291 PAY 270 

    0xb52cd75c,// 292 PAY 271 

    0x52264780,// 293 PAY 272 

    0x989cef0b,// 294 PAY 273 

    0xe5c9fb83,// 295 PAY 274 

    0x32218a65,// 296 PAY 275 

    0x75117005,// 297 PAY 276 

    0x2ec9b5d8,// 298 PAY 277 

    0x3221f0ca,// 299 PAY 278 

    0xb13d4974,// 300 PAY 279 

    0xb4c2462f,// 301 PAY 280 

    0xea38adbf,// 302 PAY 281 

    0xaab0a148,// 303 PAY 282 

    0x52517f79,// 304 PAY 283 

    0xe9c17560,// 305 PAY 284 

    0xa5276903,// 306 PAY 285 

    0xc7015fe8,// 307 PAY 286 

    0xf972c97a,// 308 PAY 287 

    0x769451ab,// 309 PAY 288 

    0x85c36282,// 310 PAY 289 

    0x8c548149,// 311 PAY 290 

    0xe908e25c,// 312 PAY 291 

    0x6be75308,// 313 PAY 292 

    0xf9db1a77,// 314 PAY 293 

    0x6df91d9b,// 315 PAY 294 

    0x82f6442a,// 316 PAY 295 

    0x51273ac2,// 317 PAY 296 

    0xeb522d4d,// 318 PAY 297 

    0x13b3741d,// 319 PAY 298 

    0x8ce25b5d,// 320 PAY 299 

    0x548d8048,// 321 PAY 300 

    0x126b88e6,// 322 PAY 301 

    0xedc7afcb,// 323 PAY 302 

    0x670dc729,// 324 PAY 303 

    0xb2142cc5,// 325 PAY 304 

    0x7104e452,// 326 PAY 305 

    0xf6fafdc4,// 327 PAY 306 

    0x587b8834,// 328 PAY 307 

    0x44da409e,// 329 PAY 308 

    0x8a18896d,// 330 PAY 309 

    0x172349c8,// 331 PAY 310 

    0x9371c64a,// 332 PAY 311 

    0xf740d9a0,// 333 PAY 312 

    0x9d7067f5,// 334 PAY 313 

    0x5b827ea6,// 335 PAY 314 

    0x7396d303,// 336 PAY 315 

    0xb8f68958,// 337 PAY 316 

    0xac744741,// 338 PAY 317 

    0x1e8840c8,// 339 PAY 318 

    0x91a63868,// 340 PAY 319 

    0x352ffcb3,// 341 PAY 320 

    0xfd54120f,// 342 PAY 321 

    0x4be509fc,// 343 PAY 322 

    0x2d704d5f,// 344 PAY 323 

    0xf84f1d73,// 345 PAY 324 

    0x535d3c9d,// 346 PAY 325 

    0x92ca4375,// 347 PAY 326 

    0xcf9c9b6c,// 348 PAY 327 

    0x6727275e,// 349 PAY 328 

    0x1d5a0615,// 350 PAY 329 

    0x523cd9b3,// 351 PAY 330 

    0x18916f1a,// 352 PAY 331 

    0x2eff32b1,// 353 PAY 332 

    0x43005e33,// 354 PAY 333 

    0x89140258,// 355 PAY 334 

    0xf8561bd0,// 356 PAY 335 

    0x4a5c5e5b,// 357 PAY 336 

    0x4ed4144c,// 358 PAY 337 

    0xb381a3da,// 359 PAY 338 

    0xdb4fc1e9,// 360 PAY 339 

    0x392d3367,// 361 PAY 340 

    0x2dd52ee5,// 362 PAY 341 

    0xf748af2d,// 363 PAY 342 

    0xd90b2ec8,// 364 PAY 343 

    0x38bff693,// 365 PAY 344 

    0x17accc2e,// 366 PAY 345 

    0xf95bf509,// 367 PAY 346 

    0x3b247a25,// 368 PAY 347 

    0x1628f6a3,// 369 PAY 348 

    0x6d3dd74b,// 370 PAY 349 

    0x52319573,// 371 PAY 350 

    0x5e52e979,// 372 PAY 351 

    0xff89ade6,// 373 PAY 352 

    0xb5e7322f,// 374 PAY 353 

    0x0beabe33,// 375 PAY 354 

    0x65942361,// 376 PAY 355 

    0xbed9d74a,// 377 PAY 356 

    0x0990e000,// 378 PAY 357 

/// STA is 1 words. 

/// STA num_pkts       : 229 

/// STA pkt_idx        : 76 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4f 

    0x01314fe5 // 379 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt39_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x804228fb,// 4 SCX   2 

    0x00000200,// 5 SCX   3 

    0x22980b94,// 6 SCX   4 

    0x1e72eadb,// 7 SCX   5 

    0xec6c6536,// 8 SCX   6 

    0x749ab9b9,// 9 SCX   7 

    0xfbeeefff,// 10 SCX   8 

    0x71b8f0c6,// 11 SCX   9 

    0x5d61c124,// 12 SCX  10 

    0xfbf23f22,// 13 SCX  11 

    0x667fa4ef,// 14 SCX  12 

    0xcb21c2a8,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 970 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 181 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 181 

/// BFD lencrypto      : 48 

/// BFD ofstcrypto     : 24 

/// BFD (ofst+len)cry  : 72 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 380 

    0x000000b5,// 16 BFD   1 

    0x00180030,// 17 BFD   2 

    0x017c0004,// 18 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 6 

    0x0600220e,// 19 MFM   1 

    0xcf000000,// 20 MFM   2 

/// BDA is 244 words. 

/// BDA size     is 970 (0x3ca) 

/// BDA id       is 0xc25c 

    0x03cac25c,// 21 BDA   1 

/// PAY Generic Data size   : 970 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x0ac17073,// 22 PAY   1 

    0x8f344251,// 23 PAY   2 

    0x92ea17db,// 24 PAY   3 

    0x570626e7,// 25 PAY   4 

    0xe18f1349,// 26 PAY   5 

    0x97e9bdb5,// 27 PAY   6 

    0xbb95e7f1,// 28 PAY   7 

    0x24871d59,// 29 PAY   8 

    0x1950f82a,// 30 PAY   9 

    0x673d7e23,// 31 PAY  10 

    0xe905220e,// 32 PAY  11 

    0xa49d68b5,// 33 PAY  12 

    0xf2d9b6dd,// 34 PAY  13 

    0x8c327984,// 35 PAY  14 

    0xbb5f99bc,// 36 PAY  15 

    0xafdcc4b4,// 37 PAY  16 

    0x51b15fc4,// 38 PAY  17 

    0x26b1fd21,// 39 PAY  18 

    0x195ef3b2,// 40 PAY  19 

    0xefd6b432,// 41 PAY  20 

    0xcf0272e3,// 42 PAY  21 

    0x12050d33,// 43 PAY  22 

    0x7eb2f17f,// 44 PAY  23 

    0x8fa5807d,// 45 PAY  24 

    0x5662fe9c,// 46 PAY  25 

    0xd260ed24,// 47 PAY  26 

    0x2ff5c54c,// 48 PAY  27 

    0x34bcb9b3,// 49 PAY  28 

    0x7fbf654a,// 50 PAY  29 

    0x86c39f2b,// 51 PAY  30 

    0x50e0d09f,// 52 PAY  31 

    0x59b91cf0,// 53 PAY  32 

    0xbb98dbca,// 54 PAY  33 

    0x10c78bfb,// 55 PAY  34 

    0x4f5f5ad7,// 56 PAY  35 

    0x1a630a41,// 57 PAY  36 

    0x9b436584,// 58 PAY  37 

    0x0b11baf0,// 59 PAY  38 

    0x89c0567b,// 60 PAY  39 

    0xc67ff12d,// 61 PAY  40 

    0x4deac532,// 62 PAY  41 

    0x3125f449,// 63 PAY  42 

    0xca802ed2,// 64 PAY  43 

    0x899370ad,// 65 PAY  44 

    0x7da62f5a,// 66 PAY  45 

    0xd2c32578,// 67 PAY  46 

    0xca9f298d,// 68 PAY  47 

    0x620b3482,// 69 PAY  48 

    0x0ac6fffd,// 70 PAY  49 

    0x8f49ac0f,// 71 PAY  50 

    0xe758d635,// 72 PAY  51 

    0x10143b95,// 73 PAY  52 

    0x4ca9bac1,// 74 PAY  53 

    0x48000f5f,// 75 PAY  54 

    0xffd5daae,// 76 PAY  55 

    0x8709c6ce,// 77 PAY  56 

    0x6eb21726,// 78 PAY  57 

    0x2e1b1cd0,// 79 PAY  58 

    0x255622b3,// 80 PAY  59 

    0xd5337d63,// 81 PAY  60 

    0xbc6b50c2,// 82 PAY  61 

    0xafd419e6,// 83 PAY  62 

    0x296263d0,// 84 PAY  63 

    0xb983a236,// 85 PAY  64 

    0x098d6ffb,// 86 PAY  65 

    0x117e7290,// 87 PAY  66 

    0x255aa2ee,// 88 PAY  67 

    0x12c933c6,// 89 PAY  68 

    0x17369bb1,// 90 PAY  69 

    0x907c2703,// 91 PAY  70 

    0xaf2c303c,// 92 PAY  71 

    0x7a054634,// 93 PAY  72 

    0x266527ce,// 94 PAY  73 

    0x2e9df8c0,// 95 PAY  74 

    0x32be48e1,// 96 PAY  75 

    0x6ab81d72,// 97 PAY  76 

    0xe57bc43e,// 98 PAY  77 

    0x6c9dc230,// 99 PAY  78 

    0x3d517666,// 100 PAY  79 

    0x2b86f9c9,// 101 PAY  80 

    0xd7003c82,// 102 PAY  81 

    0xaec7eb5a,// 103 PAY  82 

    0x7d10c7fc,// 104 PAY  83 

    0xd8a41b8f,// 105 PAY  84 

    0xb02e4a12,// 106 PAY  85 

    0x8729e90a,// 107 PAY  86 

    0xd1bbcc03,// 108 PAY  87 

    0x8d12cb2d,// 109 PAY  88 

    0x44c86448,// 110 PAY  89 

    0x1ceb5188,// 111 PAY  90 

    0xb46af00b,// 112 PAY  91 

    0xdac4d154,// 113 PAY  92 

    0xfe8807b1,// 114 PAY  93 

    0x5652d5cb,// 115 PAY  94 

    0x54653747,// 116 PAY  95 

    0xeaf95eb1,// 117 PAY  96 

    0xcaff073a,// 118 PAY  97 

    0xdfc7356b,// 119 PAY  98 

    0x7bf49db2,// 120 PAY  99 

    0x2ce27eb5,// 121 PAY 100 

    0x33d98ce0,// 122 PAY 101 

    0x9d937e94,// 123 PAY 102 

    0x35c7e93a,// 124 PAY 103 

    0x5ee9c649,// 125 PAY 104 

    0xa9fde6c9,// 126 PAY 105 

    0xf631a9f7,// 127 PAY 106 

    0x159bfc6e,// 128 PAY 107 

    0x1f876e22,// 129 PAY 108 

    0xa8c285cc,// 130 PAY 109 

    0x55c51885,// 131 PAY 110 

    0x0e9696c5,// 132 PAY 111 

    0xee261ee8,// 133 PAY 112 

    0xa3ab7e0e,// 134 PAY 113 

    0xa81a6f5b,// 135 PAY 114 

    0x234c36dc,// 136 PAY 115 

    0x078f8b8d,// 137 PAY 116 

    0x4c43f3d0,// 138 PAY 117 

    0x6aa85151,// 139 PAY 118 

    0x7ba95c68,// 140 PAY 119 

    0xa111589e,// 141 PAY 120 

    0x92cf21dc,// 142 PAY 121 

    0xf095b5e0,// 143 PAY 122 

    0x0de62d31,// 144 PAY 123 

    0xbfb95a6e,// 145 PAY 124 

    0x3bc80bc0,// 146 PAY 125 

    0xef1de1c2,// 147 PAY 126 

    0x12fef8aa,// 148 PAY 127 

    0xd9846b10,// 149 PAY 128 

    0x6c0ac73d,// 150 PAY 129 

    0x3c741fe1,// 151 PAY 130 

    0xcd59a566,// 152 PAY 131 

    0x65fd391d,// 153 PAY 132 

    0x698f737c,// 154 PAY 133 

    0xfafe0d99,// 155 PAY 134 

    0x84a7ec14,// 156 PAY 135 

    0xbdda690c,// 157 PAY 136 

    0x897de9c5,// 158 PAY 137 

    0xf97ef816,// 159 PAY 138 

    0xd6a05aa5,// 160 PAY 139 

    0x251d90b6,// 161 PAY 140 

    0xf60b187b,// 162 PAY 141 

    0xf876c50f,// 163 PAY 142 

    0xf409f440,// 164 PAY 143 

    0x686cf081,// 165 PAY 144 

    0x6f28fa86,// 166 PAY 145 

    0x06480495,// 167 PAY 146 

    0x6f816019,// 168 PAY 147 

    0x74a4012d,// 169 PAY 148 

    0x10729cf3,// 170 PAY 149 

    0x9322beac,// 171 PAY 150 

    0x4a8e57bf,// 172 PAY 151 

    0x3d28e42e,// 173 PAY 152 

    0x694fce94,// 174 PAY 153 

    0xe040dcdf,// 175 PAY 154 

    0xa0d2ea77,// 176 PAY 155 

    0x5b701f92,// 177 PAY 156 

    0xcaa4e845,// 178 PAY 157 

    0x8786877c,// 179 PAY 158 

    0xa4d36a2c,// 180 PAY 159 

    0x966c6ec4,// 181 PAY 160 

    0x0b667895,// 182 PAY 161 

    0x026812da,// 183 PAY 162 

    0xc8ba5d5c,// 184 PAY 163 

    0x95b48993,// 185 PAY 164 

    0xd5407aef,// 186 PAY 165 

    0x410f120e,// 187 PAY 166 

    0xf40cb684,// 188 PAY 167 

    0x021fbe27,// 189 PAY 168 

    0x5046aa47,// 190 PAY 169 

    0x708193b1,// 191 PAY 170 

    0x218d466e,// 192 PAY 171 

    0xeb429e10,// 193 PAY 172 

    0x07f54f07,// 194 PAY 173 

    0x0c84063a,// 195 PAY 174 

    0xb327b89f,// 196 PAY 175 

    0xeb80e09e,// 197 PAY 176 

    0x02b7bae2,// 198 PAY 177 

    0xc89538fe,// 199 PAY 178 

    0x03403985,// 200 PAY 179 

    0xb39f18c9,// 201 PAY 180 

    0xd6be776b,// 202 PAY 181 

    0x92f385b3,// 203 PAY 182 

    0x6fc9d463,// 204 PAY 183 

    0xe6e51a0d,// 205 PAY 184 

    0x6ec53185,// 206 PAY 185 

    0xb1d9293a,// 207 PAY 186 

    0x85172c49,// 208 PAY 187 

    0x34a8c526,// 209 PAY 188 

    0x31795f2d,// 210 PAY 189 

    0x449c70e3,// 211 PAY 190 

    0x53e62ee3,// 212 PAY 191 

    0xcc215c08,// 213 PAY 192 

    0x4def5a52,// 214 PAY 193 

    0x9c26341f,// 215 PAY 194 

    0x69a7064a,// 216 PAY 195 

    0xc55add1c,// 217 PAY 196 

    0x5162f901,// 218 PAY 197 

    0xb5c3cf6f,// 219 PAY 198 

    0x431c5dc1,// 220 PAY 199 

    0x9100c190,// 221 PAY 200 

    0xd7be1437,// 222 PAY 201 

    0x3ef6bcdb,// 223 PAY 202 

    0xae8d61b5,// 224 PAY 203 

    0xbeb0f366,// 225 PAY 204 

    0xbf9b13d0,// 226 PAY 205 

    0x69ffdd24,// 227 PAY 206 

    0xf7f49327,// 228 PAY 207 

    0x8519a10b,// 229 PAY 208 

    0x7de29e30,// 230 PAY 209 

    0x08eaf029,// 231 PAY 210 

    0x47b25136,// 232 PAY 211 

    0x59ade212,// 233 PAY 212 

    0xf32cf4c4,// 234 PAY 213 

    0x188045dd,// 235 PAY 214 

    0x9c775ab1,// 236 PAY 215 

    0x06ea68f2,// 237 PAY 216 

    0xbe1c3e73,// 238 PAY 217 

    0x50e17235,// 239 PAY 218 

    0x1bd32b44,// 240 PAY 219 

    0x52391438,// 241 PAY 220 

    0x976fe308,// 242 PAY 221 

    0xc2966f20,// 243 PAY 222 

    0x9e81b877,// 244 PAY 223 

    0xd8816621,// 245 PAY 224 

    0x6239410b,// 246 PAY 225 

    0xcb92a969,// 247 PAY 226 

    0x79f10f0a,// 248 PAY 227 

    0xc51b5ea4,// 249 PAY 228 

    0xfcabb8ba,// 250 PAY 229 

    0xf5ff6fa0,// 251 PAY 230 

    0x4589ebb2,// 252 PAY 231 

    0xdf75fb10,// 253 PAY 232 

    0xe9a13d87,// 254 PAY 233 

    0xb174ebad,// 255 PAY 234 

    0xcf5d5445,// 256 PAY 235 

    0x25fec0cf,// 257 PAY 236 

    0xc622d8ea,// 258 PAY 237 

    0xf135c042,// 259 PAY 238 

    0xe2d2bd4a,// 260 PAY 239 

    0xd8973053,// 261 PAY 240 

    0xf90e8fa4,// 262 PAY 241 

    0x9dacedda,// 263 PAY 242 

    0xbe620000,// 264 PAY 243 

/// STA is 1 words. 

/// STA num_pkts       : 208 

/// STA pkt_idx        : 48 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x5f 

    0x00c05fd0 // 265 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt40_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0000000f,// 3 SCX   1 

    0x80462891,// 4 SCX   2 

    0x00006482,// 5 SCX   3 

    0xe87b637d,// 6 SCX   4 

    0x3ce26d9f,// 7 SCX   5 

    0x07bd12f1,// 8 SCX   6 

    0x641af403,// 9 SCX   7 

    0xe9c10c4e,// 10 SCX   8 

    0x786fc2e2,// 11 SCX   9 

    0xccf6c305,// 12 SCX  10 

    0x4c510960,// 13 SCX  11 

    0xd341a566,// 14 SCX  12 

    0xb6f4411b,// 15 SCX  13 

    0x8453c348,// 16 SCX  14 

    0x25ca5954,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1358 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 173 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 173 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 128 

/// BFD (ofst+len)cry  : 160 

/// BFD ofstiv         : 100 

/// BFD ofsticv        : 780 

    0x000000ad,// 18 BFD   1 

    0x00800020,// 19 BFD   2 

    0x030c0064,// 20 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : d 

    0x0d00f4d7,// 21 MFM   1 

    0x900c1454,// 22 MFM   2 

    0xc0000000,// 23 MFM   3 

/// BDA is 341 words. 

/// BDA size     is 1358 (0x54e) 

/// BDA id       is 0xd94d 

    0x054ed94d,// 24 BDA   1 

/// PAY Generic Data size   : 1358 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x80a85c9f,// 25 PAY   1 

    0x276f5b84,// 26 PAY   2 

    0x878e20fc,// 27 PAY   3 

    0xf550e6a4,// 28 PAY   4 

    0xf5257d67,// 29 PAY   5 

    0xee3cb45c,// 30 PAY   6 

    0x45556dfe,// 31 PAY   7 

    0xeaab626f,// 32 PAY   8 

    0xe71d6952,// 33 PAY   9 

    0x64cd800f,// 34 PAY  10 

    0x6f073dd9,// 35 PAY  11 

    0x26bea21c,// 36 PAY  12 

    0x1d4f85f5,// 37 PAY  13 

    0x5cc9c378,// 38 PAY  14 

    0x361e6303,// 39 PAY  15 

    0x7b06e1b6,// 40 PAY  16 

    0x68b7a622,// 41 PAY  17 

    0xe8dd9874,// 42 PAY  18 

    0x0d48613f,// 43 PAY  19 

    0x9e66f609,// 44 PAY  20 

    0x85b97fbb,// 45 PAY  21 

    0x2480578c,// 46 PAY  22 

    0xf6400d34,// 47 PAY  23 

    0x2c907c46,// 48 PAY  24 

    0x5ae590a0,// 49 PAY  25 

    0x56f9d37c,// 50 PAY  26 

    0x44eab228,// 51 PAY  27 

    0x96146c02,// 52 PAY  28 

    0xd2d9bb7f,// 53 PAY  29 

    0xe4b7ff48,// 54 PAY  30 

    0x30a1fa43,// 55 PAY  31 

    0x68be9e23,// 56 PAY  32 

    0x8acf88bd,// 57 PAY  33 

    0xe043aea0,// 58 PAY  34 

    0xae27dc38,// 59 PAY  35 

    0x0ad99be0,// 60 PAY  36 

    0xfdc9a66b,// 61 PAY  37 

    0x5fc1837a,// 62 PAY  38 

    0x19506fc6,// 63 PAY  39 

    0x9d9f26c3,// 64 PAY  40 

    0x61d86d24,// 65 PAY  41 

    0x2c4b4609,// 66 PAY  42 

    0x606cef7b,// 67 PAY  43 

    0xb7555e55,// 68 PAY  44 

    0x49d4960f,// 69 PAY  45 

    0xbc96e1e8,// 70 PAY  46 

    0x0e04a4af,// 71 PAY  47 

    0xc3ad5710,// 72 PAY  48 

    0x98ba79f2,// 73 PAY  49 

    0x2871d6ab,// 74 PAY  50 

    0x5f61e958,// 75 PAY  51 

    0x97123220,// 76 PAY  52 

    0xbc289ad2,// 77 PAY  53 

    0x9a7f319c,// 78 PAY  54 

    0xc1334e87,// 79 PAY  55 

    0xd9ac9db1,// 80 PAY  56 

    0xc92ff2fd,// 81 PAY  57 

    0xa83c6885,// 82 PAY  58 

    0x9ac3bfff,// 83 PAY  59 

    0x8e59430e,// 84 PAY  60 

    0xbf6408c0,// 85 PAY  61 

    0x6d72f92c,// 86 PAY  62 

    0x0258c877,// 87 PAY  63 

    0x3c86d01b,// 88 PAY  64 

    0x08a37ea7,// 89 PAY  65 

    0x139a9a8e,// 90 PAY  66 

    0x2cc8d53f,// 91 PAY  67 

    0xda5a8977,// 92 PAY  68 

    0xcc8d8541,// 93 PAY  69 

    0x3ce4f134,// 94 PAY  70 

    0x7bd61429,// 95 PAY  71 

    0xe8b196a3,// 96 PAY  72 

    0x05686c4b,// 97 PAY  73 

    0x2c001687,// 98 PAY  74 

    0xd0127aed,// 99 PAY  75 

    0xffc91b7d,// 100 PAY  76 

    0xdcbebf86,// 101 PAY  77 

    0x778bf474,// 102 PAY  78 

    0x77e20314,// 103 PAY  79 

    0x57a0682d,// 104 PAY  80 

    0x2c2a633b,// 105 PAY  81 

    0x0d724f8a,// 106 PAY  82 

    0x954138f9,// 107 PAY  83 

    0x93f3919e,// 108 PAY  84 

    0x17664908,// 109 PAY  85 

    0x50ade8fc,// 110 PAY  86 

    0xbeb58501,// 111 PAY  87 

    0x6bb2dd6b,// 112 PAY  88 

    0x95f0bf98,// 113 PAY  89 

    0x44a3fb4e,// 114 PAY  90 

    0x84743fc3,// 115 PAY  91 

    0x33ac4318,// 116 PAY  92 

    0xa412d80e,// 117 PAY  93 

    0x1eeb149f,// 118 PAY  94 

    0x23d08d65,// 119 PAY  95 

    0xf999a8da,// 120 PAY  96 

    0x2219b6f9,// 121 PAY  97 

    0x5bdf5f04,// 122 PAY  98 

    0xb142fc9e,// 123 PAY  99 

    0x2c2ab981,// 124 PAY 100 

    0xbb249404,// 125 PAY 101 

    0x9ce7e52e,// 126 PAY 102 

    0xe97d0d52,// 127 PAY 103 

    0x0d2898b6,// 128 PAY 104 

    0xecb8f9cd,// 129 PAY 105 

    0x0b663c3d,// 130 PAY 106 

    0x96914e2d,// 131 PAY 107 

    0xd99eb864,// 132 PAY 108 

    0x6130f5b9,// 133 PAY 109 

    0xa8acd5ba,// 134 PAY 110 

    0xe2494725,// 135 PAY 111 

    0xebdd7988,// 136 PAY 112 

    0x21e7c24f,// 137 PAY 113 

    0x9d33c5b5,// 138 PAY 114 

    0x7af37487,// 139 PAY 115 

    0x33fdf9b4,// 140 PAY 116 

    0x7bd71a48,// 141 PAY 117 

    0xa175e1f9,// 142 PAY 118 

    0x2f3361b0,// 143 PAY 119 

    0x93805458,// 144 PAY 120 

    0xcef1aefa,// 145 PAY 121 

    0x3fe6c7a5,// 146 PAY 122 

    0xd1bc3b43,// 147 PAY 123 

    0xb4f5f17b,// 148 PAY 124 

    0xac121215,// 149 PAY 125 

    0x455525d2,// 150 PAY 126 

    0x60e86639,// 151 PAY 127 

    0x85eb36fd,// 152 PAY 128 

    0x0d18e706,// 153 PAY 129 

    0xe5a275df,// 154 PAY 130 

    0xa17cb3e4,// 155 PAY 131 

    0xdfa50618,// 156 PAY 132 

    0x6874b355,// 157 PAY 133 

    0x50b7d0e6,// 158 PAY 134 

    0xb4eaabd0,// 159 PAY 135 

    0xc323d384,// 160 PAY 136 

    0x5fc83bce,// 161 PAY 137 

    0xd4601b12,// 162 PAY 138 

    0x0aeb64ce,// 163 PAY 139 

    0xb88eb5b7,// 164 PAY 140 

    0xa1783972,// 165 PAY 141 

    0x7d0d5e31,// 166 PAY 142 

    0x13aec0d5,// 167 PAY 143 

    0xc0c45f37,// 168 PAY 144 

    0x42fc91c1,// 169 PAY 145 

    0x9089f60e,// 170 PAY 146 

    0x9fc4c98e,// 171 PAY 147 

    0x15ad4bf6,// 172 PAY 148 

    0x8e387833,// 173 PAY 149 

    0x634524e3,// 174 PAY 150 

    0x77b63bc8,// 175 PAY 151 

    0xc9689410,// 176 PAY 152 

    0x0819ae99,// 177 PAY 153 

    0x61b3f705,// 178 PAY 154 

    0x5ead1dee,// 179 PAY 155 

    0xa81d655b,// 180 PAY 156 

    0x5ab07438,// 181 PAY 157 

    0x3bca28ec,// 182 PAY 158 

    0xefe62751,// 183 PAY 159 

    0x786ac5f1,// 184 PAY 160 

    0x35a4134c,// 185 PAY 161 

    0xc6d6885a,// 186 PAY 162 

    0x417b00eb,// 187 PAY 163 

    0x711d8e3b,// 188 PAY 164 

    0xda803046,// 189 PAY 165 

    0xd8d70f14,// 190 PAY 166 

    0x8944503e,// 191 PAY 167 

    0xedeb06d8,// 192 PAY 168 

    0x752fb065,// 193 PAY 169 

    0xf1604427,// 194 PAY 170 

    0xe07e9773,// 195 PAY 171 

    0xf6f4a6a3,// 196 PAY 172 

    0x42da0b66,// 197 PAY 173 

    0xe3eecccd,// 198 PAY 174 

    0x1d65b8fe,// 199 PAY 175 

    0xe531be64,// 200 PAY 176 

    0x894adbdc,// 201 PAY 177 

    0x4bf587d0,// 202 PAY 178 

    0xb47b96ce,// 203 PAY 179 

    0x3f15dc76,// 204 PAY 180 

    0x2a91d866,// 205 PAY 181 

    0x9718c26e,// 206 PAY 182 

    0xdd9e1597,// 207 PAY 183 

    0x794d43f4,// 208 PAY 184 

    0xbc255614,// 209 PAY 185 

    0x4b20fc5f,// 210 PAY 186 

    0x6e8bb1b0,// 211 PAY 187 

    0x2a54ee6e,// 212 PAY 188 

    0x8c856024,// 213 PAY 189 

    0x739dcfd4,// 214 PAY 190 

    0xb883fe63,// 215 PAY 191 

    0x5414d02c,// 216 PAY 192 

    0x28b6c3b5,// 217 PAY 193 

    0xccf4a145,// 218 PAY 194 

    0x8a807be1,// 219 PAY 195 

    0x925e4b16,// 220 PAY 196 

    0x1cf3caed,// 221 PAY 197 

    0x8dcc0caf,// 222 PAY 198 

    0xa9ea7426,// 223 PAY 199 

    0x84c57073,// 224 PAY 200 

    0xc0169233,// 225 PAY 201 

    0x9b1e6a15,// 226 PAY 202 

    0x87e83ed3,// 227 PAY 203 

    0xc510b5aa,// 228 PAY 204 

    0x258cfa2b,// 229 PAY 205 

    0xe0ac7429,// 230 PAY 206 

    0xe582231f,// 231 PAY 207 

    0x21a8f96e,// 232 PAY 208 

    0xf710f9e0,// 233 PAY 209 

    0x2451fcda,// 234 PAY 210 

    0x6babaae4,// 235 PAY 211 

    0x3e17c61b,// 236 PAY 212 

    0xc7e6e73b,// 237 PAY 213 

    0x258050c5,// 238 PAY 214 

    0x3eba078b,// 239 PAY 215 

    0x442d29ac,// 240 PAY 216 

    0x40fd5aaa,// 241 PAY 217 

    0xc4ffd7d5,// 242 PAY 218 

    0x8eeb4283,// 243 PAY 219 

    0x6e6397f1,// 244 PAY 220 

    0x10a7eead,// 245 PAY 221 

    0x643b100f,// 246 PAY 222 

    0xbb0ca9de,// 247 PAY 223 

    0x26bf9408,// 248 PAY 224 

    0xc230a81f,// 249 PAY 225 

    0xaccb0c79,// 250 PAY 226 

    0x657c9da7,// 251 PAY 227 

    0x22063d5b,// 252 PAY 228 

    0x520e5883,// 253 PAY 229 

    0xad68e984,// 254 PAY 230 

    0x40addc26,// 255 PAY 231 

    0xb77e5eeb,// 256 PAY 232 

    0x5653b835,// 257 PAY 233 

    0x3236d9d1,// 258 PAY 234 

    0xf67c250f,// 259 PAY 235 

    0xc03e3174,// 260 PAY 236 

    0x7fe5682b,// 261 PAY 237 

    0x24aa60cf,// 262 PAY 238 

    0x16106015,// 263 PAY 239 

    0xf3d3aeb6,// 264 PAY 240 

    0x8296357c,// 265 PAY 241 

    0xa54a07cb,// 266 PAY 242 

    0xb48a67b1,// 267 PAY 243 

    0x592e8bf1,// 268 PAY 244 

    0x8de5591b,// 269 PAY 245 

    0xb89c45e9,// 270 PAY 246 

    0xfa2a37c1,// 271 PAY 247 

    0x046b441d,// 272 PAY 248 

    0xc91d51ba,// 273 PAY 249 

    0x4c6a3a32,// 274 PAY 250 

    0x8bf6432d,// 275 PAY 251 

    0xe29bdc69,// 276 PAY 252 

    0x9b562369,// 277 PAY 253 

    0x9d7d96c5,// 278 PAY 254 

    0x3a94451e,// 279 PAY 255 

    0xec0e535b,// 280 PAY 256 

    0x87d4b167,// 281 PAY 257 

    0xd4aae65e,// 282 PAY 258 

    0x94605967,// 283 PAY 259 

    0x04caf13b,// 284 PAY 260 

    0x778fef62,// 285 PAY 261 

    0xe3875647,// 286 PAY 262 

    0x601cb81a,// 287 PAY 263 

    0x0e008442,// 288 PAY 264 

    0x532174ef,// 289 PAY 265 

    0x25f68b42,// 290 PAY 266 

    0x15a5bb1d,// 291 PAY 267 

    0xde3806c2,// 292 PAY 268 

    0x006b702c,// 293 PAY 269 

    0x4b95939e,// 294 PAY 270 

    0x77306e7d,// 295 PAY 271 

    0x6048872a,// 296 PAY 272 

    0x7b3da8a2,// 297 PAY 273 

    0x0fd27c68,// 298 PAY 274 

    0xf39d5249,// 299 PAY 275 

    0xf9806140,// 300 PAY 276 

    0x7be36b32,// 301 PAY 277 

    0x77648582,// 302 PAY 278 

    0xf093f0a8,// 303 PAY 279 

    0xb0052b90,// 304 PAY 280 

    0x6eab97a4,// 305 PAY 281 

    0x57213c9f,// 306 PAY 282 

    0x2e1e806a,// 307 PAY 283 

    0xecc717ea,// 308 PAY 284 

    0x90298046,// 309 PAY 285 

    0x532ead0f,// 310 PAY 286 

    0x0fe6785d,// 311 PAY 287 

    0x4727adf3,// 312 PAY 288 

    0xf019705d,// 313 PAY 289 

    0x971497e3,// 314 PAY 290 

    0x26cf341e,// 315 PAY 291 

    0xbac109c5,// 316 PAY 292 

    0x161660bb,// 317 PAY 293 

    0xed38a1c0,// 318 PAY 294 

    0xb1c055aa,// 319 PAY 295 

    0x642697e6,// 320 PAY 296 

    0x9b554def,// 321 PAY 297 

    0x24b87d70,// 322 PAY 298 

    0xa5342618,// 323 PAY 299 

    0xa4ddd5dd,// 324 PAY 300 

    0xb03500eb,// 325 PAY 301 

    0xd56d8ace,// 326 PAY 302 

    0x5a6f5f31,// 327 PAY 303 

    0xf80398dc,// 328 PAY 304 

    0xf9bedcdb,// 329 PAY 305 

    0x9913ea38,// 330 PAY 306 

    0xb643aa99,// 331 PAY 307 

    0xe142ff5a,// 332 PAY 308 

    0x5e1327b1,// 333 PAY 309 

    0xc63d8793,// 334 PAY 310 

    0x19d5b5ec,// 335 PAY 311 

    0xe30ecdd2,// 336 PAY 312 

    0x33bff272,// 337 PAY 313 

    0xd8adc24c,// 338 PAY 314 

    0x9cc12443,// 339 PAY 315 

    0xbc6cd675,// 340 PAY 316 

    0x07367a13,// 341 PAY 317 

    0x33019e29,// 342 PAY 318 

    0x0e77280b,// 343 PAY 319 

    0xd5aae949,// 344 PAY 320 

    0x6f3f4dae,// 345 PAY 321 

    0x7e303100,// 346 PAY 322 

    0x2a210080,// 347 PAY 323 

    0x9e82dac0,// 348 PAY 324 

    0x6543a507,// 349 PAY 325 

    0x726e6ebe,// 350 PAY 326 

    0xf9367437,// 351 PAY 327 

    0x3e840883,// 352 PAY 328 

    0x059e5d36,// 353 PAY 329 

    0xe54f0633,// 354 PAY 330 

    0xe8ebc922,// 355 PAY 331 

    0x9687bbdd,// 356 PAY 332 

    0x68906bd0,// 357 PAY 333 

    0x5a008c76,// 358 PAY 334 

    0x642f0c3a,// 359 PAY 335 

    0x63e2837c,// 360 PAY 336 

    0xbf4cbc90,// 361 PAY 337 

    0x64a0b67c,// 362 PAY 338 

    0xebb7c844,// 363 PAY 339 

    0x604c0000,// 364 PAY 340 

/// STA is 1 words. 

/// STA num_pkts       : 120 

/// STA pkt_idx        : 243 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xdb 

    0x03ccdb78 // 365 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt41_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x8041282a,// 4 SCX   2 

    0x00001300,// 5 SCX   3 

    0x2b8e01eb,// 6 SCX   4 

    0x57f924df,// 7 SCX   5 

    0x531721f3,// 8 SCX   6 

    0x1f4f65b8,// 9 SCX   7 

    0x4db8129a,// 10 SCX   8 

    0x61c4bca0,// 11 SCX   9 

    0x956c95b8,// 12 SCX  10 

    0xc27a4c66,// 13 SCX  11 

    0xbffbd64a,// 14 SCX  12 

    0x0791dccf,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1223 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 841 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 841 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 688 

/// BFD (ofst+len)cry  : 696 

/// BFD ofstiv         : 108 

/// BFD ofsticv        : 884 

    0x00000349,// 16 BFD   1 

    0x02b00008,// 17 BFD   2 

    0x0374006c,// 18 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c009d12,// 19 MFM   1 

    0x57f1d6dd,// 20 MFM   2 

    0xc08e49e8,// 21 MFM   3 

    0x272da5d4,// 22 MFM   4 

    0xa84e22ea,// 23 MFM   5 

    0x065550b9,// 24 MFM   6 

    0x75e753cb,// 25 MFM   7 

    0x36f4e373,// 26 MFM   8 

    0x1124e102,// 27 MFM   9 

    0x6ae4c7cd,// 28 MFM  10 

    0x3038746c,// 29 MFM  11 

    0x01480e7e,// 30 MFM  12 

    0x4dbfedc2,// 31 MFM  13 

    0x7204b24c,// 32 MFM  14 

    0x5d77e21a,// 33 MFM  15 

    0x448d6514,// 34 MFM  16 

/// BDA is 307 words. 

/// BDA size     is 1223 (0x4c7) 

/// BDA id       is 0x4f88 

    0x04c74f88,// 35 BDA   1 

/// PAY Generic Data size   : 1223 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x18dd9747,// 36 PAY   1 

    0xbbb55591,// 37 PAY   2 

    0xa877095b,// 38 PAY   3 

    0xd99efd4b,// 39 PAY   4 

    0xb723de79,// 40 PAY   5 

    0x6bbe2c38,// 41 PAY   6 

    0xa2795b6e,// 42 PAY   7 

    0x54268456,// 43 PAY   8 

    0x3bbeeec4,// 44 PAY   9 

    0x576dc187,// 45 PAY  10 

    0xbec1b33b,// 46 PAY  11 

    0xfc60deb5,// 47 PAY  12 

    0x10db9cea,// 48 PAY  13 

    0xb051ffb4,// 49 PAY  14 

    0xf92ad2ba,// 50 PAY  15 

    0x0ba322bc,// 51 PAY  16 

    0xc09c8efa,// 52 PAY  17 

    0x26dfdb4f,// 53 PAY  18 

    0x511ca646,// 54 PAY  19 

    0x02682a50,// 55 PAY  20 

    0xdf384225,// 56 PAY  21 

    0xe023ad83,// 57 PAY  22 

    0xc074e05a,// 58 PAY  23 

    0xe44ce629,// 59 PAY  24 

    0xec93c8c6,// 60 PAY  25 

    0x3652071d,// 61 PAY  26 

    0xc716787d,// 62 PAY  27 

    0xf23dc50c,// 63 PAY  28 

    0x689e6019,// 64 PAY  29 

    0xd72f5cb2,// 65 PAY  30 

    0xa50a6d26,// 66 PAY  31 

    0xee061c66,// 67 PAY  32 

    0x3c8ca92b,// 68 PAY  33 

    0x4d3dd43e,// 69 PAY  34 

    0x002986f7,// 70 PAY  35 

    0xa6b1aede,// 71 PAY  36 

    0xe5f6d7c2,// 72 PAY  37 

    0xea4f5462,// 73 PAY  38 

    0xcf72396b,// 74 PAY  39 

    0x37f93601,// 75 PAY  40 

    0x41b2403f,// 76 PAY  41 

    0xe0c46ca7,// 77 PAY  42 

    0x152dca13,// 78 PAY  43 

    0x923f5607,// 79 PAY  44 

    0xd0788c64,// 80 PAY  45 

    0xb7c1abd5,// 81 PAY  46 

    0x260a0120,// 82 PAY  47 

    0x456ea3bc,// 83 PAY  48 

    0x4a75e76c,// 84 PAY  49 

    0x0160d1ef,// 85 PAY  50 

    0xe1760fd6,// 86 PAY  51 

    0x438f2e77,// 87 PAY  52 

    0x7c4f0b9e,// 88 PAY  53 

    0x07f9b000,// 89 PAY  54 

    0xa9e900d9,// 90 PAY  55 

    0xff0adaa0,// 91 PAY  56 

    0xee2462bd,// 92 PAY  57 

    0x01670ba3,// 93 PAY  58 

    0xd808ddf0,// 94 PAY  59 

    0x8cc747b1,// 95 PAY  60 

    0xd62a5ad9,// 96 PAY  61 

    0x65f48e10,// 97 PAY  62 

    0x8cda0f69,// 98 PAY  63 

    0x8394438d,// 99 PAY  64 

    0x167e8748,// 100 PAY  65 

    0x9e143d38,// 101 PAY  66 

    0x44320874,// 102 PAY  67 

    0xc4989101,// 103 PAY  68 

    0x80407274,// 104 PAY  69 

    0xfa275d21,// 105 PAY  70 

    0x1d34adb4,// 106 PAY  71 

    0x5e3c1f5a,// 107 PAY  72 

    0x09a78aa2,// 108 PAY  73 

    0x8b2b94e6,// 109 PAY  74 

    0x782cf788,// 110 PAY  75 

    0xe19dc1ff,// 111 PAY  76 

    0xeed6ae23,// 112 PAY  77 

    0x1d9ee1c0,// 113 PAY  78 

    0xb43afe3f,// 114 PAY  79 

    0x113c3716,// 115 PAY  80 

    0xafc947a5,// 116 PAY  81 

    0x710d8838,// 117 PAY  82 

    0x64627509,// 118 PAY  83 

    0x182bc904,// 119 PAY  84 

    0xbcf7789a,// 120 PAY  85 

    0x1fcaa353,// 121 PAY  86 

    0xc7e99fa1,// 122 PAY  87 

    0x4682ae95,// 123 PAY  88 

    0xbddc1d83,// 124 PAY  89 

    0x59be55f8,// 125 PAY  90 

    0xbf660c88,// 126 PAY  91 

    0x8652171b,// 127 PAY  92 

    0x52786486,// 128 PAY  93 

    0x2a9560fa,// 129 PAY  94 

    0xa1434cdc,// 130 PAY  95 

    0x05bfae01,// 131 PAY  96 

    0xb3214906,// 132 PAY  97 

    0x8e693628,// 133 PAY  98 

    0xe81a03a2,// 134 PAY  99 

    0xc92664b0,// 135 PAY 100 

    0x676c52d2,// 136 PAY 101 

    0x8d49e115,// 137 PAY 102 

    0x66d34b27,// 138 PAY 103 

    0x850bfc93,// 139 PAY 104 

    0x22456a6f,// 140 PAY 105 

    0xbf08056c,// 141 PAY 106 

    0xcb5ce283,// 142 PAY 107 

    0xb558911d,// 143 PAY 108 

    0x544d3bc9,// 144 PAY 109 

    0x3798aebd,// 145 PAY 110 

    0x716ea3e0,// 146 PAY 111 

    0x6eb71ce6,// 147 PAY 112 

    0x36e2fab2,// 148 PAY 113 

    0x9c3df7c2,// 149 PAY 114 

    0x6b0f0c73,// 150 PAY 115 

    0xdb8482c1,// 151 PAY 116 

    0x92f0e42b,// 152 PAY 117 

    0x612b4140,// 153 PAY 118 

    0x53919512,// 154 PAY 119 

    0x4e9c7af2,// 155 PAY 120 

    0x9a2f0cd0,// 156 PAY 121 

    0x2526884f,// 157 PAY 122 

    0x9d81a662,// 158 PAY 123 

    0x47c27c75,// 159 PAY 124 

    0x3fc5d88a,// 160 PAY 125 

    0xa250a548,// 161 PAY 126 

    0xa787ed20,// 162 PAY 127 

    0x1165426f,// 163 PAY 128 

    0x4f5ba9a4,// 164 PAY 129 

    0xb3ee680b,// 165 PAY 130 

    0x2e0e75ac,// 166 PAY 131 

    0x5d25aa18,// 167 PAY 132 

    0xcac41a9b,// 168 PAY 133 

    0xff17bd83,// 169 PAY 134 

    0x192ab16c,// 170 PAY 135 

    0x8a8a2ab4,// 171 PAY 136 

    0xe6403783,// 172 PAY 137 

    0x307ed9da,// 173 PAY 138 

    0xb764bdff,// 174 PAY 139 

    0x1ec88503,// 175 PAY 140 

    0xc738c475,// 176 PAY 141 

    0x4844556e,// 177 PAY 142 

    0x267ec033,// 178 PAY 143 

    0xc71bde43,// 179 PAY 144 

    0x0792e9be,// 180 PAY 145 

    0x8d79096c,// 181 PAY 146 

    0xa1177137,// 182 PAY 147 

    0x51eb8046,// 183 PAY 148 

    0x2e799601,// 184 PAY 149 

    0x8a364460,// 185 PAY 150 

    0x1a0c46a7,// 186 PAY 151 

    0x865d48ae,// 187 PAY 152 

    0xca0c963f,// 188 PAY 153 

    0x33dd778a,// 189 PAY 154 

    0x56814bb0,// 190 PAY 155 

    0xe5d7d9fb,// 191 PAY 156 

    0x9e76a00d,// 192 PAY 157 

    0x296dbe70,// 193 PAY 158 

    0xd666750b,// 194 PAY 159 

    0x339d7dda,// 195 PAY 160 

    0x0c6d0388,// 196 PAY 161 

    0x2342bda5,// 197 PAY 162 

    0x84fdf05e,// 198 PAY 163 

    0x5af58c5e,// 199 PAY 164 

    0x527623c6,// 200 PAY 165 

    0xfa3ba4b3,// 201 PAY 166 

    0x1cb3ee1a,// 202 PAY 167 

    0x9427d11c,// 203 PAY 168 

    0x0369f18f,// 204 PAY 169 

    0xc11b13f1,// 205 PAY 170 

    0x11463383,// 206 PAY 171 

    0x7a8c1ec0,// 207 PAY 172 

    0x8a10de3c,// 208 PAY 173 

    0xd726f1fb,// 209 PAY 174 

    0xca8ee35a,// 210 PAY 175 

    0x2b403e3d,// 211 PAY 176 

    0xc04cbad2,// 212 PAY 177 

    0xddf2f23a,// 213 PAY 178 

    0xc8c6b509,// 214 PAY 179 

    0x584cf5a9,// 215 PAY 180 

    0x62d5ff31,// 216 PAY 181 

    0x902b7107,// 217 PAY 182 

    0x725c00a8,// 218 PAY 183 

    0x2caebb34,// 219 PAY 184 

    0xba885d71,// 220 PAY 185 

    0xc518ab1e,// 221 PAY 186 

    0x5bfda206,// 222 PAY 187 

    0xac37a2f3,// 223 PAY 188 

    0x9e6bfdac,// 224 PAY 189 

    0xeede11e1,// 225 PAY 190 

    0x9ffbe096,// 226 PAY 191 

    0x7e341510,// 227 PAY 192 

    0x432d5683,// 228 PAY 193 

    0xb1412b20,// 229 PAY 194 

    0xeae47077,// 230 PAY 195 

    0x8d758ae6,// 231 PAY 196 

    0x621fe272,// 232 PAY 197 

    0x0130a2c6,// 233 PAY 198 

    0x960519f0,// 234 PAY 199 

    0x0d2ec61d,// 235 PAY 200 

    0x541f3c45,// 236 PAY 201 

    0x481bea88,// 237 PAY 202 

    0x3ce1d5e8,// 238 PAY 203 

    0x6eb1dac2,// 239 PAY 204 

    0x0fc8acdd,// 240 PAY 205 

    0x0173dfb4,// 241 PAY 206 

    0xbeb2626e,// 242 PAY 207 

    0x137d3321,// 243 PAY 208 

    0xaec03736,// 244 PAY 209 

    0xc36f94d9,// 245 PAY 210 

    0x38d6fa83,// 246 PAY 211 

    0x25edc17d,// 247 PAY 212 

    0x0c71472c,// 248 PAY 213 

    0x2c5b5995,// 249 PAY 214 

    0xd3a466a9,// 250 PAY 215 

    0x4f6f4f35,// 251 PAY 216 

    0xf407e4ff,// 252 PAY 217 

    0x74885182,// 253 PAY 218 

    0xf0f1551f,// 254 PAY 219 

    0x72623b4c,// 255 PAY 220 

    0xa78316bc,// 256 PAY 221 

    0xb6961cb2,// 257 PAY 222 

    0xbe8a8791,// 258 PAY 223 

    0x899b5cd7,// 259 PAY 224 

    0x53c1f32d,// 260 PAY 225 

    0x5545eec6,// 261 PAY 226 

    0x413356dd,// 262 PAY 227 

    0xc34df7d2,// 263 PAY 228 

    0x37549441,// 264 PAY 229 

    0xf2ca6dd4,// 265 PAY 230 

    0xcecf9a2e,// 266 PAY 231 

    0xb9ea6a9f,// 267 PAY 232 

    0x7baa87d0,// 268 PAY 233 

    0x1f4500ca,// 269 PAY 234 

    0xac825ab6,// 270 PAY 235 

    0xe3ce1d67,// 271 PAY 236 

    0x0d2de97b,// 272 PAY 237 

    0xecc03175,// 273 PAY 238 

    0xe8f23816,// 274 PAY 239 

    0x77df86e0,// 275 PAY 240 

    0x29a07199,// 276 PAY 241 

    0xcf901a4d,// 277 PAY 242 

    0x64c9ea17,// 278 PAY 243 

    0x3463a083,// 279 PAY 244 

    0x2cc21879,// 280 PAY 245 

    0x75e392c0,// 281 PAY 246 

    0x7bd3f041,// 282 PAY 247 

    0x8dae4966,// 283 PAY 248 

    0x525cfa05,// 284 PAY 249 

    0xdde32ba2,// 285 PAY 250 

    0x45ddfb82,// 286 PAY 251 

    0x43887a02,// 287 PAY 252 

    0xb7c1c724,// 288 PAY 253 

    0x06c00c5e,// 289 PAY 254 

    0xc64b1476,// 290 PAY 255 

    0xcd67882c,// 291 PAY 256 

    0xe8615459,// 292 PAY 257 

    0x9d02dfa6,// 293 PAY 258 

    0x74312cd3,// 294 PAY 259 

    0x5bf9beca,// 295 PAY 260 

    0x88f3eb1b,// 296 PAY 261 

    0x5f3715e1,// 297 PAY 262 

    0xd8ab66c5,// 298 PAY 263 

    0xed2a6673,// 299 PAY 264 

    0xe9675c73,// 300 PAY 265 

    0x4556907f,// 301 PAY 266 

    0xa7a3e3c5,// 302 PAY 267 

    0xa9972339,// 303 PAY 268 

    0xc27018cf,// 304 PAY 269 

    0x5833f310,// 305 PAY 270 

    0x20b38052,// 306 PAY 271 

    0xab6e0a03,// 307 PAY 272 

    0x693e52bb,// 308 PAY 273 

    0x5fc633df,// 309 PAY 274 

    0xfcb98661,// 310 PAY 275 

    0x7401c29a,// 311 PAY 276 

    0xfbd51c17,// 312 PAY 277 

    0x27afdda9,// 313 PAY 278 

    0x414f1e14,// 314 PAY 279 

    0xc604ab4c,// 315 PAY 280 

    0x2027d280,// 316 PAY 281 

    0x0d3a5ed2,// 317 PAY 282 

    0xf7b34487,// 318 PAY 283 

    0x245942f2,// 319 PAY 284 

    0x4bd1eb86,// 320 PAY 285 

    0x7ac9d62c,// 321 PAY 286 

    0x12690717,// 322 PAY 287 

    0x0e36cc46,// 323 PAY 288 

    0xdaeb51d0,// 324 PAY 289 

    0x4c7c4191,// 325 PAY 290 

    0xb5bd8564,// 326 PAY 291 

    0x15235b5b,// 327 PAY 292 

    0x609cea6f,// 328 PAY 293 

    0xf0d5142f,// 329 PAY 294 

    0x3c4b79fb,// 330 PAY 295 

    0x4154c94f,// 331 PAY 296 

    0x8d057954,// 332 PAY 297 

    0x620d3c16,// 333 PAY 298 

    0x2cd13d33,// 334 PAY 299 

    0x86c54522,// 335 PAY 300 

    0x00d1df9d,// 336 PAY 301 

    0x68fd9ca0,// 337 PAY 302 

    0x32c8461f,// 338 PAY 303 

    0xdde4e27c,// 339 PAY 304 

    0x42303e6e,// 340 PAY 305 

    0x4e16ab00,// 341 PAY 306 

/// STA is 1 words. 

/// STA num_pkts       : 154 

/// STA pkt_idx        : 101 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4a 

    0x01954a9a // 342 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt42_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x80402883,// 4 SCX   2 

    0x00004300,// 5 SCX   3 

    0x0b429396,// 6 SCX   4 

    0x1eb6f1c6,// 7 SCX   5 

    0xf8995703,// 8 SCX   6 

    0x105da53f,// 9 SCX   7 

    0xdbc817a6,// 10 SCX   8 

    0x7abd2758,// 11 SCX   9 

    0xfa634ba9,// 12 SCX  10 

    0xdb5fd7e6,// 13 SCX  11 

    0xd1d61987,// 14 SCX  12 

    0x25128ef4,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 975 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 771 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 771 

/// BFD lencrypto      : 80 

/// BFD ofstcrypto     : 396 

/// BFD (ofst+len)cry  : 476 

/// BFD ofstiv         : 192 

/// BFD ofsticv        : 892 

    0x00000303,// 16 BFD   1 

    0x018c0050,// 17 BFD   2 

    0x037c00c0,// 18 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00ccc4,// 19 MFM   1 

    0x34be412e,// 20 MFM   2 

    0xff58662e,// 21 MFM   3 

    0x6880ec3d,// 22 MFM   4 

    0x8b7ef5d0,// 23 MFM   5 

    0xa4c8f0a5,// 24 MFM   6 

    0x9dbe9bf8,// 25 MFM   7 

    0x0c41efd4,// 26 MFM   8 

    0x2e1d3499,// 27 MFM   9 

    0x88f0aa58,// 28 MFM  10 

    0x78749c96,// 29 MFM  11 

    0xccbc67de,// 30 MFM  12 

    0xd48e7f1d,// 31 MFM  13 

    0x3c594d5c,// 32 MFM  14 

    0x5048ff53,// 33 MFM  15 

    0xcc80bade,// 34 MFM  16 

/// BDA is 245 words. 

/// BDA size     is 975 (0x3cf) 

/// BDA id       is 0x80ec 

    0x03cf80ec,// 35 BDA   1 

/// PAY Generic Data size   : 975 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x17e87c65,// 36 PAY   1 

    0xca51282b,// 37 PAY   2 

    0x3361ddd2,// 38 PAY   3 

    0xb6d9d6a1,// 39 PAY   4 

    0x5af49c0c,// 40 PAY   5 

    0xe2085d19,// 41 PAY   6 

    0xb744a765,// 42 PAY   7 

    0xbb243209,// 43 PAY   8 

    0x17cd9707,// 44 PAY   9 

    0x881b1090,// 45 PAY  10 

    0x3d3f5fbf,// 46 PAY  11 

    0x6dfe0fcd,// 47 PAY  12 

    0xe186b723,// 48 PAY  13 

    0xd2629e1d,// 49 PAY  14 

    0x2c5b7403,// 50 PAY  15 

    0x1b36ab32,// 51 PAY  16 

    0x4b1ad987,// 52 PAY  17 

    0x61d56fdf,// 53 PAY  18 

    0xf1655abb,// 54 PAY  19 

    0x469f91c7,// 55 PAY  20 

    0x6c97f9f7,// 56 PAY  21 

    0x65a06773,// 57 PAY  22 

    0xa65bea29,// 58 PAY  23 

    0x5d0db645,// 59 PAY  24 

    0x710d01c1,// 60 PAY  25 

    0x34e0f726,// 61 PAY  26 

    0x5413c8a3,// 62 PAY  27 

    0x6373edf8,// 63 PAY  28 

    0x9652512b,// 64 PAY  29 

    0xb7a13f8c,// 65 PAY  30 

    0xd0ba224f,// 66 PAY  31 

    0x083f1b04,// 67 PAY  32 

    0xdff404bf,// 68 PAY  33 

    0x4a9e939f,// 69 PAY  34 

    0x5f433221,// 70 PAY  35 

    0x3c75908b,// 71 PAY  36 

    0x1fac658a,// 72 PAY  37 

    0x86a9eb14,// 73 PAY  38 

    0xdebec7d1,// 74 PAY  39 

    0x9f6544d9,// 75 PAY  40 

    0x1abd1a67,// 76 PAY  41 

    0xc44cc2b5,// 77 PAY  42 

    0xa4f43d7b,// 78 PAY  43 

    0x58796bb1,// 79 PAY  44 

    0x7867703e,// 80 PAY  45 

    0x7c9daa41,// 81 PAY  46 

    0x049e1416,// 82 PAY  47 

    0xf96519ba,// 83 PAY  48 

    0xc94e14a4,// 84 PAY  49 

    0xe576a265,// 85 PAY  50 

    0x09b2f528,// 86 PAY  51 

    0xceeb7491,// 87 PAY  52 

    0x4a3b7b65,// 88 PAY  53 

    0xb6d6d46c,// 89 PAY  54 

    0x7e1dc3df,// 90 PAY  55 

    0x25533576,// 91 PAY  56 

    0xafb062dd,// 92 PAY  57 

    0xbb3c19d7,// 93 PAY  58 

    0x2cff5cc1,// 94 PAY  59 

    0x202bde3e,// 95 PAY  60 

    0x40d73925,// 96 PAY  61 

    0xff283d53,// 97 PAY  62 

    0xdb243e67,// 98 PAY  63 

    0x9f06267c,// 99 PAY  64 

    0x4ccc3fc8,// 100 PAY  65 

    0x326ab19b,// 101 PAY  66 

    0x209bea7b,// 102 PAY  67 

    0x7bec463d,// 103 PAY  68 

    0x3227de10,// 104 PAY  69 

    0xef216294,// 105 PAY  70 

    0xd02d44c8,// 106 PAY  71 

    0x5d4cc0be,// 107 PAY  72 

    0x0e11e5e0,// 108 PAY  73 

    0xccedc806,// 109 PAY  74 

    0xa4d0fa38,// 110 PAY  75 

    0x72461ac1,// 111 PAY  76 

    0xede0952e,// 112 PAY  77 

    0x7c275b7a,// 113 PAY  78 

    0xbb90f259,// 114 PAY  79 

    0x4fd48fb6,// 115 PAY  80 

    0xd29c2766,// 116 PAY  81 

    0x9e96c62c,// 117 PAY  82 

    0x883f79fc,// 118 PAY  83 

    0xa1d23c3d,// 119 PAY  84 

    0x817cbfde,// 120 PAY  85 

    0x1c845d54,// 121 PAY  86 

    0xbecce8d0,// 122 PAY  87 

    0xdb5fbf8e,// 123 PAY  88 

    0x5f63e806,// 124 PAY  89 

    0xe49eb55e,// 125 PAY  90 

    0x2cc57413,// 126 PAY  91 

    0x10581d3e,// 127 PAY  92 

    0x3849b402,// 128 PAY  93 

    0x3af647c1,// 129 PAY  94 

    0x3c096653,// 130 PAY  95 

    0x16037a93,// 131 PAY  96 

    0xe149ad74,// 132 PAY  97 

    0xbad2f089,// 133 PAY  98 

    0x962fe0ad,// 134 PAY  99 

    0x974067ab,// 135 PAY 100 

    0xb80e7acf,// 136 PAY 101 

    0x091be889,// 137 PAY 102 

    0x4b11ccf6,// 138 PAY 103 

    0x5151ac47,// 139 PAY 104 

    0x31b2f720,// 140 PAY 105 

    0x163a287e,// 141 PAY 106 

    0x810d61dc,// 142 PAY 107 

    0xb8dba8fc,// 143 PAY 108 

    0xc270f7c7,// 144 PAY 109 

    0x8f36a68b,// 145 PAY 110 

    0xc1a96e64,// 146 PAY 111 

    0xa43f26e7,// 147 PAY 112 

    0x697aa1f7,// 148 PAY 113 

    0x8fe7e5fe,// 149 PAY 114 

    0x340640b6,// 150 PAY 115 

    0x06ec5da7,// 151 PAY 116 

    0x15f31ff1,// 152 PAY 117 

    0x68a2bcf6,// 153 PAY 118 

    0x8da1b909,// 154 PAY 119 

    0x5be789c0,// 155 PAY 120 

    0xb30594ee,// 156 PAY 121 

    0x20af2fe2,// 157 PAY 122 

    0xde8d91df,// 158 PAY 123 

    0xea6f91d3,// 159 PAY 124 

    0xbed7c7df,// 160 PAY 125 

    0x43866352,// 161 PAY 126 

    0xf167b441,// 162 PAY 127 

    0xa40beed0,// 163 PAY 128 

    0xfa188060,// 164 PAY 129 

    0x12a8836d,// 165 PAY 130 

    0x72b18ea7,// 166 PAY 131 

    0x63a1cc8c,// 167 PAY 132 

    0x44956b7b,// 168 PAY 133 

    0x7f61cfa2,// 169 PAY 134 

    0x6e55d117,// 170 PAY 135 

    0xa670e24e,// 171 PAY 136 

    0xb88f52e7,// 172 PAY 137 

    0xc64b5157,// 173 PAY 138 

    0x8a741c27,// 174 PAY 139 

    0x43e2ab2c,// 175 PAY 140 

    0x4a1e7c7b,// 176 PAY 141 

    0xbb975636,// 177 PAY 142 

    0xe6157ef9,// 178 PAY 143 

    0x52601b8b,// 179 PAY 144 

    0x3d3d2152,// 180 PAY 145 

    0xdbb36e79,// 181 PAY 146 

    0x9a15e2cf,// 182 PAY 147 

    0xa1924d24,// 183 PAY 148 

    0xbc38f421,// 184 PAY 149 

    0xe1bda536,// 185 PAY 150 

    0x37a4635b,// 186 PAY 151 

    0x9ac26209,// 187 PAY 152 

    0x0acfcd17,// 188 PAY 153 

    0x72b0e244,// 189 PAY 154 

    0x247bd9f8,// 190 PAY 155 

    0x02046fb1,// 191 PAY 156 

    0x3e7f4e3a,// 192 PAY 157 

    0x04b4ff1a,// 193 PAY 158 

    0xaec2ad58,// 194 PAY 159 

    0x019a6502,// 195 PAY 160 

    0x47da2f72,// 196 PAY 161 

    0xbe2f094a,// 197 PAY 162 

    0xe8884679,// 198 PAY 163 

    0xb1add602,// 199 PAY 164 

    0xe3d4e7f2,// 200 PAY 165 

    0xfad9c254,// 201 PAY 166 

    0xe694fa0a,// 202 PAY 167 

    0x9718f5f1,// 203 PAY 168 

    0xfa088205,// 204 PAY 169 

    0xe728b4a5,// 205 PAY 170 

    0xc2fa6277,// 206 PAY 171 

    0xe23a7801,// 207 PAY 172 

    0x5fd9c1d3,// 208 PAY 173 

    0xfec01d65,// 209 PAY 174 

    0x61ac968b,// 210 PAY 175 

    0xbd3b7124,// 211 PAY 176 

    0xbc3ca63b,// 212 PAY 177 

    0x1cde94a2,// 213 PAY 178 

    0x1e6cc1af,// 214 PAY 179 

    0xaa9f83ef,// 215 PAY 180 

    0x84870518,// 216 PAY 181 

    0xdad722ea,// 217 PAY 182 

    0xbdcb82ea,// 218 PAY 183 

    0x3e4e8520,// 219 PAY 184 

    0x0a745ccf,// 220 PAY 185 

    0xf99c8dc2,// 221 PAY 186 

    0x674ff198,// 222 PAY 187 

    0xd59988b2,// 223 PAY 188 

    0x25edd6d4,// 224 PAY 189 

    0x6838c614,// 225 PAY 190 

    0x46bcd362,// 226 PAY 191 

    0x93107eb4,// 227 PAY 192 

    0x7e4b4fb3,// 228 PAY 193 

    0x799b764f,// 229 PAY 194 

    0xb0f62e5c,// 230 PAY 195 

    0xff24a02a,// 231 PAY 196 

    0xf2cbdd45,// 232 PAY 197 

    0xdc045633,// 233 PAY 198 

    0x88cb5392,// 234 PAY 199 

    0x381966d8,// 235 PAY 200 

    0xc574bbfe,// 236 PAY 201 

    0x8316d412,// 237 PAY 202 

    0xfaa37800,// 238 PAY 203 

    0x6e13d476,// 239 PAY 204 

    0x42f1faba,// 240 PAY 205 

    0x300dd771,// 241 PAY 206 

    0xd6ed5a4a,// 242 PAY 207 

    0xa5264275,// 243 PAY 208 

    0x908772db,// 244 PAY 209 

    0x9f8a2c49,// 245 PAY 210 

    0x4c8ffbe3,// 246 PAY 211 

    0x04fc8531,// 247 PAY 212 

    0x7f98fa2c,// 248 PAY 213 

    0x4e6721ca,// 249 PAY 214 

    0x5177aa72,// 250 PAY 215 

    0x6d43639e,// 251 PAY 216 

    0x6d65d5b7,// 252 PAY 217 

    0x60f9d37d,// 253 PAY 218 

    0x5dffbb15,// 254 PAY 219 

    0x8f3ed038,// 255 PAY 220 

    0x2aecb1b8,// 256 PAY 221 

    0xc8491a07,// 257 PAY 222 

    0x9cd241cd,// 258 PAY 223 

    0x560f8515,// 259 PAY 224 

    0x8e5ce594,// 260 PAY 225 

    0x4784f491,// 261 PAY 226 

    0x7da70dcb,// 262 PAY 227 

    0x1ba2ec9d,// 263 PAY 228 

    0x09a013f9,// 264 PAY 229 

    0x542abb8a,// 265 PAY 230 

    0x214241fd,// 266 PAY 231 

    0x48693cd8,// 267 PAY 232 

    0x0b504da2,// 268 PAY 233 

    0xd21b4ec0,// 269 PAY 234 

    0xd0d50ae0,// 270 PAY 235 

    0xac183eba,// 271 PAY 236 

    0x54c014fc,// 272 PAY 237 

    0x3c6b374a,// 273 PAY 238 

    0x13fd6b32,// 274 PAY 239 

    0x9a38635c,// 275 PAY 240 

    0x095a7532,// 276 PAY 241 

    0x017b595d,// 277 PAY 242 

    0x3b4691ea,// 278 PAY 243 

    0x619a2800,// 279 PAY 244 

/// STA is 1 words. 

/// STA num_pkts       : 45 

/// STA pkt_idx        : 54 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x8b 

    0x00d98b2d // 280 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt43_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x8042280d,// 4 SCX   2 

    0x00003200,// 5 SCX   3 

    0x24d51bdd,// 6 SCX   4 

    0x23dbed44,// 7 SCX   5 

    0x913200e3,// 8 SCX   6 

    0x2f194679,// 9 SCX   7 

    0xa82a581d,// 10 SCX   8 

    0x0957b925,// 11 SCX   9 

    0x0df77eda,// 12 SCX  10 

    0xfc1e2cfb,// 13 SCX  11 

    0xdfc472f5,// 14 SCX  12 

    0xde98e2b7,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 501 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 407 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 407 

/// BFD lencrypto      : 24 

/// BFD ofstcrypto     : 320 

/// BFD (ofst+len)cry  : 344 

/// BFD ofstiv         : 28 

/// BFD ofsticv        : 456 

    0x00000197,// 16 BFD   1 

    0x01400018,// 17 BFD   2 

    0x01c8001c,// 18 BFD   3 

/// MFM is 5 words. 

/// MFM vldnibs        : 21 

    0x2100c39a,// 19 MFM   1 

    0x90fb7b3c,// 20 MFM   2 

    0xd81bc22c,// 21 MFM   3 

    0x40093911,// 22 MFM   4 

    0x8b9ae000,// 23 MFM   5 

/// BDA is 127 words. 

/// BDA size     is 501 (0x1f5) 

/// BDA id       is 0x6967 

    0x01f56967,// 24 BDA   1 

/// PAY Generic Data size   : 501 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x2d849fd4,// 25 PAY   1 

    0xc7e01521,// 26 PAY   2 

    0xd10239d9,// 27 PAY   3 

    0x3160419a,// 28 PAY   4 

    0x0297ddec,// 29 PAY   5 

    0xb87ba183,// 30 PAY   6 

    0x40a1465c,// 31 PAY   7 

    0x27ad28df,// 32 PAY   8 

    0x2ab27ecc,// 33 PAY   9 

    0xa408956f,// 34 PAY  10 

    0x428cd883,// 35 PAY  11 

    0x479e7175,// 36 PAY  12 

    0x35899e3d,// 37 PAY  13 

    0x37768a0e,// 38 PAY  14 

    0x7cb0e53b,// 39 PAY  15 

    0x12cc6ff5,// 40 PAY  16 

    0xe1bbd635,// 41 PAY  17 

    0xbd88de36,// 42 PAY  18 

    0x4f54d585,// 43 PAY  19 

    0x270d4dc7,// 44 PAY  20 

    0x0fb295dd,// 45 PAY  21 

    0x266ef1ab,// 46 PAY  22 

    0xb4eed800,// 47 PAY  23 

    0xcaadb61a,// 48 PAY  24 

    0x45be5225,// 49 PAY  25 

    0x99a73398,// 50 PAY  26 

    0x196ed03a,// 51 PAY  27 

    0xfd7f23b6,// 52 PAY  28 

    0x589a9b37,// 53 PAY  29 

    0x6c430a78,// 54 PAY  30 

    0x43061ea9,// 55 PAY  31 

    0x7b739cb2,// 56 PAY  32 

    0x96992abb,// 57 PAY  33 

    0x65002627,// 58 PAY  34 

    0xef2039f9,// 59 PAY  35 

    0x7703fbee,// 60 PAY  36 

    0x7fcfa321,// 61 PAY  37 

    0x978d8222,// 62 PAY  38 

    0x4399d677,// 63 PAY  39 

    0x64539cf9,// 64 PAY  40 

    0x654634cb,// 65 PAY  41 

    0x3f38ce25,// 66 PAY  42 

    0x95c877a5,// 67 PAY  43 

    0x59703ce9,// 68 PAY  44 

    0xf722668f,// 69 PAY  45 

    0xbab23149,// 70 PAY  46 

    0xe77a46d4,// 71 PAY  47 

    0xc4c13441,// 72 PAY  48 

    0x5e850648,// 73 PAY  49 

    0x05df9b12,// 74 PAY  50 

    0xb109823c,// 75 PAY  51 

    0x33def586,// 76 PAY  52 

    0x4af8f8e4,// 77 PAY  53 

    0xa4fabcc1,// 78 PAY  54 

    0xa968949c,// 79 PAY  55 

    0x8b8f8443,// 80 PAY  56 

    0x8a6b4933,// 81 PAY  57 

    0xa95d84f7,// 82 PAY  58 

    0x35abfb52,// 83 PAY  59 

    0xe4ed1f03,// 84 PAY  60 

    0xecb9dad4,// 85 PAY  61 

    0xce1db557,// 86 PAY  62 

    0xf6fff7d3,// 87 PAY  63 

    0xdbf8dc80,// 88 PAY  64 

    0xc6c7883f,// 89 PAY  65 

    0xe9e5ea18,// 90 PAY  66 

    0x14205f28,// 91 PAY  67 

    0x0d6e806c,// 92 PAY  68 

    0x29f4d671,// 93 PAY  69 

    0x6c97d8b9,// 94 PAY  70 

    0xc9043cfd,// 95 PAY  71 

    0xb2c63235,// 96 PAY  72 

    0xd882f1fb,// 97 PAY  73 

    0x43995437,// 98 PAY  74 

    0x7589fb0a,// 99 PAY  75 

    0x0c299c47,// 100 PAY  76 

    0xa9a98801,// 101 PAY  77 

    0x5daaa565,// 102 PAY  78 

    0x3269121f,// 103 PAY  79 

    0xc04b6afc,// 104 PAY  80 

    0x5983f162,// 105 PAY  81 

    0xc8f0928a,// 106 PAY  82 

    0xc15dff41,// 107 PAY  83 

    0xd2f89310,// 108 PAY  84 

    0xc89f73c5,// 109 PAY  85 

    0xad059cde,// 110 PAY  86 

    0x0302fc82,// 111 PAY  87 

    0x295fc49f,// 112 PAY  88 

    0xef2d6b35,// 113 PAY  89 

    0x8a94f163,// 114 PAY  90 

    0xf3c4f1b7,// 115 PAY  91 

    0x1cfa812f,// 116 PAY  92 

    0x1c7caafb,// 117 PAY  93 

    0xd9c60e22,// 118 PAY  94 

    0xc53d5526,// 119 PAY  95 

    0x35a12ebd,// 120 PAY  96 

    0x98d6a0dc,// 121 PAY  97 

    0x7c26ad3a,// 122 PAY  98 

    0xf7a31d39,// 123 PAY  99 

    0x8ab07f0a,// 124 PAY 100 

    0xa8d38cb2,// 125 PAY 101 

    0xd44456e6,// 126 PAY 102 

    0x1478cb9f,// 127 PAY 103 

    0xf1b4e491,// 128 PAY 104 

    0xa170a484,// 129 PAY 105 

    0xd6a1bfb8,// 130 PAY 106 

    0xe9f1efe4,// 131 PAY 107 

    0x5ed7e966,// 132 PAY 108 

    0x06e51c2b,// 133 PAY 109 

    0xcb807729,// 134 PAY 110 

    0x9da68b95,// 135 PAY 111 

    0x5f28659b,// 136 PAY 112 

    0xca21740a,// 137 PAY 113 

    0xf9fc624d,// 138 PAY 114 

    0x209e2373,// 139 PAY 115 

    0xa189fe27,// 140 PAY 116 

    0xb2c80166,// 141 PAY 117 

    0xc7a905fc,// 142 PAY 118 

    0x38196ee2,// 143 PAY 119 

    0x6c606c0f,// 144 PAY 120 

    0xe29136d6,// 145 PAY 121 

    0x18ced30c,// 146 PAY 122 

    0xb319beab,// 147 PAY 123 

    0xe9b48597,// 148 PAY 124 

    0x25638b81,// 149 PAY 125 

    0x76000000,// 150 PAY 126 

/// STA is 1 words. 

/// STA num_pkts       : 133 

/// STA pkt_idx        : 232 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x79 

    0x03a07985 // 151 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt44_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0000000f,// 3 SCX   1 

    0x804628dc,// 4 SCX   2 

    0x00001182,// 5 SCX   3 

    0xcc81fa91,// 6 SCX   4 

    0xa45d9808,// 7 SCX   5 

    0x2e871ba5,// 8 SCX   6 

    0x5d3466e3,// 9 SCX   7 

    0x8ac5eb98,// 10 SCX   8 

    0x231ae11a,// 11 SCX   9 

    0xd532d90f,// 12 SCX  10 

    0xff690d8a,// 13 SCX  11 

    0xf51300c7,// 14 SCX  12 

    0xea2c436f,// 15 SCX  13 

    0xeef26255,// 16 SCX  14 

    0x42b151c5,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1499 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 164 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 164 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 76 

/// BFD (ofst+len)cry  : 92 

/// BFD ofstiv         : 12 

/// BFD ofsticv        : 560 

    0x000000a4,// 18 BFD   1 

    0x004c0010,// 19 BFD   2 

    0x0230000c,// 20 BFD   3 

/// MFM is 5 words. 

/// MFM vldnibs        : 24 

    0x24004480,// 21 MFM   1 

    0xe2cdb8a4,// 22 MFM   2 

    0x2d89e63f,// 23 MFM   3 

    0x8f67315b,// 24 MFM   4 

    0xa0c91808,// 25 MFM   5 

/// BDA is 376 words. 

/// BDA size     is 1499 (0x5db) 

/// BDA id       is 0x4bfd 

    0x05db4bfd,// 26 BDA   1 

/// PAY Generic Data size   : 1499 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x21bb0df0,// 27 PAY   1 

    0xea141529,// 28 PAY   2 

    0x42f7284a,// 29 PAY   3 

    0x3ebcf7fd,// 30 PAY   4 

    0xe00bcbe2,// 31 PAY   5 

    0x302aea4b,// 32 PAY   6 

    0x4668000b,// 33 PAY   7 

    0xc1bbdad3,// 34 PAY   8 

    0xa01763a4,// 35 PAY   9 

    0x17cb745f,// 36 PAY  10 

    0x4599fefe,// 37 PAY  11 

    0xca472bc0,// 38 PAY  12 

    0x0df09fd4,// 39 PAY  13 

    0x9a20e16c,// 40 PAY  14 

    0xba5b95e1,// 41 PAY  15 

    0x38bb8733,// 42 PAY  16 

    0x5311f613,// 43 PAY  17 

    0x0723b45e,// 44 PAY  18 

    0x1814788d,// 45 PAY  19 

    0x51e9c602,// 46 PAY  20 

    0xe22cbf7a,// 47 PAY  21 

    0x98999e2b,// 48 PAY  22 

    0x70dc7b88,// 49 PAY  23 

    0x26919160,// 50 PAY  24 

    0x750811d2,// 51 PAY  25 

    0x53b9c83f,// 52 PAY  26 

    0x742b1718,// 53 PAY  27 

    0xe38bef83,// 54 PAY  28 

    0x3287fe1f,// 55 PAY  29 

    0x681270bf,// 56 PAY  30 

    0x994d5a1a,// 57 PAY  31 

    0xfc258e25,// 58 PAY  32 

    0x48ba298a,// 59 PAY  33 

    0x63374049,// 60 PAY  34 

    0xa529e83c,// 61 PAY  35 

    0x381b1d05,// 62 PAY  36 

    0x5fe36c0d,// 63 PAY  37 

    0x8f8691fb,// 64 PAY  38 

    0x0b392e2a,// 65 PAY  39 

    0x136b45a1,// 66 PAY  40 

    0xec65e1a6,// 67 PAY  41 

    0xf587bce4,// 68 PAY  42 

    0x57215e56,// 69 PAY  43 

    0x90e577a6,// 70 PAY  44 

    0x7d53e58b,// 71 PAY  45 

    0x9e44ea38,// 72 PAY  46 

    0x4163ab41,// 73 PAY  47 

    0xd39507fe,// 74 PAY  48 

    0xb167b545,// 75 PAY  49 

    0x1eb7822f,// 76 PAY  50 

    0x08613286,// 77 PAY  51 

    0x62dbb3e2,// 78 PAY  52 

    0x9895f31b,// 79 PAY  53 

    0x5bff0f6a,// 80 PAY  54 

    0x3237822e,// 81 PAY  55 

    0xf6ad8234,// 82 PAY  56 

    0xf9390c0e,// 83 PAY  57 

    0x2e5929c7,// 84 PAY  58 

    0x0b132c26,// 85 PAY  59 

    0x15fa5976,// 86 PAY  60 

    0x5752610a,// 87 PAY  61 

    0xd2cd57fe,// 88 PAY  62 

    0xb738e330,// 89 PAY  63 

    0xe3f1c510,// 90 PAY  64 

    0xb09b8c53,// 91 PAY  65 

    0x6989f0c2,// 92 PAY  66 

    0x42ed2841,// 93 PAY  67 

    0x9513d725,// 94 PAY  68 

    0x8f079ebb,// 95 PAY  69 

    0x70c18484,// 96 PAY  70 

    0xe3a4f221,// 97 PAY  71 

    0xcc7b35fd,// 98 PAY  72 

    0xdfa4be44,// 99 PAY  73 

    0xf2e2ef8b,// 100 PAY  74 

    0xd01a7da5,// 101 PAY  75 

    0x9f863055,// 102 PAY  76 

    0x27974d79,// 103 PAY  77 

    0xe39d03ba,// 104 PAY  78 

    0xadd08424,// 105 PAY  79 

    0x3eb74235,// 106 PAY  80 

    0x94931db9,// 107 PAY  81 

    0xebe1fb9c,// 108 PAY  82 

    0x51564a33,// 109 PAY  83 

    0x4f1e8f10,// 110 PAY  84 

    0x9adb6729,// 111 PAY  85 

    0x2c1855a0,// 112 PAY  86 

    0x4dd16a2f,// 113 PAY  87 

    0xc0cf4c01,// 114 PAY  88 

    0x6402f952,// 115 PAY  89 

    0x2d340626,// 116 PAY  90 

    0x2be55ce9,// 117 PAY  91 

    0x1d5fc871,// 118 PAY  92 

    0x6726291a,// 119 PAY  93 

    0x35d575db,// 120 PAY  94 

    0xf21c329e,// 121 PAY  95 

    0x9eef0a64,// 122 PAY  96 

    0x97ad4b69,// 123 PAY  97 

    0xa1b98fad,// 124 PAY  98 

    0xf5df7cbf,// 125 PAY  99 

    0x5db329b8,// 126 PAY 100 

    0x8a747a86,// 127 PAY 101 

    0xb89bec9c,// 128 PAY 102 

    0x8a8bb98c,// 129 PAY 103 

    0xc125cfff,// 130 PAY 104 

    0x294a8136,// 131 PAY 105 

    0x7acdc088,// 132 PAY 106 

    0x8b9661e9,// 133 PAY 107 

    0x156417a2,// 134 PAY 108 

    0x40d0cd7c,// 135 PAY 109 

    0x8189e0fb,// 136 PAY 110 

    0xb1899ef9,// 137 PAY 111 

    0xa5932e72,// 138 PAY 112 

    0xe7752aff,// 139 PAY 113 

    0x25c40b05,// 140 PAY 114 

    0xa63ea391,// 141 PAY 115 

    0x1b3c79a0,// 142 PAY 116 

    0x932e3725,// 143 PAY 117 

    0x8685bf70,// 144 PAY 118 

    0x3731ebad,// 145 PAY 119 

    0x2936c00d,// 146 PAY 120 

    0x84b0093c,// 147 PAY 121 

    0xc8b1bc37,// 148 PAY 122 

    0x110f6eab,// 149 PAY 123 

    0x4d412888,// 150 PAY 124 

    0x5975b42f,// 151 PAY 125 

    0x1cdee017,// 152 PAY 126 

    0x1a5dcb44,// 153 PAY 127 

    0x2bd76c9c,// 154 PAY 128 

    0x495bdf76,// 155 PAY 129 

    0x0b149227,// 156 PAY 130 

    0xae77aa36,// 157 PAY 131 

    0x882c0131,// 158 PAY 132 

    0x126a121c,// 159 PAY 133 

    0xa70b694e,// 160 PAY 134 

    0x6301bca2,// 161 PAY 135 

    0xf6f9a14f,// 162 PAY 136 

    0x2e0ab08b,// 163 PAY 137 

    0x1b641bb8,// 164 PAY 138 

    0x01fbc37a,// 165 PAY 139 

    0xb33d3c71,// 166 PAY 140 

    0x921e568f,// 167 PAY 141 

    0xce209f72,// 168 PAY 142 

    0x147a4422,// 169 PAY 143 

    0xd1b39622,// 170 PAY 144 

    0xc2997742,// 171 PAY 145 

    0x7deaeaea,// 172 PAY 146 

    0x4fbdcad0,// 173 PAY 147 

    0xf24f8dd2,// 174 PAY 148 

    0x5f573eda,// 175 PAY 149 

    0x24c41e45,// 176 PAY 150 

    0x3343fdd1,// 177 PAY 151 

    0x43216072,// 178 PAY 152 

    0x7473ffa2,// 179 PAY 153 

    0x02f778f5,// 180 PAY 154 

    0x39668b08,// 181 PAY 155 

    0x129c82de,// 182 PAY 156 

    0x429d2373,// 183 PAY 157 

    0xd9b2a84d,// 184 PAY 158 

    0x30d3147d,// 185 PAY 159 

    0x3b4fbba4,// 186 PAY 160 

    0x08df8703,// 187 PAY 161 

    0xd41f69ff,// 188 PAY 162 

    0xe851f8f9,// 189 PAY 163 

    0x6324a3a6,// 190 PAY 164 

    0x10f4a04b,// 191 PAY 165 

    0xd362e932,// 192 PAY 166 

    0x3e701a4c,// 193 PAY 167 

    0x2e054279,// 194 PAY 168 

    0xbde66965,// 195 PAY 169 

    0xfe189f92,// 196 PAY 170 

    0x10374f3e,// 197 PAY 171 

    0xd37c0295,// 198 PAY 172 

    0xe8cde467,// 199 PAY 173 

    0xb2f16f0b,// 200 PAY 174 

    0x5c472bbd,// 201 PAY 175 

    0x75dab419,// 202 PAY 176 

    0x1f6be4db,// 203 PAY 177 

    0x4c4d435e,// 204 PAY 178 

    0xce797b2a,// 205 PAY 179 

    0xcf0835b6,// 206 PAY 180 

    0x408b4db0,// 207 PAY 181 

    0x65476bc0,// 208 PAY 182 

    0xca9617d4,// 209 PAY 183 

    0xb2fdf489,// 210 PAY 184 

    0x974b4e70,// 211 PAY 185 

    0x9f9871f6,// 212 PAY 186 

    0xe530fcf2,// 213 PAY 187 

    0x2b6d3af8,// 214 PAY 188 

    0x71615d53,// 215 PAY 189 

    0x3ebddce5,// 216 PAY 190 

    0x3db1272f,// 217 PAY 191 

    0x980e882a,// 218 PAY 192 

    0xce3e0a55,// 219 PAY 193 

    0xbbb8c9ab,// 220 PAY 194 

    0xe753984a,// 221 PAY 195 

    0x44caae51,// 222 PAY 196 

    0x1ce02ffd,// 223 PAY 197 

    0x276402d3,// 224 PAY 198 

    0x5c7602f6,// 225 PAY 199 

    0x4cac57a9,// 226 PAY 200 

    0x76e956d8,// 227 PAY 201 

    0xcebe5135,// 228 PAY 202 

    0xe6bc8ad9,// 229 PAY 203 

    0xddecfb90,// 230 PAY 204 

    0x4e277179,// 231 PAY 205 

    0x4eeb03e6,// 232 PAY 206 

    0xbebc5caa,// 233 PAY 207 

    0x2de4b81c,// 234 PAY 208 

    0xc04315c5,// 235 PAY 209 

    0x05354e84,// 236 PAY 210 

    0x4aaca03b,// 237 PAY 211 

    0xdda241af,// 238 PAY 212 

    0x51a8705c,// 239 PAY 213 

    0x2ffecc7b,// 240 PAY 214 

    0xf6fdcda1,// 241 PAY 215 

    0x7fe34360,// 242 PAY 216 

    0x056dda1b,// 243 PAY 217 

    0x716e3c4a,// 244 PAY 218 

    0x9bf03720,// 245 PAY 219 

    0xea017123,// 246 PAY 220 

    0x03f2040e,// 247 PAY 221 

    0x3783f20e,// 248 PAY 222 

    0x9366163d,// 249 PAY 223 

    0x04f01d41,// 250 PAY 224 

    0xfe8e08f0,// 251 PAY 225 

    0xc4119f23,// 252 PAY 226 

    0x9e2323e7,// 253 PAY 227 

    0x5e58fb55,// 254 PAY 228 

    0x7d4b75e9,// 255 PAY 229 

    0xa1251a3c,// 256 PAY 230 

    0x9dfee953,// 257 PAY 231 

    0x42a49201,// 258 PAY 232 

    0x04b23a44,// 259 PAY 233 

    0xac4a07e0,// 260 PAY 234 

    0xaa4f21af,// 261 PAY 235 

    0xf1f5097e,// 262 PAY 236 

    0xf1f19628,// 263 PAY 237 

    0xc82972a6,// 264 PAY 238 

    0x254e3d8a,// 265 PAY 239 

    0x4ae46028,// 266 PAY 240 

    0x0f207f4c,// 267 PAY 241 

    0xa83b89cc,// 268 PAY 242 

    0x29b95e5d,// 269 PAY 243 

    0x301794cb,// 270 PAY 244 

    0x84d54998,// 271 PAY 245 

    0x57c52853,// 272 PAY 246 

    0xd131dd7d,// 273 PAY 247 

    0x83ec2fb2,// 274 PAY 248 

    0x385766f3,// 275 PAY 249 

    0x02e666da,// 276 PAY 250 

    0x49731dc7,// 277 PAY 251 

    0x2e97864f,// 278 PAY 252 

    0x920ad66e,// 279 PAY 253 

    0x65642591,// 280 PAY 254 

    0xa8527b1a,// 281 PAY 255 

    0x47a25d76,// 282 PAY 256 

    0x07907655,// 283 PAY 257 

    0x855a23b6,// 284 PAY 258 

    0x50730fb7,// 285 PAY 259 

    0x1e8d1e96,// 286 PAY 260 

    0xf0dec46b,// 287 PAY 261 

    0xe294fd7b,// 288 PAY 262 

    0x39a2bf57,// 289 PAY 263 

    0x94de0d45,// 290 PAY 264 

    0xadb1152b,// 291 PAY 265 

    0x01481dae,// 292 PAY 266 

    0x3041ec42,// 293 PAY 267 

    0x7c3b4ce3,// 294 PAY 268 

    0xa7e4f484,// 295 PAY 269 

    0xcc36eaa0,// 296 PAY 270 

    0x8481b99d,// 297 PAY 271 

    0x731b74c2,// 298 PAY 272 

    0x1f2675e5,// 299 PAY 273 

    0x460c2e61,// 300 PAY 274 

    0xe9c16e51,// 301 PAY 275 

    0x7c730b32,// 302 PAY 276 

    0xd72621cf,// 303 PAY 277 

    0x0bc47414,// 304 PAY 278 

    0x60978440,// 305 PAY 279 

    0xb6e5a368,// 306 PAY 280 

    0x595232f8,// 307 PAY 281 

    0xd55b5e82,// 308 PAY 282 

    0x46667045,// 309 PAY 283 

    0x17151309,// 310 PAY 284 

    0x52f94d6f,// 311 PAY 285 

    0xf1728936,// 312 PAY 286 

    0x2f4d7943,// 313 PAY 287 

    0x4b5188d7,// 314 PAY 288 

    0x68b4eb9b,// 315 PAY 289 

    0x8a45e948,// 316 PAY 290 

    0xec2a7400,// 317 PAY 291 

    0x92d5aca9,// 318 PAY 292 

    0x7ca3b642,// 319 PAY 293 

    0xfcf8352a,// 320 PAY 294 

    0x432c1e37,// 321 PAY 295 

    0xb58358f2,// 322 PAY 296 

    0x17f35a00,// 323 PAY 297 

    0x0ded7f2e,// 324 PAY 298 

    0xb71a4020,// 325 PAY 299 

    0x5c393370,// 326 PAY 300 

    0xed06343d,// 327 PAY 301 

    0xd3741901,// 328 PAY 302 

    0x3cf8dd80,// 329 PAY 303 

    0x350f900c,// 330 PAY 304 

    0x321fb5c2,// 331 PAY 305 

    0xee83bb94,// 332 PAY 306 

    0x2685ebdc,// 333 PAY 307 

    0x31d7f6c7,// 334 PAY 308 

    0x8c2d5b2a,// 335 PAY 309 

    0x62f1a843,// 336 PAY 310 

    0x6ba8297a,// 337 PAY 311 

    0x2ed49060,// 338 PAY 312 

    0x4f38675b,// 339 PAY 313 

    0x8795a9fa,// 340 PAY 314 

    0x46b9c08b,// 341 PAY 315 

    0xa83a873e,// 342 PAY 316 

    0xd9acf3d3,// 343 PAY 317 

    0x400d34ec,// 344 PAY 318 

    0x2a059c1c,// 345 PAY 319 

    0x022d0f89,// 346 PAY 320 

    0xf6650390,// 347 PAY 321 

    0x9b2d98ec,// 348 PAY 322 

    0xcda10488,// 349 PAY 323 

    0xf22e50cd,// 350 PAY 324 

    0x19a7dd6b,// 351 PAY 325 

    0xc988a04f,// 352 PAY 326 

    0xd46db5d5,// 353 PAY 327 

    0x7b6a0882,// 354 PAY 328 

    0xa1c64a84,// 355 PAY 329 

    0x1c244e06,// 356 PAY 330 

    0x1e845345,// 357 PAY 331 

    0xefadf28d,// 358 PAY 332 

    0xc8b20def,// 359 PAY 333 

    0xc3affeef,// 360 PAY 334 

    0x0f36b879,// 361 PAY 335 

    0xf7275e36,// 362 PAY 336 

    0x6325b9c0,// 363 PAY 337 

    0x3986845a,// 364 PAY 338 

    0xd01f43f8,// 365 PAY 339 

    0x8a5ac832,// 366 PAY 340 

    0x78952ead,// 367 PAY 341 

    0x862b075d,// 368 PAY 342 

    0x4fb6941d,// 369 PAY 343 

    0xf5054872,// 370 PAY 344 

    0x742e8f9f,// 371 PAY 345 

    0xd30d52a7,// 372 PAY 346 

    0x3dfa95a6,// 373 PAY 347 

    0x5b1918d2,// 374 PAY 348 

    0x632d6b7f,// 375 PAY 349 

    0x1867ae34,// 376 PAY 350 

    0x62e0eb60,// 377 PAY 351 

    0x54832774,// 378 PAY 352 

    0x723f007a,// 379 PAY 353 

    0x4a291b7d,// 380 PAY 354 

    0xb18e3a0d,// 381 PAY 355 

    0x0e18628c,// 382 PAY 356 

    0x15efb77c,// 383 PAY 357 

    0xb6f850f1,// 384 PAY 358 

    0x1a494bb1,// 385 PAY 359 

    0x10285c1b,// 386 PAY 360 

    0x3b55d23f,// 387 PAY 361 

    0x77763c81,// 388 PAY 362 

    0xa94a418a,// 389 PAY 363 

    0x051087d8,// 390 PAY 364 

    0x791fd616,// 391 PAY 365 

    0xcc051808,// 392 PAY 366 

    0xfe2cf169,// 393 PAY 367 

    0x9a955c31,// 394 PAY 368 

    0x1b67283f,// 395 PAY 369 

    0xf15c78fe,// 396 PAY 370 

    0x92ebeb70,// 397 PAY 371 

    0x7480f49d,// 398 PAY 372 

    0x80370a37,// 399 PAY 373 

    0xae2b9984,// 400 PAY 374 

    0x010c8900,// 401 PAY 375 

/// STA is 1 words. 

/// STA num_pkts       : 13 

/// STA pkt_idx        : 80 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x9a 

    0x01419a0d // 402 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt45_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x01 

/// ECH pdu_tag        : 0x00 

    0x00010000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x804528fc,// 4 SCX   2 

    0x00003342,// 5 SCX   3 

    0x47181913,// 6 SCX   4 

    0x554e1187,// 7 SCX   5 

    0x4052547a,// 8 SCX   6 

    0x867b9492,// 9 SCX   7 

    0x3d8a6fee,// 10 SCX   8 

    0x387601e1,// 11 SCX   9 

    0xed32d5a9,// 12 SCX  10 

    0xace4b536,// 13 SCX  11 

    0x7edd4946,// 14 SCX  12 

    0xde9321c7,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 838 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 129 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 129 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 104 

/// BFD (ofst+len)cry  : 112 

/// BFD ofstiv         : 60 

/// BFD ofsticv        : 724 

    0x00000081,// 16 BFD   1 

    0x00680008,// 17 BFD   2 

    0x02d4003c,// 18 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 7 

    0x0700a592,// 19 MFM   1 

    0x4bc00000,// 20 MFM   2 

/// BDA is 211 words. 

/// BDA size     is 838 (0x346) 

/// BDA id       is 0xae4b 

    0x0346ae4b,// 21 BDA   1 

/// PAY Generic Data size   : 838 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x288f7b31,// 22 PAY   1 

    0xdec5b5ab,// 23 PAY   2 

    0x70542d20,// 24 PAY   3 

    0x29d06881,// 25 PAY   4 

    0x1734f7c1,// 26 PAY   5 

    0xfaa08535,// 27 PAY   6 

    0xca9345e1,// 28 PAY   7 

    0xfff691a2,// 29 PAY   8 

    0xe4c78df8,// 30 PAY   9 

    0x1f447709,// 31 PAY  10 

    0x5e938c9c,// 32 PAY  11 

    0xf8107fef,// 33 PAY  12 

    0x9a6a0ac2,// 34 PAY  13 

    0x9fe0c207,// 35 PAY  14 

    0xd7b35a65,// 36 PAY  15 

    0xfd6301df,// 37 PAY  16 

    0xc0b32da3,// 38 PAY  17 

    0x60964545,// 39 PAY  18 

    0x1948dbda,// 40 PAY  19 

    0x7b716c47,// 41 PAY  20 

    0x32a3eb97,// 42 PAY  21 

    0x7f0f46f6,// 43 PAY  22 

    0xfb6e53e7,// 44 PAY  23 

    0xeb426bc1,// 45 PAY  24 

    0xde8ae597,// 46 PAY  25 

    0x05531453,// 47 PAY  26 

    0xabbf5b25,// 48 PAY  27 

    0x538b1dd0,// 49 PAY  28 

    0x19068d00,// 50 PAY  29 

    0xc917ccc7,// 51 PAY  30 

    0x3d291894,// 52 PAY  31 

    0x91bd823d,// 53 PAY  32 

    0xf58b968b,// 54 PAY  33 

    0xce978ab3,// 55 PAY  34 

    0xa8d77d05,// 56 PAY  35 

    0xb9c0a016,// 57 PAY  36 

    0xa6a5fd63,// 58 PAY  37 

    0x93f0057d,// 59 PAY  38 

    0xd846882e,// 60 PAY  39 

    0xc926adb5,// 61 PAY  40 

    0x10ca82ca,// 62 PAY  41 

    0x49061f28,// 63 PAY  42 

    0x68c75ae2,// 64 PAY  43 

    0x5441c969,// 65 PAY  44 

    0x1c649dc8,// 66 PAY  45 

    0x7d99a73b,// 67 PAY  46 

    0x30b379cc,// 68 PAY  47 

    0xdbf77a7c,// 69 PAY  48 

    0x6c6f3bf1,// 70 PAY  49 

    0x4809dcbc,// 71 PAY  50 

    0x4bca84ff,// 72 PAY  51 

    0xbf5d1685,// 73 PAY  52 

    0xc3baa784,// 74 PAY  53 

    0x9ce4da13,// 75 PAY  54 

    0xa42b7eac,// 76 PAY  55 

    0xf7aea91f,// 77 PAY  56 

    0xbb7f6d1c,// 78 PAY  57 

    0xfa1cb82e,// 79 PAY  58 

    0x747988b5,// 80 PAY  59 

    0x2e2c688d,// 81 PAY  60 

    0xcba33a85,// 82 PAY  61 

    0xa44a2f73,// 83 PAY  62 

    0xcd217896,// 84 PAY  63 

    0x86349007,// 85 PAY  64 

    0xc4c3e7b2,// 86 PAY  65 

    0x0fd85f98,// 87 PAY  66 

    0x615a65c1,// 88 PAY  67 

    0xdc7e12f6,// 89 PAY  68 

    0xa6e3c618,// 90 PAY  69 

    0x64a2f546,// 91 PAY  70 

    0xfe779dca,// 92 PAY  71 

    0x8641e2e2,// 93 PAY  72 

    0xbbb65b9c,// 94 PAY  73 

    0x1b573d7d,// 95 PAY  74 

    0xd4c24ac8,// 96 PAY  75 

    0x9747b2ef,// 97 PAY  76 

    0xf5a7371c,// 98 PAY  77 

    0x3ef77425,// 99 PAY  78 

    0x8f9f3dd4,// 100 PAY  79 

    0x7687aee4,// 101 PAY  80 

    0x1bdb27fe,// 102 PAY  81 

    0x06014166,// 103 PAY  82 

    0xadec45b4,// 104 PAY  83 

    0x6a3973c6,// 105 PAY  84 

    0x41df9d10,// 106 PAY  85 

    0xf2268e6e,// 107 PAY  86 

    0x784893b1,// 108 PAY  87 

    0x8242c4b3,// 109 PAY  88 

    0xb171fd22,// 110 PAY  89 

    0x38ee964f,// 111 PAY  90 

    0x838479e7,// 112 PAY  91 

    0xd65f0cf1,// 113 PAY  92 

    0x47c896ef,// 114 PAY  93 

    0x5e41fd91,// 115 PAY  94 

    0xea4cb478,// 116 PAY  95 

    0xf3924d2f,// 117 PAY  96 

    0xb63fe9ce,// 118 PAY  97 

    0xfdca432e,// 119 PAY  98 

    0x0f326439,// 120 PAY  99 

    0x1143c356,// 121 PAY 100 

    0xaae994a6,// 122 PAY 101 

    0x1d3447e0,// 123 PAY 102 

    0x0b1a9a9c,// 124 PAY 103 

    0x53781d9e,// 125 PAY 104 

    0xf59f7fe0,// 126 PAY 105 

    0x9042a27b,// 127 PAY 106 

    0xf0e0737f,// 128 PAY 107 

    0x62d6d57f,// 129 PAY 108 

    0x24c6930f,// 130 PAY 109 

    0x726c6bf4,// 131 PAY 110 

    0xc8586970,// 132 PAY 111 

    0xe1992a2c,// 133 PAY 112 

    0x6f31a3cf,// 134 PAY 113 

    0xa9f2831b,// 135 PAY 114 

    0x1c1b8a89,// 136 PAY 115 

    0xd059bf35,// 137 PAY 116 

    0x8b269a02,// 138 PAY 117 

    0xd987e778,// 139 PAY 118 

    0xaf4ae694,// 140 PAY 119 

    0x1db17da6,// 141 PAY 120 

    0xf1c4dc01,// 142 PAY 121 

    0xe581f391,// 143 PAY 122 

    0x7d5a4e26,// 144 PAY 123 

    0x5af036f5,// 145 PAY 124 

    0xede7022b,// 146 PAY 125 

    0x0297c64c,// 147 PAY 126 

    0x1c7d3e76,// 148 PAY 127 

    0x7520d912,// 149 PAY 128 

    0xdd094c07,// 150 PAY 129 

    0xfd01914e,// 151 PAY 130 

    0x6c0e65c2,// 152 PAY 131 

    0x6de7e500,// 153 PAY 132 

    0x16afdfac,// 154 PAY 133 

    0xe428d327,// 155 PAY 134 

    0x76514834,// 156 PAY 135 

    0x15dc13b1,// 157 PAY 136 

    0xba0a1b1f,// 158 PAY 137 

    0xa2b5b1e8,// 159 PAY 138 

    0x452e3a3a,// 160 PAY 139 

    0x20fa34b5,// 161 PAY 140 

    0x67be082e,// 162 PAY 141 

    0x87c530e4,// 163 PAY 142 

    0x7302ec7c,// 164 PAY 143 

    0xbc79ad67,// 165 PAY 144 

    0x7c097852,// 166 PAY 145 

    0xa608a0ca,// 167 PAY 146 

    0xf2543939,// 168 PAY 147 

    0x71e42b03,// 169 PAY 148 

    0xf6b82f2a,// 170 PAY 149 

    0x75651669,// 171 PAY 150 

    0x6dff3192,// 172 PAY 151 

    0xba146e65,// 173 PAY 152 

    0xa7bc81fa,// 174 PAY 153 

    0x999169fe,// 175 PAY 154 

    0xf86d28c9,// 176 PAY 155 

    0xb4de706a,// 177 PAY 156 

    0xbc6fe474,// 178 PAY 157 

    0xf2186d3f,// 179 PAY 158 

    0x184751af,// 180 PAY 159 

    0x87a50325,// 181 PAY 160 

    0x9396527d,// 182 PAY 161 

    0x20384bb7,// 183 PAY 162 

    0x758a955f,// 184 PAY 163 

    0x6f3a0678,// 185 PAY 164 

    0x843c0543,// 186 PAY 165 

    0xb4b4976f,// 187 PAY 166 

    0x1300db5f,// 188 PAY 167 

    0x8adea50e,// 189 PAY 168 

    0x35330ec4,// 190 PAY 169 

    0x252c05f0,// 191 PAY 170 

    0x5e7a3ae7,// 192 PAY 171 

    0x8ed78b73,// 193 PAY 172 

    0x35783b62,// 194 PAY 173 

    0x1532d9a1,// 195 PAY 174 

    0xd621620b,// 196 PAY 175 

    0x3512e33c,// 197 PAY 176 

    0xc31ec95f,// 198 PAY 177 

    0xc58e79a5,// 199 PAY 178 

    0x07d314cc,// 200 PAY 179 

    0xf0a4b6e9,// 201 PAY 180 

    0xd348ef19,// 202 PAY 181 

    0xab7d1b97,// 203 PAY 182 

    0x33aa42e2,// 204 PAY 183 

    0x4bca14ce,// 205 PAY 184 

    0x7ff48c28,// 206 PAY 185 

    0xb8c1d978,// 207 PAY 186 

    0x1e313802,// 208 PAY 187 

    0x19792c7a,// 209 PAY 188 

    0xc4bf66e0,// 210 PAY 189 

    0x9a63390f,// 211 PAY 190 

    0xfc83d88d,// 212 PAY 191 

    0x7c8a6b21,// 213 PAY 192 

    0x8d0b929e,// 214 PAY 193 

    0xebcaa76c,// 215 PAY 194 

    0x1b9002f4,// 216 PAY 195 

    0xc0c2716b,// 217 PAY 196 

    0x93ed1e7d,// 218 PAY 197 

    0xfb5cece0,// 219 PAY 198 

    0xb855c227,// 220 PAY 199 

    0x1bfade2f,// 221 PAY 200 

    0x588dd5c7,// 222 PAY 201 

    0x14f43e88,// 223 PAY 202 

    0x26a87efc,// 224 PAY 203 

    0x47a768a8,// 225 PAY 204 

    0xb16b2e0b,// 226 PAY 205 

    0x85fd3bf2,// 227 PAY 206 

    0xad86df72,// 228 PAY 207 

    0xb9754d6b,// 229 PAY 208 

    0x2d39465e,// 230 PAY 209 

    0x69030000,// 231 PAY 210 

/// STA is 1 words. 

/// STA num_pkts       : 173 

/// STA pkt_idx        : 179 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x3f 

    0x02cd3fad // 232 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt46_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0000000f,// 3 SCX   1 

    0x804628c9,// 4 SCX   2 

    0x000074c2,// 5 SCX   3 

    0x7de5e8d4,// 6 SCX   4 

    0x41b77082,// 7 SCX   5 

    0xcb31e795,// 8 SCX   6 

    0x6b93df1c,// 9 SCX   7 

    0xa850d0e7,// 10 SCX   8 

    0x4abff44a,// 11 SCX   9 

    0xc3b173ad,// 12 SCX  10 

    0xd0b9281d,// 13 SCX  11 

    0xc14e5ed2,// 14 SCX  12 

    0xc9712ca6,// 15 SCX  13 

    0x0ddff8fa,// 16 SCX  14 

    0x9103c6f5,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 206 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 178 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 178 

/// BFD lencrypto      : 88 

/// BFD ofstcrypto     : 8 

/// BFD (ofst+len)cry  : 96 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 184 

    0x000000b2,// 18 BFD   1 

    0x00080058,// 19 BFD   2 

    0x00b80000,// 20 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 4 

    0x0400a3e0,// 21 MFM   1 

/// BDA is 53 words. 

/// BDA size     is 206 (0xce) 

/// BDA id       is 0x3c4b 

    0x00ce3c4b,// 22 BDA   1 

/// PAY Generic Data size   : 206 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x01e780a6,// 23 PAY   1 

    0xfaffb14a,// 24 PAY   2 

    0xfa68d533,// 25 PAY   3 

    0xeb793283,// 26 PAY   4 

    0xeb902502,// 27 PAY   5 

    0x0632df5d,// 28 PAY   6 

    0xc1d5d89e,// 29 PAY   7 

    0x35edb7ad,// 30 PAY   8 

    0x6a4e497f,// 31 PAY   9 

    0x8def5587,// 32 PAY  10 

    0xe9d163cb,// 33 PAY  11 

    0x887916ff,// 34 PAY  12 

    0x4d26628f,// 35 PAY  13 

    0x5987b9c7,// 36 PAY  14 

    0x274ce867,// 37 PAY  15 

    0x09e3b73a,// 38 PAY  16 

    0xed7b4962,// 39 PAY  17 

    0xae863a7d,// 40 PAY  18 

    0xb1037c6b,// 41 PAY  19 

    0xae84a56c,// 42 PAY  20 

    0x10749a98,// 43 PAY  21 

    0xae990d06,// 44 PAY  22 

    0x29e330a9,// 45 PAY  23 

    0x72520ff5,// 46 PAY  24 

    0x4d7d2c2a,// 47 PAY  25 

    0xacf4b999,// 48 PAY  26 

    0xe18415e4,// 49 PAY  27 

    0x257347b2,// 50 PAY  28 

    0xc86440c2,// 51 PAY  29 

    0xf57ce579,// 52 PAY  30 

    0x46fbe708,// 53 PAY  31 

    0x509ffb2c,// 54 PAY  32 

    0xeedb660e,// 55 PAY  33 

    0x077245bd,// 56 PAY  34 

    0x377da5a3,// 57 PAY  35 

    0x1d31d942,// 58 PAY  36 

    0x1dd2adf2,// 59 PAY  37 

    0xfd2ca583,// 60 PAY  38 

    0xe9f21f34,// 61 PAY  39 

    0xfeed6db3,// 62 PAY  40 

    0x58c266cf,// 63 PAY  41 

    0xc1a8c9a3,// 64 PAY  42 

    0xcec93382,// 65 PAY  43 

    0x71f5ac9f,// 66 PAY  44 

    0xec050809,// 67 PAY  45 

    0xb24ec47e,// 68 PAY  46 

    0x211a2ad3,// 69 PAY  47 

    0x32643772,// 70 PAY  48 

    0x35db6235,// 71 PAY  49 

    0xc18cbf38,// 72 PAY  50 

    0x584b0689,// 73 PAY  51 

    0x83fe0000,// 74 PAY  52 

/// STA is 1 words. 

/// STA num_pkts       : 100 

/// STA pkt_idx        : 152 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x6f 

    0x02616f64 // 75 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt47_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x07 

/// ECH pdu_tag        : 0x00 

    0x00070000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x8040286b,// 4 SCX   2 

    0x00000200,// 5 SCX   3 

    0x9380015e,// 6 SCX   4 

    0x08e675f8,// 7 SCX   5 

    0x749cccc6,// 8 SCX   6 

    0x0f1109d5,// 9 SCX   7 

    0x9da7ca85,// 10 SCX   8 

    0xe5b3826f,// 11 SCX   9 

    0x4a946acb,// 12 SCX  10 

    0x60c4961b,// 13 SCX  11 

    0xc621e1f9,// 14 SCX  12 

    0x5d79217b,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 500 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 295 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 295 

/// BFD lencrypto      : 56 

/// BFD ofstcrypto     : 232 

/// BFD (ofst+len)cry  : 288 

/// BFD ofstiv         : 204 

/// BFD ofsticv        : 456 

    0x00000127,// 16 BFD   1 

    0x00e80038,// 17 BFD   2 

    0x01c800cc,// 18 BFD   3 

/// MFM is 5 words. 

/// MFM vldnibs        : 1d 

    0x1d003f8b,// 19 MFM   1 

    0xbcc152de,// 20 MFM   2 

    0x66eb2022,// 21 MFM   3 

    0x8f906983,// 22 MFM   4 

    0xb0000000,// 23 MFM   5 

/// BDA is 126 words. 

/// BDA size     is 500 (0x1f4) 

/// BDA id       is 0x4ac8 

    0x01f44ac8,// 24 BDA   1 

/// PAY Generic Data size   : 500 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x136ed125,// 25 PAY   1 

    0x56fcd3e0,// 26 PAY   2 

    0x31373b65,// 27 PAY   3 

    0x81158e9d,// 28 PAY   4 

    0x16b804e8,// 29 PAY   5 

    0x1e69b082,// 30 PAY   6 

    0x0219396b,// 31 PAY   7 

    0x4fbd6baa,// 32 PAY   8 

    0x3e73afcb,// 33 PAY   9 

    0xfac5232c,// 34 PAY  10 

    0x77f7475c,// 35 PAY  11 

    0xbc19e89d,// 36 PAY  12 

    0xf8ee272a,// 37 PAY  13 

    0x682055c7,// 38 PAY  14 

    0xe68176a2,// 39 PAY  15 

    0xf4d01bc1,// 40 PAY  16 

    0x4e5bfabe,// 41 PAY  17 

    0xe65d1d4f,// 42 PAY  18 

    0xd39e1228,// 43 PAY  19 

    0x331ab2cd,// 44 PAY  20 

    0xc026e07e,// 45 PAY  21 

    0x51421361,// 46 PAY  22 

    0x519c3f57,// 47 PAY  23 

    0x2156279a,// 48 PAY  24 

    0xfc36c453,// 49 PAY  25 

    0x117a9f7b,// 50 PAY  26 

    0xbdbadc8a,// 51 PAY  27 

    0xd25c7d68,// 52 PAY  28 

    0x8183e766,// 53 PAY  29 

    0x03498543,// 54 PAY  30 

    0x459625c4,// 55 PAY  31 

    0x2d3ca0f7,// 56 PAY  32 

    0x5c1cb74e,// 57 PAY  33 

    0x8619d470,// 58 PAY  34 

    0x183f44b1,// 59 PAY  35 

    0x2bb71447,// 60 PAY  36 

    0x508d796b,// 61 PAY  37 

    0x05eb898c,// 62 PAY  38 

    0xda8018bc,// 63 PAY  39 

    0x403069e5,// 64 PAY  40 

    0x1d204d59,// 65 PAY  41 

    0x7aea32df,// 66 PAY  42 

    0xdff04c9c,// 67 PAY  43 

    0x357f175b,// 68 PAY  44 

    0x8c5f49c4,// 69 PAY  45 

    0xbdec73c1,// 70 PAY  46 

    0x2c2287d8,// 71 PAY  47 

    0xafd20cc3,// 72 PAY  48 

    0x7825bcba,// 73 PAY  49 

    0x6d08ed48,// 74 PAY  50 

    0x15f2ffaf,// 75 PAY  51 

    0xc7ba385d,// 76 PAY  52 

    0x04d96c0b,// 77 PAY  53 

    0xf8a1326c,// 78 PAY  54 

    0x1397dd3e,// 79 PAY  55 

    0xf823964b,// 80 PAY  56 

    0xe5e7f1ec,// 81 PAY  57 

    0xda4ef7a5,// 82 PAY  58 

    0x2df37dea,// 83 PAY  59 

    0x6bb6e6ad,// 84 PAY  60 

    0x5e7c1d5f,// 85 PAY  61 

    0xb5b40efc,// 86 PAY  62 

    0x189a4e00,// 87 PAY  63 

    0xaae72df9,// 88 PAY  64 

    0xa2756258,// 89 PAY  65 

    0xfb34faa0,// 90 PAY  66 

    0xb643cd6e,// 91 PAY  67 

    0xfe12844c,// 92 PAY  68 

    0x62587f39,// 93 PAY  69 

    0xcc28223d,// 94 PAY  70 

    0x53b05749,// 95 PAY  71 

    0xe6cbc7a3,// 96 PAY  72 

    0xa3d34888,// 97 PAY  73 

    0xe893f427,// 98 PAY  74 

    0x2965f725,// 99 PAY  75 

    0x0e08ade4,// 100 PAY  76 

    0xaaa4b3e0,// 101 PAY  77 

    0xf0cacb90,// 102 PAY  78 

    0xf908edea,// 103 PAY  79 

    0xa29bd78f,// 104 PAY  80 

    0xa9927758,// 105 PAY  81 

    0xd0d11602,// 106 PAY  82 

    0x4a96bb51,// 107 PAY  83 

    0x94995db6,// 108 PAY  84 

    0xab4828aa,// 109 PAY  85 

    0xd91a2ed6,// 110 PAY  86 

    0xdf1fb2e6,// 111 PAY  87 

    0x5132436b,// 112 PAY  88 

    0x96e4a02a,// 113 PAY  89 

    0x84bd1c79,// 114 PAY  90 

    0xf0f3dae9,// 115 PAY  91 

    0xaa38be25,// 116 PAY  92 

    0x129775b5,// 117 PAY  93 

    0xf232c85f,// 118 PAY  94 

    0xc5e6708e,// 119 PAY  95 

    0x4bf5b509,// 120 PAY  96 

    0x97a054fa,// 121 PAY  97 

    0xc336c95c,// 122 PAY  98 

    0x423cb91e,// 123 PAY  99 

    0xf05b44f9,// 124 PAY 100 

    0x9310654b,// 125 PAY 101 

    0x9a9a6c52,// 126 PAY 102 

    0x70129684,// 127 PAY 103 

    0x16ee126c,// 128 PAY 104 

    0x236e2d3b,// 129 PAY 105 

    0x0a7b90da,// 130 PAY 106 

    0x20fcb7c1,// 131 PAY 107 

    0x0c2751e3,// 132 PAY 108 

    0x462c63da,// 133 PAY 109 

    0xcada1409,// 134 PAY 110 

    0x883a5535,// 135 PAY 111 

    0x3b895881,// 136 PAY 112 

    0x70e7a42e,// 137 PAY 113 

    0xfb5c698d,// 138 PAY 114 

    0x8592fe48,// 139 PAY 115 

    0x482bf279,// 140 PAY 116 

    0xe7970597,// 141 PAY 117 

    0x3df78665,// 142 PAY 118 

    0x1f3833c7,// 143 PAY 119 

    0x3096515f,// 144 PAY 120 

    0xbf78ca5c,// 145 PAY 121 

    0x5cd89299,// 146 PAY 122 

    0xa8574a6a,// 147 PAY 123 

    0x61d97897,// 148 PAY 124 

    0x7eae8f48,// 149 PAY 125 

/// STA is 1 words. 

/// STA num_pkts       : 35 

/// STA pkt_idx        : 128 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xac 

    0x0200ac23 // 150 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt48_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x07 

/// ECH pdu_tag        : 0x00 

    0x00070000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0000000f,// 3 SCX   1 

    0x80442814,// 4 SCX   2 

    0x00005382,// 5 SCX   3 

    0x5ed902d6,// 6 SCX   4 

    0xbf712b1c,// 7 SCX   5 

    0x463d3859,// 8 SCX   6 

    0x8d95d9df,// 9 SCX   7 

    0x876de853,// 10 SCX   8 

    0x7f3e195d,// 11 SCX   9 

    0x0fb5681f,// 12 SCX  10 

    0xf0add512,// 13 SCX  11 

    0x902ccf70,// 14 SCX  12 

    0xdb4cbed8,// 15 SCX  13 

    0xee0c3c99,// 16 SCX  14 

    0xd6b67d1b,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 720 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 690 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 690 

/// BFD lencrypto      : 56 

/// BFD ofstcrypto     : 316 

/// BFD (ofst+len)cry  : 372 

/// BFD ofstiv         : 220 

/// BFD ofsticv        : 704 

    0x000002b2,// 18 BFD   1 

    0x013c0038,// 19 BFD   2 

    0x02c000dc,// 20 BFD   3 

/// MFM is 8 words. 

/// MFM vldnibs        : 37 

    0x37003745,// 21 MFM   1 

    0x80ca6be0,// 22 MFM   2 

    0xfb800316,// 23 MFM   3 

    0x9ebf8a5c,// 24 MFM   4 

    0x206c13f2,// 25 MFM   5 

    0xcc7b04d4,// 26 MFM   6 

    0x850abb65,// 27 MFM   7 

    0x68d00000,// 28 MFM   8 

/// BDA is 181 words. 

/// BDA size     is 720 (0x2d0) 

/// BDA id       is 0x267c 

    0x02d0267c,// 29 BDA   1 

/// PAY Generic Data size   : 720 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x632b4d7a,// 30 PAY   1 

    0x167d721c,// 31 PAY   2 

    0x29a7505e,// 32 PAY   3 

    0x36dba929,// 33 PAY   4 

    0x87e8a29a,// 34 PAY   5 

    0xaded9bc1,// 35 PAY   6 

    0xffb9c6d7,// 36 PAY   7 

    0x42120664,// 37 PAY   8 

    0x6a105d33,// 38 PAY   9 

    0xcbaf4725,// 39 PAY  10 

    0xf34d1b74,// 40 PAY  11 

    0x8cae55eb,// 41 PAY  12 

    0xd89f5e64,// 42 PAY  13 

    0x6a197444,// 43 PAY  14 

    0x5a66c906,// 44 PAY  15 

    0xab7029a6,// 45 PAY  16 

    0xcdf6fb6c,// 46 PAY  17 

    0xf839d287,// 47 PAY  18 

    0x43c1f3b3,// 48 PAY  19 

    0x9c88fe14,// 49 PAY  20 

    0x8addc7fd,// 50 PAY  21 

    0x8a6d05b7,// 51 PAY  22 

    0xf7937f90,// 52 PAY  23 

    0x44353cbd,// 53 PAY  24 

    0x0063ee9b,// 54 PAY  25 

    0x77f7c902,// 55 PAY  26 

    0x691ac262,// 56 PAY  27 

    0x2059946c,// 57 PAY  28 

    0x9615c410,// 58 PAY  29 

    0x632f23eb,// 59 PAY  30 

    0xa6508cdd,// 60 PAY  31 

    0x0f2b7721,// 61 PAY  32 

    0x36d884cf,// 62 PAY  33 

    0x5474259c,// 63 PAY  34 

    0x51664c76,// 64 PAY  35 

    0x52fb6b06,// 65 PAY  36 

    0x463ea431,// 66 PAY  37 

    0x774c40e3,// 67 PAY  38 

    0xbd320673,// 68 PAY  39 

    0x1f357a9e,// 69 PAY  40 

    0x26b5d3ef,// 70 PAY  41 

    0xbdfec7a8,// 71 PAY  42 

    0x9d4c5a97,// 72 PAY  43 

    0x7a205d43,// 73 PAY  44 

    0xf4288d7e,// 74 PAY  45 

    0x3283aa2e,// 75 PAY  46 

    0x9dbf839b,// 76 PAY  47 

    0x254f1b38,// 77 PAY  48 

    0x3866425f,// 78 PAY  49 

    0x08fe9ebf,// 79 PAY  50 

    0xc1f3a6d1,// 80 PAY  51 

    0x1850248b,// 81 PAY  52 

    0xfaa05b3d,// 82 PAY  53 

    0xa33c954e,// 83 PAY  54 

    0xdebd12a5,// 84 PAY  55 

    0x30da2489,// 85 PAY  56 

    0x862e6bf6,// 86 PAY  57 

    0x13f69b24,// 87 PAY  58 

    0xdeab0636,// 88 PAY  59 

    0x1ed05ebd,// 89 PAY  60 

    0x59102003,// 90 PAY  61 

    0xa4fe2e45,// 91 PAY  62 

    0x07e98575,// 92 PAY  63 

    0x702a5d31,// 93 PAY  64 

    0x1d8d49d0,// 94 PAY  65 

    0x9d1a423a,// 95 PAY  66 

    0x7d83496c,// 96 PAY  67 

    0x6412f2f3,// 97 PAY  68 

    0x8c5ec5b0,// 98 PAY  69 

    0x88fdef2b,// 99 PAY  70 

    0x8d67e242,// 100 PAY  71 

    0x0e98b4d5,// 101 PAY  72 

    0x60d1834e,// 102 PAY  73 

    0x7739e47e,// 103 PAY  74 

    0x0a989367,// 104 PAY  75 

    0xba2a950c,// 105 PAY  76 

    0xf989d254,// 106 PAY  77 

    0x2f8ed635,// 107 PAY  78 

    0xc5e8b28d,// 108 PAY  79 

    0xe5f441f2,// 109 PAY  80 

    0x44a1754c,// 110 PAY  81 

    0x778d8e7a,// 111 PAY  82 

    0xaeab3b19,// 112 PAY  83 

    0xbe24006f,// 113 PAY  84 

    0xf3bdeb9d,// 114 PAY  85 

    0xfd6126f2,// 115 PAY  86 

    0x3e4bdd3b,// 116 PAY  87 

    0x4c2d830d,// 117 PAY  88 

    0x860d4328,// 118 PAY  89 

    0xe6288bf1,// 119 PAY  90 

    0x015a55a3,// 120 PAY  91 

    0xfb526039,// 121 PAY  92 

    0xa0302327,// 122 PAY  93 

    0x7fdeb78d,// 123 PAY  94 

    0xe72f785c,// 124 PAY  95 

    0x4c4619fb,// 125 PAY  96 

    0xe3e0fa01,// 126 PAY  97 

    0x26c2b8b3,// 127 PAY  98 

    0xe39b7409,// 128 PAY  99 

    0x04992b44,// 129 PAY 100 

    0xc54f580e,// 130 PAY 101 

    0x0870a3c5,// 131 PAY 102 

    0x04360548,// 132 PAY 103 

    0x9fc72a4f,// 133 PAY 104 

    0xe1245961,// 134 PAY 105 

    0xb2a10b69,// 135 PAY 106 

    0xdd00cd11,// 136 PAY 107 

    0x73cf58ea,// 137 PAY 108 

    0xc9da33f3,// 138 PAY 109 

    0x7558d72c,// 139 PAY 110 

    0xa5f6e513,// 140 PAY 111 

    0x76a8f8cd,// 141 PAY 112 

    0xf9133e13,// 142 PAY 113 

    0x4360c566,// 143 PAY 114 

    0x105a3406,// 144 PAY 115 

    0xd6fafa42,// 145 PAY 116 

    0x07d9ed92,// 146 PAY 117 

    0xdb5f1dc8,// 147 PAY 118 

    0x7d3b483e,// 148 PAY 119 

    0x26501db5,// 149 PAY 120 

    0xbe4a1ebb,// 150 PAY 121 

    0xd9804ff9,// 151 PAY 122 

    0x2b461d90,// 152 PAY 123 

    0x9ba3253c,// 153 PAY 124 

    0x3c1759f8,// 154 PAY 125 

    0x25f4828d,// 155 PAY 126 

    0x461936c9,// 156 PAY 127 

    0x959efe8d,// 157 PAY 128 

    0x15949aef,// 158 PAY 129 

    0x6a90a4ab,// 159 PAY 130 

    0x0822f8c9,// 160 PAY 131 

    0x696fdef4,// 161 PAY 132 

    0x0e1d40aa,// 162 PAY 133 

    0x72935012,// 163 PAY 134 

    0x140b8866,// 164 PAY 135 

    0x4051f424,// 165 PAY 136 

    0x880281d9,// 166 PAY 137 

    0x023e990c,// 167 PAY 138 

    0x30139d7e,// 168 PAY 139 

    0xb2d9c125,// 169 PAY 140 

    0x7b7c0592,// 170 PAY 141 

    0x8f63ce5c,// 171 PAY 142 

    0x9d0533b4,// 172 PAY 143 

    0x830a2066,// 173 PAY 144 

    0x50b993fc,// 174 PAY 145 

    0x6bb893f3,// 175 PAY 146 

    0x02b9658d,// 176 PAY 147 

    0xc0a0dddc,// 177 PAY 148 

    0xba2c3b40,// 178 PAY 149 

    0xe697f0b1,// 179 PAY 150 

    0xb2c02809,// 180 PAY 151 

    0x8939cb4d,// 181 PAY 152 

    0x5685f3e4,// 182 PAY 153 

    0xf3cfb174,// 183 PAY 154 

    0x071fd2cd,// 184 PAY 155 

    0x664d61c9,// 185 PAY 156 

    0x19ea4afc,// 186 PAY 157 

    0x5d944686,// 187 PAY 158 

    0x8b99b4cc,// 188 PAY 159 

    0x07bcd8d7,// 189 PAY 160 

    0x6d2abd59,// 190 PAY 161 

    0xa045412c,// 191 PAY 162 

    0x13805e11,// 192 PAY 163 

    0xc0a8d771,// 193 PAY 164 

    0xf3cd3ab5,// 194 PAY 165 

    0x6fd72cb2,// 195 PAY 166 

    0x926990cd,// 196 PAY 167 

    0x4c5acbcb,// 197 PAY 168 

    0xf620fb3b,// 198 PAY 169 

    0x4cbd7f48,// 199 PAY 170 

    0xd728c5c7,// 200 PAY 171 

    0x6a5cd9ad,// 201 PAY 172 

    0x4f15226f,// 202 PAY 173 

    0xb67422d0,// 203 PAY 174 

    0xb719b89a,// 204 PAY 175 

    0x15fba93d,// 205 PAY 176 

    0xc06de076,// 206 PAY 177 

    0x0823de00,// 207 PAY 178 

    0xd1ff4c20,// 208 PAY 179 

    0x1db17aa4,// 209 PAY 180 

/// STA is 1 words. 

/// STA num_pkts       : 144 

/// STA pkt_idx        : 108 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1c 

    0x01b11c90 // 210 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt49_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x804428d6,// 4 SCX   2 

    0x000023c2,// 5 SCX   3 

    0x18ad2666,// 6 SCX   4 

    0x2ec4efcf,// 7 SCX   5 

    0x565fbd67,// 8 SCX   6 

    0x15fcc80a,// 9 SCX   7 

    0xd480f6b7,// 10 SCX   8 

    0x913bcc84,// 11 SCX   9 

    0xe0400970,// 12 SCX  10 

    0x8e39f613,// 13 SCX  11 

    0x08313f28,// 14 SCX  12 

    0x4c72758e,// 15 SCX  13 

    0x829ae20d,// 16 SCX  14 

    0xf53ecc5c,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 692 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 390 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 390 

/// BFD lencrypto      : 48 

/// BFD ofstcrypto     : 68 

/// BFD (ofst+len)cry  : 116 

/// BFD ofstiv         : 8 

/// BFD ofsticv        : 512 

    0x00000186,// 18 BFD   1 

    0x00440030,// 19 BFD   2 

    0x02000008,// 20 BFD   3 

/// MFM is 9 words. 

/// MFM vldnibs        : 40 

    0x4000039f,// 21 MFM   1 

    0xeae7a6d2,// 22 MFM   2 

    0x7873dc07,// 23 MFM   3 

    0x4a4adc9c,// 24 MFM   4 

    0xbe58f655,// 25 MFM   5 

    0x0131464a,// 26 MFM   6 

    0x173da3b0,// 27 MFM   7 

    0x562fdf1f,// 28 MFM   8 

    0x8cf40000,// 29 MFM   9 

/// BDA is 174 words. 

/// BDA size     is 692 (0x2b4) 

/// BDA id       is 0x5630 

    0x02b45630,// 30 BDA   1 

/// PAY Generic Data size   : 692 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xd92236da,// 31 PAY   1 

    0xce76df13,// 32 PAY   2 

    0x45b20dbf,// 33 PAY   3 

    0x5b3dee02,// 34 PAY   4 

    0xbab89e65,// 35 PAY   5 

    0xa2f70930,// 36 PAY   6 

    0x7173fb15,// 37 PAY   7 

    0xe4e06806,// 38 PAY   8 

    0x2d5f19aa,// 39 PAY   9 

    0x972d0dcf,// 40 PAY  10 

    0x41dcadfc,// 41 PAY  11 

    0x9fc33d68,// 42 PAY  12 

    0x57cfb668,// 43 PAY  13 

    0x0e9f0d29,// 44 PAY  14 

    0xa7feb6b0,// 45 PAY  15 

    0xaffdbaf1,// 46 PAY  16 

    0xe3494e5c,// 47 PAY  17 

    0xcec181c1,// 48 PAY  18 

    0xda5de0a7,// 49 PAY  19 

    0x54ea39a7,// 50 PAY  20 

    0x4afb5acf,// 51 PAY  21 

    0x792a58c7,// 52 PAY  22 

    0x7cfa824e,// 53 PAY  23 

    0x70331942,// 54 PAY  24 

    0x88d5f4fb,// 55 PAY  25 

    0x625e317d,// 56 PAY  26 

    0xea8946f1,// 57 PAY  27 

    0x521c6829,// 58 PAY  28 

    0xcd20b612,// 59 PAY  29 

    0xf12c0b3b,// 60 PAY  30 

    0xd1deac02,// 61 PAY  31 

    0x3ef399a2,// 62 PAY  32 

    0x591db88a,// 63 PAY  33 

    0xea289ade,// 64 PAY  34 

    0xabb01c13,// 65 PAY  35 

    0x8f8db3d7,// 66 PAY  36 

    0x18af4d53,// 67 PAY  37 

    0x31e828c5,// 68 PAY  38 

    0xfa65a372,// 69 PAY  39 

    0xc3255a62,// 70 PAY  40 

    0x63ad0f99,// 71 PAY  41 

    0x163e6dc1,// 72 PAY  42 

    0x0def7639,// 73 PAY  43 

    0x87949b27,// 74 PAY  44 

    0x0b7d3f42,// 75 PAY  45 

    0xd68ed374,// 76 PAY  46 

    0x4ec78953,// 77 PAY  47 

    0x710a0e7b,// 78 PAY  48 

    0xfdaf65f2,// 79 PAY  49 

    0x01afb583,// 80 PAY  50 

    0xdec7be8a,// 81 PAY  51 

    0xa133785c,// 82 PAY  52 

    0x9cff372b,// 83 PAY  53 

    0x68713539,// 84 PAY  54 

    0xa61e4ce3,// 85 PAY  55 

    0x29ee9a5d,// 86 PAY  56 

    0xb3980e48,// 87 PAY  57 

    0xabe22456,// 88 PAY  58 

    0x87bece1f,// 89 PAY  59 

    0xf15dd089,// 90 PAY  60 

    0x546cb973,// 91 PAY  61 

    0x0f9e1b34,// 92 PAY  62 

    0x3d36c800,// 93 PAY  63 

    0xc15bd3ea,// 94 PAY  64 

    0x9de0fbd7,// 95 PAY  65 

    0xa42f8b75,// 96 PAY  66 

    0xfb41fb7c,// 97 PAY  67 

    0x8d90b78c,// 98 PAY  68 

    0x131de8b5,// 99 PAY  69 

    0x8efb3156,// 100 PAY  70 

    0x1b4cf41f,// 101 PAY  71 

    0xaff9971a,// 102 PAY  72 

    0xf74934bd,// 103 PAY  73 

    0xf6f8b23e,// 104 PAY  74 

    0xda512d55,// 105 PAY  75 

    0x6bc832c7,// 106 PAY  76 

    0xe3ff4ddd,// 107 PAY  77 

    0xb3a4993b,// 108 PAY  78 

    0x8680b63c,// 109 PAY  79 

    0x470931ce,// 110 PAY  80 

    0x7931b88d,// 111 PAY  81 

    0xa4cd98f4,// 112 PAY  82 

    0xef9b5dde,// 113 PAY  83 

    0xcf63e614,// 114 PAY  84 

    0x2c5386c6,// 115 PAY  85 

    0x32228271,// 116 PAY  86 

    0x32b57d4c,// 117 PAY  87 

    0x53cb6ba2,// 118 PAY  88 

    0x7c80c3b7,// 119 PAY  89 

    0x4cc8c930,// 120 PAY  90 

    0x82cbad94,// 121 PAY  91 

    0x61a10d43,// 122 PAY  92 

    0xe94dd699,// 123 PAY  93 

    0x332a8019,// 124 PAY  94 

    0x3bd32e2f,// 125 PAY  95 

    0xe3d8c8d2,// 126 PAY  96 

    0x33e9aeeb,// 127 PAY  97 

    0x88ec039a,// 128 PAY  98 

    0x0f4e1ec1,// 129 PAY  99 

    0x5cab9dd9,// 130 PAY 100 

    0xe432c94f,// 131 PAY 101 

    0x86740380,// 132 PAY 102 

    0x8618490a,// 133 PAY 103 

    0x20baffce,// 134 PAY 104 

    0xe243a9d8,// 135 PAY 105 

    0x15e0fe57,// 136 PAY 106 

    0xd871e182,// 137 PAY 107 

    0x6c82cbdf,// 138 PAY 108 

    0x6c4195fa,// 139 PAY 109 

    0xf05922f0,// 140 PAY 110 

    0x6ad5796d,// 141 PAY 111 

    0xba96cfff,// 142 PAY 112 

    0xbeb76c20,// 143 PAY 113 

    0x6e639bb7,// 144 PAY 114 

    0xfe607789,// 145 PAY 115 

    0xa6c4faea,// 146 PAY 116 

    0x8cb3e423,// 147 PAY 117 

    0x92cc5b87,// 148 PAY 118 

    0xe9b253ed,// 149 PAY 119 

    0xde08263f,// 150 PAY 120 

    0x41c3deaf,// 151 PAY 121 

    0xc8d926e5,// 152 PAY 122 

    0x26c0f063,// 153 PAY 123 

    0x924bd413,// 154 PAY 124 

    0x053fa3ad,// 155 PAY 125 

    0x8615eb62,// 156 PAY 126 

    0x8b5fbcac,// 157 PAY 127 

    0xf7fe7a90,// 158 PAY 128 

    0xa24c8719,// 159 PAY 129 

    0x57d3c2fc,// 160 PAY 130 

    0x17e81f21,// 161 PAY 131 

    0x573ddc06,// 162 PAY 132 

    0x51d00126,// 163 PAY 133 

    0x7bcf4a41,// 164 PAY 134 

    0x6639cbdd,// 165 PAY 135 

    0x60a969cd,// 166 PAY 136 

    0xd288cd6f,// 167 PAY 137 

    0x637e66e9,// 168 PAY 138 

    0xd3291f85,// 169 PAY 139 

    0x979f2d29,// 170 PAY 140 

    0xd60bf4d5,// 171 PAY 141 

    0x387a9925,// 172 PAY 142 

    0xb0d3b1b4,// 173 PAY 143 

    0x8d5d9b27,// 174 PAY 144 

    0xfa1cb0a5,// 175 PAY 145 

    0xaa2fcec3,// 176 PAY 146 

    0x58211c9c,// 177 PAY 147 

    0x9fe9c254,// 178 PAY 148 

    0x2d7bbff4,// 179 PAY 149 

    0x1a63dbb4,// 180 PAY 150 

    0x64e1c2e2,// 181 PAY 151 

    0xf86159c0,// 182 PAY 152 

    0xe5d9b9c1,// 183 PAY 153 

    0xaf51992e,// 184 PAY 154 

    0xa003cfc9,// 185 PAY 155 

    0x9dbf2aef,// 186 PAY 156 

    0x186029f8,// 187 PAY 157 

    0xf5801d3a,// 188 PAY 158 

    0x4f0fd15a,// 189 PAY 159 

    0xdc6e26a0,// 190 PAY 160 

    0xe74e424a,// 191 PAY 161 

    0x2cfad088,// 192 PAY 162 

    0x901c7126,// 193 PAY 163 

    0x9859ff73,// 194 PAY 164 

    0x7a8d397d,// 195 PAY 165 

    0x04f8a52a,// 196 PAY 166 

    0xe0aab883,// 197 PAY 167 

    0xace41f25,// 198 PAY 168 

    0xe67e11b2,// 199 PAY 169 

    0x9527f0a2,// 200 PAY 170 

    0x76481bda,// 201 PAY 171 

    0xe6254cc5,// 202 PAY 172 

    0xe1731fc0,// 203 PAY 173 

/// STA is 1 words. 

/// STA num_pkts       : 101 

/// STA pkt_idx        : 196 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xce 

    0x0311ce65 // 204 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt50_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x0c 

/// ECH pdu_tag        : 0x00 

    0x000c0000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x804228d8,// 4 SCX   2 

    0x00005200,// 5 SCX   3 

    0xbf4120d6,// 6 SCX   4 

    0x9efa6c19,// 7 SCX   5 

    0x42fe3d5a,// 8 SCX   6 

    0xfafd0de0,// 9 SCX   7 

    0x6fd617e5,// 10 SCX   8 

    0x7864a22e,// 11 SCX   9 

    0x065351bc,// 12 SCX  10 

    0xc426850c,// 13 SCX  11 

    0x2434930f,// 14 SCX  12 

    0x4c2a8ddf,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 340 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 92 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 92 

/// BFD lencrypto      : 72 

/// BFD ofstcrypto     : 12 

/// BFD (ofst+len)cry  : 84 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 300 

    0x0000005c,// 16 BFD   1 

    0x000c0048,// 17 BFD   2 

    0x012c0004,// 18 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 1 

    0x01004000,// 19 MFM   1 

/// BDA is 86 words. 

/// BDA size     is 340 (0x154) 

/// BDA id       is 0x3ee5 

    0x01543ee5,// 20 BDA   1 

/// PAY Generic Data size   : 340 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x9fbb0993,// 21 PAY   1 

    0x4bbe50f8,// 22 PAY   2 

    0x3c2163fa,// 23 PAY   3 

    0x076ba7f8,// 24 PAY   4 

    0x00bf980c,// 25 PAY   5 

    0xe28b625a,// 26 PAY   6 

    0x7cd64f76,// 27 PAY   7 

    0xeb438178,// 28 PAY   8 

    0xa7f5d8f6,// 29 PAY   9 

    0x2285f4e7,// 30 PAY  10 

    0x1e269372,// 31 PAY  11 

    0x912895b5,// 32 PAY  12 

    0x5adb819e,// 33 PAY  13 

    0xd5b00705,// 34 PAY  14 

    0xbf13efed,// 35 PAY  15 

    0x1ec25894,// 36 PAY  16 

    0xd9a94d9d,// 37 PAY  17 

    0xa653c042,// 38 PAY  18 

    0x2a6473a5,// 39 PAY  19 

    0x69928847,// 40 PAY  20 

    0x1462edb7,// 41 PAY  21 

    0x84d4be53,// 42 PAY  22 

    0x68d6ca95,// 43 PAY  23 

    0x70f545f4,// 44 PAY  24 

    0xfad9b6ef,// 45 PAY  25 

    0x452d0301,// 46 PAY  26 

    0xd27786cb,// 47 PAY  27 

    0xb39e3bed,// 48 PAY  28 

    0xcf967632,// 49 PAY  29 

    0xeb0d7d44,// 50 PAY  30 

    0x4bd52cf4,// 51 PAY  31 

    0x26eb5467,// 52 PAY  32 

    0x122cd02d,// 53 PAY  33 

    0xe535ec7c,// 54 PAY  34 

    0x70142e66,// 55 PAY  35 

    0xaf99b6ac,// 56 PAY  36 

    0xa6c3fb6f,// 57 PAY  37 

    0xbbd65777,// 58 PAY  38 

    0x0e6ba266,// 59 PAY  39 

    0x8b4e0b3e,// 60 PAY  40 

    0x13cc2c50,// 61 PAY  41 

    0x9034c7f1,// 62 PAY  42 

    0x0dc7d909,// 63 PAY  43 

    0xb7db8918,// 64 PAY  44 

    0xc5cf2b37,// 65 PAY  45 

    0x89364d1b,// 66 PAY  46 

    0xb8ee1293,// 67 PAY  47 

    0x171f374f,// 68 PAY  48 

    0x71653361,// 69 PAY  49 

    0x6fee3b29,// 70 PAY  50 

    0xac1a97a2,// 71 PAY  51 

    0xa7e41946,// 72 PAY  52 

    0x74725900,// 73 PAY  53 

    0x5e47541f,// 74 PAY  54 

    0x9ae36ee2,// 75 PAY  55 

    0x95576c18,// 76 PAY  56 

    0xe2df1927,// 77 PAY  57 

    0x615a0737,// 78 PAY  58 

    0x78998034,// 79 PAY  59 

    0x1f4e3808,// 80 PAY  60 

    0x210da937,// 81 PAY  61 

    0xc559d79a,// 82 PAY  62 

    0xc869bf8c,// 83 PAY  63 

    0x5ad68b14,// 84 PAY  64 

    0x700a2e61,// 85 PAY  65 

    0xe80d31e2,// 86 PAY  66 

    0x1aa0f2f4,// 87 PAY  67 

    0x39ef925f,// 88 PAY  68 

    0xb0d43c54,// 89 PAY  69 

    0x1feb8f51,// 90 PAY  70 

    0x24c42a2d,// 91 PAY  71 

    0x3453fdcc,// 92 PAY  72 

    0xf6eb4c21,// 93 PAY  73 

    0xbedbf6a2,// 94 PAY  74 

    0xbdebc1e7,// 95 PAY  75 

    0x7df21fb9,// 96 PAY  76 

    0x9d849e61,// 97 PAY  77 

    0x3a69fdb2,// 98 PAY  78 

    0x53c889ec,// 99 PAY  79 

    0x7ec1fa2b,// 100 PAY  80 

    0x608290c6,// 101 PAY  81 

    0x9d2d34f2,// 102 PAY  82 

    0xacb57b9e,// 103 PAY  83 

    0xa6fa7f46,// 104 PAY  84 

    0x88e65cc3,// 105 PAY  85 

/// STA is 1 words. 

/// STA num_pkts       : 196 

/// STA pkt_idx        : 51 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x52 

    0x00cc52c4 // 106 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt51_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x0d 

/// ECH pdu_tag        : 0x00 

    0x000d0000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x804128a8,// 4 SCX   2 

    0x00006100,// 5 SCX   3 

    0x602060f8,// 6 SCX   4 

    0x674db3c8,// 7 SCX   5 

    0x4df6eff3,// 8 SCX   6 

    0x657362f7,// 9 SCX   7 

    0xe0f316bd,// 10 SCX   8 

    0x42ff0c1b,// 11 SCX   9 

    0x8de0b75f,// 12 SCX  10 

    0x6d988904,// 13 SCX  11 

    0x289574ee,// 14 SCX  12 

    0xf36a8a61,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 576 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 517 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 517 

/// BFD lencrypto      : 104 

/// BFD ofstcrypto     : 392 

/// BFD (ofst+len)cry  : 496 

/// BFD ofstiv         : 320 

/// BFD ofsticv        : 536 

    0x00000205,// 16 BFD   1 

    0x01880068,// 17 BFD   2 

    0x02180140,// 18 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 10 

    0x10001696,// 19 MFM   1 

    0x018fc239,// 20 MFM   2 

    0x13730000,// 21 MFM   3 

/// BDA is 145 words. 

/// BDA size     is 576 (0x240) 

/// BDA id       is 0x30ad 

    0x024030ad,// 22 BDA   1 

/// PAY Generic Data size   : 576 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x0fcef435,// 23 PAY   1 

    0x54cf58fe,// 24 PAY   2 

    0xe9164c5d,// 25 PAY   3 

    0x7008bf82,// 26 PAY   4 

    0x4a221cb9,// 27 PAY   5 

    0xc2ed0dd5,// 28 PAY   6 

    0x8a81692f,// 29 PAY   7 

    0xf012513b,// 30 PAY   8 

    0xaaebf778,// 31 PAY   9 

    0xb76766a4,// 32 PAY  10 

    0x87fbfb3c,// 33 PAY  11 

    0x5564b8fa,// 34 PAY  12 

    0xc05f84a2,// 35 PAY  13 

    0x260d229d,// 36 PAY  14 

    0xad880507,// 37 PAY  15 

    0x8d990a56,// 38 PAY  16 

    0xab8555ba,// 39 PAY  17 

    0xf04cec25,// 40 PAY  18 

    0x5d5e55d1,// 41 PAY  19 

    0x19014806,// 42 PAY  20 

    0xff07264c,// 43 PAY  21 

    0xbec0bc74,// 44 PAY  22 

    0x251a55b4,// 45 PAY  23 

    0x801b76cf,// 46 PAY  24 

    0x99ac9c0e,// 47 PAY  25 

    0xc0bf617c,// 48 PAY  26 

    0x74b194f0,// 49 PAY  27 

    0x712be474,// 50 PAY  28 

    0x60dc58f2,// 51 PAY  29 

    0xa2f2820b,// 52 PAY  30 

    0x7ebc74d9,// 53 PAY  31 

    0x06e2de12,// 54 PAY  32 

    0x10a8c025,// 55 PAY  33 

    0x1594a347,// 56 PAY  34 

    0xb5712d84,// 57 PAY  35 

    0xc9a4d9a3,// 58 PAY  36 

    0x92cd1111,// 59 PAY  37 

    0x55c9c063,// 60 PAY  38 

    0x832f943e,// 61 PAY  39 

    0x77aa3f05,// 62 PAY  40 

    0x25945e05,// 63 PAY  41 

    0x7a5bac42,// 64 PAY  42 

    0xbc5f324d,// 65 PAY  43 

    0x7084449c,// 66 PAY  44 

    0xa7d376fc,// 67 PAY  45 

    0x9c5e4c54,// 68 PAY  46 

    0xe11609ea,// 69 PAY  47 

    0x6b90d38c,// 70 PAY  48 

    0xc6685087,// 71 PAY  49 

    0xa3257a64,// 72 PAY  50 

    0x0920d264,// 73 PAY  51 

    0xd9100643,// 74 PAY  52 

    0x29d60830,// 75 PAY  53 

    0xc88cae56,// 76 PAY  54 

    0x6630df2e,// 77 PAY  55 

    0x5d8d49f8,// 78 PAY  56 

    0x7ad6eb06,// 79 PAY  57 

    0x8f2d2303,// 80 PAY  58 

    0x9853c180,// 81 PAY  59 

    0x91636202,// 82 PAY  60 

    0xcf6eaa6d,// 83 PAY  61 

    0x3fbc5e6c,// 84 PAY  62 

    0x39b44015,// 85 PAY  63 

    0x47988620,// 86 PAY  64 

    0xb5435666,// 87 PAY  65 

    0xb9b411e1,// 88 PAY  66 

    0x5e40a4a8,// 89 PAY  67 

    0x30c45e9a,// 90 PAY  68 

    0x47ac555e,// 91 PAY  69 

    0x2c89cd33,// 92 PAY  70 

    0x43f1486e,// 93 PAY  71 

    0x3e84c989,// 94 PAY  72 

    0x80a24316,// 95 PAY  73 

    0xe5fdc6cb,// 96 PAY  74 

    0x944e9e99,// 97 PAY  75 

    0x35510ce3,// 98 PAY  76 

    0x9f1def68,// 99 PAY  77 

    0x6a2ba5ee,// 100 PAY  78 

    0x6b88f7fb,// 101 PAY  79 

    0x816c36a2,// 102 PAY  80 

    0xa7e901e1,// 103 PAY  81 

    0x5406d183,// 104 PAY  82 

    0x29a878ba,// 105 PAY  83 

    0xa1f1d0fe,// 106 PAY  84 

    0xc72dfcae,// 107 PAY  85 

    0x09787d76,// 108 PAY  86 

    0x516d8d95,// 109 PAY  87 

    0x422d17f7,// 110 PAY  88 

    0x1de57522,// 111 PAY  89 

    0x4a54d39b,// 112 PAY  90 

    0xfb6aee31,// 113 PAY  91 

    0xa0b83974,// 114 PAY  92 

    0x60125f3e,// 115 PAY  93 

    0xc2c68a76,// 116 PAY  94 

    0x24be1095,// 117 PAY  95 

    0x0b22f368,// 118 PAY  96 

    0x32049acc,// 119 PAY  97 

    0x281c4cff,// 120 PAY  98 

    0xa69c2741,// 121 PAY  99 

    0x46bd8a13,// 122 PAY 100 

    0x910a9767,// 123 PAY 101 

    0xf86085e2,// 124 PAY 102 

    0xa6374b1f,// 125 PAY 103 

    0x1bb89311,// 126 PAY 104 

    0x3e312738,// 127 PAY 105 

    0x2eb581bf,// 128 PAY 106 

    0xedb2111d,// 129 PAY 107 

    0x6ae0d1c3,// 130 PAY 108 

    0x65eac532,// 131 PAY 109 

    0x193f7432,// 132 PAY 110 

    0x2c3df82d,// 133 PAY 111 

    0x1b74b06f,// 134 PAY 112 

    0x17b7a940,// 135 PAY 113 

    0x6db1d5f1,// 136 PAY 114 

    0x2f713a75,// 137 PAY 115 

    0xeaa4cee2,// 138 PAY 116 

    0x6488d576,// 139 PAY 117 

    0x9b341697,// 140 PAY 118 

    0x10c552ff,// 141 PAY 119 

    0xfd78a384,// 142 PAY 120 

    0x92d1181a,// 143 PAY 121 

    0xfea47df8,// 144 PAY 122 

    0xdc589440,// 145 PAY 123 

    0x7459d379,// 146 PAY 124 

    0x24af0c53,// 147 PAY 125 

    0x3cdd28e8,// 148 PAY 126 

    0x9ad1442a,// 149 PAY 127 

    0xdf5125bb,// 150 PAY 128 

    0x048563a0,// 151 PAY 129 

    0x6e2065c6,// 152 PAY 130 

    0x3ff96cf5,// 153 PAY 131 

    0x2b3434cf,// 154 PAY 132 

    0x64d46f28,// 155 PAY 133 

    0x985c0501,// 156 PAY 134 

    0x51ebad41,// 157 PAY 135 

    0xfded9546,// 158 PAY 136 

    0xe2f06790,// 159 PAY 137 

    0x097bf0eb,// 160 PAY 138 

    0x10c6bd6b,// 161 PAY 139 

    0xd9192ebd,// 162 PAY 140 

    0x1ab29a7f,// 163 PAY 141 

    0x3aefc132,// 164 PAY 142 

    0x22f3dc69,// 165 PAY 143 

    0x69d042a9,// 166 PAY 144 

/// STA is 1 words. 

/// STA num_pkts       : 59 

/// STA pkt_idx        : 20 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb6 

    0x0050b63b // 167 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt52_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0d 

/// ECH pdu_tag        : 0x00 

    0x000d0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x804428db,// 4 SCX   2 

    0x00007382,// 5 SCX   3 

    0x946dabb8,// 6 SCX   4 

    0x7bb91c7e,// 7 SCX   5 

    0x689eefb0,// 8 SCX   6 

    0x148c86e8,// 9 SCX   7 

    0x2eb2d5b0,// 10 SCX   8 

    0x1b16f719,// 11 SCX   9 

    0xb0a03199,// 12 SCX  10 

    0x020592bd,// 13 SCX  11 

    0x77e88453,// 14 SCX  12 

    0x2813036b,// 15 SCX  13 

    0x06ede13e,// 16 SCX  14 

    0xaadc61ff,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 816 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 432 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 432 

/// BFD lencrypto      : 184 

/// BFD ofstcrypto     : 52 

/// BFD (ofst+len)cry  : 236 

/// BFD ofstiv         : 40 

/// BFD ofsticv        : 572 

    0x000001b0,// 18 BFD   1 

    0x003400b8,// 19 BFD   2 

    0x023c0028,// 20 BFD   3 

/// MFM is 10 words. 

/// MFM vldnibs        : 47 

    0x4700f496,// 21 MFM   1 

    0x2347cb89,// 22 MFM   2 

    0x464570d5,// 23 MFM   3 

    0x6d15c363,// 24 MFM   4 

    0x8efbe5fb,// 25 MFM   5 

    0x8350fac2,// 26 MFM   6 

    0x602e5c47,// 27 MFM   7 

    0xc28f2b98,// 28 MFM   8 

    0xc0923abc,// 29 MFM   9 

    0xc6a00000,// 30 MFM  10 

/// BDA is 205 words. 

/// BDA size     is 816 (0x330) 

/// BDA id       is 0xa607 

    0x0330a607,// 31 BDA   1 

/// PAY Generic Data size   : 816 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0xdd46e1b1,// 32 PAY   1 

    0x30021120,// 33 PAY   2 

    0xf6159bd2,// 34 PAY   3 

    0xc739590e,// 35 PAY   4 

    0x15169c3c,// 36 PAY   5 

    0x013816ec,// 37 PAY   6 

    0x22ada436,// 38 PAY   7 

    0x46b0a2a1,// 39 PAY   8 

    0xac5f19ee,// 40 PAY   9 

    0x25d73452,// 41 PAY  10 

    0x6c82281f,// 42 PAY  11 

    0x88bb542a,// 43 PAY  12 

    0x79626efa,// 44 PAY  13 

    0xd92a75ca,// 45 PAY  14 

    0x4fbf5139,// 46 PAY  15 

    0xd3f83caf,// 47 PAY  16 

    0xdc6d47e3,// 48 PAY  17 

    0xc9aa8d4a,// 49 PAY  18 

    0x91e913a4,// 50 PAY  19 

    0x1f6476e6,// 51 PAY  20 

    0xedcc37ee,// 52 PAY  21 

    0x49315c87,// 53 PAY  22 

    0xf0c237a8,// 54 PAY  23 

    0xdf076cf1,// 55 PAY  24 

    0x524fbc91,// 56 PAY  25 

    0xe3f593d6,// 57 PAY  26 

    0x606f067c,// 58 PAY  27 

    0xed68ff5b,// 59 PAY  28 

    0xa0f61038,// 60 PAY  29 

    0xd80fe108,// 61 PAY  30 

    0x081b857d,// 62 PAY  31 

    0xb283aa6f,// 63 PAY  32 

    0x464a1bde,// 64 PAY  33 

    0x609dfe84,// 65 PAY  34 

    0x4696275d,// 66 PAY  35 

    0x86b7c0b6,// 67 PAY  36 

    0x30ba745c,// 68 PAY  37 

    0x3aab8fdd,// 69 PAY  38 

    0x1977694f,// 70 PAY  39 

    0x6b527750,// 71 PAY  40 

    0xb81f53d8,// 72 PAY  41 

    0xe820562c,// 73 PAY  42 

    0x5d6be2b4,// 74 PAY  43 

    0x610d5890,// 75 PAY  44 

    0xd9ae2249,// 76 PAY  45 

    0x76cb9b15,// 77 PAY  46 

    0x5e6cd27f,// 78 PAY  47 

    0x0e9611e5,// 79 PAY  48 

    0x1e2d37d7,// 80 PAY  49 

    0x4aef5f4a,// 81 PAY  50 

    0x708d88d7,// 82 PAY  51 

    0xdb96847a,// 83 PAY  52 

    0x46613f75,// 84 PAY  53 

    0x1cbf9948,// 85 PAY  54 

    0x41d0f4e5,// 86 PAY  55 

    0x7cfaf926,// 87 PAY  56 

    0xab1ff753,// 88 PAY  57 

    0x2dc8da71,// 89 PAY  58 

    0xce4a48a0,// 90 PAY  59 

    0xe2655b35,// 91 PAY  60 

    0x1650668e,// 92 PAY  61 

    0x0c84a23b,// 93 PAY  62 

    0xff525c4f,// 94 PAY  63 

    0xe8453b78,// 95 PAY  64 

    0xc3167e4f,// 96 PAY  65 

    0xe279a113,// 97 PAY  66 

    0x865be110,// 98 PAY  67 

    0x8fae0670,// 99 PAY  68 

    0xf668c551,// 100 PAY  69 

    0xead9c557,// 101 PAY  70 

    0x389b80c2,// 102 PAY  71 

    0xe3862e41,// 103 PAY  72 

    0xd55169cd,// 104 PAY  73 

    0xb06b107f,// 105 PAY  74 

    0xc41f9252,// 106 PAY  75 

    0x20d11cd9,// 107 PAY  76 

    0x7ce8ca49,// 108 PAY  77 

    0x5f303df8,// 109 PAY  78 

    0x822b610d,// 110 PAY  79 

    0xe57df17b,// 111 PAY  80 

    0x7ab041a5,// 112 PAY  81 

    0x73779eb9,// 113 PAY  82 

    0xdc42a22f,// 114 PAY  83 

    0xbb96039a,// 115 PAY  84 

    0x7991a5fa,// 116 PAY  85 

    0xa8cb32a2,// 117 PAY  86 

    0x1901263d,// 118 PAY  87 

    0xc4a6d651,// 119 PAY  88 

    0x28f8cbb6,// 120 PAY  89 

    0xe5ad28ad,// 121 PAY  90 

    0x418f52ea,// 122 PAY  91 

    0xce4e5237,// 123 PAY  92 

    0xe6fdc1c4,// 124 PAY  93 

    0x0a461655,// 125 PAY  94 

    0xa5e48fec,// 126 PAY  95 

    0xfa8187bb,// 127 PAY  96 

    0xc502f93a,// 128 PAY  97 

    0x0882a61e,// 129 PAY  98 

    0xe735523b,// 130 PAY  99 

    0x3e2dace7,// 131 PAY 100 

    0xb84ad0c1,// 132 PAY 101 

    0x8e1a66be,// 133 PAY 102 

    0x7188d72b,// 134 PAY 103 

    0xe6e34ce1,// 135 PAY 104 

    0x37b628f5,// 136 PAY 105 

    0x4980440f,// 137 PAY 106 

    0x01c7b92a,// 138 PAY 107 

    0xe664f3a7,// 139 PAY 108 

    0xaecb6eb0,// 140 PAY 109 

    0xae2a9dff,// 141 PAY 110 

    0xc26cc930,// 142 PAY 111 

    0x02a9a0b0,// 143 PAY 112 

    0x158d5fb9,// 144 PAY 113 

    0xbe1411e8,// 145 PAY 114 

    0xa7b9d3a7,// 146 PAY 115 

    0xac7f5a8b,// 147 PAY 116 

    0x4a610f49,// 148 PAY 117 

    0x0fde8869,// 149 PAY 118 

    0x7be01434,// 150 PAY 119 

    0xd9426f70,// 151 PAY 120 

    0x8d730ed8,// 152 PAY 121 

    0xdd7d9c71,// 153 PAY 122 

    0xe98634e8,// 154 PAY 123 

    0x29533676,// 155 PAY 124 

    0xa90e75bd,// 156 PAY 125 

    0x81a7f98f,// 157 PAY 126 

    0x0f295f09,// 158 PAY 127 

    0x0947494c,// 159 PAY 128 

    0x49900d4c,// 160 PAY 129 

    0xab4de5d8,// 161 PAY 130 

    0x0a98ddde,// 162 PAY 131 

    0x5fc98489,// 163 PAY 132 

    0x6d15f65b,// 164 PAY 133 

    0xa040ffcf,// 165 PAY 134 

    0x5723b105,// 166 PAY 135 

    0x3b1722ad,// 167 PAY 136 

    0x3f1c32ac,// 168 PAY 137 

    0x627e63da,// 169 PAY 138 

    0xcc808fbb,// 170 PAY 139 

    0x060679c1,// 171 PAY 140 

    0x511e28da,// 172 PAY 141 

    0xca2b2cf4,// 173 PAY 142 

    0x6cd8237d,// 174 PAY 143 

    0x36b1deeb,// 175 PAY 144 

    0x491ad761,// 176 PAY 145 

    0xeea899f5,// 177 PAY 146 

    0xa4a001c0,// 178 PAY 147 

    0x41b05bf1,// 179 PAY 148 

    0x73081d6c,// 180 PAY 149 

    0xd1aec8da,// 181 PAY 150 

    0xfb25a58e,// 182 PAY 151 

    0xac9e9c3f,// 183 PAY 152 

    0x6d6875f8,// 184 PAY 153 

    0xc4761dc5,// 185 PAY 154 

    0x573e0a3e,// 186 PAY 155 

    0x24f40a4a,// 187 PAY 156 

    0x3b1da451,// 188 PAY 157 

    0x78b30c7d,// 189 PAY 158 

    0xc974cfb8,// 190 PAY 159 

    0x48850a22,// 191 PAY 160 

    0x6b613a6c,// 192 PAY 161 

    0xb1496cb5,// 193 PAY 162 

    0x50ce8b9b,// 194 PAY 163 

    0xb204f2b2,// 195 PAY 164 

    0xfe1b95bc,// 196 PAY 165 

    0xe921d005,// 197 PAY 166 

    0x26e159e0,// 198 PAY 167 

    0x6494d338,// 199 PAY 168 

    0xd1487f80,// 200 PAY 169 

    0xd75f6ab3,// 201 PAY 170 

    0xc1bce716,// 202 PAY 171 

    0x29beb910,// 203 PAY 172 

    0x1829893e,// 204 PAY 173 

    0x11d6499a,// 205 PAY 174 

    0x03bd9395,// 206 PAY 175 

    0x6868d878,// 207 PAY 176 

    0xe23e0697,// 208 PAY 177 

    0xb14ad48c,// 209 PAY 178 

    0x9561ed21,// 210 PAY 179 

    0x6688c3a7,// 211 PAY 180 

    0x322057be,// 212 PAY 181 

    0x908ab2c2,// 213 PAY 182 

    0xc984d9c2,// 214 PAY 183 

    0x69e0769b,// 215 PAY 184 

    0x9e61fce5,// 216 PAY 185 

    0x3841d801,// 217 PAY 186 

    0x2024046a,// 218 PAY 187 

    0xc81979e7,// 219 PAY 188 

    0xd29f1479,// 220 PAY 189 

    0x5e67d05e,// 221 PAY 190 

    0xb7a000ce,// 222 PAY 191 

    0xc54cec2d,// 223 PAY 192 

    0xb5983353,// 224 PAY 193 

    0xadb8f212,// 225 PAY 194 

    0x1105bd4f,// 226 PAY 195 

    0x01b8c113,// 227 PAY 196 

    0x07bf3812,// 228 PAY 197 

    0xdd6858e0,// 229 PAY 198 

    0x7b9ae298,// 230 PAY 199 

    0xd669dd5d,// 231 PAY 200 

    0x504ba28e,// 232 PAY 201 

    0x2a601506,// 233 PAY 202 

    0x07969e37,// 234 PAY 203 

    0x69237dcc,// 235 PAY 204 

/// STA is 1 words. 

/// STA num_pkts       : 163 

/// STA pkt_idx        : 246 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x58 

    0x03d958a3 // 236 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt53_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x8042283a,// 4 SCX   2 

    0x00000300,// 5 SCX   3 

    0xa93670d3,// 6 SCX   4 

    0x62f5f788,// 7 SCX   5 

    0xed045635,// 8 SCX   6 

    0xf514726a,// 9 SCX   7 

    0x2194a07a,// 10 SCX   8 

    0x919779a1,// 11 SCX   9 

    0xe53e5f64,// 12 SCX  10 

    0xcb17a796,// 13 SCX  11 

    0x56719ae1,// 14 SCX  12 

    0x79197cdf,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1409 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 754 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 754 

/// BFD lencrypto      : 496 

/// BFD ofstcrypto     : 196 

/// BFD (ofst+len)cry  : 692 

/// BFD ofstiv         : 172 

/// BFD ofsticv        : 1128 

    0x000002f2,// 16 BFD   1 

    0x00c401f0,// 17 BFD   2 

    0x046800ac,// 18 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00c084,// 19 MFM   1 

    0x4eeb11c4,// 20 MFM   2 

    0x8dc4edf3,// 21 MFM   3 

    0x887a06a4,// 22 MFM   4 

    0x34a89d21,// 23 MFM   5 

    0xc729cb3b,// 24 MFM   6 

    0x6dd6d0e1,// 25 MFM   7 

    0x3deebe3a,// 26 MFM   8 

    0x167ec208,// 27 MFM   9 

    0x5bdd3770,// 28 MFM  10 

    0x3aab52fe,// 29 MFM  11 

    0x7c1dee38,// 30 MFM  12 

    0x2dc79b0a,// 31 MFM  13 

    0xeadd2893,// 32 MFM  14 

    0x9858db99,// 33 MFM  15 

    0xe7eb7261,// 34 MFM  16 

/// BDA is 354 words. 

/// BDA size     is 1409 (0x581) 

/// BDA id       is 0x7e9d 

    0x05817e9d,// 35 BDA   1 

/// PAY Generic Data size   : 1409 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x19601f5d,// 36 PAY   1 

    0xce270785,// 37 PAY   2 

    0xe1386fb8,// 38 PAY   3 

    0xf83db524,// 39 PAY   4 

    0xc4eeddc2,// 40 PAY   5 

    0x4e043b89,// 41 PAY   6 

    0x0b80c2c2,// 42 PAY   7 

    0x4c5a7fd3,// 43 PAY   8 

    0x38ffb19b,// 44 PAY   9 

    0x708be665,// 45 PAY  10 

    0x7d631158,// 46 PAY  11 

    0xa008bacf,// 47 PAY  12 

    0xc931ad6f,// 48 PAY  13 

    0x2283e803,// 49 PAY  14 

    0xf9861538,// 50 PAY  15 

    0x3164f625,// 51 PAY  16 

    0x68bd3f34,// 52 PAY  17 

    0x516f6ef9,// 53 PAY  18 

    0x1f05a1b7,// 54 PAY  19 

    0x5ebbd93d,// 55 PAY  20 

    0xb0eccdd0,// 56 PAY  21 

    0xcf9581cb,// 57 PAY  22 

    0x96bb3f6a,// 58 PAY  23 

    0xc71469bd,// 59 PAY  24 

    0x1f1950ac,// 60 PAY  25 

    0x9a0bf046,// 61 PAY  26 

    0x5b773d81,// 62 PAY  27 

    0xce01c1e3,// 63 PAY  28 

    0x317a689a,// 64 PAY  29 

    0xce55d7b3,// 65 PAY  30 

    0x1fdb304e,// 66 PAY  31 

    0xa833e68f,// 67 PAY  32 

    0x2ca75080,// 68 PAY  33 

    0xf08ff185,// 69 PAY  34 

    0x64059044,// 70 PAY  35 

    0xe685a3eb,// 71 PAY  36 

    0x78e8c918,// 72 PAY  37 

    0x12a0638a,// 73 PAY  38 

    0xd762467a,// 74 PAY  39 

    0x3218e553,// 75 PAY  40 

    0x51c88913,// 76 PAY  41 

    0xd81ca7f5,// 77 PAY  42 

    0x9af25167,// 78 PAY  43 

    0x9b6030ba,// 79 PAY  44 

    0xe111ad6e,// 80 PAY  45 

    0x2adadee9,// 81 PAY  46 

    0xeaa4ec22,// 82 PAY  47 

    0x0c532d62,// 83 PAY  48 

    0xd2014e5d,// 84 PAY  49 

    0x9f4b38d8,// 85 PAY  50 

    0x881242f6,// 86 PAY  51 

    0x4505262b,// 87 PAY  52 

    0x5b1a5c07,// 88 PAY  53 

    0x4862cf0f,// 89 PAY  54 

    0xd9f5210f,// 90 PAY  55 

    0x88397971,// 91 PAY  56 

    0xe47eb20d,// 92 PAY  57 

    0x7f7431f3,// 93 PAY  58 

    0xe16080d0,// 94 PAY  59 

    0xacc9e283,// 95 PAY  60 

    0x2c056c17,// 96 PAY  61 

    0x6e8e0782,// 97 PAY  62 

    0x8a02b080,// 98 PAY  63 

    0xf8528a2b,// 99 PAY  64 

    0xb127295f,// 100 PAY  65 

    0x2d8b7ca8,// 101 PAY  66 

    0xdc86f041,// 102 PAY  67 

    0x4dddda5d,// 103 PAY  68 

    0x05230c3c,// 104 PAY  69 

    0x452ea8a2,// 105 PAY  70 

    0x9e3a541c,// 106 PAY  71 

    0xca0395ff,// 107 PAY  72 

    0xb25f9617,// 108 PAY  73 

    0x0ff70e8f,// 109 PAY  74 

    0x70156aa5,// 110 PAY  75 

    0xe265859f,// 111 PAY  76 

    0x49333b82,// 112 PAY  77 

    0x19237fc5,// 113 PAY  78 

    0x7f69af25,// 114 PAY  79 

    0xb303dd95,// 115 PAY  80 

    0xaba963ba,// 116 PAY  81 

    0x1d321a16,// 117 PAY  82 

    0xc53b79c3,// 118 PAY  83 

    0xd4c9c1ca,// 119 PAY  84 

    0xb351a213,// 120 PAY  85 

    0x87447c9e,// 121 PAY  86 

    0xfd0a9a78,// 122 PAY  87 

    0xc4a2c18e,// 123 PAY  88 

    0x77bdb536,// 124 PAY  89 

    0x808e4be6,// 125 PAY  90 

    0x2e9316db,// 126 PAY  91 

    0x8aff1d28,// 127 PAY  92 

    0x308d1f27,// 128 PAY  93 

    0xaf892eb2,// 129 PAY  94 

    0xb3efcf9b,// 130 PAY  95 

    0x24ef2c23,// 131 PAY  96 

    0x97f32149,// 132 PAY  97 

    0xe45af4be,// 133 PAY  98 

    0xf7ea1be6,// 134 PAY  99 

    0xbfc06f8b,// 135 PAY 100 

    0xbbd84162,// 136 PAY 101 

    0x17872179,// 137 PAY 102 

    0xddb0c692,// 138 PAY 103 

    0x368e292b,// 139 PAY 104 

    0x9e152b47,// 140 PAY 105 

    0x9a897052,// 141 PAY 106 

    0x4252c8c5,// 142 PAY 107 

    0xb0f436fb,// 143 PAY 108 

    0x8556ffc0,// 144 PAY 109 

    0x1c8d9674,// 145 PAY 110 

    0x9f869c37,// 146 PAY 111 

    0x522a704d,// 147 PAY 112 

    0x5c9f6e3d,// 148 PAY 113 

    0x9e55ed94,// 149 PAY 114 

    0xa69eb6c7,// 150 PAY 115 

    0x361e0dea,// 151 PAY 116 

    0x7cd0d1f7,// 152 PAY 117 

    0x7f376d23,// 153 PAY 118 

    0x6d57cb49,// 154 PAY 119 

    0xf7b81d2c,// 155 PAY 120 

    0x6f0ced95,// 156 PAY 121 

    0xda510f71,// 157 PAY 122 

    0x2e1b0c35,// 158 PAY 123 

    0x30bcf0f1,// 159 PAY 124 

    0x566be1d2,// 160 PAY 125 

    0x0ff0dd74,// 161 PAY 126 

    0x9172a503,// 162 PAY 127 

    0xc661d047,// 163 PAY 128 

    0x61e7466a,// 164 PAY 129 

    0x3343ca25,// 165 PAY 130 

    0xce1f5413,// 166 PAY 131 

    0x43957848,// 167 PAY 132 

    0xc5367339,// 168 PAY 133 

    0xd619645a,// 169 PAY 134 

    0xad3be83b,// 170 PAY 135 

    0x6390dfbf,// 171 PAY 136 

    0x26a92a4c,// 172 PAY 137 

    0xc6a069d2,// 173 PAY 138 

    0x109120dd,// 174 PAY 139 

    0xa1f62ac5,// 175 PAY 140 

    0x403b243a,// 176 PAY 141 

    0xc3182364,// 177 PAY 142 

    0x4d8ed2a9,// 178 PAY 143 

    0x82bb1862,// 179 PAY 144 

    0xc37fb8de,// 180 PAY 145 

    0x2c4d0b5d,// 181 PAY 146 

    0x86ad3903,// 182 PAY 147 

    0xc8aedb4d,// 183 PAY 148 

    0x296f8af9,// 184 PAY 149 

    0xf12aac35,// 185 PAY 150 

    0x293e8c28,// 186 PAY 151 

    0xa9405b7a,// 187 PAY 152 

    0xa4568fbd,// 188 PAY 153 

    0x83e27011,// 189 PAY 154 

    0x12604a15,// 190 PAY 155 

    0xa0318e5e,// 191 PAY 156 

    0xfe9c385c,// 192 PAY 157 

    0x7a71fbbc,// 193 PAY 158 

    0x5b69f40c,// 194 PAY 159 

    0x61d8a93c,// 195 PAY 160 

    0x22b42512,// 196 PAY 161 

    0xd010eabd,// 197 PAY 162 

    0x04ddf43c,// 198 PAY 163 

    0xb6b4fb02,// 199 PAY 164 

    0x156db973,// 200 PAY 165 

    0xf58b0d83,// 201 PAY 166 

    0x302dc5d2,// 202 PAY 167 

    0xf0311eff,// 203 PAY 168 

    0x93b8f185,// 204 PAY 169 

    0xedd57db0,// 205 PAY 170 

    0x7da7bc22,// 206 PAY 171 

    0x160c2d34,// 207 PAY 172 

    0x14270627,// 208 PAY 173 

    0x3b3132f2,// 209 PAY 174 

    0x9dd4d428,// 210 PAY 175 

    0x4f3e9f8f,// 211 PAY 176 

    0xf5dba66d,// 212 PAY 177 

    0x707fc661,// 213 PAY 178 

    0x5bbf2b8e,// 214 PAY 179 

    0x0660c5d2,// 215 PAY 180 

    0xa5bcc2b5,// 216 PAY 181 

    0xb16ebcfa,// 217 PAY 182 

    0x97ab51c4,// 218 PAY 183 

    0x78ac5423,// 219 PAY 184 

    0x51b7dca2,// 220 PAY 185 

    0xe41d08ab,// 221 PAY 186 

    0x1e831eda,// 222 PAY 187 

    0x19fb87d3,// 223 PAY 188 

    0x0fecb00c,// 224 PAY 189 

    0xd07fc0f5,// 225 PAY 190 

    0xec176276,// 226 PAY 191 

    0x23125f0b,// 227 PAY 192 

    0x8f91b42f,// 228 PAY 193 

    0xe58ae3f4,// 229 PAY 194 

    0x8471ccd9,// 230 PAY 195 

    0x23d90500,// 231 PAY 196 

    0x0891fe32,// 232 PAY 197 

    0xb17152dc,// 233 PAY 198 

    0xb3808d6c,// 234 PAY 199 

    0x6ba1bb19,// 235 PAY 200 

    0xe67cd7da,// 236 PAY 201 

    0x9cc6e583,// 237 PAY 202 

    0xab5bafcd,// 238 PAY 203 

    0xeb047b13,// 239 PAY 204 

    0xf0d4c70a,// 240 PAY 205 

    0x2cd3f1fd,// 241 PAY 206 

    0xdfc92ec6,// 242 PAY 207 

    0x552fa2bb,// 243 PAY 208 

    0x29a826a1,// 244 PAY 209 

    0x218fce20,// 245 PAY 210 

    0x43d5aa50,// 246 PAY 211 

    0x035c8a6f,// 247 PAY 212 

    0x4d6fd332,// 248 PAY 213 

    0x3e2cdb84,// 249 PAY 214 

    0x1cc7cbcc,// 250 PAY 215 

    0x90d070db,// 251 PAY 216 

    0xab11b495,// 252 PAY 217 

    0x8a726844,// 253 PAY 218 

    0xd1e36e84,// 254 PAY 219 

    0x1066c867,// 255 PAY 220 

    0x42ce24c0,// 256 PAY 221 

    0xe8a5a3ee,// 257 PAY 222 

    0x151feb9c,// 258 PAY 223 

    0x98c639b8,// 259 PAY 224 

    0xc6c77aae,// 260 PAY 225 

    0xe01503df,// 261 PAY 226 

    0xe00597fb,// 262 PAY 227 

    0x36fc855a,// 263 PAY 228 

    0x09845ae9,// 264 PAY 229 

    0x81528a47,// 265 PAY 230 

    0x7a848921,// 266 PAY 231 

    0x6ca9a76d,// 267 PAY 232 

    0x789eacdf,// 268 PAY 233 

    0x22741b2a,// 269 PAY 234 

    0xbaf1ac56,// 270 PAY 235 

    0xd4ee3554,// 271 PAY 236 

    0x31ceaf39,// 272 PAY 237 

    0xfac5f32d,// 273 PAY 238 

    0xb204a1bc,// 274 PAY 239 

    0x5312d6d3,// 275 PAY 240 

    0x06461ab5,// 276 PAY 241 

    0xc7ea5bd9,// 277 PAY 242 

    0xde1a995d,// 278 PAY 243 

    0x55c52802,// 279 PAY 244 

    0x42136e05,// 280 PAY 245 

    0x74955eb0,// 281 PAY 246 

    0x00b61469,// 282 PAY 247 

    0xb6e810ba,// 283 PAY 248 

    0x4d56e1eb,// 284 PAY 249 

    0x4ade8602,// 285 PAY 250 

    0x9695cc7d,// 286 PAY 251 

    0x47f5266b,// 287 PAY 252 

    0xf05d4354,// 288 PAY 253 

    0xadcf17ba,// 289 PAY 254 

    0xb39651b9,// 290 PAY 255 

    0x96a1e0d2,// 291 PAY 256 

    0xae14828f,// 292 PAY 257 

    0xd18df01e,// 293 PAY 258 

    0x34106858,// 294 PAY 259 

    0x6be25418,// 295 PAY 260 

    0xcd70a870,// 296 PAY 261 

    0xfe324e89,// 297 PAY 262 

    0x5eed4746,// 298 PAY 263 

    0x3a2bb202,// 299 PAY 264 

    0x9c246873,// 300 PAY 265 

    0xb0c49d6e,// 301 PAY 266 

    0x33ed7c68,// 302 PAY 267 

    0x2ec5e5cf,// 303 PAY 268 

    0xb7fd8d79,// 304 PAY 269 

    0xb18e3773,// 305 PAY 270 

    0x92831117,// 306 PAY 271 

    0x388abe82,// 307 PAY 272 

    0x1562c09d,// 308 PAY 273 

    0xf7abc442,// 309 PAY 274 

    0xd9a93577,// 310 PAY 275 

    0x8a8d6caf,// 311 PAY 276 

    0xa8925dd0,// 312 PAY 277 

    0x738f1fce,// 313 PAY 278 

    0xa99eac87,// 314 PAY 279 

    0x1c32617f,// 315 PAY 280 

    0x092595fd,// 316 PAY 281 

    0xfd658d83,// 317 PAY 282 

    0x2125bd09,// 318 PAY 283 

    0xadeaead8,// 319 PAY 284 

    0x301b9c32,// 320 PAY 285 

    0x148636ad,// 321 PAY 286 

    0x4e133cac,// 322 PAY 287 

    0x6449e8be,// 323 PAY 288 

    0x776df8b1,// 324 PAY 289 

    0xb990f0ee,// 325 PAY 290 

    0x8a2e3dc6,// 326 PAY 291 

    0x4627b294,// 327 PAY 292 

    0x846e3a33,// 328 PAY 293 

    0x58f984f4,// 329 PAY 294 

    0x2182984e,// 330 PAY 295 

    0x311b307a,// 331 PAY 296 

    0x2b40ef04,// 332 PAY 297 

    0x463aaec9,// 333 PAY 298 

    0xe8c269a4,// 334 PAY 299 

    0x6a312146,// 335 PAY 300 

    0x944f5e19,// 336 PAY 301 

    0xfe819aec,// 337 PAY 302 

    0xd090da5b,// 338 PAY 303 

    0xec25a455,// 339 PAY 304 

    0xf950028a,// 340 PAY 305 

    0xd7854dc4,// 341 PAY 306 

    0xa0d3479c,// 342 PAY 307 

    0x0166b1e6,// 343 PAY 308 

    0x1040b6ab,// 344 PAY 309 

    0x88c6dad6,// 345 PAY 310 

    0xa0d29a23,// 346 PAY 311 

    0x142aa939,// 347 PAY 312 

    0x976b9493,// 348 PAY 313 

    0x1f7fbd0a,// 349 PAY 314 

    0x33e32944,// 350 PAY 315 

    0x7c540825,// 351 PAY 316 

    0x32bb54a0,// 352 PAY 317 

    0x1846e7e6,// 353 PAY 318 

    0xab66ef16,// 354 PAY 319 

    0xc332dca5,// 355 PAY 320 

    0xc8736184,// 356 PAY 321 

    0x8fce97b8,// 357 PAY 322 

    0xaa35a01c,// 358 PAY 323 

    0xfd7febf6,// 359 PAY 324 

    0x524c769b,// 360 PAY 325 

    0xeb58543f,// 361 PAY 326 

    0x613d59f7,// 362 PAY 327 

    0xb811f535,// 363 PAY 328 

    0x99d32fa9,// 364 PAY 329 

    0x3f2e8bc2,// 365 PAY 330 

    0xce43b0b5,// 366 PAY 331 

    0x96b1e478,// 367 PAY 332 

    0x4018041d,// 368 PAY 333 

    0xc586d5d8,// 369 PAY 334 

    0x46dd7ce1,// 370 PAY 335 

    0x3be88ba5,// 371 PAY 336 

    0xfcabeb34,// 372 PAY 337 

    0x5232c3d1,// 373 PAY 338 

    0x9b0e49c7,// 374 PAY 339 

    0x628c7e58,// 375 PAY 340 

    0x74e764c7,// 376 PAY 341 

    0xe01ca325,// 377 PAY 342 

    0xbffc8be5,// 378 PAY 343 

    0x456acc37,// 379 PAY 344 

    0x921523eb,// 380 PAY 345 

    0x59a883b8,// 381 PAY 346 

    0xae060f1a,// 382 PAY 347 

    0xedccbadf,// 383 PAY 348 

    0x491617cd,// 384 PAY 349 

    0x805c9d55,// 385 PAY 350 

    0x2ab5026b,// 386 PAY 351 

    0x8c16706a,// 387 PAY 352 

    0x4b000000,// 388 PAY 353 

/// STA is 1 words. 

/// STA num_pkts       : 6 

/// STA pkt_idx        : 44 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf8 

    0x00b1f806 // 389 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt54_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x8045284b,// 4 SCX   2 

    0x00006382,// 5 SCX   3 

    0x35a5aa24,// 6 SCX   4 

    0x4d66de79,// 7 SCX   5 

    0x38c3c633,// 8 SCX   6 

    0x334538bc,// 9 SCX   7 

    0x8a78ab13,// 10 SCX   8 

    0x25b3a235,// 11 SCX   9 

    0x83a8c1d0,// 12 SCX  10 

    0x9683e40d,// 13 SCX  11 

    0xc966ccf5,// 14 SCX  12 

    0xa721ceab,// 15 SCX  13 

    0xba6f4283,// 16 SCX  14 

    0x31d12fe2,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 142 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 26 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 26 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 12 

/// BFD (ofst+len)cry  : 20 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 80 

    0x0000001a,// 18 BFD   1 

    0x000c0008,// 19 BFD   2 

    0x00500000,// 20 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 6 

    0x0600b532,// 21 MFM   1 

    0xb5000000,// 22 MFM   2 

/// BDA is 37 words. 

/// BDA size     is 142 (0x8e) 

/// BDA id       is 0x5aee 

    0x008e5aee,// 23 BDA   1 

/// PAY Generic Data size   : 142 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x62719e97,// 24 PAY   1 

    0x80b9016b,// 25 PAY   2 

    0xdc939dde,// 26 PAY   3 

    0x91ae0bf3,// 27 PAY   4 

    0xc4148a44,// 28 PAY   5 

    0xac94266d,// 29 PAY   6 

    0x0cfe7878,// 30 PAY   7 

    0x76d9e780,// 31 PAY   8 

    0x9a19e28c,// 32 PAY   9 

    0x4e4affa8,// 33 PAY  10 

    0xd518e76c,// 34 PAY  11 

    0x950ad194,// 35 PAY  12 

    0x75e2cb05,// 36 PAY  13 

    0xa472e3d4,// 37 PAY  14 

    0x755b0f0b,// 38 PAY  15 

    0xf1be880e,// 39 PAY  16 

    0xa9520bbe,// 40 PAY  17 

    0x776436cd,// 41 PAY  18 

    0xcc2d9894,// 42 PAY  19 

    0x1fb09284,// 43 PAY  20 

    0xf9be8d30,// 44 PAY  21 

    0xba957d26,// 45 PAY  22 

    0xac2fd7bc,// 46 PAY  23 

    0xfa6c2331,// 47 PAY  24 

    0xcf20d58f,// 48 PAY  25 

    0x1e911418,// 49 PAY  26 

    0xd288b999,// 50 PAY  27 

    0x1659562e,// 51 PAY  28 

    0x49261d00,// 52 PAY  29 

    0xaa99fc4b,// 53 PAY  30 

    0x579cfb26,// 54 PAY  31 

    0x3012b63d,// 55 PAY  32 

    0x5c1aa200,// 56 PAY  33 

    0xecbb4ba4,// 57 PAY  34 

    0x8b16af66,// 58 PAY  35 

    0x9c760000,// 59 PAY  36 

/// STA is 1 words. 

/// STA num_pkts       : 33 

/// STA pkt_idx        : 109 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x19 

    0x01b41921 // 60 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt55_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x03 

/// ECH pdu_tag        : 0x00 

    0x00030000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x804428b2,// 4 SCX   2 

    0x00003482,// 5 SCX   3 

    0x55ee068b,// 6 SCX   4 

    0xd0d83ec8,// 7 SCX   5 

    0xf8b0a5ff,// 8 SCX   6 

    0x2122ffb6,// 9 SCX   7 

    0xaf72df1b,// 10 SCX   8 

    0xbe87cb90,// 11 SCX   9 

    0x76ec40f5,// 12 SCX  10 

    0xfc76bee8,// 13 SCX  11 

    0x8e575375,// 14 SCX  12 

    0xab82f979,// 15 SCX  13 

    0x4ebcd29e,// 16 SCX  14 

    0x72b65ebd,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1058 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 920 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 920 

/// BFD lencrypto      : 720 

/// BFD ofstcrypto     : 160 

/// BFD (ofst+len)cry  : 880 

/// BFD ofstiv         : 80 

/// BFD ofsticv        : 972 

    0x00000398,// 18 BFD   1 

    0x00a002d0,// 19 BFD   2 

    0x03cc0050,// 20 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 75 

    0x7500600c,// 21 MFM   1 

    0x0e68b184,// 22 MFM   2 

    0xe90d1a28,// 23 MFM   3 

    0xda1118db,// 24 MFM   4 

    0x224dba14,// 25 MFM   5 

    0x3f354682,// 26 MFM   6 

    0x7c291646,// 27 MFM   7 

    0x232535ce,// 28 MFM   8 

    0xf9fe1d05,// 29 MFM   9 

    0x016ba3b8,// 30 MFM  10 

    0x681a1e23,// 31 MFM  11 

    0xc79ec3e4,// 32 MFM  12 

    0xa2eb79bf,// 33 MFM  13 

    0xc286cdc9,// 34 MFM  14 

    0x302fc995,// 35 MFM  15 

    0xc0000000,// 36 MFM  16 

/// BDA is 266 words. 

/// BDA size     is 1058 (0x422) 

/// BDA id       is 0x49d1 

    0x042249d1,// 37 BDA   1 

/// PAY Generic Data size   : 1058 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x0869385a,// 38 PAY   1 

    0x05f6f9b4,// 39 PAY   2 

    0x259c9bad,// 40 PAY   3 

    0x31094dcf,// 41 PAY   4 

    0x7995399b,// 42 PAY   5 

    0xebd5e52d,// 43 PAY   6 

    0x04d41b51,// 44 PAY   7 

    0x363a0ff9,// 45 PAY   8 

    0x2493ed93,// 46 PAY   9 

    0xc62baef2,// 47 PAY  10 

    0xc1c58960,// 48 PAY  11 

    0x9835ade0,// 49 PAY  12 

    0x04eca6d6,// 50 PAY  13 

    0x7bed45d0,// 51 PAY  14 

    0xcaa9cecf,// 52 PAY  15 

    0xc2242854,// 53 PAY  16 

    0xc413d807,// 54 PAY  17 

    0x67802036,// 55 PAY  18 

    0xb3727935,// 56 PAY  19 

    0x41c84e23,// 57 PAY  20 

    0x283abb81,// 58 PAY  21 

    0xe950bbb1,// 59 PAY  22 

    0x545b81a5,// 60 PAY  23 

    0xb24a35ed,// 61 PAY  24 

    0xfbaa33fe,// 62 PAY  25 

    0x1a7f4188,// 63 PAY  26 

    0x8c1ef479,// 64 PAY  27 

    0xfafc9284,// 65 PAY  28 

    0x7917324f,// 66 PAY  29 

    0x3b604cca,// 67 PAY  30 

    0x32f0aab3,// 68 PAY  31 

    0xb9cf25f7,// 69 PAY  32 

    0x5d23d7e3,// 70 PAY  33 

    0xf09c0b13,// 71 PAY  34 

    0x752c224a,// 72 PAY  35 

    0x120f9d4e,// 73 PAY  36 

    0xb3252bf1,// 74 PAY  37 

    0x7d190c67,// 75 PAY  38 

    0x59478bd8,// 76 PAY  39 

    0x3f6554a8,// 77 PAY  40 

    0x0c628404,// 78 PAY  41 

    0xc8f46940,// 79 PAY  42 

    0x0eddce90,// 80 PAY  43 

    0x2afa39d6,// 81 PAY  44 

    0xf53d5ced,// 82 PAY  45 

    0xc78dc683,// 83 PAY  46 

    0xe8939fe0,// 84 PAY  47 

    0x10ad1b4a,// 85 PAY  48 

    0x666078a9,// 86 PAY  49 

    0x7d407912,// 87 PAY  50 

    0x92095928,// 88 PAY  51 

    0x42a23349,// 89 PAY  52 

    0x9094bc22,// 90 PAY  53 

    0xaaff3aab,// 91 PAY  54 

    0xd7311b75,// 92 PAY  55 

    0xb33d2c6e,// 93 PAY  56 

    0xec242b04,// 94 PAY  57 

    0x9409a67e,// 95 PAY  58 

    0xb6eaad15,// 96 PAY  59 

    0xb2a9c6eb,// 97 PAY  60 

    0x5f43ada3,// 98 PAY  61 

    0x93799eab,// 99 PAY  62 

    0x53236ce8,// 100 PAY  63 

    0x41cd53e9,// 101 PAY  64 

    0x31d53516,// 102 PAY  65 

    0xcc4b5b1b,// 103 PAY  66 

    0xbdb0bc6b,// 104 PAY  67 

    0x3d2d7fd4,// 105 PAY  68 

    0xbe62b92c,// 106 PAY  69 

    0xa37c83df,// 107 PAY  70 

    0x11357dd9,// 108 PAY  71 

    0xe684656f,// 109 PAY  72 

    0x308c456f,// 110 PAY  73 

    0xee8ab47c,// 111 PAY  74 

    0xe450125d,// 112 PAY  75 

    0xe42678f8,// 113 PAY  76 

    0xae3a628b,// 114 PAY  77 

    0xc93f612d,// 115 PAY  78 

    0x416dff4c,// 116 PAY  79 

    0x8f0bddf0,// 117 PAY  80 

    0xe34775ab,// 118 PAY  81 

    0x9615fafa,// 119 PAY  82 

    0x6a2c9025,// 120 PAY  83 

    0xec4287d6,// 121 PAY  84 

    0x9987ccb4,// 122 PAY  85 

    0x3809a9d2,// 123 PAY  86 

    0xaaded1cf,// 124 PAY  87 

    0xfb8a8800,// 125 PAY  88 

    0xe1b919f8,// 126 PAY  89 

    0x58428b75,// 127 PAY  90 

    0xd303afb3,// 128 PAY  91 

    0x27227f01,// 129 PAY  92 

    0x299233da,// 130 PAY  93 

    0xf2af4efa,// 131 PAY  94 

    0x91366ecb,// 132 PAY  95 

    0xb8df44df,// 133 PAY  96 

    0x0b35ca2b,// 134 PAY  97 

    0xd6c3e3d2,// 135 PAY  98 

    0xec36a58d,// 136 PAY  99 

    0x7e64dc4c,// 137 PAY 100 

    0xe4322d2b,// 138 PAY 101 

    0xd49c5ae4,// 139 PAY 102 

    0x3e0239e8,// 140 PAY 103 

    0x3fd0b7ef,// 141 PAY 104 

    0x2f5fff9e,// 142 PAY 105 

    0x031a7790,// 143 PAY 106 

    0x66158b1d,// 144 PAY 107 

    0x8f6653f3,// 145 PAY 108 

    0x34485322,// 146 PAY 109 

    0xc70f7a0c,// 147 PAY 110 

    0x53035f6e,// 148 PAY 111 

    0x4b54df03,// 149 PAY 112 

    0x3ef05c37,// 150 PAY 113 

    0xe649db8c,// 151 PAY 114 

    0x3c8467e7,// 152 PAY 115 

    0xfea7382c,// 153 PAY 116 

    0x544f18eb,// 154 PAY 117 

    0x91f9a404,// 155 PAY 118 

    0x981ec57b,// 156 PAY 119 

    0x473d0074,// 157 PAY 120 

    0x7bf80957,// 158 PAY 121 

    0x105acefe,// 159 PAY 122 

    0xaf7a720c,// 160 PAY 123 

    0x74f0a706,// 161 PAY 124 

    0xf7a1ce1b,// 162 PAY 125 

    0xafd26ef7,// 163 PAY 126 

    0xd5e8cd50,// 164 PAY 127 

    0xc55e980f,// 165 PAY 128 

    0xbb0035c0,// 166 PAY 129 

    0x15fad3b6,// 167 PAY 130 

    0x631e39c6,// 168 PAY 131 

    0x62472184,// 169 PAY 132 

    0x019fbe39,// 170 PAY 133 

    0x947358d0,// 171 PAY 134 

    0xdb5aa1bd,// 172 PAY 135 

    0xd37f590f,// 173 PAY 136 

    0xbf9c04c7,// 174 PAY 137 

    0x4aa68b3f,// 175 PAY 138 

    0x4167d256,// 176 PAY 139 

    0x2e0bbca7,// 177 PAY 140 

    0xa391f021,// 178 PAY 141 

    0x30828fc6,// 179 PAY 142 

    0xd4d6347f,// 180 PAY 143 

    0x6ccebc61,// 181 PAY 144 

    0x4f116b12,// 182 PAY 145 

    0x7df4abc6,// 183 PAY 146 

    0x2839fac6,// 184 PAY 147 

    0xc2ecae04,// 185 PAY 148 

    0x5d8fbbb4,// 186 PAY 149 

    0xeb32e722,// 187 PAY 150 

    0x6ab24ae9,// 188 PAY 151 

    0xdaf636ee,// 189 PAY 152 

    0x9b1a8c01,// 190 PAY 153 

    0x326c72cf,// 191 PAY 154 

    0x913357d6,// 192 PAY 155 

    0x97277890,// 193 PAY 156 

    0xf5dede1b,// 194 PAY 157 

    0xe2e20441,// 195 PAY 158 

    0x4ac49764,// 196 PAY 159 

    0x286ddc23,// 197 PAY 160 

    0x7d966eec,// 198 PAY 161 

    0xdbc9cb15,// 199 PAY 162 

    0x0fae2170,// 200 PAY 163 

    0x305a3e29,// 201 PAY 164 

    0x07646fa0,// 202 PAY 165 

    0x966ec50b,// 203 PAY 166 

    0xb9445479,// 204 PAY 167 

    0x4d487472,// 205 PAY 168 

    0xd42e3128,// 206 PAY 169 

    0x71c137e9,// 207 PAY 170 

    0x7997a012,// 208 PAY 171 

    0xefd727b7,// 209 PAY 172 

    0x3ce0c6bc,// 210 PAY 173 

    0x5e573a89,// 211 PAY 174 

    0x66e3b637,// 212 PAY 175 

    0xd5612c9b,// 213 PAY 176 

    0x82655098,// 214 PAY 177 

    0x20d7e3b1,// 215 PAY 178 

    0xf4f1bc66,// 216 PAY 179 

    0x221d8a8a,// 217 PAY 180 

    0xdd04cc89,// 218 PAY 181 

    0xe2192f6f,// 219 PAY 182 

    0xfa3e6840,// 220 PAY 183 

    0xc09f8f78,// 221 PAY 184 

    0x24f29612,// 222 PAY 185 

    0x1aeab370,// 223 PAY 186 

    0x474e20b9,// 224 PAY 187 

    0x2b6fbda2,// 225 PAY 188 

    0xacf464a9,// 226 PAY 189 

    0x0a7de0d5,// 227 PAY 190 

    0xd4c3b868,// 228 PAY 191 

    0xca39ad64,// 229 PAY 192 

    0xf2d00186,// 230 PAY 193 

    0xc4c1ec5a,// 231 PAY 194 

    0x2847d639,// 232 PAY 195 

    0x0fe43480,// 233 PAY 196 

    0x4b66f4f5,// 234 PAY 197 

    0x4676f503,// 235 PAY 198 

    0x37064d31,// 236 PAY 199 

    0x621ff691,// 237 PAY 200 

    0xc8ad3833,// 238 PAY 201 

    0xb0d8f702,// 239 PAY 202 

    0x5aa8ae55,// 240 PAY 203 

    0x4cca2fb8,// 241 PAY 204 

    0xd1ba1adb,// 242 PAY 205 

    0x741dbbb6,// 243 PAY 206 

    0xcab8dfbe,// 244 PAY 207 

    0xb4851606,// 245 PAY 208 

    0x44d15055,// 246 PAY 209 

    0x08642836,// 247 PAY 210 

    0x5273411f,// 248 PAY 211 

    0xcf5cbd44,// 249 PAY 212 

    0x5b9fbc42,// 250 PAY 213 

    0x8d79f374,// 251 PAY 214 

    0xbcb4f086,// 252 PAY 215 

    0xdf873c93,// 253 PAY 216 

    0xa662cdd2,// 254 PAY 217 

    0xce4dc56e,// 255 PAY 218 

    0xfb893939,// 256 PAY 219 

    0xde7aac44,// 257 PAY 220 

    0x49d5e4e8,// 258 PAY 221 

    0xd52e5f2a,// 259 PAY 222 

    0xa9d45a46,// 260 PAY 223 

    0xf924ecb6,// 261 PAY 224 

    0x9bb809be,// 262 PAY 225 

    0x756ad416,// 263 PAY 226 

    0xf33fa5fc,// 264 PAY 227 

    0x647f437d,// 265 PAY 228 

    0x6db0e3eb,// 266 PAY 229 

    0x0f01304d,// 267 PAY 230 

    0xa1852cbf,// 268 PAY 231 

    0xc9d6cf60,// 269 PAY 232 

    0x7f496a85,// 270 PAY 233 

    0xb4395ce0,// 271 PAY 234 

    0x936c5057,// 272 PAY 235 

    0xf3473fe0,// 273 PAY 236 

    0x19ceb2fd,// 274 PAY 237 

    0x89c23600,// 275 PAY 238 

    0xff0f105c,// 276 PAY 239 

    0xbc995889,// 277 PAY 240 

    0xf6714043,// 278 PAY 241 

    0x3c61c8c9,// 279 PAY 242 

    0x571530e6,// 280 PAY 243 

    0xfc677808,// 281 PAY 244 

    0x05e21bd2,// 282 PAY 245 

    0xf38a0da0,// 283 PAY 246 

    0xf0f66f8b,// 284 PAY 247 

    0x11997ea2,// 285 PAY 248 

    0xaaf1a65f,// 286 PAY 249 

    0xc7e90057,// 287 PAY 250 

    0xa39e1fe6,// 288 PAY 251 

    0x29870d63,// 289 PAY 252 

    0xf335593e,// 290 PAY 253 

    0xff6dc319,// 291 PAY 254 

    0x84b4a7a1,// 292 PAY 255 

    0xae0ac7f9,// 293 PAY 256 

    0xc77b9eaf,// 294 PAY 257 

    0x1e7819e6,// 295 PAY 258 

    0xf5b17f2a,// 296 PAY 259 

    0x01a165bf,// 297 PAY 260 

    0xfc4823e4,// 298 PAY 261 

    0x23c42f63,// 299 PAY 262 

    0x7951d964,// 300 PAY 263 

    0xedfa52d5,// 301 PAY 264 

    0x34260000,// 302 PAY 265 

/// STA is 1 words. 

/// STA num_pkts       : 215 

/// STA pkt_idx        : 91 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc4 

    0x016cc4d7 // 303 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt56_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x0b 

/// ECH pdu_tag        : 0x00 

    0x000b0000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x80412840,// 4 SCX   2 

    0x00005400,// 5 SCX   3 

    0x5f95b0cd,// 6 SCX   4 

    0x468a7d8e,// 7 SCX   5 

    0x3ee071c8,// 8 SCX   6 

    0x349f7858,// 9 SCX   7 

    0x2e62a432,// 10 SCX   8 

    0xb27bc68d,// 11 SCX   9 

    0x8e580fde,// 12 SCX  10 

    0xd07d6fd6,// 13 SCX  11 

    0x350a8236,// 14 SCX  12 

    0x2887b963,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 942 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 815 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 815 

/// BFD lencrypto      : 392 

/// BFD ofstcrypto     : 336 

/// BFD (ofst+len)cry  : 728 

/// BFD ofstiv         : 320 

/// BFD ofsticv        : 840 

    0x0000032f,// 16 BFD   1 

    0x01500188,// 17 BFD   2 

    0x03480140,// 18 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c002c07,// 19 MFM   1 

    0xcd8ac9ea,// 20 MFM   2 

    0x070e8a36,// 21 MFM   3 

    0x2a82007b,// 22 MFM   4 

    0xdfccfb4e,// 23 MFM   5 

    0x83127503,// 24 MFM   6 

    0xe3790212,// 25 MFM   7 

    0x9109e815,// 26 MFM   8 

    0x3318e2a0,// 27 MFM   9 

    0x8634ee3d,// 28 MFM  10 

    0x3dfeac5a,// 29 MFM  11 

    0x758d333b,// 30 MFM  12 

    0xc3ec4100,// 31 MFM  13 

    0x63717ab3,// 32 MFM  14 

    0x1aeef1f9,// 33 MFM  15 

    0xc0dd9d33,// 34 MFM  16 

/// BDA is 237 words. 

/// BDA size     is 942 (0x3ae) 

/// BDA id       is 0x1b7b 

    0x03ae1b7b,// 35 BDA   1 

/// PAY Generic Data size   : 942 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xc795f10c,// 36 PAY   1 

    0x051a4197,// 37 PAY   2 

    0xdfea2f35,// 38 PAY   3 

    0x12c3a629,// 39 PAY   4 

    0x886a29ac,// 40 PAY   5 

    0x4124472c,// 41 PAY   6 

    0xb57582ab,// 42 PAY   7 

    0x8f6c6700,// 43 PAY   8 

    0x8d77351e,// 44 PAY   9 

    0xd91d2401,// 45 PAY  10 

    0x8caa96ad,// 46 PAY  11 

    0xa729da22,// 47 PAY  12 

    0x121223a3,// 48 PAY  13 

    0xf21f1a29,// 49 PAY  14 

    0x08943e93,// 50 PAY  15 

    0xffef8323,// 51 PAY  16 

    0x54d5c59a,// 52 PAY  17 

    0xab9863e8,// 53 PAY  18 

    0xf5346aaa,// 54 PAY  19 

    0xc5d7f2f9,// 55 PAY  20 

    0x14588d96,// 56 PAY  21 

    0xe7cd651c,// 57 PAY  22 

    0x62ab6d51,// 58 PAY  23 

    0x2444cce5,// 59 PAY  24 

    0x979c849d,// 60 PAY  25 

    0xa775b95d,// 61 PAY  26 

    0x55ebec01,// 62 PAY  27 

    0x79c964b7,// 63 PAY  28 

    0xc8748589,// 64 PAY  29 

    0x70a01c25,// 65 PAY  30 

    0xbee2341d,// 66 PAY  31 

    0x37819548,// 67 PAY  32 

    0xc4d8c738,// 68 PAY  33 

    0xc4f0270a,// 69 PAY  34 

    0x4077a65c,// 70 PAY  35 

    0x81c49666,// 71 PAY  36 

    0x6b177c6e,// 72 PAY  37 

    0x0b3639f8,// 73 PAY  38 

    0x37a4b143,// 74 PAY  39 

    0x9c5ad977,// 75 PAY  40 

    0x57c4318b,// 76 PAY  41 

    0x920b5aba,// 77 PAY  42 

    0xd8886258,// 78 PAY  43 

    0xdd9d7753,// 79 PAY  44 

    0xa323a810,// 80 PAY  45 

    0x00131494,// 81 PAY  46 

    0x3b07fcf9,// 82 PAY  47 

    0x4c16a3ba,// 83 PAY  48 

    0x9af9414b,// 84 PAY  49 

    0x01e8b89c,// 85 PAY  50 

    0x33809159,// 86 PAY  51 

    0x27c0765c,// 87 PAY  52 

    0xbb9235bb,// 88 PAY  53 

    0x8027230c,// 89 PAY  54 

    0xed202f82,// 90 PAY  55 

    0x9af49745,// 91 PAY  56 

    0x0a547460,// 92 PAY  57 

    0xef1607b4,// 93 PAY  58 

    0x08b3c281,// 94 PAY  59 

    0x2255244e,// 95 PAY  60 

    0x192c327d,// 96 PAY  61 

    0x3910f8a1,// 97 PAY  62 

    0x46d7fcc0,// 98 PAY  63 

    0xe5c4fb88,// 99 PAY  64 

    0x670b3600,// 100 PAY  65 

    0x5265df9f,// 101 PAY  66 

    0x9e915a4a,// 102 PAY  67 

    0xb589a55d,// 103 PAY  68 

    0x340d15a4,// 104 PAY  69 

    0x7640e7ca,// 105 PAY  70 

    0x6b1e282e,// 106 PAY  71 

    0xeb226398,// 107 PAY  72 

    0x4a88ea3d,// 108 PAY  73 

    0xee0b78f3,// 109 PAY  74 

    0x0a102052,// 110 PAY  75 

    0xfe35d828,// 111 PAY  76 

    0xfa142d8c,// 112 PAY  77 

    0x76293948,// 113 PAY  78 

    0x0446e56b,// 114 PAY  79 

    0x3cfbca72,// 115 PAY  80 

    0xf7d1d709,// 116 PAY  81 

    0x6e1013c1,// 117 PAY  82 

    0x055aec7a,// 118 PAY  83 

    0x285a836d,// 119 PAY  84 

    0x37a9b845,// 120 PAY  85 

    0x44e4cd41,// 121 PAY  86 

    0x1e1a6a99,// 122 PAY  87 

    0x2a491695,// 123 PAY  88 

    0xdf10655c,// 124 PAY  89 

    0xd52009cd,// 125 PAY  90 

    0xfaadbc2a,// 126 PAY  91 

    0x60e13949,// 127 PAY  92 

    0x65a4e58e,// 128 PAY  93 

    0x12439d07,// 129 PAY  94 

    0x8da2dc12,// 130 PAY  95 

    0x5cdb479a,// 131 PAY  96 

    0x2d6f2ae7,// 132 PAY  97 

    0xa3bc4922,// 133 PAY  98 

    0x1581c800,// 134 PAY  99 

    0xaa94531a,// 135 PAY 100 

    0x5a0a72a8,// 136 PAY 101 

    0x8c5ac3cd,// 137 PAY 102 

    0x3205ca7c,// 138 PAY 103 

    0x730145ca,// 139 PAY 104 

    0xadbfe810,// 140 PAY 105 

    0x1caf0633,// 141 PAY 106 

    0x7adaa14d,// 142 PAY 107 

    0x6a941fab,// 143 PAY 108 

    0xb4a6b43f,// 144 PAY 109 

    0x44dd956a,// 145 PAY 110 

    0x8973f7ad,// 146 PAY 111 

    0xc45878d2,// 147 PAY 112 

    0xaaa8f202,// 148 PAY 113 

    0xde8c19fa,// 149 PAY 114 

    0xeead2355,// 150 PAY 115 

    0x3d15b3ae,// 151 PAY 116 

    0x1d7f40a8,// 152 PAY 117 

    0x7ec8c570,// 153 PAY 118 

    0x9c9eaeb1,// 154 PAY 119 

    0x0b73a72a,// 155 PAY 120 

    0x54e1774b,// 156 PAY 121 

    0x7882ce05,// 157 PAY 122 

    0x498b1b02,// 158 PAY 123 

    0x06568bf7,// 159 PAY 124 

    0x2f811758,// 160 PAY 125 

    0x9ecea98a,// 161 PAY 126 

    0xc2a9f06e,// 162 PAY 127 

    0x6537768c,// 163 PAY 128 

    0xa1ba083a,// 164 PAY 129 

    0x092a50ab,// 165 PAY 130 

    0xd3782db6,// 166 PAY 131 

    0x191035d1,// 167 PAY 132 

    0x76da3ab9,// 168 PAY 133 

    0x91fca6c3,// 169 PAY 134 

    0x4ce4a7c9,// 170 PAY 135 

    0x44981bcc,// 171 PAY 136 

    0x2c8fe055,// 172 PAY 137 

    0x5f55a055,// 173 PAY 138 

    0x32d6603c,// 174 PAY 139 

    0xf45896bb,// 175 PAY 140 

    0xda72571c,// 176 PAY 141 

    0xe91f631b,// 177 PAY 142 

    0x0c259d65,// 178 PAY 143 

    0x0466e1c8,// 179 PAY 144 

    0x15ee1aae,// 180 PAY 145 

    0x7bd00f03,// 181 PAY 146 

    0x9e278762,// 182 PAY 147 

    0xe150be0b,// 183 PAY 148 

    0x2f0ef1a4,// 184 PAY 149 

    0x36290de5,// 185 PAY 150 

    0x8dc096cd,// 186 PAY 151 

    0xb23673c0,// 187 PAY 152 

    0x9c460e50,// 188 PAY 153 

    0x5f933073,// 189 PAY 154 

    0x7f7a3731,// 190 PAY 155 

    0x431b95a8,// 191 PAY 156 

    0x5c7c9b61,// 192 PAY 157 

    0xa437b985,// 193 PAY 158 

    0x9eb26149,// 194 PAY 159 

    0x591978aa,// 195 PAY 160 

    0x8d62e2c9,// 196 PAY 161 

    0xa6ad2791,// 197 PAY 162 

    0xed3bc649,// 198 PAY 163 

    0x41300daa,// 199 PAY 164 

    0x0f3efdee,// 200 PAY 165 

    0x85c1ddc6,// 201 PAY 166 

    0x1d1e12b6,// 202 PAY 167 

    0xfc901cf0,// 203 PAY 168 

    0x7a66bd6a,// 204 PAY 169 

    0x24e9fcf1,// 205 PAY 170 

    0xb225af3f,// 206 PAY 171 

    0x329e7c27,// 207 PAY 172 

    0xa10fabcc,// 208 PAY 173 

    0xc32a6561,// 209 PAY 174 

    0x564cfca1,// 210 PAY 175 

    0x503d1226,// 211 PAY 176 

    0xa685bc6a,// 212 PAY 177 

    0x5f23fd44,// 213 PAY 178 

    0x31b906b9,// 214 PAY 179 

    0xc9922e8d,// 215 PAY 180 

    0x3db5e19a,// 216 PAY 181 

    0x880a60da,// 217 PAY 182 

    0x4c1f5675,// 218 PAY 183 

    0x9c4f2f30,// 219 PAY 184 

    0x73fcdbea,// 220 PAY 185 

    0x45b9521a,// 221 PAY 186 

    0x34568bc9,// 222 PAY 187 

    0x7307170d,// 223 PAY 188 

    0x012b4187,// 224 PAY 189 

    0x799df8c4,// 225 PAY 190 

    0xf3746386,// 226 PAY 191 

    0x60e2390c,// 227 PAY 192 

    0xa0331e46,// 228 PAY 193 

    0x76e5c012,// 229 PAY 194 

    0x491c9ae5,// 230 PAY 195 

    0x11024312,// 231 PAY 196 

    0x4e372fab,// 232 PAY 197 

    0x29516361,// 233 PAY 198 

    0x47a69a0b,// 234 PAY 199 

    0xb2d8028d,// 235 PAY 200 

    0x9d3de030,// 236 PAY 201 

    0x04e44eff,// 237 PAY 202 

    0x9152dea5,// 238 PAY 203 

    0xf6a058c0,// 239 PAY 204 

    0x52db85f7,// 240 PAY 205 

    0x373091e7,// 241 PAY 206 

    0x0aee35e9,// 242 PAY 207 

    0xb6799ba3,// 243 PAY 208 

    0x75b24e31,// 244 PAY 209 

    0xf6ea66df,// 245 PAY 210 

    0x19971f62,// 246 PAY 211 

    0x56df807f,// 247 PAY 212 

    0xd141e69e,// 248 PAY 213 

    0xd86db089,// 249 PAY 214 

    0x5be5559f,// 250 PAY 215 

    0x0e14093c,// 251 PAY 216 

    0x5cb78e91,// 252 PAY 217 

    0x9e704065,// 253 PAY 218 

    0xa5e1664e,// 254 PAY 219 

    0xc02a18f6,// 255 PAY 220 

    0x7fed4f46,// 256 PAY 221 

    0x0d7c5cfb,// 257 PAY 222 

    0xbdd07cbe,// 258 PAY 223 

    0x76bc0149,// 259 PAY 224 

    0x9c4c8f69,// 260 PAY 225 

    0xf1846b01,// 261 PAY 226 

    0xa86564d3,// 262 PAY 227 

    0x3972a3a5,// 263 PAY 228 

    0x41ca9f83,// 264 PAY 229 

    0x16ed7811,// 265 PAY 230 

    0x5a31bc7e,// 266 PAY 231 

    0xb81b3e14,// 267 PAY 232 

    0x72f521e1,// 268 PAY 233 

    0x548d183a,// 269 PAY 234 

    0x2f60916a,// 270 PAY 235 

    0x25580000,// 271 PAY 236 

/// STA is 1 words. 

/// STA num_pkts       : 160 

/// STA pkt_idx        : 180 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf7 

    0x02d1f7a0 // 272 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt57_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x80402821,// 4 SCX   2 

    0x00002300,// 5 SCX   3 

    0x77167012,// 6 SCX   4 

    0xa16fbf75,// 7 SCX   5 

    0xbdd5bdb5,// 8 SCX   6 

    0x1a297495,// 9 SCX   7 

    0x5ab5cd7b,// 10 SCX   8 

    0x66164a6c,// 11 SCX   9 

    0xc4a57e33,// 12 SCX  10 

    0x8e2bea1d,// 13 SCX  11 

    0x5f5c4a2a,// 14 SCX  12 

    0xa6bc1d97,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1985 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 966 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 966 

/// BFD lencrypto      : 496 

/// BFD ofstcrypto     : 96 

/// BFD (ofst+len)cry  : 592 

/// BFD ofstiv         : 12 

/// BFD ofsticv        : 1228 

    0x000003c6,// 16 BFD   1 

    0x006001f0,// 17 BFD   2 

    0x04cc000c,// 18 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c0081b0,// 19 MFM   1 

    0x49f2c0e1,// 20 MFM   2 

    0x9f01a281,// 21 MFM   3 

    0x07b22718,// 22 MFM   4 

    0x1c1a0028,// 23 MFM   5 

    0x818a7dd5,// 24 MFM   6 

    0x37d704f6,// 25 MFM   7 

    0x7b549c81,// 26 MFM   8 

    0xa32ac037,// 27 MFM   9 

    0xce8a020a,// 28 MFM  10 

    0x4776d0d5,// 29 MFM  11 

    0x377a3f06,// 30 MFM  12 

    0xb8d68afc,// 31 MFM  13 

    0x5399e7d8,// 32 MFM  14 

    0x4fcd002f,// 33 MFM  15 

    0x5dfb99be,// 34 MFM  16 

/// BDA is 498 words. 

/// BDA size     is 1985 (0x7c1) 

/// BDA id       is 0xf427 

    0x07c1f427,// 35 BDA   1 

/// PAY Generic Data size   : 1985 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x73c6a354,// 36 PAY   1 

    0xc18225b9,// 37 PAY   2 

    0xdf2a927a,// 38 PAY   3 

    0xc74b093c,// 39 PAY   4 

    0x8a9530e1,// 40 PAY   5 

    0xa09a2c5b,// 41 PAY   6 

    0x487b41f8,// 42 PAY   7 

    0x6f40440d,// 43 PAY   8 

    0x9f5b1d6b,// 44 PAY   9 

    0xaa449443,// 45 PAY  10 

    0x395dd5a6,// 46 PAY  11 

    0xa0068b1d,// 47 PAY  12 

    0xd47d66be,// 48 PAY  13 

    0x5e5c26fc,// 49 PAY  14 

    0xd8828b31,// 50 PAY  15 

    0x7986bf9a,// 51 PAY  16 

    0x0c5b2422,// 52 PAY  17 

    0x6e197ea6,// 53 PAY  18 

    0x6bbeb78f,// 54 PAY  19 

    0x01ece4c5,// 55 PAY  20 

    0x97c7e0c6,// 56 PAY  21 

    0x7425aecb,// 57 PAY  22 

    0x40d1c701,// 58 PAY  23 

    0xa0aaad8a,// 59 PAY  24 

    0x0109a23f,// 60 PAY  25 

    0xfe6e0d69,// 61 PAY  26 

    0x29305f8b,// 62 PAY  27 

    0x43722f57,// 63 PAY  28 

    0xb35011c9,// 64 PAY  29 

    0x2fdfc04e,// 65 PAY  30 

    0x48cd37d4,// 66 PAY  31 

    0xb85591b1,// 67 PAY  32 

    0xeae857be,// 68 PAY  33 

    0x5c4d2ac5,// 69 PAY  34 

    0x105d924e,// 70 PAY  35 

    0x223b7c77,// 71 PAY  36 

    0xd048e12f,// 72 PAY  37 

    0x41035426,// 73 PAY  38 

    0x2758ca8d,// 74 PAY  39 

    0xf62091a2,// 75 PAY  40 

    0x8585b450,// 76 PAY  41 

    0xe9c00153,// 77 PAY  42 

    0x117c6a0f,// 78 PAY  43 

    0xe0fa14d0,// 79 PAY  44 

    0x0e9cb702,// 80 PAY  45 

    0x83d8ac44,// 81 PAY  46 

    0xc42c9254,// 82 PAY  47 

    0x06b14138,// 83 PAY  48 

    0xcb874bec,// 84 PAY  49 

    0xb6938776,// 85 PAY  50 

    0x01978075,// 86 PAY  51 

    0xf3247fda,// 87 PAY  52 

    0xe8bc441f,// 88 PAY  53 

    0x45143451,// 89 PAY  54 

    0xf1dd1963,// 90 PAY  55 

    0x77949bf3,// 91 PAY  56 

    0xa0a1eb59,// 92 PAY  57 

    0xae3ced33,// 93 PAY  58 

    0x967c53ae,// 94 PAY  59 

    0x07c692c1,// 95 PAY  60 

    0x8b1adf7e,// 96 PAY  61 

    0x9f28b385,// 97 PAY  62 

    0x247b8cb8,// 98 PAY  63 

    0x422a379c,// 99 PAY  64 

    0x5a9aec35,// 100 PAY  65 

    0xdaf86807,// 101 PAY  66 

    0x148f41b9,// 102 PAY  67 

    0xdeb89d37,// 103 PAY  68 

    0xa654d0c2,// 104 PAY  69 

    0x56a6bf78,// 105 PAY  70 

    0xf6284057,// 106 PAY  71 

    0x5b562f17,// 107 PAY  72 

    0x975db2e7,// 108 PAY  73 

    0xec92168c,// 109 PAY  74 

    0x3b696a82,// 110 PAY  75 

    0x349d5da8,// 111 PAY  76 

    0x0f7e6f23,// 112 PAY  77 

    0x571c29c6,// 113 PAY  78 

    0x6a9dc64a,// 114 PAY  79 

    0x5461b010,// 115 PAY  80 

    0xf42fe1e5,// 116 PAY  81 

    0xec5db749,// 117 PAY  82 

    0xbc9595a2,// 118 PAY  83 

    0x9202c4f6,// 119 PAY  84 

    0x267629ce,// 120 PAY  85 

    0x6b75d31d,// 121 PAY  86 

    0x4461abd8,// 122 PAY  87 

    0xb7ebc001,// 123 PAY  88 

    0xac7af733,// 124 PAY  89 

    0x4d7c500b,// 125 PAY  90 

    0x5fab7e5a,// 126 PAY  91 

    0x5b388bf4,// 127 PAY  92 

    0xdcfd402e,// 128 PAY  93 

    0x9b758118,// 129 PAY  94 

    0x9368c5ed,// 130 PAY  95 

    0x925ea679,// 131 PAY  96 

    0x8d0af3a4,// 132 PAY  97 

    0x08334286,// 133 PAY  98 

    0xf2b61595,// 134 PAY  99 

    0x300ab5ff,// 135 PAY 100 

    0x7db61dee,// 136 PAY 101 

    0x784b12c4,// 137 PAY 102 

    0xd9bd18cd,// 138 PAY 103 

    0x5ab6cd66,// 139 PAY 104 

    0xfdb61f06,// 140 PAY 105 

    0x6079985f,// 141 PAY 106 

    0x8d4e7547,// 142 PAY 107 

    0xb8eebc8e,// 143 PAY 108 

    0x431043f9,// 144 PAY 109 

    0xffec0a86,// 145 PAY 110 

    0xaf1e4db8,// 146 PAY 111 

    0x7fc7e303,// 147 PAY 112 

    0x7b858687,// 148 PAY 113 

    0x5ce9de42,// 149 PAY 114 

    0xa9a9e69d,// 150 PAY 115 

    0x9e0d7e60,// 151 PAY 116 

    0x0a3c04f3,// 152 PAY 117 

    0xc4e4611c,// 153 PAY 118 

    0x79ab4de3,// 154 PAY 119 

    0x689813de,// 155 PAY 120 

    0x3e98ca33,// 156 PAY 121 

    0xa8037a94,// 157 PAY 122 

    0x96849359,// 158 PAY 123 

    0xe62412e6,// 159 PAY 124 

    0x3b6c6d6f,// 160 PAY 125 

    0x9d3d5ec7,// 161 PAY 126 

    0xdae0682e,// 162 PAY 127 

    0x0c274768,// 163 PAY 128 

    0xa1df7fcf,// 164 PAY 129 

    0xf68905ae,// 165 PAY 130 

    0x88de77a7,// 166 PAY 131 

    0x84036e68,// 167 PAY 132 

    0x795c78e9,// 168 PAY 133 

    0x7d65478a,// 169 PAY 134 

    0x736351a9,// 170 PAY 135 

    0x8436b42a,// 171 PAY 136 

    0x9cdfa92a,// 172 PAY 137 

    0x45cbbcb4,// 173 PAY 138 

    0x37fa2f37,// 174 PAY 139 

    0xfb5c6aab,// 175 PAY 140 

    0x0bf13cdc,// 176 PAY 141 

    0x3ff28853,// 177 PAY 142 

    0x8e407dd6,// 178 PAY 143 

    0xc28b941b,// 179 PAY 144 

    0x47b89bc1,// 180 PAY 145 

    0xcc4f6533,// 181 PAY 146 

    0x07f37418,// 182 PAY 147 

    0xf092338c,// 183 PAY 148 

    0x6c50ddc7,// 184 PAY 149 

    0xefe64af2,// 185 PAY 150 

    0x322d677a,// 186 PAY 151 

    0x82ba589e,// 187 PAY 152 

    0xedefb73a,// 188 PAY 153 

    0xbb3b7bb9,// 189 PAY 154 

    0x5ffa8ab1,// 190 PAY 155 

    0xbd4b5bd2,// 191 PAY 156 

    0x5eefaf38,// 192 PAY 157 

    0x4d149d94,// 193 PAY 158 

    0x43dfb6a7,// 194 PAY 159 

    0xb11124dc,// 195 PAY 160 

    0xf8c9994a,// 196 PAY 161 

    0xd3fe4fdc,// 197 PAY 162 

    0xef7e39e7,// 198 PAY 163 

    0xb392f9a5,// 199 PAY 164 

    0x09cfd647,// 200 PAY 165 

    0xf1ff6796,// 201 PAY 166 

    0xbd2c0853,// 202 PAY 167 

    0xcdd406ac,// 203 PAY 168 

    0xf5e33965,// 204 PAY 169 

    0x050bc0cc,// 205 PAY 170 

    0xb065fc5a,// 206 PAY 171 

    0x6715dcb9,// 207 PAY 172 

    0xbd853a3a,// 208 PAY 173 

    0x355a6b73,// 209 PAY 174 

    0xaac9d4a2,// 210 PAY 175 

    0x0c86e351,// 211 PAY 176 

    0xc63c7689,// 212 PAY 177 

    0xacffcc2a,// 213 PAY 178 

    0xb1c20146,// 214 PAY 179 

    0xbf3dc3b3,// 215 PAY 180 

    0x438797a4,// 216 PAY 181 

    0x254edeed,// 217 PAY 182 

    0x97f4c20c,// 218 PAY 183 

    0x9f43a171,// 219 PAY 184 

    0x54d2912f,// 220 PAY 185 

    0xe102ac97,// 221 PAY 186 

    0xd1a22705,// 222 PAY 187 

    0x11cb6f63,// 223 PAY 188 

    0xa0d0ebc8,// 224 PAY 189 

    0xac04dd2e,// 225 PAY 190 

    0xe351c069,// 226 PAY 191 

    0xed2da9b9,// 227 PAY 192 

    0x803e068f,// 228 PAY 193 

    0xb93d7ff5,// 229 PAY 194 

    0x8a9f4d5c,// 230 PAY 195 

    0xa9110ca2,// 231 PAY 196 

    0x08cb634b,// 232 PAY 197 

    0xea88cf0d,// 233 PAY 198 

    0xfdc6d712,// 234 PAY 199 

    0xc82576d0,// 235 PAY 200 

    0xddaa9ab5,// 236 PAY 201 

    0x5f02dffe,// 237 PAY 202 

    0xbf99c28d,// 238 PAY 203 

    0x730ee436,// 239 PAY 204 

    0x979c65e1,// 240 PAY 205 

    0xc1126577,// 241 PAY 206 

    0x2785122c,// 242 PAY 207 

    0x6d8c5d79,// 243 PAY 208 

    0x3523733a,// 244 PAY 209 

    0x1b4dd617,// 245 PAY 210 

    0x6b84e86b,// 246 PAY 211 

    0x0335fad1,// 247 PAY 212 

    0x4dde3677,// 248 PAY 213 

    0x7a3f6277,// 249 PAY 214 

    0x49762f6d,// 250 PAY 215 

    0x3b34acbd,// 251 PAY 216 

    0x237d01d6,// 252 PAY 217 

    0xb76675e1,// 253 PAY 218 

    0xba9e0023,// 254 PAY 219 

    0x925064b2,// 255 PAY 220 

    0xdb7132ab,// 256 PAY 221 

    0x41647a50,// 257 PAY 222 

    0xd7aaaa4c,// 258 PAY 223 

    0x4289161e,// 259 PAY 224 

    0xfa2eda2e,// 260 PAY 225 

    0x8dbdf82f,// 261 PAY 226 

    0x215715bd,// 262 PAY 227 

    0xa06aa3b5,// 263 PAY 228 

    0x35c3752a,// 264 PAY 229 

    0x4ce14538,// 265 PAY 230 

    0xa5d8dd4e,// 266 PAY 231 

    0x1f7385c8,// 267 PAY 232 

    0x2fd0faa8,// 268 PAY 233 

    0x65d045dd,// 269 PAY 234 

    0xf5a65f3c,// 270 PAY 235 

    0xbe262d47,// 271 PAY 236 

    0xd674e6b1,// 272 PAY 237 

    0x6b3d8be3,// 273 PAY 238 

    0x3066788f,// 274 PAY 239 

    0x4636a808,// 275 PAY 240 

    0x51b840c7,// 276 PAY 241 

    0xd263dc2d,// 277 PAY 242 

    0xb7297652,// 278 PAY 243 

    0x69f198b6,// 279 PAY 244 

    0xe39aeccd,// 280 PAY 245 

    0xd1de5176,// 281 PAY 246 

    0x0d362221,// 282 PAY 247 

    0x0e8adf8c,// 283 PAY 248 

    0x24a92f28,// 284 PAY 249 

    0xd4fa1b6c,// 285 PAY 250 

    0xb558c848,// 286 PAY 251 

    0xf11cb0fb,// 287 PAY 252 

    0xef19715a,// 288 PAY 253 

    0xd0df19ba,// 289 PAY 254 

    0x9e99435b,// 290 PAY 255 

    0xa109c406,// 291 PAY 256 

    0xe7bf8d60,// 292 PAY 257 

    0x6ceafb30,// 293 PAY 258 

    0x74dac0e1,// 294 PAY 259 

    0xaaf2668a,// 295 PAY 260 

    0x9cd25f42,// 296 PAY 261 

    0x98124d7a,// 297 PAY 262 

    0x6f1e1c98,// 298 PAY 263 

    0xf45a2cce,// 299 PAY 264 

    0x5fd3b319,// 300 PAY 265 

    0xf5b8c5a1,// 301 PAY 266 

    0xaeff5096,// 302 PAY 267 

    0x90b9de17,// 303 PAY 268 

    0x99833920,// 304 PAY 269 

    0x680ba894,// 305 PAY 270 

    0x5cce47aa,// 306 PAY 271 

    0x8fb93669,// 307 PAY 272 

    0x1774fc93,// 308 PAY 273 

    0xd479a4db,// 309 PAY 274 

    0xc0774e39,// 310 PAY 275 

    0x5a017d87,// 311 PAY 276 

    0x34bed756,// 312 PAY 277 

    0x441aaa54,// 313 PAY 278 

    0xac1e24cb,// 314 PAY 279 

    0x5e4df1c6,// 315 PAY 280 

    0x8c10a119,// 316 PAY 281 

    0x8d72f006,// 317 PAY 282 

    0xa015aa3d,// 318 PAY 283 

    0xd3d0bd59,// 319 PAY 284 

    0x79f46d30,// 320 PAY 285 

    0x416269e2,// 321 PAY 286 

    0x83e094f5,// 322 PAY 287 

    0x7c48277a,// 323 PAY 288 

    0x8a19ee55,// 324 PAY 289 

    0x81538fcb,// 325 PAY 290 

    0xb7d28809,// 326 PAY 291 

    0x9a366d47,// 327 PAY 292 

    0x157acb15,// 328 PAY 293 

    0xcd715ae9,// 329 PAY 294 

    0x3a45ea01,// 330 PAY 295 

    0x2dfdbf16,// 331 PAY 296 

    0x031d0e3b,// 332 PAY 297 

    0x1bbfeb38,// 333 PAY 298 

    0xb04f39ec,// 334 PAY 299 

    0xbddb33b1,// 335 PAY 300 

    0xefc7c78d,// 336 PAY 301 

    0xff1b5ab9,// 337 PAY 302 

    0xb5ec7dcc,// 338 PAY 303 

    0x89ba7456,// 339 PAY 304 

    0xc9102d5b,// 340 PAY 305 

    0x279b41af,// 341 PAY 306 

    0xf1202e5e,// 342 PAY 307 

    0x4bcdf8a3,// 343 PAY 308 

    0xd37d83ad,// 344 PAY 309 

    0x112f2787,// 345 PAY 310 

    0x1a14dd4f,// 346 PAY 311 

    0x88dd8dd3,// 347 PAY 312 

    0x927e9242,// 348 PAY 313 

    0x1c3f038c,// 349 PAY 314 

    0x566b5d1a,// 350 PAY 315 

    0x1fb76ddc,// 351 PAY 316 

    0x40453846,// 352 PAY 317 

    0x12627ab9,// 353 PAY 318 

    0xf94fb400,// 354 PAY 319 

    0x3ab51e35,// 355 PAY 320 

    0x803e2bd1,// 356 PAY 321 

    0x24e0503e,// 357 PAY 322 

    0xb66740c4,// 358 PAY 323 

    0x54d3698f,// 359 PAY 324 

    0xc5fbf6ef,// 360 PAY 325 

    0x5726b4b3,// 361 PAY 326 

    0x1e5b9055,// 362 PAY 327 

    0x96ef9831,// 363 PAY 328 

    0x9123fad8,// 364 PAY 329 

    0xab2e1058,// 365 PAY 330 

    0x98b7eda1,// 366 PAY 331 

    0x03f88184,// 367 PAY 332 

    0x953b5b30,// 368 PAY 333 

    0x5945517e,// 369 PAY 334 

    0x6c46afe2,// 370 PAY 335 

    0x9b3be127,// 371 PAY 336 

    0x20f78d0c,// 372 PAY 337 

    0x7a15a396,// 373 PAY 338 

    0xc7af928a,// 374 PAY 339 

    0x02e309f2,// 375 PAY 340 

    0x15a8c7bc,// 376 PAY 341 

    0xf2164f78,// 377 PAY 342 

    0x11aa1783,// 378 PAY 343 

    0x44677b20,// 379 PAY 344 

    0x7636922a,// 380 PAY 345 

    0xd5ab974d,// 381 PAY 346 

    0x7ab61ae0,// 382 PAY 347 

    0x739ecf18,// 383 PAY 348 

    0x6b5d3539,// 384 PAY 349 

    0xa9daa466,// 385 PAY 350 

    0x8b9ee041,// 386 PAY 351 

    0x61426517,// 387 PAY 352 

    0x3df684af,// 388 PAY 353 

    0x780208e5,// 389 PAY 354 

    0x4d8cfc68,// 390 PAY 355 

    0x09772031,// 391 PAY 356 

    0xb82bc750,// 392 PAY 357 

    0xd0c21f60,// 393 PAY 358 

    0x3cab2429,// 394 PAY 359 

    0xaa19a7fa,// 395 PAY 360 

    0x2134d2a9,// 396 PAY 361 

    0xa8120cbd,// 397 PAY 362 

    0x0cdd1c50,// 398 PAY 363 

    0x70387b03,// 399 PAY 364 

    0x628bf0c2,// 400 PAY 365 

    0x2c99bda6,// 401 PAY 366 

    0x093f665e,// 402 PAY 367 

    0xb2d9c58f,// 403 PAY 368 

    0x0d33a045,// 404 PAY 369 

    0xca1a99d6,// 405 PAY 370 

    0xe620d188,// 406 PAY 371 

    0x47cef0d3,// 407 PAY 372 

    0x8c14f6e1,// 408 PAY 373 

    0xa30dd418,// 409 PAY 374 

    0x5e2a18f4,// 410 PAY 375 

    0x28e12107,// 411 PAY 376 

    0x043011f8,// 412 PAY 377 

    0x5afd5eba,// 413 PAY 378 

    0xc0fcc7ba,// 414 PAY 379 

    0x878d02ce,// 415 PAY 380 

    0x0328213f,// 416 PAY 381 

    0x4346122b,// 417 PAY 382 

    0x5570e601,// 418 PAY 383 

    0x0a577b34,// 419 PAY 384 

    0x6e2537e1,// 420 PAY 385 

    0x52194740,// 421 PAY 386 

    0x45d012a7,// 422 PAY 387 

    0x9319c6c6,// 423 PAY 388 

    0xe811cc06,// 424 PAY 389 

    0x93529278,// 425 PAY 390 

    0x1627658c,// 426 PAY 391 

    0x7fd10c54,// 427 PAY 392 

    0xf60cb8d6,// 428 PAY 393 

    0x6247f5d1,// 429 PAY 394 

    0x0f9f42bb,// 430 PAY 395 

    0xf40f1c70,// 431 PAY 396 

    0xb5bd47cd,// 432 PAY 397 

    0x96aaaecf,// 433 PAY 398 

    0xb0e235b1,// 434 PAY 399 

    0xb6f8f727,// 435 PAY 400 

    0x29334d44,// 436 PAY 401 

    0x7ff4ba47,// 437 PAY 402 

    0x629c2234,// 438 PAY 403 

    0x90c0f6b0,// 439 PAY 404 

    0x57684e9f,// 440 PAY 405 

    0xa973df09,// 441 PAY 406 

    0x5662c40a,// 442 PAY 407 

    0x03320d45,// 443 PAY 408 

    0x3e0f5ce6,// 444 PAY 409 

    0x659cf530,// 445 PAY 410 

    0x700ab6a0,// 446 PAY 411 

    0xd26e86d0,// 447 PAY 412 

    0xeb64399b,// 448 PAY 413 

    0xc998f821,// 449 PAY 414 

    0x5d57134e,// 450 PAY 415 

    0x80992bbe,// 451 PAY 416 

    0x33c46712,// 452 PAY 417 

    0x2f173a23,// 453 PAY 418 

    0x82d77a0c,// 454 PAY 419 

    0x233c19f5,// 455 PAY 420 

    0xa87d0fe6,// 456 PAY 421 

    0xfcc54ace,// 457 PAY 422 

    0xd94d6ec3,// 458 PAY 423 

    0xc41e1d1f,// 459 PAY 424 

    0xbdf136f7,// 460 PAY 425 

    0xb1296949,// 461 PAY 426 

    0x9e3dfcea,// 462 PAY 427 

    0x2ba04f94,// 463 PAY 428 

    0xf478da38,// 464 PAY 429 

    0x53e6610c,// 465 PAY 430 

    0x2c074e98,// 466 PAY 431 

    0xc9ca6a38,// 467 PAY 432 

    0x4242dc99,// 468 PAY 433 

    0xfa057b86,// 469 PAY 434 

    0xcdae9c84,// 470 PAY 435 

    0xef761ed5,// 471 PAY 436 

    0xf5ec6cbd,// 472 PAY 437 

    0x361d057f,// 473 PAY 438 

    0x0308ac5a,// 474 PAY 439 

    0xee4be08c,// 475 PAY 440 

    0x2528d5f8,// 476 PAY 441 

    0x77d3327d,// 477 PAY 442 

    0x47768bdd,// 478 PAY 443 

    0xaa1507ea,// 479 PAY 444 

    0x368309ce,// 480 PAY 445 

    0xf9d38cc3,// 481 PAY 446 

    0xff7efb12,// 482 PAY 447 

    0xf09ab18b,// 483 PAY 448 

    0x3746ccd7,// 484 PAY 449 

    0x4698fbbe,// 485 PAY 450 

    0xc903621e,// 486 PAY 451 

    0xceb30c4b,// 487 PAY 452 

    0x8803c6d6,// 488 PAY 453 

    0xb38df4cc,// 489 PAY 454 

    0x49051138,// 490 PAY 455 

    0xfc88131e,// 491 PAY 456 

    0x7e046ee9,// 492 PAY 457 

    0x48b6dc94,// 493 PAY 458 

    0x13e89f73,// 494 PAY 459 

    0xca904f35,// 495 PAY 460 

    0x3f631956,// 496 PAY 461 

    0x7da961c8,// 497 PAY 462 

    0x56b2a197,// 498 PAY 463 

    0x9a1b5830,// 499 PAY 464 

    0x4d47f7c1,// 500 PAY 465 

    0x7ff4d4e6,// 501 PAY 466 

    0x2b404390,// 502 PAY 467 

    0x024511ea,// 503 PAY 468 

    0x62332a55,// 504 PAY 469 

    0xfb6b0210,// 505 PAY 470 

    0xde29090d,// 506 PAY 471 

    0xe7ab7476,// 507 PAY 472 

    0x26a6e1f1,// 508 PAY 473 

    0xe82a0ea8,// 509 PAY 474 

    0x40e22c4c,// 510 PAY 475 

    0x1351ed1f,// 511 PAY 476 

    0x1a04009b,// 512 PAY 477 

    0x3635d1f2,// 513 PAY 478 

    0x77509a00,// 514 PAY 479 

    0xd5d902e2,// 515 PAY 480 

    0x422e3fe1,// 516 PAY 481 

    0x50d163f2,// 517 PAY 482 

    0xedd7fe54,// 518 PAY 483 

    0xafe86b90,// 519 PAY 484 

    0x1027fe63,// 520 PAY 485 

    0x7c228a28,// 521 PAY 486 

    0x47d78a19,// 522 PAY 487 

    0xa759c998,// 523 PAY 488 

    0x0b03b796,// 524 PAY 489 

    0x4de64d76,// 525 PAY 490 

    0x6fb150b9,// 526 PAY 491 

    0x9e614538,// 527 PAY 492 

    0x74a60765,// 528 PAY 493 

    0x6fb13289,// 529 PAY 494 

    0x8b42e848,// 530 PAY 495 

    0x060dbbfa,// 531 PAY 496 

    0xec000000,// 532 PAY 497 

/// STA is 1 words. 

/// STA num_pkts       : 231 

/// STA pkt_idx        : 247 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x9 

    0x03dc09e7 // 533 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt58_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x8042282e,// 4 SCX   2 

    0x00003200,// 5 SCX   3 

    0xa0c6170f,// 6 SCX   4 

    0x50a52017,// 7 SCX   5 

    0x25280611,// 8 SCX   6 

    0x302645f8,// 9 SCX   7 

    0x91ec6519,// 10 SCX   8 

    0x113ecd18,// 11 SCX   9 

    0xce9ee378,// 12 SCX  10 

    0x46b34906,// 13 SCX  11 

    0xb9c96f89,// 14 SCX  12 

    0xc641d8f0,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1601 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1366 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1366 

/// BFD lencrypto      : 424 

/// BFD ofstcrypto     : 824 

/// BFD (ofst+len)cry  : 1248 

/// BFD ofstiv         : 492 

/// BFD ofsticv        : 1492 

    0x00000556,// 16 BFD   1 

    0x033801a8,// 17 BFD   2 

    0x05d401ec,// 18 BFD   3 

/// MFM is 13 words. 

/// MFM vldnibs        : 5e 

    0x5e00602c,// 19 MFM   1 

    0x3d09c13b,// 20 MFM   2 

    0x8fae9d28,// 21 MFM   3 

    0x3d05308d,// 22 MFM   4 

    0xb37af6fc,// 23 MFM   5 

    0x3941d982,// 24 MFM   6 

    0x8be73a73,// 25 MFM   7 

    0xe7f2f528,// 26 MFM   8 

    0x657b9605,// 27 MFM   9 

    0x53199d7d,// 28 MFM  10 

    0x0a3af2f7,// 29 MFM  11 

    0x7a1debbd,// 30 MFM  12 

    0x28000000,// 31 MFM  13 

/// BDA is 402 words. 

/// BDA size     is 1601 (0x641) 

/// BDA id       is 0x5042 

    0x06415042,// 32 BDA   1 

/// PAY Generic Data size   : 1601 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xf1fa5d86,// 33 PAY   1 

    0x399c99e3,// 34 PAY   2 

    0xd86aaa81,// 35 PAY   3 

    0xcf7229c9,// 36 PAY   4 

    0x9dec40b1,// 37 PAY   5 

    0x4ec8267c,// 38 PAY   6 

    0x125e4b90,// 39 PAY   7 

    0x645a8869,// 40 PAY   8 

    0xd14eb79d,// 41 PAY   9 

    0x306a99b9,// 42 PAY  10 

    0x1f7aee20,// 43 PAY  11 

    0x55bb6bd1,// 44 PAY  12 

    0x2721bdac,// 45 PAY  13 

    0xc211027a,// 46 PAY  14 

    0x5409a660,// 47 PAY  15 

    0xb5403db1,// 48 PAY  16 

    0x7fd63903,// 49 PAY  17 

    0x2da14510,// 50 PAY  18 

    0x0c5f5e85,// 51 PAY  19 

    0x9a84413f,// 52 PAY  20 

    0x2be19c84,// 53 PAY  21 

    0x32cbc8d8,// 54 PAY  22 

    0xc2cac576,// 55 PAY  23 

    0x88ce2836,// 56 PAY  24 

    0xfacf8d96,// 57 PAY  25 

    0x41db8d35,// 58 PAY  26 

    0x76dbceee,// 59 PAY  27 

    0xae3c4f4c,// 60 PAY  28 

    0xf8bca1b6,// 61 PAY  29 

    0x440400d3,// 62 PAY  30 

    0x0f139480,// 63 PAY  31 

    0x416fff05,// 64 PAY  32 

    0x9544918f,// 65 PAY  33 

    0xcf4ad08b,// 66 PAY  34 

    0xdce65f82,// 67 PAY  35 

    0xd6a16c8d,// 68 PAY  36 

    0x1d70b17f,// 69 PAY  37 

    0xf2ca7161,// 70 PAY  38 

    0xed566f61,// 71 PAY  39 

    0xea316f3d,// 72 PAY  40 

    0xc9412477,// 73 PAY  41 

    0xa9fb7fa9,// 74 PAY  42 

    0x1e251d49,// 75 PAY  43 

    0x0e085400,// 76 PAY  44 

    0xaac94bd1,// 77 PAY  45 

    0x934c7670,// 78 PAY  46 

    0xdc64ac6e,// 79 PAY  47 

    0xc49e3d0c,// 80 PAY  48 

    0xbf2b7b7a,// 81 PAY  49 

    0x6506af88,// 82 PAY  50 

    0x74bc241c,// 83 PAY  51 

    0x9babf201,// 84 PAY  52 

    0x7f34dcc7,// 85 PAY  53 

    0x0ac28d5e,// 86 PAY  54 

    0xae686405,// 87 PAY  55 

    0xee5a657f,// 88 PAY  56 

    0xf53cf28b,// 89 PAY  57 

    0x30818345,// 90 PAY  58 

    0x122251ca,// 91 PAY  59 

    0x99695687,// 92 PAY  60 

    0xbbb6c5d4,// 93 PAY  61 

    0x75016613,// 94 PAY  62 

    0x4d4caabe,// 95 PAY  63 

    0x55861def,// 96 PAY  64 

    0x67b0131d,// 97 PAY  65 

    0x74fd5b7f,// 98 PAY  66 

    0x769afcee,// 99 PAY  67 

    0x9b6be906,// 100 PAY  68 

    0xed95a007,// 101 PAY  69 

    0x9c8aec83,// 102 PAY  70 

    0x1db9c045,// 103 PAY  71 

    0xb2ac0f88,// 104 PAY  72 

    0x08b07060,// 105 PAY  73 

    0xba8921ed,// 106 PAY  74 

    0xbaa98d40,// 107 PAY  75 

    0x45852b3c,// 108 PAY  76 

    0xb458339e,// 109 PAY  77 

    0x7402a89b,// 110 PAY  78 

    0x0fc8b7b9,// 111 PAY  79 

    0x9563cf22,// 112 PAY  80 

    0x6f9515aa,// 113 PAY  81 

    0x6347ab22,// 114 PAY  82 

    0x48597a81,// 115 PAY  83 

    0x1afe32fa,// 116 PAY  84 

    0xc936d896,// 117 PAY  85 

    0xeff0e7eb,// 118 PAY  86 

    0x72f01129,// 119 PAY  87 

    0x9871c12e,// 120 PAY  88 

    0x2ba509b1,// 121 PAY  89 

    0x802a2e8c,// 122 PAY  90 

    0xf5242930,// 123 PAY  91 

    0xe90fe0fb,// 124 PAY  92 

    0x1859c032,// 125 PAY  93 

    0xd43689a8,// 126 PAY  94 

    0xdfa8e53b,// 127 PAY  95 

    0x800c125b,// 128 PAY  96 

    0xe5667342,// 129 PAY  97 

    0xb799418a,// 130 PAY  98 

    0xb9957a6b,// 131 PAY  99 

    0x9a72b624,// 132 PAY 100 

    0x6f666bea,// 133 PAY 101 

    0xba65e8e2,// 134 PAY 102 

    0xc18acdba,// 135 PAY 103 

    0xf782a9ec,// 136 PAY 104 

    0x375954c8,// 137 PAY 105 

    0x84bfd531,// 138 PAY 106 

    0xf18ef6e9,// 139 PAY 107 

    0xda409491,// 140 PAY 108 

    0x7ae37729,// 141 PAY 109 

    0x66bc938c,// 142 PAY 110 

    0x5b6093ed,// 143 PAY 111 

    0xc33e7bf8,// 144 PAY 112 

    0x96ade1ba,// 145 PAY 113 

    0xa0f80b54,// 146 PAY 114 

    0x432d722f,// 147 PAY 115 

    0x856150af,// 148 PAY 116 

    0x691bae3d,// 149 PAY 117 

    0x5c8a3027,// 150 PAY 118 

    0x1a2160c7,// 151 PAY 119 

    0x79629c4a,// 152 PAY 120 

    0x2630b4ee,// 153 PAY 121 

    0x59ea5802,// 154 PAY 122 

    0x2777741f,// 155 PAY 123 

    0x6d40c1eb,// 156 PAY 124 

    0xe74e2e8d,// 157 PAY 125 

    0xa26d3c52,// 158 PAY 126 

    0x134ffca1,// 159 PAY 127 

    0x53f28cfe,// 160 PAY 128 

    0x2da4883f,// 161 PAY 129 

    0x3b04f30d,// 162 PAY 130 

    0xe9795da3,// 163 PAY 131 

    0xe74ece40,// 164 PAY 132 

    0xf2f84320,// 165 PAY 133 

    0xb094f228,// 166 PAY 134 

    0xea0d2f17,// 167 PAY 135 

    0x7a022012,// 168 PAY 136 

    0x1bbb5a5e,// 169 PAY 137 

    0x6d4220ab,// 170 PAY 138 

    0x77def4f1,// 171 PAY 139 

    0x1cb07d47,// 172 PAY 140 

    0xc696b580,// 173 PAY 141 

    0xfc430b08,// 174 PAY 142 

    0x62e3ca6f,// 175 PAY 143 

    0xa2097045,// 176 PAY 144 

    0xfeb2a760,// 177 PAY 145 

    0xfbb756be,// 178 PAY 146 

    0xfae33897,// 179 PAY 147 

    0x0faab7c9,// 180 PAY 148 

    0x57162137,// 181 PAY 149 

    0x0d153e80,// 182 PAY 150 

    0x90800f38,// 183 PAY 151 

    0x390d96b3,// 184 PAY 152 

    0x3504a721,// 185 PAY 153 

    0x16a314db,// 186 PAY 154 

    0x72ee30c1,// 187 PAY 155 

    0x1efa258e,// 188 PAY 156 

    0x83f2866d,// 189 PAY 157 

    0xfa87565c,// 190 PAY 158 

    0xc487c1c4,// 191 PAY 159 

    0x8660ad5a,// 192 PAY 160 

    0x4e7142bc,// 193 PAY 161 

    0x8cce6553,// 194 PAY 162 

    0x5fe5c2d5,// 195 PAY 163 

    0xb9fcf362,// 196 PAY 164 

    0x216b21ac,// 197 PAY 165 

    0xb37b5dca,// 198 PAY 166 

    0xf4e5899e,// 199 PAY 167 

    0xe5df0611,// 200 PAY 168 

    0xa572a5b0,// 201 PAY 169 

    0x34dae4bf,// 202 PAY 170 

    0xf858201f,// 203 PAY 171 

    0xb68a6c6c,// 204 PAY 172 

    0x71969a27,// 205 PAY 173 

    0xa788b181,// 206 PAY 174 

    0x56113af0,// 207 PAY 175 

    0x7cf10abd,// 208 PAY 176 

    0x43e7a022,// 209 PAY 177 

    0x69f17c4b,// 210 PAY 178 

    0x6db384b3,// 211 PAY 179 

    0x82d10f89,// 212 PAY 180 

    0xfd8be6f6,// 213 PAY 181 

    0x2de789d6,// 214 PAY 182 

    0x4f36b83d,// 215 PAY 183 

    0xf089fa2e,// 216 PAY 184 

    0x65d8de8d,// 217 PAY 185 

    0xbc9b7456,// 218 PAY 186 

    0xff30a335,// 219 PAY 187 

    0xe4298cbe,// 220 PAY 188 

    0x2b20e12d,// 221 PAY 189 

    0xf77c5f87,// 222 PAY 190 

    0xf3710784,// 223 PAY 191 

    0x500ff1e7,// 224 PAY 192 

    0x9cb00780,// 225 PAY 193 

    0xe8d90349,// 226 PAY 194 

    0x38233271,// 227 PAY 195 

    0xa69b83b7,// 228 PAY 196 

    0x2739cf11,// 229 PAY 197 

    0xc9a761a2,// 230 PAY 198 

    0xb80a4b43,// 231 PAY 199 

    0x9d4e32f9,// 232 PAY 200 

    0xe4f2e60c,// 233 PAY 201 

    0x3e278796,// 234 PAY 202 

    0xe7fae5d0,// 235 PAY 203 

    0xed97913e,// 236 PAY 204 

    0xe731d9cc,// 237 PAY 205 

    0xd4018388,// 238 PAY 206 

    0x68cc402c,// 239 PAY 207 

    0x016d1542,// 240 PAY 208 

    0xdfdf19aa,// 241 PAY 209 

    0x8c3fce8e,// 242 PAY 210 

    0x796f05a1,// 243 PAY 211 

    0xfc0c24a5,// 244 PAY 212 

    0x0f4435e6,// 245 PAY 213 

    0xf4715a1f,// 246 PAY 214 

    0xd6bd65c7,// 247 PAY 215 

    0xddfa5c0d,// 248 PAY 216 

    0x1f9f68ea,// 249 PAY 217 

    0x3b49de54,// 250 PAY 218 

    0x8aaba394,// 251 PAY 219 

    0x2deef8e2,// 252 PAY 220 

    0xbd1545a6,// 253 PAY 221 

    0x612fa9d1,// 254 PAY 222 

    0x9b2c788d,// 255 PAY 223 

    0xbb05371b,// 256 PAY 224 

    0x58e93f48,// 257 PAY 225 

    0x7e8f3b36,// 258 PAY 226 

    0xf0e00ed8,// 259 PAY 227 

    0x7ee3e0fb,// 260 PAY 228 

    0xd585c056,// 261 PAY 229 

    0xa71ecceb,// 262 PAY 230 

    0xcd746a45,// 263 PAY 231 

    0xef04ca10,// 264 PAY 232 

    0x9299aac6,// 265 PAY 233 

    0xefbc248e,// 266 PAY 234 

    0x364f6bb5,// 267 PAY 235 

    0x98ac2bf7,// 268 PAY 236 

    0xe8808093,// 269 PAY 237 

    0x28decd37,// 270 PAY 238 

    0x7f06060f,// 271 PAY 239 

    0xde1dc925,// 272 PAY 240 

    0x04ad4136,// 273 PAY 241 

    0xab7e73a4,// 274 PAY 242 

    0xd6e91195,// 275 PAY 243 

    0x0b0a7bfb,// 276 PAY 244 

    0x8a0935b9,// 277 PAY 245 

    0x6ff67321,// 278 PAY 246 

    0xb829a7f8,// 279 PAY 247 

    0xd7d2de83,// 280 PAY 248 

    0x6e163f3e,// 281 PAY 249 

    0x4f20f488,// 282 PAY 250 

    0xd0dfcbd5,// 283 PAY 251 

    0xe2d5e67f,// 284 PAY 252 

    0xe88bbdf3,// 285 PAY 253 

    0x3708d0f9,// 286 PAY 254 

    0x1d6d659e,// 287 PAY 255 

    0xb7ec95f1,// 288 PAY 256 

    0x63f83497,// 289 PAY 257 

    0x5246c8de,// 290 PAY 258 

    0x21e160c6,// 291 PAY 259 

    0x412baead,// 292 PAY 260 

    0x4415bfef,// 293 PAY 261 

    0x08b470ee,// 294 PAY 262 

    0x4f87a474,// 295 PAY 263 

    0x6aaff358,// 296 PAY 264 

    0x8ed8a86a,// 297 PAY 265 

    0x90211deb,// 298 PAY 266 

    0x6ceccb16,// 299 PAY 267 

    0xffd75e9a,// 300 PAY 268 

    0xe2cbe766,// 301 PAY 269 

    0x55a54799,// 302 PAY 270 

    0x5ec6b850,// 303 PAY 271 

    0x0e386254,// 304 PAY 272 

    0x8a9c995f,// 305 PAY 273 

    0x3230ccc4,// 306 PAY 274 

    0x18b92dc6,// 307 PAY 275 

    0x61e56dba,// 308 PAY 276 

    0x4e6e122e,// 309 PAY 277 

    0x7672270c,// 310 PAY 278 

    0x6a6f7dcf,// 311 PAY 279 

    0x0df6cccf,// 312 PAY 280 

    0x8a3dab92,// 313 PAY 281 

    0xc67ff560,// 314 PAY 282 

    0xdfebe97b,// 315 PAY 283 

    0x21e3ce44,// 316 PAY 284 

    0xe446b5f4,// 317 PAY 285 

    0x716af902,// 318 PAY 286 

    0x413b28cf,// 319 PAY 287 

    0xe6d1d0c9,// 320 PAY 288 

    0x90d5f0cd,// 321 PAY 289 

    0x875b761e,// 322 PAY 290 

    0xb9953b76,// 323 PAY 291 

    0xf5c413dd,// 324 PAY 292 

    0xfb67763c,// 325 PAY 293 

    0x25589250,// 326 PAY 294 

    0xe14c587b,// 327 PAY 295 

    0x883053f8,// 328 PAY 296 

    0x658917c3,// 329 PAY 297 

    0x32a1665c,// 330 PAY 298 

    0x7771c536,// 331 PAY 299 

    0x0941b3fd,// 332 PAY 300 

    0x663c8fb1,// 333 PAY 301 

    0x79dd5664,// 334 PAY 302 

    0x226b46b0,// 335 PAY 303 

    0xaee0b475,// 336 PAY 304 

    0x4db53fdd,// 337 PAY 305 

    0x2b5175ac,// 338 PAY 306 

    0x6a813250,// 339 PAY 307 

    0xeae3662b,// 340 PAY 308 

    0x693efb4c,// 341 PAY 309 

    0x0854792b,// 342 PAY 310 

    0xbe5fc338,// 343 PAY 311 

    0xaa189366,// 344 PAY 312 

    0xec918333,// 345 PAY 313 

    0x6e14ef95,// 346 PAY 314 

    0xb08b1b50,// 347 PAY 315 

    0xda2ca7f9,// 348 PAY 316 

    0x205e13fb,// 349 PAY 317 

    0xab703ddc,// 350 PAY 318 

    0x6e861fb1,// 351 PAY 319 

    0x4e4bd062,// 352 PAY 320 

    0x6c7b9e2d,// 353 PAY 321 

    0xdae152bb,// 354 PAY 322 

    0xcec0d264,// 355 PAY 323 

    0x13c8877f,// 356 PAY 324 

    0x4711a1c3,// 357 PAY 325 

    0x0835f6b4,// 358 PAY 326 

    0xbc3c1dd9,// 359 PAY 327 

    0x5e00a281,// 360 PAY 328 

    0xebf86d06,// 361 PAY 329 

    0x9e15c021,// 362 PAY 330 

    0x7c42f34c,// 363 PAY 331 

    0x5bfe480b,// 364 PAY 332 

    0xefba4b3a,// 365 PAY 333 

    0xf3e47359,// 366 PAY 334 

    0x4308e290,// 367 PAY 335 

    0x0473b3e9,// 368 PAY 336 

    0x1b5bea42,// 369 PAY 337 

    0x347c52b4,// 370 PAY 338 

    0xc4583596,// 371 PAY 339 

    0x6abc2c5c,// 372 PAY 340 

    0x08f10543,// 373 PAY 341 

    0x06f154e9,// 374 PAY 342 

    0xdf75c36d,// 375 PAY 343 

    0xa1d4d984,// 376 PAY 344 

    0x58b25f32,// 377 PAY 345 

    0xf9cd300a,// 378 PAY 346 

    0x82e58222,// 379 PAY 347 

    0xe7c8f8fd,// 380 PAY 348 

    0x388eef51,// 381 PAY 349 

    0xf39408de,// 382 PAY 350 

    0xc8021c9a,// 383 PAY 351 

    0x299e9611,// 384 PAY 352 

    0x5b430e1f,// 385 PAY 353 

    0xe20ad1df,// 386 PAY 354 

    0xbdb0bd6e,// 387 PAY 355 

    0xb44224dc,// 388 PAY 356 

    0x8ccfbd91,// 389 PAY 357 

    0x85ca277e,// 390 PAY 358 

    0x7c5ba8c1,// 391 PAY 359 

    0x25f71be7,// 392 PAY 360 

    0x16d0c6df,// 393 PAY 361 

    0x6388e255,// 394 PAY 362 

    0x342274d5,// 395 PAY 363 

    0xb92cd530,// 396 PAY 364 

    0x0ec9b1a2,// 397 PAY 365 

    0x56117150,// 398 PAY 366 

    0xbc0f6043,// 399 PAY 367 

    0xb61af6e5,// 400 PAY 368 

    0x1b312e77,// 401 PAY 369 

    0x98c0fae3,// 402 PAY 370 

    0xc472f07f,// 403 PAY 371 

    0x657277c8,// 404 PAY 372 

    0x747411d0,// 405 PAY 373 

    0x43d8b54a,// 406 PAY 374 

    0x452fcb80,// 407 PAY 375 

    0xf1976b4f,// 408 PAY 376 

    0x7974c3be,// 409 PAY 377 

    0xf1476f65,// 410 PAY 378 

    0xb822672b,// 411 PAY 379 

    0xba30d41b,// 412 PAY 380 

    0x6c0f5e67,// 413 PAY 381 

    0xdf59a85e,// 414 PAY 382 

    0x4c3bcf1e,// 415 PAY 383 

    0x8c8cd596,// 416 PAY 384 

    0x3f22c842,// 417 PAY 385 

    0x50665def,// 418 PAY 386 

    0x0a1f3255,// 419 PAY 387 

    0xc48ca46c,// 420 PAY 388 

    0xe3178f78,// 421 PAY 389 

    0x30bd9d28,// 422 PAY 390 

    0xf1e6eb7f,// 423 PAY 391 

    0x7f6c1d30,// 424 PAY 392 

    0xdfcd766f,// 425 PAY 393 

    0x75bdb6ae,// 426 PAY 394 

    0xd156f4e8,// 427 PAY 395 

    0x6871e837,// 428 PAY 396 

    0xeea4d7a0,// 429 PAY 397 

    0x1bb9aea5,// 430 PAY 398 

    0x200f7cbf,// 431 PAY 399 

    0x1df823ed,// 432 PAY 400 

    0x02000000,// 433 PAY 401 

/// STA is 1 words. 

/// STA num_pkts       : 207 

/// STA pkt_idx        : 160 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1e 

    0x02811ecf // 434 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt59_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x80462815,// 4 SCX   2 

    0x00004382,// 5 SCX   3 

    0xd96ff58e,// 6 SCX   4 

    0x6bae1076,// 7 SCX   5 

    0xe0cd9012,// 8 SCX   6 

    0x627069f5,// 9 SCX   7 

    0x6344b4ea,// 10 SCX   8 

    0x36e60ed3,// 11 SCX   9 

    0xd16b9a80,// 12 SCX  10 

    0x4a2ed480,// 13 SCX  11 

    0xa4f0c56d,// 14 SCX  12 

    0xf460d0dd,// 15 SCX  13 

    0xdde56303,// 16 SCX  14 

    0xc66a6284,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 2011 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 353 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 353 

/// BFD lencrypto      : 152 

/// BFD ofstcrypto     : 176 

/// BFD (ofst+len)cry  : 328 

/// BFD ofstiv         : 76 

/// BFD ofsticv        : 1088 

    0x00000161,// 18 BFD   1 

    0x00b00098,// 19 BFD   2 

    0x0440004c,// 20 BFD   3 

/// MFM is 6 words. 

/// MFM vldnibs        : 25 

    0x25006a38,// 21 MFM   1 

    0x2d5ae896,// 22 MFM   2 

    0x385bc129,// 23 MFM   3 

    0x5126f257,// 24 MFM   4 

    0xb0b5775d,// 25 MFM   5 

    0x90000000,// 26 MFM   6 

/// BDA is 504 words. 

/// BDA size     is 2011 (0x7db) 

/// BDA id       is 0x1f49 

    0x07db1f49,// 27 BDA   1 

/// PAY Generic Data size   : 2011 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x316ec9e6,// 28 PAY   1 

    0x57dbe114,// 29 PAY   2 

    0xef46b072,// 30 PAY   3 

    0x6ebb7964,// 31 PAY   4 

    0x81234c81,// 32 PAY   5 

    0xfb295eb6,// 33 PAY   6 

    0x0d212f70,// 34 PAY   7 

    0xf5066e35,// 35 PAY   8 

    0xdd8a0935,// 36 PAY   9 

    0x5a165920,// 37 PAY  10 

    0x3ce37a15,// 38 PAY  11 

    0x836020db,// 39 PAY  12 

    0xc81fd370,// 40 PAY  13 

    0xc6b5fca1,// 41 PAY  14 

    0x6e15a853,// 42 PAY  15 

    0xe39f7100,// 43 PAY  16 

    0x1e4a4155,// 44 PAY  17 

    0xfa11d53c,// 45 PAY  18 

    0x6e401cae,// 46 PAY  19 

    0x5a1121c1,// 47 PAY  20 

    0x6a3dbb83,// 48 PAY  21 

    0x86fc9a91,// 49 PAY  22 

    0xf4b7360a,// 50 PAY  23 

    0x7fd7d950,// 51 PAY  24 

    0x13da5d52,// 52 PAY  25 

    0x61fc7816,// 53 PAY  26 

    0xd9bb0fe9,// 54 PAY  27 

    0x474ee31e,// 55 PAY  28 

    0xc9dea47a,// 56 PAY  29 

    0xf6357b06,// 57 PAY  30 

    0x8515ce40,// 58 PAY  31 

    0x88d7594a,// 59 PAY  32 

    0xc40012a7,// 60 PAY  33 

    0x8f4858ca,// 61 PAY  34 

    0x8384ed79,// 62 PAY  35 

    0x984fb46d,// 63 PAY  36 

    0x54f989c0,// 64 PAY  37 

    0xfe368329,// 65 PAY  38 

    0xf5e04f6c,// 66 PAY  39 

    0xf447fb69,// 67 PAY  40 

    0x75d7861c,// 68 PAY  41 

    0x290b9429,// 69 PAY  42 

    0x7dd8dafa,// 70 PAY  43 

    0xc5990a3f,// 71 PAY  44 

    0xb41907fc,// 72 PAY  45 

    0xfadd7d4c,// 73 PAY  46 

    0x636b46a0,// 74 PAY  47 

    0xc4160521,// 75 PAY  48 

    0x126c9532,// 76 PAY  49 

    0x29e0ceff,// 77 PAY  50 

    0x0dd6698f,// 78 PAY  51 

    0xc2abd846,// 79 PAY  52 

    0x907b8bf3,// 80 PAY  53 

    0x66d908b1,// 81 PAY  54 

    0x88f9f58b,// 82 PAY  55 

    0xd4991e39,// 83 PAY  56 

    0x6f4010c1,// 84 PAY  57 

    0xbf05ea4d,// 85 PAY  58 

    0x7cd2e26b,// 86 PAY  59 

    0x7711497f,// 87 PAY  60 

    0x9b04403f,// 88 PAY  61 

    0x0605bba2,// 89 PAY  62 

    0x4ac8b091,// 90 PAY  63 

    0x70fa9565,// 91 PAY  64 

    0xe808b6f3,// 92 PAY  65 

    0x57f91b4c,// 93 PAY  66 

    0x82e04fd0,// 94 PAY  67 

    0xb8a83819,// 95 PAY  68 

    0x917ed30f,// 96 PAY  69 

    0x17350c5e,// 97 PAY  70 

    0x5e72b491,// 98 PAY  71 

    0x29e5bb03,// 99 PAY  72 

    0xfe0e7dbf,// 100 PAY  73 

    0xbe95e14a,// 101 PAY  74 

    0x96645fee,// 102 PAY  75 

    0xf5ba240a,// 103 PAY  76 

    0xc067d9c7,// 104 PAY  77 

    0x85356021,// 105 PAY  78 

    0xc6d14091,// 106 PAY  79 

    0x7fd734ed,// 107 PAY  80 

    0x3c6ec102,// 108 PAY  81 

    0xf9d6fff3,// 109 PAY  82 

    0x5b30ff34,// 110 PAY  83 

    0xc60f3b50,// 111 PAY  84 

    0x456d6b50,// 112 PAY  85 

    0xbd23dc37,// 113 PAY  86 

    0x83ce5e45,// 114 PAY  87 

    0x1b9cc8b8,// 115 PAY  88 

    0xbfa651ba,// 116 PAY  89 

    0xd82c3ca2,// 117 PAY  90 

    0x06fbed7f,// 118 PAY  91 

    0xac0d7103,// 119 PAY  92 

    0xde7e9938,// 120 PAY  93 

    0x93462194,// 121 PAY  94 

    0x2612a090,// 122 PAY  95 

    0xeac12fc5,// 123 PAY  96 

    0x1bc559b0,// 124 PAY  97 

    0x831df3d4,// 125 PAY  98 

    0x0c029dbc,// 126 PAY  99 

    0x5dbb856f,// 127 PAY 100 

    0xe37eb017,// 128 PAY 101 

    0x0ed068a1,// 129 PAY 102 

    0x2018021e,// 130 PAY 103 

    0x624565fd,// 131 PAY 104 

    0x801f4a07,// 132 PAY 105 

    0xd31050ca,// 133 PAY 106 

    0x8dcf067e,// 134 PAY 107 

    0x63eca92c,// 135 PAY 108 

    0x0c8ec5c6,// 136 PAY 109 

    0x955c9d1d,// 137 PAY 110 

    0x50df4510,// 138 PAY 111 

    0x3118655e,// 139 PAY 112 

    0x54fc5362,// 140 PAY 113 

    0x8a60a756,// 141 PAY 114 

    0x8f5cfe7b,// 142 PAY 115 

    0x21a0856c,// 143 PAY 116 

    0x6c431676,// 144 PAY 117 

    0xf3c99238,// 145 PAY 118 

    0xa94882d5,// 146 PAY 119 

    0x8acc209e,// 147 PAY 120 

    0x0c73f6ff,// 148 PAY 121 

    0xb87781c6,// 149 PAY 122 

    0x2643feb6,// 150 PAY 123 

    0xb51d1ecc,// 151 PAY 124 

    0xfa2bec9e,// 152 PAY 125 

    0xa607141d,// 153 PAY 126 

    0x44c0c188,// 154 PAY 127 

    0x5bf5a1c7,// 155 PAY 128 

    0x5e81d51b,// 156 PAY 129 

    0x25271685,// 157 PAY 130 

    0xe758c55e,// 158 PAY 131 

    0x90a66427,// 159 PAY 132 

    0xe0fd657f,// 160 PAY 133 

    0xeeb9c27f,// 161 PAY 134 

    0x938336e7,// 162 PAY 135 

    0xf76aced0,// 163 PAY 136 

    0x8d82cea5,// 164 PAY 137 

    0xa134b005,// 165 PAY 138 

    0x068e6b39,// 166 PAY 139 

    0xadcb7c32,// 167 PAY 140 

    0x26234010,// 168 PAY 141 

    0x0571b41a,// 169 PAY 142 

    0xbacd79d5,// 170 PAY 143 

    0xff1ccc4c,// 171 PAY 144 

    0x93ee7288,// 172 PAY 145 

    0xb061ee7c,// 173 PAY 146 

    0x382da947,// 174 PAY 147 

    0x56b4ecdc,// 175 PAY 148 

    0x381908f7,// 176 PAY 149 

    0xfa122954,// 177 PAY 150 

    0x89b6c578,// 178 PAY 151 

    0xb48b4896,// 179 PAY 152 

    0xb585fec6,// 180 PAY 153 

    0xc8c6c711,// 181 PAY 154 

    0xf8f4557d,// 182 PAY 155 

    0xe1fa1754,// 183 PAY 156 

    0x4e2fc837,// 184 PAY 157 

    0x193d9480,// 185 PAY 158 

    0xde6d7ffe,// 186 PAY 159 

    0xc8586a57,// 187 PAY 160 

    0xbbcc208c,// 188 PAY 161 

    0xa887bcdc,// 189 PAY 162 

    0xda88c94c,// 190 PAY 163 

    0x2fefbc73,// 191 PAY 164 

    0x02814a4e,// 192 PAY 165 

    0x8b0b407c,// 193 PAY 166 

    0x8398b4ef,// 194 PAY 167 

    0xb02862f7,// 195 PAY 168 

    0x55eff83a,// 196 PAY 169 

    0x4f6bf8f1,// 197 PAY 170 

    0x64c0c8d1,// 198 PAY 171 

    0xa1b0979e,// 199 PAY 172 

    0x19820a61,// 200 PAY 173 

    0x058c5388,// 201 PAY 174 

    0xe41bdbdb,// 202 PAY 175 

    0x47b4cc74,// 203 PAY 176 

    0x83f316aa,// 204 PAY 177 

    0xd7eea318,// 205 PAY 178 

    0x695c8c44,// 206 PAY 179 

    0x1a09af36,// 207 PAY 180 

    0x8242e242,// 208 PAY 181 

    0x3b40134e,// 209 PAY 182 

    0x83323c8b,// 210 PAY 183 

    0x40b60336,// 211 PAY 184 

    0xa32f039b,// 212 PAY 185 

    0x76a8d384,// 213 PAY 186 

    0xaa639027,// 214 PAY 187 

    0x7e445a3f,// 215 PAY 188 

    0x73d15bf9,// 216 PAY 189 

    0x33818135,// 217 PAY 190 

    0x97c3b878,// 218 PAY 191 

    0x69be5334,// 219 PAY 192 

    0xe6d4cdb0,// 220 PAY 193 

    0x6575447d,// 221 PAY 194 

    0x9643d737,// 222 PAY 195 

    0x0bea3d28,// 223 PAY 196 

    0xf08cc894,// 224 PAY 197 

    0xae5008df,// 225 PAY 198 

    0x6d35628e,// 226 PAY 199 

    0x2db27023,// 227 PAY 200 

    0x7770971b,// 228 PAY 201 

    0x2e68f9c4,// 229 PAY 202 

    0xadb49aac,// 230 PAY 203 

    0xafa10a09,// 231 PAY 204 

    0x3d28c0a0,// 232 PAY 205 

    0x2dfe4be7,// 233 PAY 206 

    0x88c94dd1,// 234 PAY 207 

    0x63b390d2,// 235 PAY 208 

    0x8614f6d3,// 236 PAY 209 

    0x830c55da,// 237 PAY 210 

    0x47238604,// 238 PAY 211 

    0x059e6abf,// 239 PAY 212 

    0x243fcf07,// 240 PAY 213 

    0x7564140b,// 241 PAY 214 

    0xa6e45bc3,// 242 PAY 215 

    0x930834b8,// 243 PAY 216 

    0xf36edff6,// 244 PAY 217 

    0xc32dbe56,// 245 PAY 218 

    0x923e9494,// 246 PAY 219 

    0xd8d75220,// 247 PAY 220 

    0x70d46eb5,// 248 PAY 221 

    0x9734272e,// 249 PAY 222 

    0x0b770fb1,// 250 PAY 223 

    0x2ff02f93,// 251 PAY 224 

    0xf1427484,// 252 PAY 225 

    0xf758a5ce,// 253 PAY 226 

    0xfecb0087,// 254 PAY 227 

    0xb4e82d1b,// 255 PAY 228 

    0x0054281c,// 256 PAY 229 

    0xe732978e,// 257 PAY 230 

    0xfa738049,// 258 PAY 231 

    0x748b50fe,// 259 PAY 232 

    0x78c01ade,// 260 PAY 233 

    0x222d0d4d,// 261 PAY 234 

    0xc44357d7,// 262 PAY 235 

    0xb806840c,// 263 PAY 236 

    0xb1820fd6,// 264 PAY 237 

    0x54cfdc3d,// 265 PAY 238 

    0x6fe4e13e,// 266 PAY 239 

    0x313311ba,// 267 PAY 240 

    0x56a4f897,// 268 PAY 241 

    0x2cd99103,// 269 PAY 242 

    0x2d46dc26,// 270 PAY 243 

    0x11ac836d,// 271 PAY 244 

    0x6d8dbf3a,// 272 PAY 245 

    0x9bfbc648,// 273 PAY 246 

    0x62dc818f,// 274 PAY 247 

    0x0bc64299,// 275 PAY 248 

    0x8c94e5e0,// 276 PAY 249 

    0xc9e9b548,// 277 PAY 250 

    0xeaf55cc8,// 278 PAY 251 

    0x78b64562,// 279 PAY 252 

    0x1bac6470,// 280 PAY 253 

    0xd85b30f1,// 281 PAY 254 

    0xe19aa58a,// 282 PAY 255 

    0xacf431c3,// 283 PAY 256 

    0xf236f9a1,// 284 PAY 257 

    0xcee21e9a,// 285 PAY 258 

    0xeb0b4a77,// 286 PAY 259 

    0xe8109a21,// 287 PAY 260 

    0xe8bd526d,// 288 PAY 261 

    0x4269cbc5,// 289 PAY 262 

    0xb4d05c11,// 290 PAY 263 

    0x989aa323,// 291 PAY 264 

    0x1aa71aaa,// 292 PAY 265 

    0x991ddc5d,// 293 PAY 266 

    0x8581260f,// 294 PAY 267 

    0x5e318407,// 295 PAY 268 

    0x94e9aab2,// 296 PAY 269 

    0xb13309a3,// 297 PAY 270 

    0x63017d13,// 298 PAY 271 

    0x0ccf4163,// 299 PAY 272 

    0x659084b4,// 300 PAY 273 

    0x117a1ce1,// 301 PAY 274 

    0x84c8c24f,// 302 PAY 275 

    0x01a9bc94,// 303 PAY 276 

    0x0206dede,// 304 PAY 277 

    0xdd9f6d9e,// 305 PAY 278 

    0xc5055506,// 306 PAY 279 

    0xd3c20a84,// 307 PAY 280 

    0x69d27cc7,// 308 PAY 281 

    0x226afa11,// 309 PAY 282 

    0x49057bd8,// 310 PAY 283 

    0xd209f6b4,// 311 PAY 284 

    0xb46a2dd9,// 312 PAY 285 

    0x276abeb2,// 313 PAY 286 

    0x5a812d4a,// 314 PAY 287 

    0x26e08897,// 315 PAY 288 

    0xf2b06f1d,// 316 PAY 289 

    0x0580f69a,// 317 PAY 290 

    0x874e4dc4,// 318 PAY 291 

    0xf2345719,// 319 PAY 292 

    0x9cdc6bfe,// 320 PAY 293 

    0xbbab3918,// 321 PAY 294 

    0x6042be21,// 322 PAY 295 

    0x66dc88ce,// 323 PAY 296 

    0xc33723a9,// 324 PAY 297 

    0x52dc4290,// 325 PAY 298 

    0x70acf36a,// 326 PAY 299 

    0xbc3d27aa,// 327 PAY 300 

    0x1ed7df42,// 328 PAY 301 

    0x9d2869ff,// 329 PAY 302 

    0x64792bfe,// 330 PAY 303 

    0x2dd28080,// 331 PAY 304 

    0x8942aecc,// 332 PAY 305 

    0x3b6660b8,// 333 PAY 306 

    0x6ad20426,// 334 PAY 307 

    0x1904ed9a,// 335 PAY 308 

    0xb102b9db,// 336 PAY 309 

    0x1955c2da,// 337 PAY 310 

    0x281ccfa4,// 338 PAY 311 

    0x85234ca3,// 339 PAY 312 

    0xea2c8ddd,// 340 PAY 313 

    0xba337c40,// 341 PAY 314 

    0xcc3b25e5,// 342 PAY 315 

    0x9d836771,// 343 PAY 316 

    0x0dfe748e,// 344 PAY 317 

    0x3a46f1c7,// 345 PAY 318 

    0x98ed6579,// 346 PAY 319 

    0xe48fe0e8,// 347 PAY 320 

    0x010eef1c,// 348 PAY 321 

    0x2b3fc12a,// 349 PAY 322 

    0x3945f9ee,// 350 PAY 323 

    0x356bb640,// 351 PAY 324 

    0x51512f12,// 352 PAY 325 

    0x265ef7ae,// 353 PAY 326 

    0x595a9ce1,// 354 PAY 327 

    0x1b926409,// 355 PAY 328 

    0x4dd35230,// 356 PAY 329 

    0x1c188671,// 357 PAY 330 

    0x144eee76,// 358 PAY 331 

    0x4333dec8,// 359 PAY 332 

    0xf7bb7de2,// 360 PAY 333 

    0x89ec2acd,// 361 PAY 334 

    0x49088934,// 362 PAY 335 

    0xaa3bd1d6,// 363 PAY 336 

    0x1ebfaf8c,// 364 PAY 337 

    0xbe8096ab,// 365 PAY 338 

    0x63e84600,// 366 PAY 339 

    0x7e5d3e3d,// 367 PAY 340 

    0xe77c4003,// 368 PAY 341 

    0xfb421fd8,// 369 PAY 342 

    0x7df6c682,// 370 PAY 343 

    0x17de5fba,// 371 PAY 344 

    0x3bfe315a,// 372 PAY 345 

    0x3ed53bbf,// 373 PAY 346 

    0xa37224bc,// 374 PAY 347 

    0x6799e762,// 375 PAY 348 

    0x317a4c3b,// 376 PAY 349 

    0xb256d298,// 377 PAY 350 

    0x30bd039e,// 378 PAY 351 

    0xf5f81bb3,// 379 PAY 352 

    0xddf4559b,// 380 PAY 353 

    0xc3615f6e,// 381 PAY 354 

    0x99f7ede8,// 382 PAY 355 

    0x813b9d6c,// 383 PAY 356 

    0x24d85ad2,// 384 PAY 357 

    0x90b0f229,// 385 PAY 358 

    0x89bdd0ef,// 386 PAY 359 

    0xa55c077c,// 387 PAY 360 

    0xac752890,// 388 PAY 361 

    0xf8266fd8,// 389 PAY 362 

    0x88cfb298,// 390 PAY 363 

    0x16356390,// 391 PAY 364 

    0x2e16bc41,// 392 PAY 365 

    0xfbe99a09,// 393 PAY 366 

    0x2e91c8ad,// 394 PAY 367 

    0xcfd079d7,// 395 PAY 368 

    0x77e29276,// 396 PAY 369 

    0x7d336873,// 397 PAY 370 

    0x34602e75,// 398 PAY 371 

    0x8770d505,// 399 PAY 372 

    0x9bb96f8d,// 400 PAY 373 

    0x37bf307f,// 401 PAY 374 

    0xe42d1f41,// 402 PAY 375 

    0xba821e17,// 403 PAY 376 

    0xbd245575,// 404 PAY 377 

    0xa6c10db5,// 405 PAY 378 

    0x2de6e446,// 406 PAY 379 

    0xb5a02b80,// 407 PAY 380 

    0x70018e44,// 408 PAY 381 

    0x93a8194c,// 409 PAY 382 

    0x60fc5ed5,// 410 PAY 383 

    0xcea40a16,// 411 PAY 384 

    0x0f1e1d3c,// 412 PAY 385 

    0xae1ef164,// 413 PAY 386 

    0x63c7d7d1,// 414 PAY 387 

    0x3edd9313,// 415 PAY 388 

    0xe379355c,// 416 PAY 389 

    0xe742d5a4,// 417 PAY 390 

    0x645a792f,// 418 PAY 391 

    0xedc972df,// 419 PAY 392 

    0xcbe27842,// 420 PAY 393 

    0x2193a206,// 421 PAY 394 

    0xb1a270f7,// 422 PAY 395 

    0xc5413a7d,// 423 PAY 396 

    0x0784fd6c,// 424 PAY 397 

    0x39d336fb,// 425 PAY 398 

    0xc74a0f41,// 426 PAY 399 

    0x8b6594fe,// 427 PAY 400 

    0x66dcd55b,// 428 PAY 401 

    0xb989f1fc,// 429 PAY 402 

    0xe988e86c,// 430 PAY 403 

    0xe2ae6108,// 431 PAY 404 

    0xba85c8b1,// 432 PAY 405 

    0x3518d7db,// 433 PAY 406 

    0xe979a42e,// 434 PAY 407 

    0xc3ff24b5,// 435 PAY 408 

    0x35fdd523,// 436 PAY 409 

    0x6eab508c,// 437 PAY 410 

    0x1e9f3e99,// 438 PAY 411 

    0x3f8eab1e,// 439 PAY 412 

    0x32c3e8f3,// 440 PAY 413 

    0x7b5cd77e,// 441 PAY 414 

    0xd1878c7f,// 442 PAY 415 

    0x582d03e0,// 443 PAY 416 

    0x8389f62f,// 444 PAY 417 

    0xdbc07442,// 445 PAY 418 

    0x82079a64,// 446 PAY 419 

    0x9954c8e3,// 447 PAY 420 

    0x84a758c4,// 448 PAY 421 

    0x23564c9b,// 449 PAY 422 

    0x4715233a,// 450 PAY 423 

    0xbd30c208,// 451 PAY 424 

    0x0bd5a271,// 452 PAY 425 

    0xa2d6c257,// 453 PAY 426 

    0x9e07f740,// 454 PAY 427 

    0xcfaacf09,// 455 PAY 428 

    0x13b537dc,// 456 PAY 429 

    0x6cb86579,// 457 PAY 430 

    0x912af7dc,// 458 PAY 431 

    0xee671e50,// 459 PAY 432 

    0x516a8009,// 460 PAY 433 

    0x06c6cc23,// 461 PAY 434 

    0x819d4e59,// 462 PAY 435 

    0xf56ee244,// 463 PAY 436 

    0xad85a3d0,// 464 PAY 437 

    0xf89d49a2,// 465 PAY 438 

    0xc7b79690,// 466 PAY 439 

    0xf4d0c7e9,// 467 PAY 440 

    0xa513a7cb,// 468 PAY 441 

    0x0fef36e7,// 469 PAY 442 

    0xbbe7f192,// 470 PAY 443 

    0x5dd0142b,// 471 PAY 444 

    0xea7d8736,// 472 PAY 445 

    0x164c449f,// 473 PAY 446 

    0xef64360e,// 474 PAY 447 

    0x146ea541,// 475 PAY 448 

    0x3d5f8add,// 476 PAY 449 

    0xf925f206,// 477 PAY 450 

    0x74b9d0b0,// 478 PAY 451 

    0x36f26f72,// 479 PAY 452 

    0xceaebff5,// 480 PAY 453 

    0xf3dc85e3,// 481 PAY 454 

    0xeb941a7d,// 482 PAY 455 

    0x78d93de5,// 483 PAY 456 

    0xe4e6bcab,// 484 PAY 457 

    0x1160e408,// 485 PAY 458 

    0xb624948f,// 486 PAY 459 

    0xde6f2fe4,// 487 PAY 460 

    0xf09bccac,// 488 PAY 461 

    0x859d3277,// 489 PAY 462 

    0x11251992,// 490 PAY 463 

    0xb7278bf4,// 491 PAY 464 

    0x5e795bd0,// 492 PAY 465 

    0x8100ef6e,// 493 PAY 466 

    0xa3ceaccb,// 494 PAY 467 

    0xe0b8451a,// 495 PAY 468 

    0x88acedde,// 496 PAY 469 

    0xfe37c612,// 497 PAY 470 

    0x928b53a9,// 498 PAY 471 

    0x339f22ec,// 499 PAY 472 

    0x0ee37281,// 500 PAY 473 

    0xa1dd43e2,// 501 PAY 474 

    0xf2e43e7b,// 502 PAY 475 

    0xda2e75cc,// 503 PAY 476 

    0x6ae9371e,// 504 PAY 477 

    0x1dfa0f88,// 505 PAY 478 

    0xc747b41b,// 506 PAY 479 

    0x50cb46cb,// 507 PAY 480 

    0x93c1d803,// 508 PAY 481 

    0x4eaeab18,// 509 PAY 482 

    0x6cb0e54a,// 510 PAY 483 

    0xf2449d7b,// 511 PAY 484 

    0x32a37488,// 512 PAY 485 

    0xe1be2eed,// 513 PAY 486 

    0x55be92bf,// 514 PAY 487 

    0x6d26b208,// 515 PAY 488 

    0x2c73ad8d,// 516 PAY 489 

    0x914cc624,// 517 PAY 490 

    0x9964f42d,// 518 PAY 491 

    0x7cd441e5,// 519 PAY 492 

    0x78a82683,// 520 PAY 493 

    0xb170765e,// 521 PAY 494 

    0xa4cc694c,// 522 PAY 495 

    0x40322134,// 523 PAY 496 

    0xbc52fbce,// 524 PAY 497 

    0x2097bbcd,// 525 PAY 498 

    0x05829cd1,// 526 PAY 499 

    0xef8d3d69,// 527 PAY 500 

    0x38d6175b,// 528 PAY 501 

    0x9ef86122,// 529 PAY 502 

    0x4449e400,// 530 PAY 503 

/// STA is 1 words. 

/// STA num_pkts       : 244 

/// STA pkt_idx        : 68 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x7a 

    0x01107af4 // 531 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt60_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x0d 

/// ECH pdu_tag        : 0x00 

    0x000d0000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x80402869,// 4 SCX   2 

    0x00006300,// 5 SCX   3 

    0xb5a8e6b3,// 6 SCX   4 

    0xb15743af,// 7 SCX   5 

    0x4a858ebc,// 8 SCX   6 

    0x51def40a,// 9 SCX   7 

    0x5c4b1def,// 10 SCX   8 

    0xa6d5108e,// 11 SCX   9 

    0xf4b68ac4,// 12 SCX  10 

    0x2ea60d10,// 13 SCX  11 

    0x6c1ba9d5,// 14 SCX  12 

    0xd265a4a3,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1077 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1039 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1039 

/// BFD lencrypto      : 88 

/// BFD ofstcrypto     : 484 

/// BFD (ofst+len)cry  : 572 

/// BFD ofstiv         : 336 

/// BFD ofsticv        : 1044 

    0x0000040f,// 16 BFD   1 

    0x01e40058,// 17 BFD   2 

    0x04140150,// 18 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00a982,// 19 MFM   1 

    0x6d366a2c,// 20 MFM   2 

    0xcec35ed2,// 21 MFM   3 

    0x3acfec49,// 22 MFM   4 

    0xe7934ab1,// 23 MFM   5 

    0x46bd4e73,// 24 MFM   6 

    0xbc9399c7,// 25 MFM   7 

    0xd53bbb83,// 26 MFM   8 

    0x072076fe,// 27 MFM   9 

    0x88af300f,// 28 MFM  10 

    0x5d405444,// 29 MFM  11 

    0x13b83e5e,// 30 MFM  12 

    0xd8c0c41a,// 31 MFM  13 

    0x368b421f,// 32 MFM  14 

    0x32fb5f86,// 33 MFM  15 

    0xddb7c116,// 34 MFM  16 

/// BDA is 271 words. 

/// BDA size     is 1077 (0x435) 

/// BDA id       is 0x6d6b 

    0x04356d6b,// 35 BDA   1 

/// PAY Generic Data size   : 1077 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x0563b74f,// 36 PAY   1 

    0xa847150c,// 37 PAY   2 

    0xf0cc4df0,// 38 PAY   3 

    0x62d9a1ae,// 39 PAY   4 

    0xd6c9577e,// 40 PAY   5 

    0x220c924f,// 41 PAY   6 

    0x6e4d1e2b,// 42 PAY   7 

    0x5234528f,// 43 PAY   8 

    0x5d4d4525,// 44 PAY   9 

    0x952377ae,// 45 PAY  10 

    0x0b877731,// 46 PAY  11 

    0xf165d633,// 47 PAY  12 

    0x7afceb4f,// 48 PAY  13 

    0x2e881570,// 49 PAY  14 

    0x861d2630,// 50 PAY  15 

    0xfcac507f,// 51 PAY  16 

    0x3bf6577c,// 52 PAY  17 

    0x1bfa71cf,// 53 PAY  18 

    0xd2b6862e,// 54 PAY  19 

    0x5e11c2ab,// 55 PAY  20 

    0xe5ed1b88,// 56 PAY  21 

    0x494bd55c,// 57 PAY  22 

    0x9cd9b181,// 58 PAY  23 

    0x24f97611,// 59 PAY  24 

    0x1cdcaed7,// 60 PAY  25 

    0xda405a16,// 61 PAY  26 

    0x90abdecc,// 62 PAY  27 

    0xa368c666,// 63 PAY  28 

    0x92caddb4,// 64 PAY  29 

    0xc588fef7,// 65 PAY  30 

    0xaef0508b,// 66 PAY  31 

    0xd0c1c6b0,// 67 PAY  32 

    0xdaeb7337,// 68 PAY  33 

    0xf3ae41ff,// 69 PAY  34 

    0x39c8c638,// 70 PAY  35 

    0x52fbfb74,// 71 PAY  36 

    0x5a5c8e1b,// 72 PAY  37 

    0x5f42bbf0,// 73 PAY  38 

    0x1b1560b6,// 74 PAY  39 

    0xa450f3d1,// 75 PAY  40 

    0xe1731cda,// 76 PAY  41 

    0xc02f6c35,// 77 PAY  42 

    0xbd4e6c33,// 78 PAY  43 

    0x23868ca1,// 79 PAY  44 

    0xef2622bc,// 80 PAY  45 

    0x05f73fe4,// 81 PAY  46 

    0x53dfbd6e,// 82 PAY  47 

    0x4dae091b,// 83 PAY  48 

    0x133bbf22,// 84 PAY  49 

    0x7928748c,// 85 PAY  50 

    0x64d09b75,// 86 PAY  51 

    0xf0372281,// 87 PAY  52 

    0x5c00a13c,// 88 PAY  53 

    0xafd76a3b,// 89 PAY  54 

    0x4cb152b1,// 90 PAY  55 

    0x1aee81bc,// 91 PAY  56 

    0xae464700,// 92 PAY  57 

    0xce169f7f,// 93 PAY  58 

    0xca15fa4e,// 94 PAY  59 

    0x08094514,// 95 PAY  60 

    0xbefdfcb9,// 96 PAY  61 

    0xd3a0a132,// 97 PAY  62 

    0x0f5ff80d,// 98 PAY  63 

    0x7eba0a9f,// 99 PAY  64 

    0x4debb848,// 100 PAY  65 

    0x38c180dd,// 101 PAY  66 

    0xcbe5f48a,// 102 PAY  67 

    0x788b70c3,// 103 PAY  68 

    0x518b2b4b,// 104 PAY  69 

    0xb345232f,// 105 PAY  70 

    0x74fb1a17,// 106 PAY  71 

    0xd7078667,// 107 PAY  72 

    0x8cb4a22b,// 108 PAY  73 

    0xac5b0937,// 109 PAY  74 

    0xdb8e9d08,// 110 PAY  75 

    0x854545fa,// 111 PAY  76 

    0x0e3c100f,// 112 PAY  77 

    0x4c0a2689,// 113 PAY  78 

    0xf9e750e9,// 114 PAY  79 

    0x123edbad,// 115 PAY  80 

    0x68f6888b,// 116 PAY  81 

    0xb3eb7256,// 117 PAY  82 

    0xd5f9302f,// 118 PAY  83 

    0x100f8732,// 119 PAY  84 

    0x70caa38c,// 120 PAY  85 

    0x9a908355,// 121 PAY  86 

    0x9bbb1817,// 122 PAY  87 

    0x3e1c3377,// 123 PAY  88 

    0x8e49d671,// 124 PAY  89 

    0xe35a1fec,// 125 PAY  90 

    0x233f4c8e,// 126 PAY  91 

    0x63bee6fd,// 127 PAY  92 

    0x99ead7aa,// 128 PAY  93 

    0xb987615b,// 129 PAY  94 

    0x83e06833,// 130 PAY  95 

    0x25b4aefa,// 131 PAY  96 

    0x852d22ae,// 132 PAY  97 

    0x8a6eaf80,// 133 PAY  98 

    0xac7e6528,// 134 PAY  99 

    0x5db51095,// 135 PAY 100 

    0x82794e23,// 136 PAY 101 

    0x7344f0a7,// 137 PAY 102 

    0x0c88db72,// 138 PAY 103 

    0x73c2b790,// 139 PAY 104 

    0x64ffd0c8,// 140 PAY 105 

    0x620d591d,// 141 PAY 106 

    0x3e8c7cdf,// 142 PAY 107 

    0x12369bac,// 143 PAY 108 

    0xb4762d4e,// 144 PAY 109 

    0x47010767,// 145 PAY 110 

    0xfe6d5f1c,// 146 PAY 111 

    0xc21c05c7,// 147 PAY 112 

    0x3501223b,// 148 PAY 113 

    0xa027f453,// 149 PAY 114 

    0x8a79e95b,// 150 PAY 115 

    0xa09bbb46,// 151 PAY 116 

    0x732d382e,// 152 PAY 117 

    0x7b952202,// 153 PAY 118 

    0x976230c3,// 154 PAY 119 

    0xdb189bb6,// 155 PAY 120 

    0xdd211d83,// 156 PAY 121 

    0xce189a7f,// 157 PAY 122 

    0xcd5cd033,// 158 PAY 123 

    0xe12843c9,// 159 PAY 124 

    0xdf722491,// 160 PAY 125 

    0xac746954,// 161 PAY 126 

    0xbc931836,// 162 PAY 127 

    0x6f622e8f,// 163 PAY 128 

    0xeaf7158c,// 164 PAY 129 

    0x8983c1bc,// 165 PAY 130 

    0x0591b46f,// 166 PAY 131 

    0x944eb998,// 167 PAY 132 

    0xd0b33c44,// 168 PAY 133 

    0xbc3b1441,// 169 PAY 134 

    0x54ba2704,// 170 PAY 135 

    0xbe24c937,// 171 PAY 136 

    0xef45bcb6,// 172 PAY 137 

    0x02cca86a,// 173 PAY 138 

    0x3c79d0d6,// 174 PAY 139 

    0xfacdcc2a,// 175 PAY 140 

    0x615c5c55,// 176 PAY 141 

    0x09b7d37d,// 177 PAY 142 

    0x770ba76c,// 178 PAY 143 

    0xdf655ad1,// 179 PAY 144 

    0x515d9ee8,// 180 PAY 145 

    0x4f011218,// 181 PAY 146 

    0x352da860,// 182 PAY 147 

    0xc5ff4d67,// 183 PAY 148 

    0xa7356eea,// 184 PAY 149 

    0xc0a83739,// 185 PAY 150 

    0x7fd30891,// 186 PAY 151 

    0xd040d325,// 187 PAY 152 

    0x0171ea95,// 188 PAY 153 

    0xf721cfcd,// 189 PAY 154 

    0x1a7e78bc,// 190 PAY 155 

    0x0955d93c,// 191 PAY 156 

    0xd2c9dfe6,// 192 PAY 157 

    0x1384c9dc,// 193 PAY 158 

    0x4b0428e2,// 194 PAY 159 

    0xc529a9dd,// 195 PAY 160 

    0x7c1aadc7,// 196 PAY 161 

    0xda01ac75,// 197 PAY 162 

    0xec621064,// 198 PAY 163 

    0x8a7a4d9b,// 199 PAY 164 

    0xb02a79d2,// 200 PAY 165 

    0xc0d65a8f,// 201 PAY 166 

    0x1c097008,// 202 PAY 167 

    0x5b0255a8,// 203 PAY 168 

    0x0520980b,// 204 PAY 169 

    0xb231b77c,// 205 PAY 170 

    0x753385f1,// 206 PAY 171 

    0x2666629a,// 207 PAY 172 

    0x3619109e,// 208 PAY 173 

    0x600a5bbc,// 209 PAY 174 

    0x352804d8,// 210 PAY 175 

    0xa3fe9455,// 211 PAY 176 

    0xbd704350,// 212 PAY 177 

    0x762bef74,// 213 PAY 178 

    0x17c57615,// 214 PAY 179 

    0xc41310cf,// 215 PAY 180 

    0x823351d8,// 216 PAY 181 

    0x6d99fdcc,// 217 PAY 182 

    0x41936330,// 218 PAY 183 

    0x3486dd17,// 219 PAY 184 

    0xf28c563a,// 220 PAY 185 

    0x8f0858bb,// 221 PAY 186 

    0x03a7ef78,// 222 PAY 187 

    0x795bc02c,// 223 PAY 188 

    0x9ac87d81,// 224 PAY 189 

    0x0f3b729a,// 225 PAY 190 

    0xbc4067c1,// 226 PAY 191 

    0x47d5c5fd,// 227 PAY 192 

    0x6a805656,// 228 PAY 193 

    0xa7da2cad,// 229 PAY 194 

    0x10557b6d,// 230 PAY 195 

    0x7d1f6837,// 231 PAY 196 

    0x80324980,// 232 PAY 197 

    0x17faa5b8,// 233 PAY 198 

    0x6aa12720,// 234 PAY 199 

    0x458b0e78,// 235 PAY 200 

    0xbda0409f,// 236 PAY 201 

    0x5af3cd12,// 237 PAY 202 

    0x25397088,// 238 PAY 203 

    0x5cca54e0,// 239 PAY 204 

    0x1892c8f4,// 240 PAY 205 

    0xbfd0b2fe,// 241 PAY 206 

    0xd29a4b38,// 242 PAY 207 

    0x951c043c,// 243 PAY 208 

    0xf062be56,// 244 PAY 209 

    0xe6a4997d,// 245 PAY 210 

    0xa73df7fc,// 246 PAY 211 

    0x1bb7d39e,// 247 PAY 212 

    0x6fabe8aa,// 248 PAY 213 

    0x4a1bbecb,// 249 PAY 214 

    0x6c9c1c28,// 250 PAY 215 

    0x5e2bb4da,// 251 PAY 216 

    0xeaa0b09b,// 252 PAY 217 

    0x798fc14a,// 253 PAY 218 

    0x6d14ecf7,// 254 PAY 219 

    0xe3d5cfc8,// 255 PAY 220 

    0x868022d5,// 256 PAY 221 

    0x4ef5832f,// 257 PAY 222 

    0xe632d969,// 258 PAY 223 

    0x89da5e94,// 259 PAY 224 

    0xae4a68fc,// 260 PAY 225 

    0xc894e55f,// 261 PAY 226 

    0xc605c8a0,// 262 PAY 227 

    0x20e88a44,// 263 PAY 228 

    0x8140cc41,// 264 PAY 229 

    0xa20ff1ce,// 265 PAY 230 

    0x5f35a165,// 266 PAY 231 

    0x24cb9fde,// 267 PAY 232 

    0x2605e6b6,// 268 PAY 233 

    0x6622a2a2,// 269 PAY 234 

    0xa1884d71,// 270 PAY 235 

    0x78fd88c3,// 271 PAY 236 

    0x6aa1fd1c,// 272 PAY 237 

    0xb6f99946,// 273 PAY 238 

    0x07a07f92,// 274 PAY 239 

    0x00b3d27d,// 275 PAY 240 

    0x8cc41be3,// 276 PAY 241 

    0x0f34e924,// 277 PAY 242 

    0xf5388c93,// 278 PAY 243 

    0xf8ec9370,// 279 PAY 244 

    0x8576012a,// 280 PAY 245 

    0x568216d6,// 281 PAY 246 

    0x3f3c6432,// 282 PAY 247 

    0x706171b5,// 283 PAY 248 

    0x2a9ffa3e,// 284 PAY 249 

    0xd8592cd2,// 285 PAY 250 

    0x7168dbfa,// 286 PAY 251 

    0x5b6a9470,// 287 PAY 252 

    0x2666dbcb,// 288 PAY 253 

    0x6b851531,// 289 PAY 254 

    0xd38beeba,// 290 PAY 255 

    0x2f5f1582,// 291 PAY 256 

    0xe4cf79ff,// 292 PAY 257 

    0x966fb515,// 293 PAY 258 

    0xd863dec9,// 294 PAY 259 

    0xfe7ffd8f,// 295 PAY 260 

    0xf91c89a3,// 296 PAY 261 

    0x3f555f9f,// 297 PAY 262 

    0xdfa5e221,// 298 PAY 263 

    0x6ddfcbc5,// 299 PAY 264 

    0x51a7148c,// 300 PAY 265 

    0xff64fcd5,// 301 PAY 266 

    0x68f99d48,// 302 PAY 267 

    0xceffb823,// 303 PAY 268 

    0x4081abb6,// 304 PAY 269 

    0xac000000,// 305 PAY 270 

/// STA is 1 words. 

/// STA num_pkts       : 18 

/// STA pkt_idx        : 20 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xda 

    0x0051da12 // 306 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt61_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x804628b0,// 4 SCX   2 

    0x00005382,// 5 SCX   3 

    0xfed544cc,// 6 SCX   4 

    0x5f565f2f,// 7 SCX   5 

    0x26e66c0d,// 8 SCX   6 

    0x6ff5201a,// 9 SCX   7 

    0x582f24e3,// 10 SCX   8 

    0x07de19df,// 11 SCX   9 

    0xe58ddec5,// 12 SCX  10 

    0x8101776b,// 13 SCX  11 

    0xd3dd7d71,// 14 SCX  12 

    0xa9f5fc12,// 15 SCX  13 

    0xbf1fb002,// 16 SCX  14 

    0x4782174a,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 465 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 413 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 413 

/// BFD lencrypto      : 40 

/// BFD ofstcrypto     : 264 

/// BFD (ofst+len)cry  : 304 

/// BFD ofstiv         : 196 

/// BFD ofsticv        : 420 

    0x0000019d,// 18 BFD   1 

    0x01080028,// 19 BFD   2 

    0x01a400c4,// 20 BFD   3 

/// MFM is 10 words. 

/// MFM vldnibs        : 45 

    0x4500e20e,// 21 MFM   1 

    0x02614815,// 22 MFM   2 

    0xa238cf17,// 23 MFM   3 

    0x6dac6f2f,// 24 MFM   4 

    0x16dfbdca,// 25 MFM   5 

    0x27f01e54,// 26 MFM   6 

    0xc3f64f1e,// 27 MFM   7 

    0x99c7bddc,// 28 MFM   8 

    0xa2e7decd,// 29 MFM   9 

    0x90000000,// 30 MFM  10 

/// BDA is 118 words. 

/// BDA size     is 465 (0x1d1) 

/// BDA id       is 0xb58b 

    0x01d1b58b,// 31 BDA   1 

/// PAY Generic Data size   : 465 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x934523e8,// 32 PAY   1 

    0x3215014e,// 33 PAY   2 

    0x58972a2c,// 34 PAY   3 

    0xf6d8edc5,// 35 PAY   4 

    0x2e962b82,// 36 PAY   5 

    0x485c99d8,// 37 PAY   6 

    0xd8ae936d,// 38 PAY   7 

    0x18ae98ad,// 39 PAY   8 

    0x13a2fd26,// 40 PAY   9 

    0xa12384cc,// 41 PAY  10 

    0x4da39508,// 42 PAY  11 

    0xebc2fb5f,// 43 PAY  12 

    0x3eddf7c1,// 44 PAY  13 

    0x180e4002,// 45 PAY  14 

    0xba26b276,// 46 PAY  15 

    0xb007af1c,// 47 PAY  16 

    0xd8949def,// 48 PAY  17 

    0x65ab970b,// 49 PAY  18 

    0x08f921a4,// 50 PAY  19 

    0x7e8b6c13,// 51 PAY  20 

    0x590a999f,// 52 PAY  21 

    0xa93a409e,// 53 PAY  22 

    0x70f111f0,// 54 PAY  23 

    0xdd46c662,// 55 PAY  24 

    0x081155ae,// 56 PAY  25 

    0x3bb1cf67,// 57 PAY  26 

    0x6e1260e4,// 58 PAY  27 

    0x0d5c75a9,// 59 PAY  28 

    0x06ab90e7,// 60 PAY  29 

    0x93711c5a,// 61 PAY  30 

    0x38bda3f0,// 62 PAY  31 

    0xfb7b0a3b,// 63 PAY  32 

    0x72b2e5cb,// 64 PAY  33 

    0x0e4a0d7a,// 65 PAY  34 

    0x5dd443d0,// 66 PAY  35 

    0x81782db8,// 67 PAY  36 

    0xd64ec731,// 68 PAY  37 

    0xdca0f562,// 69 PAY  38 

    0xc1bb70df,// 70 PAY  39 

    0x8093f14e,// 71 PAY  40 

    0x5421a821,// 72 PAY  41 

    0x9a3ad9fb,// 73 PAY  42 

    0xe4c38e2d,// 74 PAY  43 

    0xaa1951b5,// 75 PAY  44 

    0x15993a02,// 76 PAY  45 

    0x65ffc0c0,// 77 PAY  46 

    0xf71fccc2,// 78 PAY  47 

    0x5de33066,// 79 PAY  48 

    0xb7de89af,// 80 PAY  49 

    0x4e514fba,// 81 PAY  50 

    0x5be1a258,// 82 PAY  51 

    0x663add1f,// 83 PAY  52 

    0x4b113471,// 84 PAY  53 

    0x5530dc2c,// 85 PAY  54 

    0x82547ac0,// 86 PAY  55 

    0x6024d3ca,// 87 PAY  56 

    0x04ae6de5,// 88 PAY  57 

    0xc9750621,// 89 PAY  58 

    0x51e9ffad,// 90 PAY  59 

    0xc9af76f4,// 91 PAY  60 

    0xb27adb11,// 92 PAY  61 

    0x6972f129,// 93 PAY  62 

    0x5964ab03,// 94 PAY  63 

    0xc2a270b8,// 95 PAY  64 

    0x92723007,// 96 PAY  65 

    0x113c7a5b,// 97 PAY  66 

    0xe6b54928,// 98 PAY  67 

    0x5dea1ff8,// 99 PAY  68 

    0xbd8b6bd4,// 100 PAY  69 

    0x0e3943c0,// 101 PAY  70 

    0x96e27779,// 102 PAY  71 

    0x46a1a7ad,// 103 PAY  72 

    0x9f183501,// 104 PAY  73 

    0x620f2575,// 105 PAY  74 

    0xe4d48de3,// 106 PAY  75 

    0x7c92784d,// 107 PAY  76 

    0xe66ab173,// 108 PAY  77 

    0x8ccad062,// 109 PAY  78 

    0x2896f173,// 110 PAY  79 

    0xaff28f34,// 111 PAY  80 

    0xf1909c1b,// 112 PAY  81 

    0x58628b58,// 113 PAY  82 

    0x550e6299,// 114 PAY  83 

    0x4bdf023e,// 115 PAY  84 

    0x7d994681,// 116 PAY  85 

    0x9a530e5a,// 117 PAY  86 

    0xd5ff1940,// 118 PAY  87 

    0x9564b354,// 119 PAY  88 

    0x0957c73a,// 120 PAY  89 

    0x6d8914bc,// 121 PAY  90 

    0xfdd1be04,// 122 PAY  91 

    0xd062fc10,// 123 PAY  92 

    0x75eab4f0,// 124 PAY  93 

    0xf79ef619,// 125 PAY  94 

    0x9306e23a,// 126 PAY  95 

    0xe64582d9,// 127 PAY  96 

    0x7d8b3701,// 128 PAY  97 

    0x0bdba11d,// 129 PAY  98 

    0xb938fd22,// 130 PAY  99 

    0xe9700e15,// 131 PAY 100 

    0xe0c42885,// 132 PAY 101 

    0x0c347050,// 133 PAY 102 

    0x5611c18d,// 134 PAY 103 

    0xa583d082,// 135 PAY 104 

    0xdc584f05,// 136 PAY 105 

    0xb410b4f0,// 137 PAY 106 

    0xe062e1b0,// 138 PAY 107 

    0x61c7ce68,// 139 PAY 108 

    0x824c33f0,// 140 PAY 109 

    0x7feded7d,// 141 PAY 110 

    0xe9d1c315,// 142 PAY 111 

    0x1584578f,// 143 PAY 112 

    0xa83da200,// 144 PAY 113 

    0x19639b39,// 145 PAY 114 

    0x9dc32f6f,// 146 PAY 115 

    0xc91f09e3,// 147 PAY 116 

    0xfa000000,// 148 PAY 117 

/// STA is 1 words. 

/// STA num_pkts       : 178 

/// STA pkt_idx        : 214 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x6e 

    0x03586eb2 // 149 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt62_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x80412870,// 4 SCX   2 

    0x00001400,// 5 SCX   3 

    0x0c8986d9,// 6 SCX   4 

    0x91c238e3,// 7 SCX   5 

    0x406364e4,// 8 SCX   6 

    0x50215c2d,// 9 SCX   7 

    0xe52ffe91,// 10 SCX   8 

    0xe49e4c23,// 11 SCX   9 

    0x80ce95d7,// 12 SCX  10 

    0x678eb8fb,// 13 SCX  11 

    0x091ccb36,// 14 SCX  12 

    0x7be05547,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1185 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 436 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 436 

/// BFD lencrypto      : 112 

/// BFD ofstcrypto     : 20 

/// BFD (ofst+len)cry  : 132 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 936 

    0x000001b4,// 16 BFD   1 

    0x00140070,// 17 BFD   2 

    0x03a80004,// 18 BFD   3 

/// MFM is 13 words. 

/// MFM vldnibs        : 62 

    0x62008b0f,// 19 MFM   1 

    0x137f9af2,// 20 MFM   2 

    0x9cc6d840,// 21 MFM   3 

    0xac3b55f6,// 22 MFM   4 

    0x66a752f1,// 23 MFM   5 

    0x11b6ef9d,// 24 MFM   6 

    0x82fc984c,// 25 MFM   7 

    0x1e9b6b3e,// 26 MFM   8 

    0xfe5e77f6,// 27 MFM   9 

    0xa716f8a9,// 28 MFM  10 

    0xd922cd64,// 29 MFM  11 

    0x458b9cc0,// 30 MFM  12 

    0x68ef4b00,// 31 MFM  13 

/// BDA is 298 words. 

/// BDA size     is 1185 (0x4a1) 

/// BDA id       is 0x8eca 

    0x04a18eca,// 32 BDA   1 

/// PAY Generic Data size   : 1185 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x0393938d,// 33 PAY   1 

    0xa122f2db,// 34 PAY   2 

    0x49858b4c,// 35 PAY   3 

    0xb78151b0,// 36 PAY   4 

    0x6a2e4037,// 37 PAY   5 

    0xfa322824,// 38 PAY   6 

    0x26490a93,// 39 PAY   7 

    0x2399d4f8,// 40 PAY   8 

    0x1aeb578d,// 41 PAY   9 

    0x45ef3b67,// 42 PAY  10 

    0xa1bb6d42,// 43 PAY  11 

    0x22869e71,// 44 PAY  12 

    0x4ebf021e,// 45 PAY  13 

    0x4bae1582,// 46 PAY  14 

    0xa77b2754,// 47 PAY  15 

    0x2174c828,// 48 PAY  16 

    0xac5aafe3,// 49 PAY  17 

    0x2eb366ab,// 50 PAY  18 

    0x636779de,// 51 PAY  19 

    0x12289aaf,// 52 PAY  20 

    0xd5e2b0be,// 53 PAY  21 

    0xa42567a9,// 54 PAY  22 

    0x2b33e48c,// 55 PAY  23 

    0xe5c98a49,// 56 PAY  24 

    0x1b410e40,// 57 PAY  25 

    0xc0c3ed7c,// 58 PAY  26 

    0x588b0897,// 59 PAY  27 

    0xd5c86c55,// 60 PAY  28 

    0xf055f4c6,// 61 PAY  29 

    0x4d594975,// 62 PAY  30 

    0xf57a65dd,// 63 PAY  31 

    0x6f8da9c7,// 64 PAY  32 

    0x3d51ec1e,// 65 PAY  33 

    0x2dacadd4,// 66 PAY  34 

    0x6373352d,// 67 PAY  35 

    0x2269ccf3,// 68 PAY  36 

    0x8ca73f64,// 69 PAY  37 

    0x3e4b9986,// 70 PAY  38 

    0xa2debe5b,// 71 PAY  39 

    0x1fac72ea,// 72 PAY  40 

    0xf21a5427,// 73 PAY  41 

    0x3de13454,// 74 PAY  42 

    0x2c000232,// 75 PAY  43 

    0x91041352,// 76 PAY  44 

    0x70b1457b,// 77 PAY  45 

    0xa5e6d12e,// 78 PAY  46 

    0x56aba714,// 79 PAY  47 

    0x9493528a,// 80 PAY  48 

    0x88d87c00,// 81 PAY  49 

    0x02677010,// 82 PAY  50 

    0x25b31ba1,// 83 PAY  51 

    0x06c0c5be,// 84 PAY  52 

    0x54bffb0f,// 85 PAY  53 

    0x62daeec5,// 86 PAY  54 

    0x1d9295f2,// 87 PAY  55 

    0x20c7f86a,// 88 PAY  56 

    0x678bd828,// 89 PAY  57 

    0x26709867,// 90 PAY  58 

    0x7e7d8ebd,// 91 PAY  59 

    0x5ba17a7e,// 92 PAY  60 

    0x0edf6aef,// 93 PAY  61 

    0x095704af,// 94 PAY  62 

    0x3c5baa5d,// 95 PAY  63 

    0xa86dff65,// 96 PAY  64 

    0xec70f1cf,// 97 PAY  65 

    0xb22228cf,// 98 PAY  66 

    0x6b16748f,// 99 PAY  67 

    0x26d538e6,// 100 PAY  68 

    0x0ab5eb05,// 101 PAY  69 

    0x4c779145,// 102 PAY  70 

    0x6cfb1128,// 103 PAY  71 

    0x53616ada,// 104 PAY  72 

    0x3b69f7fa,// 105 PAY  73 

    0x18722e71,// 106 PAY  74 

    0xa5bd16ec,// 107 PAY  75 

    0xc467261e,// 108 PAY  76 

    0x8627c949,// 109 PAY  77 

    0xd688be47,// 110 PAY  78 

    0x6ed12a5c,// 111 PAY  79 

    0xf10fdd94,// 112 PAY  80 

    0x097a4c16,// 113 PAY  81 

    0xbbd4d07a,// 114 PAY  82 

    0xf33542fe,// 115 PAY  83 

    0xf4324f61,// 116 PAY  84 

    0x333efb2e,// 117 PAY  85 

    0x5bf91726,// 118 PAY  86 

    0x29acacb1,// 119 PAY  87 

    0x50ac9fdb,// 120 PAY  88 

    0xbfb86510,// 121 PAY  89 

    0x89460451,// 122 PAY  90 

    0x281d5c5c,// 123 PAY  91 

    0x7c9f070b,// 124 PAY  92 

    0xbd929316,// 125 PAY  93 

    0xe1cf6232,// 126 PAY  94 

    0xd224ff01,// 127 PAY  95 

    0x27973b9f,// 128 PAY  96 

    0x9b7a09f7,// 129 PAY  97 

    0xc5ff4be6,// 130 PAY  98 

    0x5838bc54,// 131 PAY  99 

    0x610e3a89,// 132 PAY 100 

    0x94fcd911,// 133 PAY 101 

    0x26314d66,// 134 PAY 102 

    0xf81f90fc,// 135 PAY 103 

    0xc96deab1,// 136 PAY 104 

    0x4837eddc,// 137 PAY 105 

    0x968ad125,// 138 PAY 106 

    0x489ff91a,// 139 PAY 107 

    0xe835a642,// 140 PAY 108 

    0xcb8dea08,// 141 PAY 109 

    0x7b991d53,// 142 PAY 110 

    0xe65ea6b7,// 143 PAY 111 

    0x6cf7e9dc,// 144 PAY 112 

    0xb0e8fa30,// 145 PAY 113 

    0xa5f7dc25,// 146 PAY 114 

    0x75930657,// 147 PAY 115 

    0x85ec7315,// 148 PAY 116 

    0x9e237082,// 149 PAY 117 

    0x725d69b9,// 150 PAY 118 

    0xcc510b93,// 151 PAY 119 

    0x4823a89e,// 152 PAY 120 

    0xe504af1e,// 153 PAY 121 

    0xdc8255db,// 154 PAY 122 

    0x7e20f22e,// 155 PAY 123 

    0x8f9f0916,// 156 PAY 124 

    0xde8b0926,// 157 PAY 125 

    0x82363779,// 158 PAY 126 

    0xed5d04ac,// 159 PAY 127 

    0xd33d4298,// 160 PAY 128 

    0x28074314,// 161 PAY 129 

    0xf34e231d,// 162 PAY 130 

    0xa3c9124a,// 163 PAY 131 

    0x841e088b,// 164 PAY 132 

    0xcd5f68ed,// 165 PAY 133 

    0xd0412a76,// 166 PAY 134 

    0x3e96a588,// 167 PAY 135 

    0x2a7889f9,// 168 PAY 136 

    0xdbbb6467,// 169 PAY 137 

    0x8e972452,// 170 PAY 138 

    0xef9bcee0,// 171 PAY 139 

    0xf83f45a9,// 172 PAY 140 

    0x85c146fa,// 173 PAY 141 

    0xa75a16c5,// 174 PAY 142 

    0x95c2ef82,// 175 PAY 143 

    0xf087f5f5,// 176 PAY 144 

    0xe157408b,// 177 PAY 145 

    0xda2bc7c3,// 178 PAY 146 

    0x0120140f,// 179 PAY 147 

    0x6dd83ccb,// 180 PAY 148 

    0xe9ab0b6e,// 181 PAY 149 

    0x66390bb3,// 182 PAY 150 

    0x92d028a3,// 183 PAY 151 

    0xd9678d02,// 184 PAY 152 

    0x0a4e21bd,// 185 PAY 153 

    0x980e50b9,// 186 PAY 154 

    0xc8aac6b8,// 187 PAY 155 

    0x6d530bab,// 188 PAY 156 

    0x81c64421,// 189 PAY 157 

    0x297432a5,// 190 PAY 158 

    0xca8ef9ad,// 191 PAY 159 

    0x7df6d760,// 192 PAY 160 

    0xa31bd6ed,// 193 PAY 161 

    0x9c61eb1c,// 194 PAY 162 

    0x366484cf,// 195 PAY 163 

    0xf80914ef,// 196 PAY 164 

    0x869c06c1,// 197 PAY 165 

    0xaf514267,// 198 PAY 166 

    0x0c9a5b42,// 199 PAY 167 

    0x5759570b,// 200 PAY 168 

    0xd4eaecb1,// 201 PAY 169 

    0x1dcae8ad,// 202 PAY 170 

    0xde7d2a3c,// 203 PAY 171 

    0x6b13f064,// 204 PAY 172 

    0x3417819d,// 205 PAY 173 

    0x7b72c98e,// 206 PAY 174 

    0x59b58a33,// 207 PAY 175 

    0x403142aa,// 208 PAY 176 

    0xab97bfe1,// 209 PAY 177 

    0x369b8db2,// 210 PAY 178 

    0xa655198f,// 211 PAY 179 

    0x685c8c58,// 212 PAY 180 

    0xeb490189,// 213 PAY 181 

    0xa82ac5fe,// 214 PAY 182 

    0x74d87287,// 215 PAY 183 

    0x6546db81,// 216 PAY 184 

    0xfe036fec,// 217 PAY 185 

    0xf0a24d3b,// 218 PAY 186 

    0xb90850e4,// 219 PAY 187 

    0x4fe81d9e,// 220 PAY 188 

    0x7a5b536b,// 221 PAY 189 

    0x363a8381,// 222 PAY 190 

    0xd65839a8,// 223 PAY 191 

    0x026694d4,// 224 PAY 192 

    0xe58a1b14,// 225 PAY 193 

    0xa752181a,// 226 PAY 194 

    0x4eab428b,// 227 PAY 195 

    0x63e9c48c,// 228 PAY 196 

    0x22ee4c85,// 229 PAY 197 

    0x1375b2ea,// 230 PAY 198 

    0xbf0f73bf,// 231 PAY 199 

    0x6258308c,// 232 PAY 200 

    0xb52d2f4d,// 233 PAY 201 

    0x56ff49f4,// 234 PAY 202 

    0xdcbe7f8a,// 235 PAY 203 

    0x5bcb4091,// 236 PAY 204 

    0xe1b7b957,// 237 PAY 205 

    0xa57a7780,// 238 PAY 206 

    0x9306eb7d,// 239 PAY 207 

    0x7eb05bf0,// 240 PAY 208 

    0x2d3e9e1b,// 241 PAY 209 

    0x644cfd6c,// 242 PAY 210 

    0x3fbdd083,// 243 PAY 211 

    0x8df0449f,// 244 PAY 212 

    0xffd2b5d0,// 245 PAY 213 

    0xef822892,// 246 PAY 214 

    0x635d5dde,// 247 PAY 215 

    0xb903fba7,// 248 PAY 216 

    0xaa4c1afd,// 249 PAY 217 

    0x2336e9eb,// 250 PAY 218 

    0x2bb83bae,// 251 PAY 219 

    0xad477af4,// 252 PAY 220 

    0xcec5410c,// 253 PAY 221 

    0x561435a3,// 254 PAY 222 

    0x46e9d742,// 255 PAY 223 

    0xf3730c81,// 256 PAY 224 

    0x156901bd,// 257 PAY 225 

    0x9e0c5bbc,// 258 PAY 226 

    0x0b7c9d19,// 259 PAY 227 

    0xe878753c,// 260 PAY 228 

    0x8b9dcd94,// 261 PAY 229 

    0x6ad01ec8,// 262 PAY 230 

    0x174c248d,// 263 PAY 231 

    0x52ca88d7,// 264 PAY 232 

    0xbf79f1eb,// 265 PAY 233 

    0xaeb6ebfc,// 266 PAY 234 

    0x92f7dd8f,// 267 PAY 235 

    0xe329b4c5,// 268 PAY 236 

    0x09338b94,// 269 PAY 237 

    0x7a17eb41,// 270 PAY 238 

    0x12b3a6ef,// 271 PAY 239 

    0x5a54966c,// 272 PAY 240 

    0x46cb4275,// 273 PAY 241 

    0xabdc3761,// 274 PAY 242 

    0x5fbf01b4,// 275 PAY 243 

    0x53ce466e,// 276 PAY 244 

    0xf5c9c574,// 277 PAY 245 

    0x69bae7b3,// 278 PAY 246 

    0x039008ef,// 279 PAY 247 

    0x35ba432d,// 280 PAY 248 

    0xfd819bb0,// 281 PAY 249 

    0x14ff2da7,// 282 PAY 250 

    0xa6895b12,// 283 PAY 251 

    0x40ca2dc2,// 284 PAY 252 

    0x438c030d,// 285 PAY 253 

    0x0f308b2e,// 286 PAY 254 

    0x8490bbea,// 287 PAY 255 

    0xf0dc3363,// 288 PAY 256 

    0x47f7bccd,// 289 PAY 257 

    0x924fce11,// 290 PAY 258 

    0x34238755,// 291 PAY 259 

    0xe15928b8,// 292 PAY 260 

    0x6ef8308d,// 293 PAY 261 

    0x0bf526bd,// 294 PAY 262 

    0xc3e285a7,// 295 PAY 263 

    0xac41188a,// 296 PAY 264 

    0x62e01b2e,// 297 PAY 265 

    0x729289c2,// 298 PAY 266 

    0xe5dbc081,// 299 PAY 267 

    0x117162cd,// 300 PAY 268 

    0xbede803a,// 301 PAY 269 

    0x4070d5a2,// 302 PAY 270 

    0x52153264,// 303 PAY 271 

    0x7491777d,// 304 PAY 272 

    0x57ad4ebf,// 305 PAY 273 

    0xfefa8612,// 306 PAY 274 

    0x7a7db524,// 307 PAY 275 

    0xdc8d947f,// 308 PAY 276 

    0x684b3418,// 309 PAY 277 

    0x2c34d20c,// 310 PAY 278 

    0xfea711bb,// 311 PAY 279 

    0xe9e334a0,// 312 PAY 280 

    0x173da67d,// 313 PAY 281 

    0x402f5921,// 314 PAY 282 

    0x31437496,// 315 PAY 283 

    0xfb7c7133,// 316 PAY 284 

    0x3c57f3db,// 317 PAY 285 

    0x6ef87994,// 318 PAY 286 

    0x6e3d46b1,// 319 PAY 287 

    0x486c4d0e,// 320 PAY 288 

    0xc1567d2a,// 321 PAY 289 

    0x5e37409e,// 322 PAY 290 

    0x7bc7b458,// 323 PAY 291 

    0x27303adf,// 324 PAY 292 

    0x5f7b6bea,// 325 PAY 293 

    0x60e4b11b,// 326 PAY 294 

    0xdd61a2f8,// 327 PAY 295 

    0xd7b82cd9,// 328 PAY 296 

    0x26000000,// 329 PAY 297 

/// STA is 1 words. 

/// STA num_pkts       : 128 

/// STA pkt_idx        : 187 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xdd 

    0x02ecdd80 // 330 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt63_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x0c 

/// ECH pdu_tag        : 0x00 

    0x000c0000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x804228d8,// 4 SCX   2 

    0x00002200,// 5 SCX   3 

    0x6ec40d6f,// 6 SCX   4 

    0xd75bb23c,// 7 SCX   5 

    0xf4e7c7d8,// 8 SCX   6 

    0x7f753dd1,// 9 SCX   7 

    0xf2cd6729,// 10 SCX   8 

    0xbd030f25,// 11 SCX   9 

    0xb1063a22,// 12 SCX  10 

    0x38799bfb,// 13 SCX  11 

    0x771631ca,// 14 SCX  12 

    0xad2abec0,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1131 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 561 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 561 

/// BFD lencrypto      : 16 

/// BFD ofstcrypto     : 544 

/// BFD (ofst+len)cry  : 560 

/// BFD ofstiv         : 96 

/// BFD ofsticv        : 1032 

    0x00000231,// 16 BFD   1 

    0x02200010,// 17 BFD   2 

    0x04080060,// 18 BFD   3 

/// MFM is 7 words. 

/// MFM vldnibs        : 34 

    0x34006b40,// 19 MFM   1 

    0xd1ce0f4f,// 20 MFM   2 

    0xbfc376ea,// 21 MFM   3 

    0xc2f85acf,// 22 MFM   4 

    0x5c1bc32b,// 23 MFM   5 

    0x39499a0d,// 24 MFM   6 

    0xfd7cfbd5,// 25 MFM   7 

/// BDA is 284 words. 

/// BDA size     is 1131 (0x46b) 

/// BDA id       is 0xad27 

    0x046bad27,// 26 BDA   1 

/// PAY Generic Data size   : 1131 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x16161d62,// 27 PAY   1 

    0x8ae89c91,// 28 PAY   2 

    0x0c1930f4,// 29 PAY   3 

    0x7cd00b64,// 30 PAY   4 

    0x6e7d4269,// 31 PAY   5 

    0x608c225b,// 32 PAY   6 

    0xcb249f5f,// 33 PAY   7 

    0x56bc050c,// 34 PAY   8 

    0xef1621cb,// 35 PAY   9 

    0x9c5f6974,// 36 PAY  10 

    0xcf75103e,// 37 PAY  11 

    0x060eecbf,// 38 PAY  12 

    0x7bafecce,// 39 PAY  13 

    0x9630351d,// 40 PAY  14 

    0xc89815a2,// 41 PAY  15 

    0x23db69fd,// 42 PAY  16 

    0xb14fa3d1,// 43 PAY  17 

    0x7d03bf9a,// 44 PAY  18 

    0xd1868cd9,// 45 PAY  19 

    0xd7f6e83e,// 46 PAY  20 

    0x7f4f5308,// 47 PAY  21 

    0x0ab9c49c,// 48 PAY  22 

    0x1ec65f1d,// 49 PAY  23 

    0xf81dd021,// 50 PAY  24 

    0x488b257a,// 51 PAY  25 

    0xa401f341,// 52 PAY  26 

    0x99edf7c7,// 53 PAY  27 

    0x6eda83ca,// 54 PAY  28 

    0xac202118,// 55 PAY  29 

    0x491ec6f8,// 56 PAY  30 

    0x2e88605c,// 57 PAY  31 

    0x61e361ec,// 58 PAY  32 

    0xe80a3e80,// 59 PAY  33 

    0xf8675794,// 60 PAY  34 

    0xe5e3ae60,// 61 PAY  35 

    0x3a18deeb,// 62 PAY  36 

    0xa8fa862d,// 63 PAY  37 

    0x7b7f9472,// 64 PAY  38 

    0xec5a51af,// 65 PAY  39 

    0xe5180a1b,// 66 PAY  40 

    0x5b201f85,// 67 PAY  41 

    0xf5eeb548,// 68 PAY  42 

    0x4fe397b8,// 69 PAY  43 

    0x6ace7dbc,// 70 PAY  44 

    0xe2efd1c7,// 71 PAY  45 

    0x6b74004e,// 72 PAY  46 

    0x855a9339,// 73 PAY  47 

    0x7d4a8d18,// 74 PAY  48 

    0x4bbaf085,// 75 PAY  49 

    0x9cea3f3e,// 76 PAY  50 

    0x51150ef2,// 77 PAY  51 

    0xd373a00d,// 78 PAY  52 

    0x7bff4954,// 79 PAY  53 

    0x4ae36086,// 80 PAY  54 

    0xca030017,// 81 PAY  55 

    0x6c62167e,// 82 PAY  56 

    0xbf5f97be,// 83 PAY  57 

    0x52ea7c10,// 84 PAY  58 

    0xbd77a4bf,// 85 PAY  59 

    0xc1d8c6c4,// 86 PAY  60 

    0x807c3bdf,// 87 PAY  61 

    0x7b1a1cac,// 88 PAY  62 

    0x43fe605f,// 89 PAY  63 

    0x7670b1a8,// 90 PAY  64 

    0xa86bf6b6,// 91 PAY  65 

    0x8d1a386d,// 92 PAY  66 

    0x6e49d2bc,// 93 PAY  67 

    0xb1354a7f,// 94 PAY  68 

    0x9b6594a0,// 95 PAY  69 

    0x61177e37,// 96 PAY  70 

    0xb40f24df,// 97 PAY  71 

    0x63d955d0,// 98 PAY  72 

    0x51c9883d,// 99 PAY  73 

    0xad6adc18,// 100 PAY  74 

    0xc520b9fe,// 101 PAY  75 

    0xf314e386,// 102 PAY  76 

    0xf8900691,// 103 PAY  77 

    0xe75157d6,// 104 PAY  78 

    0xcaa422db,// 105 PAY  79 

    0x623041ba,// 106 PAY  80 

    0x110d2a22,// 107 PAY  81 

    0x59718515,// 108 PAY  82 

    0x9a172f50,// 109 PAY  83 

    0x2822d049,// 110 PAY  84 

    0xf0e042d4,// 111 PAY  85 

    0xc1dca1ec,// 112 PAY  86 

    0x3e47ddb0,// 113 PAY  87 

    0xf50e98b5,// 114 PAY  88 

    0xf57ba019,// 115 PAY  89 

    0xf23c2700,// 116 PAY  90 

    0x35396c69,// 117 PAY  91 

    0x6b6f4dc8,// 118 PAY  92 

    0x6018e57c,// 119 PAY  93 

    0x6bfb2c71,// 120 PAY  94 

    0x63d5b947,// 121 PAY  95 

    0x080bb83a,// 122 PAY  96 

    0xde1b6cd5,// 123 PAY  97 

    0xdee17687,// 124 PAY  98 

    0x7a49b54f,// 125 PAY  99 

    0x041eaf6a,// 126 PAY 100 

    0x0f73a720,// 127 PAY 101 

    0x07f95b74,// 128 PAY 102 

    0xb53fe580,// 129 PAY 103 

    0x8b4f1469,// 130 PAY 104 

    0x4f4a6161,// 131 PAY 105 

    0x663c302c,// 132 PAY 106 

    0xbdc23501,// 133 PAY 107 

    0x10523389,// 134 PAY 108 

    0x3bb1ee28,// 135 PAY 109 

    0xa3388be9,// 136 PAY 110 

    0x2d86df46,// 137 PAY 111 

    0x43e97765,// 138 PAY 112 

    0xf51b9292,// 139 PAY 113 

    0x7671b076,// 140 PAY 114 

    0xbeea4447,// 141 PAY 115 

    0x9e9ad999,// 142 PAY 116 

    0x737a3315,// 143 PAY 117 

    0x9bf9efaf,// 144 PAY 118 

    0x529134de,// 145 PAY 119 

    0x94b1b338,// 146 PAY 120 

    0x3efad291,// 147 PAY 121 

    0xf228f256,// 148 PAY 122 

    0xa1435be9,// 149 PAY 123 

    0x232e50de,// 150 PAY 124 

    0xac8ecaf8,// 151 PAY 125 

    0x27687d1f,// 152 PAY 126 

    0x21bb8dcd,// 153 PAY 127 

    0x983e6afe,// 154 PAY 128 

    0xf4ac1741,// 155 PAY 129 

    0xb9d8d64c,// 156 PAY 130 

    0xef6e76cd,// 157 PAY 131 

    0x06adff46,// 158 PAY 132 

    0xbab03714,// 159 PAY 133 

    0x074f20b4,// 160 PAY 134 

    0x34762637,// 161 PAY 135 

    0x06aad04c,// 162 PAY 136 

    0x2df5cb62,// 163 PAY 137 

    0x179e0e38,// 164 PAY 138 

    0x81345695,// 165 PAY 139 

    0x2fc74a70,// 166 PAY 140 

    0x74ff1755,// 167 PAY 141 

    0xea5168c6,// 168 PAY 142 

    0xf3596954,// 169 PAY 143 

    0x1561f610,// 170 PAY 144 

    0xb06d749f,// 171 PAY 145 

    0x10825ec6,// 172 PAY 146 

    0x21daf2f2,// 173 PAY 147 

    0xb463d3dd,// 174 PAY 148 

    0xd3cf758e,// 175 PAY 149 

    0x13ae7ef4,// 176 PAY 150 

    0xa8f2c7ce,// 177 PAY 151 

    0x3bbeb267,// 178 PAY 152 

    0xea9f7d3f,// 179 PAY 153 

    0xa33ea139,// 180 PAY 154 

    0x107259aa,// 181 PAY 155 

    0xebfe4b2f,// 182 PAY 156 

    0xd91ee673,// 183 PAY 157 

    0x2c44de99,// 184 PAY 158 

    0xe00bf3fa,// 185 PAY 159 

    0x32329fa9,// 186 PAY 160 

    0x48f66bc4,// 187 PAY 161 

    0x65e80bad,// 188 PAY 162 

    0x9e3eb366,// 189 PAY 163 

    0xcc25b4af,// 190 PAY 164 

    0x185a2496,// 191 PAY 165 

    0xeae6da10,// 192 PAY 166 

    0x3a0b987f,// 193 PAY 167 

    0x8dc2ac1a,// 194 PAY 168 

    0xd43c1790,// 195 PAY 169 

    0x817c0aa8,// 196 PAY 170 

    0x6681747d,// 197 PAY 171 

    0x0108a8d8,// 198 PAY 172 

    0xa3d2b37d,// 199 PAY 173 

    0x47892837,// 200 PAY 174 

    0x473be2a0,// 201 PAY 175 

    0x852a01a7,// 202 PAY 176 

    0x38896ba8,// 203 PAY 177 

    0x67afbeca,// 204 PAY 178 

    0xcfae2c30,// 205 PAY 179 

    0xa9c2d74d,// 206 PAY 180 

    0x325b98cb,// 207 PAY 181 

    0xe0f8d709,// 208 PAY 182 

    0x43a88a55,// 209 PAY 183 

    0xfb9a1f59,// 210 PAY 184 

    0xfaa7c3c5,// 211 PAY 185 

    0x3fd219a6,// 212 PAY 186 

    0x791e2aef,// 213 PAY 187 

    0x067189c4,// 214 PAY 188 

    0xd29d1f08,// 215 PAY 189 

    0xfeeff204,// 216 PAY 190 

    0x26db8099,// 217 PAY 191 

    0x44aa384c,// 218 PAY 192 

    0x6c418548,// 219 PAY 193 

    0x23617ea6,// 220 PAY 194 

    0x40398f42,// 221 PAY 195 

    0x14bfa32f,// 222 PAY 196 

    0x71b2b16a,// 223 PAY 197 

    0x74b71ac2,// 224 PAY 198 

    0xd955e4c4,// 225 PAY 199 

    0x1b15bf20,// 226 PAY 200 

    0x631567b7,// 227 PAY 201 

    0x5a303711,// 228 PAY 202 

    0x4d0b09e6,// 229 PAY 203 

    0x08616f4d,// 230 PAY 204 

    0x2ada9cfb,// 231 PAY 205 

    0x360bde22,// 232 PAY 206 

    0x76d732f2,// 233 PAY 207 

    0x5ec72a8f,// 234 PAY 208 

    0xab0a19e7,// 235 PAY 209 

    0x9e5031cb,// 236 PAY 210 

    0x0b16b697,// 237 PAY 211 

    0x11e04af3,// 238 PAY 212 

    0xa057b6b1,// 239 PAY 213 

    0x7cf3d21c,// 240 PAY 214 

    0x04e71e51,// 241 PAY 215 

    0x6faf2219,// 242 PAY 216 

    0xeab06001,// 243 PAY 217 

    0xcec16d10,// 244 PAY 218 

    0x50feb8a2,// 245 PAY 219 

    0xa69d5fe5,// 246 PAY 220 

    0x5713003d,// 247 PAY 221 

    0x56a7da96,// 248 PAY 222 

    0x6167ff0e,// 249 PAY 223 

    0x4989c040,// 250 PAY 224 

    0x7baf1648,// 251 PAY 225 

    0x25915840,// 252 PAY 226 

    0xbc30f032,// 253 PAY 227 

    0xb01d15da,// 254 PAY 228 

    0xbe655c61,// 255 PAY 229 

    0x6ea150c3,// 256 PAY 230 

    0xe4b39025,// 257 PAY 231 

    0x2e807941,// 258 PAY 232 

    0x60d96bf2,// 259 PAY 233 

    0xc91a1872,// 260 PAY 234 

    0x9ba21227,// 261 PAY 235 

    0xb364007c,// 262 PAY 236 

    0x099a43db,// 263 PAY 237 

    0xc3ea619b,// 264 PAY 238 

    0xe68d7bc6,// 265 PAY 239 

    0xef945b97,// 266 PAY 240 

    0x2f4d8c65,// 267 PAY 241 

    0x23eaa281,// 268 PAY 242 

    0xfa72321f,// 269 PAY 243 

    0x6dae2b28,// 270 PAY 244 

    0xccb3c0c5,// 271 PAY 245 

    0x92fb3c1a,// 272 PAY 246 

    0xd0f552d1,// 273 PAY 247 

    0x33434983,// 274 PAY 248 

    0x09210cab,// 275 PAY 249 

    0xc9fa4c76,// 276 PAY 250 

    0x56b04235,// 277 PAY 251 

    0x0f10132c,// 278 PAY 252 

    0xaf906089,// 279 PAY 253 

    0xab1cdb67,// 280 PAY 254 

    0xb5dfbd2d,// 281 PAY 255 

    0x1b166a11,// 282 PAY 256 

    0xedbfa3f5,// 283 PAY 257 

    0x2d40a38b,// 284 PAY 258 

    0xbd738783,// 285 PAY 259 

    0x85f8903e,// 286 PAY 260 

    0x2011416c,// 287 PAY 261 

    0x7e81d4c3,// 288 PAY 262 

    0x066940c2,// 289 PAY 263 

    0x5965ff1a,// 290 PAY 264 

    0x25278b70,// 291 PAY 265 

    0x40208c33,// 292 PAY 266 

    0x6cf3c61f,// 293 PAY 267 

    0x25b05c15,// 294 PAY 268 

    0xc68a0996,// 295 PAY 269 

    0x822a57ea,// 296 PAY 270 

    0x29482860,// 297 PAY 271 

    0xa232b6e0,// 298 PAY 272 

    0xf3f549e2,// 299 PAY 273 

    0xbaea951c,// 300 PAY 274 

    0x23a6e1c0,// 301 PAY 275 

    0xe492a5cf,// 302 PAY 276 

    0x89a224c4,// 303 PAY 277 

    0x98f04fe3,// 304 PAY 278 

    0x1d1a5069,// 305 PAY 279 

    0xba5297a8,// 306 PAY 280 

    0x292dcdd0,// 307 PAY 281 

    0xdaf192ba,// 308 PAY 282 

    0x8a362e00,// 309 PAY 283 

/// STA is 1 words. 

/// STA num_pkts       : 83 

/// STA pkt_idx        : 218 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x25 

    0x03682553 // 310 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt64_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0000000f,// 3 SCX   1 

    0x8045288e,// 4 SCX   2 

    0x000013c2,// 5 SCX   3 

    0x53cf3309,// 6 SCX   4 

    0xd0dcac2e,// 7 SCX   5 

    0xfc2db1ef,// 8 SCX   6 

    0x0adf8e5a,// 9 SCX   7 

    0x00ed556a,// 10 SCX   8 

    0xcd71d5f2,// 11 SCX   9 

    0x969c7faf,// 12 SCX  10 

    0xadf116df,// 13 SCX  11 

    0xbf094d4e,// 14 SCX  12 

    0x674f05b4,// 15 SCX  13 

    0xf5455951,// 16 SCX  14 

    0xf79d8ba2,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1130 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 802 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 802 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 624 

/// BFD (ofst+len)cry  : 632 

/// BFD ofstiv         : 256 

/// BFD ofsticv        : 1028 

    0x00000322,// 18 BFD   1 

    0x02700008,// 19 BFD   2 

    0x04040100,// 20 BFD   3 

/// MFM is 13 words. 

/// MFM vldnibs        : 62 

    0x6200ff8f,// 21 MFM   1 

    0x0198b9ad,// 22 MFM   2 

    0xdf3e2f99,// 23 MFM   3 

    0x08433d90,// 24 MFM   4 

    0xb61f3067,// 25 MFM   5 

    0x7c6b3fc1,// 26 MFM   6 

    0xd08bf122,// 27 MFM   7 

    0x22a34b4c,// 28 MFM   8 

    0xec70dba3,// 29 MFM   9 

    0x895f3df6,// 30 MFM  10 

    0xf8094eb9,// 31 MFM  11 

    0x9562a6d8,// 32 MFM  12 

    0x353e9100,// 33 MFM  13 

/// BDA is 284 words. 

/// BDA size     is 1130 (0x46a) 

/// BDA id       is 0x770a 

    0x046a770a,// 34 BDA   1 

/// PAY Generic Data size   : 1130 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xc40f0b6c,// 35 PAY   1 

    0xa3006216,// 36 PAY   2 

    0xec6a01b6,// 37 PAY   3 

    0x6905e27b,// 38 PAY   4 

    0x489d4415,// 39 PAY   5 

    0xf40ef0f7,// 40 PAY   6 

    0xf5dc2aab,// 41 PAY   7 

    0xabdfc28d,// 42 PAY   8 

    0xb44aaa78,// 43 PAY   9 

    0xf4cfc990,// 44 PAY  10 

    0x3f5363de,// 45 PAY  11 

    0x60ded868,// 46 PAY  12 

    0x30b8673a,// 47 PAY  13 

    0xc1f065fe,// 48 PAY  14 

    0x1466ef50,// 49 PAY  15 

    0x7cde037e,// 50 PAY  16 

    0x83dff4ac,// 51 PAY  17 

    0xb6d28305,// 52 PAY  18 

    0x99d75018,// 53 PAY  19 

    0xe1a997a1,// 54 PAY  20 

    0xdd5384c4,// 55 PAY  21 

    0xdb0a5dd3,// 56 PAY  22 

    0xdf98275b,// 57 PAY  23 

    0x0ed1cfac,// 58 PAY  24 

    0x36b815a3,// 59 PAY  25 

    0x95ac8aa5,// 60 PAY  26 

    0xb0fc60c3,// 61 PAY  27 

    0x0b0cc68f,// 62 PAY  28 

    0x2fd843e0,// 63 PAY  29 

    0x3dc47883,// 64 PAY  30 

    0x230139a4,// 65 PAY  31 

    0xd719d812,// 66 PAY  32 

    0xd95a9d20,// 67 PAY  33 

    0x74bfba43,// 68 PAY  34 

    0xae9ee675,// 69 PAY  35 

    0x0ef066af,// 70 PAY  36 

    0x2ae39fa7,// 71 PAY  37 

    0x06d85db2,// 72 PAY  38 

    0x70227f74,// 73 PAY  39 

    0x48eb4a0e,// 74 PAY  40 

    0xbf2ff54b,// 75 PAY  41 

    0x7c809465,// 76 PAY  42 

    0xa21a6b15,// 77 PAY  43 

    0xd3654e99,// 78 PAY  44 

    0x0211802e,// 79 PAY  45 

    0xe4f095df,// 80 PAY  46 

    0x2fef4e9f,// 81 PAY  47 

    0xcf0407f8,// 82 PAY  48 

    0x1c60f613,// 83 PAY  49 

    0x618706eb,// 84 PAY  50 

    0xd99b8f1c,// 85 PAY  51 

    0xca8ba323,// 86 PAY  52 

    0xa4add889,// 87 PAY  53 

    0x7cca7c72,// 88 PAY  54 

    0x98199cb3,// 89 PAY  55 

    0x2377a12f,// 90 PAY  56 

    0x48806707,// 91 PAY  57 

    0x9341aa0f,// 92 PAY  58 

    0xf4218e43,// 93 PAY  59 

    0x4d57f442,// 94 PAY  60 

    0xfefe8483,// 95 PAY  61 

    0x9bacc134,// 96 PAY  62 

    0xab628f94,// 97 PAY  63 

    0x11986c82,// 98 PAY  64 

    0x3e8e4d15,// 99 PAY  65 

    0x56d949d1,// 100 PAY  66 

    0x5bc2e8dc,// 101 PAY  67 

    0x4957f75e,// 102 PAY  68 

    0xc52f45b4,// 103 PAY  69 

    0xb54a1f2c,// 104 PAY  70 

    0x0748c899,// 105 PAY  71 

    0xc0c1a0dc,// 106 PAY  72 

    0xeb45bb27,// 107 PAY  73 

    0x33aeaa98,// 108 PAY  74 

    0xad3ee78b,// 109 PAY  75 

    0xfbb958f7,// 110 PAY  76 

    0xb871d5b0,// 111 PAY  77 

    0x57002305,// 112 PAY  78 

    0x506f329a,// 113 PAY  79 

    0x0ea1aace,// 114 PAY  80 

    0x071eafad,// 115 PAY  81 

    0xf710bb8c,// 116 PAY  82 

    0xd3c69fae,// 117 PAY  83 

    0xf8ba7d3a,// 118 PAY  84 

    0xf1d56cf7,// 119 PAY  85 

    0x8598bf37,// 120 PAY  86 

    0xd65432cb,// 121 PAY  87 

    0xf0bcd0d2,// 122 PAY  88 

    0x8e5fe562,// 123 PAY  89 

    0x8c0e7a23,// 124 PAY  90 

    0x92ccab53,// 125 PAY  91 

    0xfba7e22f,// 126 PAY  92 

    0x853e42b3,// 127 PAY  93 

    0x337629c8,// 128 PAY  94 

    0xa32c7b9c,// 129 PAY  95 

    0x35fe3f2d,// 130 PAY  96 

    0x75de84f7,// 131 PAY  97 

    0xb1a72434,// 132 PAY  98 

    0xb92d386f,// 133 PAY  99 

    0xfc1464e2,// 134 PAY 100 

    0xc9b65cd2,// 135 PAY 101 

    0x63f67ffe,// 136 PAY 102 

    0xd5d062f1,// 137 PAY 103 

    0xe1407637,// 138 PAY 104 

    0xd40c425d,// 139 PAY 105 

    0x1c4b4eb5,// 140 PAY 106 

    0xead67b1a,// 141 PAY 107 

    0xef894876,// 142 PAY 108 

    0xb21cd9b7,// 143 PAY 109 

    0xa866cf4f,// 144 PAY 110 

    0x865e492a,// 145 PAY 111 

    0x76f43217,// 146 PAY 112 

    0x95a166c7,// 147 PAY 113 

    0xbf2d0857,// 148 PAY 114 

    0x322dbde8,// 149 PAY 115 

    0xa6ed40fc,// 150 PAY 116 

    0x8d80ceba,// 151 PAY 117 

    0xe854054c,// 152 PAY 118 

    0x065006ef,// 153 PAY 119 

    0x41e2c8da,// 154 PAY 120 

    0x322e29a1,// 155 PAY 121 

    0x5e6d4023,// 156 PAY 122 

    0x0ec30138,// 157 PAY 123 

    0xc0ecc060,// 158 PAY 124 

    0x397b81d6,// 159 PAY 125 

    0x5dbb8d86,// 160 PAY 126 

    0xa8307f8d,// 161 PAY 127 

    0x2e43d5f2,// 162 PAY 128 

    0xe948ff56,// 163 PAY 129 

    0x3d25cfbc,// 164 PAY 130 

    0x2866ce4e,// 165 PAY 131 

    0x2c6c548a,// 166 PAY 132 

    0x5ed2f1f7,// 167 PAY 133 

    0x385b5ca4,// 168 PAY 134 

    0x87390876,// 169 PAY 135 

    0x3fe3a84e,// 170 PAY 136 

    0x428e9a0a,// 171 PAY 137 

    0x0d4a5a70,// 172 PAY 138 

    0x19a37de9,// 173 PAY 139 

    0x454a42ef,// 174 PAY 140 

    0x0fb731bc,// 175 PAY 141 

    0x1e62f615,// 176 PAY 142 

    0x93cb1566,// 177 PAY 143 

    0x244d479f,// 178 PAY 144 

    0x71de816a,// 179 PAY 145 

    0x81b06390,// 180 PAY 146 

    0xf71a120f,// 181 PAY 147 

    0x9b6b639e,// 182 PAY 148 

    0xff99173c,// 183 PAY 149 

    0x8327dee4,// 184 PAY 150 

    0xdc128d5f,// 185 PAY 151 

    0xbe09214f,// 186 PAY 152 

    0x510848ed,// 187 PAY 153 

    0x18ee20bf,// 188 PAY 154 

    0x1ec2bab0,// 189 PAY 155 

    0x95d27e9c,// 190 PAY 156 

    0xf61e0be9,// 191 PAY 157 

    0xc78a5517,// 192 PAY 158 

    0x9c60811a,// 193 PAY 159 

    0x36fa9437,// 194 PAY 160 

    0xf7fce42f,// 195 PAY 161 

    0xe0cfeef2,// 196 PAY 162 

    0x352f3776,// 197 PAY 163 

    0x363170a0,// 198 PAY 164 

    0x661cad59,// 199 PAY 165 

    0x335573e4,// 200 PAY 166 

    0x07081d0d,// 201 PAY 167 

    0x77aa9b17,// 202 PAY 168 

    0xeade5aac,// 203 PAY 169 

    0x998893b0,// 204 PAY 170 

    0x73bdc1bf,// 205 PAY 171 

    0x0b7915d3,// 206 PAY 172 

    0xa9fbd295,// 207 PAY 173 

    0x8b266b4e,// 208 PAY 174 

    0xa19f8a5b,// 209 PAY 175 

    0x12fb3b38,// 210 PAY 176 

    0x2ea45ce2,// 211 PAY 177 

    0xefd7b3ae,// 212 PAY 178 

    0x393e88f0,// 213 PAY 179 

    0xd611d55c,// 214 PAY 180 

    0x58117c49,// 215 PAY 181 

    0x76c2e291,// 216 PAY 182 

    0x7ebf4a04,// 217 PAY 183 

    0x81f5e824,// 218 PAY 184 

    0xfa4c03d3,// 219 PAY 185 

    0x6d5b5c1a,// 220 PAY 186 

    0xbe0bb936,// 221 PAY 187 

    0x617332de,// 222 PAY 188 

    0x1a5bf546,// 223 PAY 189 

    0xc540c3af,// 224 PAY 190 

    0xa352547c,// 225 PAY 191 

    0x7b7e599f,// 226 PAY 192 

    0xd0e49f9e,// 227 PAY 193 

    0x6691aa75,// 228 PAY 194 

    0xff3c0f08,// 229 PAY 195 

    0x8ef11cce,// 230 PAY 196 

    0xc89de928,// 231 PAY 197 

    0x5556f9f5,// 232 PAY 198 

    0x2a6697aa,// 233 PAY 199 

    0xa92d91a4,// 234 PAY 200 

    0xf0bd919f,// 235 PAY 201 

    0xb46dda6a,// 236 PAY 202 

    0x3613ca0e,// 237 PAY 203 

    0x84d81a01,// 238 PAY 204 

    0xee3ad55e,// 239 PAY 205 

    0x59337953,// 240 PAY 206 

    0x382346e2,// 241 PAY 207 

    0x19112783,// 242 PAY 208 

    0xe9c57b04,// 243 PAY 209 

    0xfe0c603f,// 244 PAY 210 

    0x849b0bcf,// 245 PAY 211 

    0xc5fbde3c,// 246 PAY 212 

    0x550eb7b4,// 247 PAY 213 

    0x5e0e8faf,// 248 PAY 214 

    0x7b02df0e,// 249 PAY 215 

    0x491496a7,// 250 PAY 216 

    0xf0da445d,// 251 PAY 217 

    0xf7ba2066,// 252 PAY 218 

    0xe145a31d,// 253 PAY 219 

    0x02db19e0,// 254 PAY 220 

    0x7c316baa,// 255 PAY 221 

    0xbe14d815,// 256 PAY 222 

    0x61e5f84a,// 257 PAY 223 

    0x0deabcf7,// 258 PAY 224 

    0x2c5545df,// 259 PAY 225 

    0xf6fd771c,// 260 PAY 226 

    0x5ec99562,// 261 PAY 227 

    0x73b178f8,// 262 PAY 228 

    0xaf448ec5,// 263 PAY 229 

    0x6bf01503,// 264 PAY 230 

    0xf02c5462,// 265 PAY 231 

    0x19733cca,// 266 PAY 232 

    0xc2e84d71,// 267 PAY 233 

    0x4e015165,// 268 PAY 234 

    0xae608a64,// 269 PAY 235 

    0x046b6bdc,// 270 PAY 236 

    0x03eca4a0,// 271 PAY 237 

    0xbc01920e,// 272 PAY 238 

    0x51e696e8,// 273 PAY 239 

    0x07bcac02,// 274 PAY 240 

    0x313e4714,// 275 PAY 241 

    0x15a5a4f0,// 276 PAY 242 

    0x825991ce,// 277 PAY 243 

    0x52be061e,// 278 PAY 244 

    0x2d41272b,// 279 PAY 245 

    0xcd57b6a4,// 280 PAY 246 

    0x97094558,// 281 PAY 247 

    0xb9d6a156,// 282 PAY 248 

    0x60909b34,// 283 PAY 249 

    0xfac89954,// 284 PAY 250 

    0x9a807624,// 285 PAY 251 

    0x53041191,// 286 PAY 252 

    0xdf004a14,// 287 PAY 253 

    0x5f4b5fd6,// 288 PAY 254 

    0xfa3868dd,// 289 PAY 255 

    0xf707879c,// 290 PAY 256 

    0xdbce37f5,// 291 PAY 257 

    0x88def0f7,// 292 PAY 258 

    0x8253577e,// 293 PAY 259 

    0xeaf2cfef,// 294 PAY 260 

    0xee16131e,// 295 PAY 261 

    0x159b5d66,// 296 PAY 262 

    0x963dd9ad,// 297 PAY 263 

    0x5c4c73af,// 298 PAY 264 

    0x8864f8ab,// 299 PAY 265 

    0xb1b3b2c7,// 300 PAY 266 

    0xc6c887f8,// 301 PAY 267 

    0x30a2c6ce,// 302 PAY 268 

    0x3c3c7bf6,// 303 PAY 269 

    0x22b60f10,// 304 PAY 270 

    0xe603f780,// 305 PAY 271 

    0x51863e3b,// 306 PAY 272 

    0xe8d19e1f,// 307 PAY 273 

    0x4a923399,// 308 PAY 274 

    0x8e141f08,// 309 PAY 275 

    0x97e10788,// 310 PAY 276 

    0x21e5aebd,// 311 PAY 277 

    0xc1bc9ae3,// 312 PAY 278 

    0x78f2c5b2,// 313 PAY 279 

    0x92aad564,// 314 PAY 280 

    0x1f41c1b4,// 315 PAY 281 

    0xa822231f,// 316 PAY 282 

    0x3f020000,// 317 PAY 283 

/// STA is 1 words. 

/// STA num_pkts       : 51 

/// STA pkt_idx        : 131 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xbb 

    0x020cbb33 // 318 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt65_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x80402849,// 4 SCX   2 

    0x00006400,// 5 SCX   3 

    0x731418e4,// 6 SCX   4 

    0xbe789c27,// 7 SCX   5 

    0x5687e379,// 8 SCX   6 

    0x84b9ac39,// 9 SCX   7 

    0x04a025de,// 10 SCX   8 

    0xa4e1bc03,// 11 SCX   9 

    0x3cc09b36,// 12 SCX  10 

    0x0d16d831,// 13 SCX  11 

    0xce31aecf,// 14 SCX  12 

    0x29ce5aff,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 253 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 212 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 212 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 196 

/// BFD (ofst+len)cry  : 204 

/// BFD ofstiv         : 156 

/// BFD ofsticv        : 232 

    0x000000d4,// 16 BFD   1 

    0x00c40008,// 17 BFD   2 

    0x00e8009c,// 18 BFD   3 

/// MFM is 7 words. 

/// MFM vldnibs        : 30 

    0x30002e26,// 19 MFM   1 

    0x183f4567,// 20 MFM   2 

    0x04cf4737,// 21 MFM   3 

    0x2d270c83,// 22 MFM   4 

    0x01c00678,// 23 MFM   5 

    0xdbda34a2,// 24 MFM   6 

    0x28a20000,// 25 MFM   7 

/// BDA is 65 words. 

/// BDA size     is 253 (0xfd) 

/// BDA id       is 0x5fa4 

    0x00fd5fa4,// 26 BDA   1 

/// PAY Generic Data size   : 253 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x0d6abc56,// 27 PAY   1 

    0xfdd0431f,// 28 PAY   2 

    0xac8bb714,// 29 PAY   3 

    0x410302c2,// 30 PAY   4 

    0xa94fbed9,// 31 PAY   5 

    0xb37e64b8,// 32 PAY   6 

    0x7fa2ace2,// 33 PAY   7 

    0x909a9c51,// 34 PAY   8 

    0x005c422b,// 35 PAY   9 

    0x685b881e,// 36 PAY  10 

    0x1fc2619e,// 37 PAY  11 

    0x8f0a7702,// 38 PAY  12 

    0x396858fc,// 39 PAY  13 

    0xfbafd162,// 40 PAY  14 

    0xd68ec344,// 41 PAY  15 

    0x52bcce85,// 42 PAY  16 

    0xd877c1b7,// 43 PAY  17 

    0xcd0e9a4f,// 44 PAY  18 

    0x2128c3d7,// 45 PAY  19 

    0xf0df3b9c,// 46 PAY  20 

    0xfe5c3700,// 47 PAY  21 

    0x2962901b,// 48 PAY  22 

    0x66a05f35,// 49 PAY  23 

    0x8a7b5bc3,// 50 PAY  24 

    0x7bb1d192,// 51 PAY  25 

    0xa7f2ae48,// 52 PAY  26 

    0x1a23455c,// 53 PAY  27 

    0xce497072,// 54 PAY  28 

    0x8087c049,// 55 PAY  29 

    0x6f37bbeb,// 56 PAY  30 

    0xf6a79c74,// 57 PAY  31 

    0x3b018932,// 58 PAY  32 

    0x03638db1,// 59 PAY  33 

    0x09173fb2,// 60 PAY  34 

    0xde252965,// 61 PAY  35 

    0x38589d32,// 62 PAY  36 

    0x792dd826,// 63 PAY  37 

    0x1becdd88,// 64 PAY  38 

    0xb63b91ee,// 65 PAY  39 

    0x07d1f3bd,// 66 PAY  40 

    0x82769ac3,// 67 PAY  41 

    0xc36afdef,// 68 PAY  42 

    0x3c2efc44,// 69 PAY  43 

    0xda342a8f,// 70 PAY  44 

    0x39640b05,// 71 PAY  45 

    0x4a6833da,// 72 PAY  46 

    0x9555704c,// 73 PAY  47 

    0x161473e8,// 74 PAY  48 

    0x04cc4634,// 75 PAY  49 

    0xb2d42f42,// 76 PAY  50 

    0x9c9af809,// 77 PAY  51 

    0x9f8e1943,// 78 PAY  52 

    0xb944408c,// 79 PAY  53 

    0x5ace372a,// 80 PAY  54 

    0x2c4270a9,// 81 PAY  55 

    0xe340136f,// 82 PAY  56 

    0xf22d9acc,// 83 PAY  57 

    0xc8b33e6a,// 84 PAY  58 

    0xaf0d5c54,// 85 PAY  59 

    0xaa7c5bd6,// 86 PAY  60 

    0x223a754c,// 87 PAY  61 

    0xbe541bc4,// 88 PAY  62 

    0xbddf253a,// 89 PAY  63 

    0x4a000000,// 90 PAY  64 

/// STA is 1 words. 

/// STA num_pkts       : 51 

/// STA pkt_idx        : 53 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x45 

    0x00d44533 // 91 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt66_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x8040281d,// 4 SCX   2 

    0x00004200,// 5 SCX   3 

    0xef266256,// 6 SCX   4 

    0xc35815aa,// 7 SCX   5 

    0x4d4da7cf,// 8 SCX   6 

    0xc283b0bb,// 9 SCX   7 

    0xd261a599,// 10 SCX   8 

    0x4a1eb3ec,// 11 SCX   9 

    0xb95f2f0f,// 12 SCX  10 

    0x9248f0cf,// 13 SCX  11 

    0xf7b5d5f4,// 14 SCX  12 

    0x86512881,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 838 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 261 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 261 

/// BFD lencrypto      : 112 

/// BFD ofstcrypto     : 80 

/// BFD (ofst+len)cry  : 192 

/// BFD ofstiv         : 8 

/// BFD ofsticv        : 712 

    0x00000105,// 16 BFD   1 

    0x00500070,// 17 BFD   2 

    0x02c80008,// 18 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : b 

    0x0b002c5a,// 19 MFM   1 

    0x01dbdcc0,// 20 MFM   2 

/// BDA is 211 words. 

/// BDA size     is 838 (0x346) 

/// BDA id       is 0xb717 

    0x0346b717,// 21 BDA   1 

/// PAY Generic Data size   : 838 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xe2bfd939,// 22 PAY   1 

    0x7f6d04d6,// 23 PAY   2 

    0xedee156d,// 24 PAY   3 

    0xb3c6b3d0,// 25 PAY   4 

    0x68f05865,// 26 PAY   5 

    0x30107d5c,// 27 PAY   6 

    0xa5350bed,// 28 PAY   7 

    0x4c9712c1,// 29 PAY   8 

    0x1df19339,// 30 PAY   9 

    0x2643d339,// 31 PAY  10 

    0x1c2874cd,// 32 PAY  11 

    0xae06fb1d,// 33 PAY  12 

    0x5e658dd6,// 34 PAY  13 

    0x6312f186,// 35 PAY  14 

    0x91e1e83b,// 36 PAY  15 

    0x96ac41b9,// 37 PAY  16 

    0x03a63422,// 38 PAY  17 

    0x9f9fc9ff,// 39 PAY  18 

    0x1b6ee412,// 40 PAY  19 

    0xc3d8ac86,// 41 PAY  20 

    0xc1237710,// 42 PAY  21 

    0x21b30f08,// 43 PAY  22 

    0x0e3f1bc2,// 44 PAY  23 

    0x7bd0d60d,// 45 PAY  24 

    0xf6ab7a8d,// 46 PAY  25 

    0x790741f7,// 47 PAY  26 

    0x7dc8d83c,// 48 PAY  27 

    0x5008285a,// 49 PAY  28 

    0x3ce64458,// 50 PAY  29 

    0xc105392a,// 51 PAY  30 

    0xce2a3e60,// 52 PAY  31 

    0x988ce662,// 53 PAY  32 

    0x31be048f,// 54 PAY  33 

    0x15c9ac15,// 55 PAY  34 

    0xcd1aa7b8,// 56 PAY  35 

    0x81fdced4,// 57 PAY  36 

    0xbfa16322,// 58 PAY  37 

    0xa13402c8,// 59 PAY  38 

    0x37b2ee15,// 60 PAY  39 

    0xb7eb365d,// 61 PAY  40 

    0x8a49412c,// 62 PAY  41 

    0xdc06f74c,// 63 PAY  42 

    0x6af99624,// 64 PAY  43 

    0x2ff0c5e9,// 65 PAY  44 

    0x6fbccb54,// 66 PAY  45 

    0x4632bbf6,// 67 PAY  46 

    0x1fe9e9b5,// 68 PAY  47 

    0xfcce672b,// 69 PAY  48 

    0xdb126eff,// 70 PAY  49 

    0x2d2f97c2,// 71 PAY  50 

    0x39752a1e,// 72 PAY  51 

    0xe3b1896c,// 73 PAY  52 

    0x5495fbd1,// 74 PAY  53 

    0xd389f6d4,// 75 PAY  54 

    0x935ab83e,// 76 PAY  55 

    0xec86f485,// 77 PAY  56 

    0x74f0fe39,// 78 PAY  57 

    0xad9c6c51,// 79 PAY  58 

    0x4b5960b4,// 80 PAY  59 

    0x2ec15ddc,// 81 PAY  60 

    0x6893d097,// 82 PAY  61 

    0xcc8c0a02,// 83 PAY  62 

    0xf899a209,// 84 PAY  63 

    0x1095f6f4,// 85 PAY  64 

    0x9a613c7f,// 86 PAY  65 

    0xcfd24368,// 87 PAY  66 

    0xf1d1b611,// 88 PAY  67 

    0x2f9dfcb0,// 89 PAY  68 

    0x27bc8519,// 90 PAY  69 

    0xbcf2f3ab,// 91 PAY  70 

    0x07fc908e,// 92 PAY  71 

    0xdfa472cf,// 93 PAY  72 

    0x5ceee498,// 94 PAY  73 

    0x59bfb8f8,// 95 PAY  74 

    0x65c0362c,// 96 PAY  75 

    0x5ec08c0e,// 97 PAY  76 

    0x908f738b,// 98 PAY  77 

    0x53fcdd7e,// 99 PAY  78 

    0xe88a3687,// 100 PAY  79 

    0x9b28de31,// 101 PAY  80 

    0xda1dbc9e,// 102 PAY  81 

    0xf86a88ba,// 103 PAY  82 

    0x7dff3929,// 104 PAY  83 

    0xa3f2b4a4,// 105 PAY  84 

    0xa439968a,// 106 PAY  85 

    0x66667c77,// 107 PAY  86 

    0x4ebce425,// 108 PAY  87 

    0xcf19ee2e,// 109 PAY  88 

    0x719d40b3,// 110 PAY  89 

    0x22285f68,// 111 PAY  90 

    0xa7a368a4,// 112 PAY  91 

    0x1171a4e6,// 113 PAY  92 

    0x64b1f4bc,// 114 PAY  93 

    0xb722a9bc,// 115 PAY  94 

    0xbaccc936,// 116 PAY  95 

    0x08a737aa,// 117 PAY  96 

    0x1d0562fb,// 118 PAY  97 

    0xbcb851cd,// 119 PAY  98 

    0x9394989f,// 120 PAY  99 

    0x55c1d0c7,// 121 PAY 100 

    0x2a841147,// 122 PAY 101 

    0x88a1faa5,// 123 PAY 102 

    0x675d812d,// 124 PAY 103 

    0x80ba78fb,// 125 PAY 104 

    0xb03e938c,// 126 PAY 105 

    0x2c62aa13,// 127 PAY 106 

    0x34da850d,// 128 PAY 107 

    0x93ab4880,// 129 PAY 108 

    0x2273e3e9,// 130 PAY 109 

    0x0e19d898,// 131 PAY 110 

    0xcacf94c5,// 132 PAY 111 

    0x5c9c7d7d,// 133 PAY 112 

    0x7b999830,// 134 PAY 113 

    0x7ffca893,// 135 PAY 114 

    0xcd575dc9,// 136 PAY 115 

    0xd6cd7264,// 137 PAY 116 

    0x5d0d1911,// 138 PAY 117 

    0x24f5ca1c,// 139 PAY 118 

    0xe3f996f2,// 140 PAY 119 

    0xd03370df,// 141 PAY 120 

    0x6df113b6,// 142 PAY 121 

    0x3eee4ad4,// 143 PAY 122 

    0xb88ac7ad,// 144 PAY 123 

    0x0750fff3,// 145 PAY 124 

    0x473cde91,// 146 PAY 125 

    0xecac10a7,// 147 PAY 126 

    0x02d73f3f,// 148 PAY 127 

    0x549b66fc,// 149 PAY 128 

    0x60a5da83,// 150 PAY 129 

    0xb958cdaa,// 151 PAY 130 

    0xb51b17cf,// 152 PAY 131 

    0xba6d6067,// 153 PAY 132 

    0xabbb2821,// 154 PAY 133 

    0x36f0187f,// 155 PAY 134 

    0x3f4b8db4,// 156 PAY 135 

    0xcb5e88c1,// 157 PAY 136 

    0xecfe6c3e,// 158 PAY 137 

    0xccaf3efe,// 159 PAY 138 

    0xf819d1a1,// 160 PAY 139 

    0xe18c8517,// 161 PAY 140 

    0x3ee4cd2c,// 162 PAY 141 

    0x8cebb746,// 163 PAY 142 

    0xe9bc2e7c,// 164 PAY 143 

    0xa9f4c7c1,// 165 PAY 144 

    0x235310d7,// 166 PAY 145 

    0x5cc299c9,// 167 PAY 146 

    0x109c7608,// 168 PAY 147 

    0x77862d88,// 169 PAY 148 

    0x17f3c50a,// 170 PAY 149 

    0x50ac2845,// 171 PAY 150 

    0xb45bb8c2,// 172 PAY 151 

    0x383bdfee,// 173 PAY 152 

    0x3f677a75,// 174 PAY 153 

    0xab78a8c9,// 175 PAY 154 

    0xb58de395,// 176 PAY 155 

    0x88a6a458,// 177 PAY 156 

    0x47ce3135,// 178 PAY 157 

    0x8a5662bf,// 179 PAY 158 

    0x6a5dff60,// 180 PAY 159 

    0xbf5e6c1d,// 181 PAY 160 

    0x730976b9,// 182 PAY 161 

    0xcb725b7d,// 183 PAY 162 

    0xa19edf44,// 184 PAY 163 

    0x073a183e,// 185 PAY 164 

    0xcecb4098,// 186 PAY 165 

    0xa9cdcd31,// 187 PAY 166 

    0x3711eb60,// 188 PAY 167 

    0x29f154bd,// 189 PAY 168 

    0x00f23392,// 190 PAY 169 

    0xee22c08c,// 191 PAY 170 

    0x3ccdc632,// 192 PAY 171 

    0x0f04bd86,// 193 PAY 172 

    0x8ab750ec,// 194 PAY 173 

    0xdb4b6086,// 195 PAY 174 

    0xbecc5e4f,// 196 PAY 175 

    0x73b2e9e0,// 197 PAY 176 

    0xab1755aa,// 198 PAY 177 

    0x9d0ac6ea,// 199 PAY 178 

    0xdc308784,// 200 PAY 179 

    0xb8c8bb8c,// 201 PAY 180 

    0x81b8cd8e,// 202 PAY 181 

    0x4f719efe,// 203 PAY 182 

    0x6ca58cfe,// 204 PAY 183 

    0x9b04fd16,// 205 PAY 184 

    0xfeae28e0,// 206 PAY 185 

    0x6280d1b8,// 207 PAY 186 

    0xdc7f2e37,// 208 PAY 187 

    0x48e2850d,// 209 PAY 188 

    0x5814dd0e,// 210 PAY 189 

    0x3bedd783,// 211 PAY 190 

    0x7613200c,// 212 PAY 191 

    0x6c8fae6e,// 213 PAY 192 

    0x7e8cf7c6,// 214 PAY 193 

    0xd2c2b791,// 215 PAY 194 

    0x7b3def94,// 216 PAY 195 

    0xf5642924,// 217 PAY 196 

    0x2669308a,// 218 PAY 197 

    0x20dbf546,// 219 PAY 198 

    0x8a110606,// 220 PAY 199 

    0x98bd98a5,// 221 PAY 200 

    0x0432856b,// 222 PAY 201 

    0x2a825123,// 223 PAY 202 

    0x37631cd1,// 224 PAY 203 

    0x15a3829d,// 225 PAY 204 

    0x5f7210f4,// 226 PAY 205 

    0xeabbcd4b,// 227 PAY 206 

    0x7f921ec8,// 228 PAY 207 

    0x53ef599a,// 229 PAY 208 

    0x2ed8d32f,// 230 PAY 209 

    0xc75c0000,// 231 PAY 210 

/// STA is 1 words. 

/// STA num_pkts       : 91 

/// STA pkt_idx        : 122 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x83 

    0x01e8835b // 232 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt67_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x8041280a,// 4 SCX   2 

    0x00004100,// 5 SCX   3 

    0xa4bedec3,// 6 SCX   4 

    0xbf1a2ed5,// 7 SCX   5 

    0x29f4e898,// 8 SCX   6 

    0x1b418350,// 9 SCX   7 

    0x047343ba,// 10 SCX   8 

    0x4cb14b5a,// 11 SCX   9 

    0x4a3f9ea4,// 12 SCX  10 

    0x138befcd,// 13 SCX  11 

    0xb0d28cb6,// 14 SCX  12 

    0xe6c07138,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 422 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 386 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 386 

/// BFD lencrypto      : 312 

/// BFD ofstcrypto     : 60 

/// BFD (ofst+len)cry  : 372 

/// BFD ofstiv         : 32 

/// BFD ofsticv        : 396 

    0x00000182,// 16 BFD   1 

    0x003c0138,// 17 BFD   2 

    0x018c0020,// 18 BFD   3 

/// MFM is 8 words. 

/// MFM vldnibs        : 35 

    0x35003e35,// 19 MFM   1 

    0x9f550f2b,// 20 MFM   2 

    0xf8b4b52e,// 21 MFM   3 

    0x6a5c8e53,// 22 MFM   4 

    0x4efccef1,// 23 MFM   5 

    0x4327b9cb,// 24 MFM   6 

    0xad4f95a2,// 25 MFM   7 

    0x80000000,// 26 MFM   8 

/// BDA is 107 words. 

/// BDA size     is 422 (0x1a6) 

/// BDA id       is 0xa522 

    0x01a6a522,// 27 BDA   1 

/// PAY Generic Data size   : 422 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x7332dc0d,// 28 PAY   1 

    0xe57f2558,// 29 PAY   2 

    0x9b45e940,// 30 PAY   3 

    0x8766c538,// 31 PAY   4 

    0xb8f56439,// 32 PAY   5 

    0x68e3074d,// 33 PAY   6 

    0xd7febda0,// 34 PAY   7 

    0xd6059516,// 35 PAY   8 

    0x53e1acfe,// 36 PAY   9 

    0x42815040,// 37 PAY  10 

    0x95f8cc2b,// 38 PAY  11 

    0xf28e807a,// 39 PAY  12 

    0xd5d01f9a,// 40 PAY  13 

    0xc667c86d,// 41 PAY  14 

    0xce25546c,// 42 PAY  15 

    0xf1cd8c61,// 43 PAY  16 

    0x74bd5c0d,// 44 PAY  17 

    0x6f41a9bc,// 45 PAY  18 

    0x223d4ccd,// 46 PAY  19 

    0x0b46fa32,// 47 PAY  20 

    0x53d4972c,// 48 PAY  21 

    0xdefb0a07,// 49 PAY  22 

    0x10503375,// 50 PAY  23 

    0xba1ddb8c,// 51 PAY  24 

    0x90a30f50,// 52 PAY  25 

    0x131ff091,// 53 PAY  26 

    0x5a26aa05,// 54 PAY  27 

    0x9397b681,// 55 PAY  28 

    0x7a7fe1f7,// 56 PAY  29 

    0x16bacaf4,// 57 PAY  30 

    0xa8ebc714,// 58 PAY  31 

    0xdf4470f4,// 59 PAY  32 

    0x0df06359,// 60 PAY  33 

    0x43d6e21d,// 61 PAY  34 

    0xf78dc75c,// 62 PAY  35 

    0xd17e1d69,// 63 PAY  36 

    0x8c881968,// 64 PAY  37 

    0xe29bf79f,// 65 PAY  38 

    0x6b6bc04d,// 66 PAY  39 

    0x7279a5d7,// 67 PAY  40 

    0x370ea894,// 68 PAY  41 

    0x9fdea705,// 69 PAY  42 

    0x7f8f4ed7,// 70 PAY  43 

    0x445d755c,// 71 PAY  44 

    0x882e6cd2,// 72 PAY  45 

    0x7f4df216,// 73 PAY  46 

    0xee38ee40,// 74 PAY  47 

    0x7f9b2489,// 75 PAY  48 

    0x4784813e,// 76 PAY  49 

    0xc18af0a1,// 77 PAY  50 

    0x09739cee,// 78 PAY  51 

    0xe06aa3b5,// 79 PAY  52 

    0xb013c1c5,// 80 PAY  53 

    0x338bf40f,// 81 PAY  54 

    0x81d20c4d,// 82 PAY  55 

    0x72453370,// 83 PAY  56 

    0x5e004831,// 84 PAY  57 

    0x5ce22651,// 85 PAY  58 

    0x03f924c6,// 86 PAY  59 

    0x3ca1e684,// 87 PAY  60 

    0xc039fe62,// 88 PAY  61 

    0xe2b9ad8a,// 89 PAY  62 

    0x7874131a,// 90 PAY  63 

    0x8fe2e5d4,// 91 PAY  64 

    0xf5772be2,// 92 PAY  65 

    0x9ad3b46b,// 93 PAY  66 

    0x2253e283,// 94 PAY  67 

    0xb5f9c86c,// 95 PAY  68 

    0x40ee0fbb,// 96 PAY  69 

    0xaa183a52,// 97 PAY  70 

    0x9a8e3e84,// 98 PAY  71 

    0x4f55dce8,// 99 PAY  72 

    0xde86b336,// 100 PAY  73 

    0xc6ff0598,// 101 PAY  74 

    0xfaa7f42d,// 102 PAY  75 

    0xbcfe72ae,// 103 PAY  76 

    0x40bce785,// 104 PAY  77 

    0x6986a5a6,// 105 PAY  78 

    0xc4456b70,// 106 PAY  79 

    0xb94fbf40,// 107 PAY  80 

    0x52e86e10,// 108 PAY  81 

    0x4c0193ec,// 109 PAY  82 

    0xb6974e68,// 110 PAY  83 

    0x1fcc85a3,// 111 PAY  84 

    0x958412a6,// 112 PAY  85 

    0x6c21501a,// 113 PAY  86 

    0x999c97c2,// 114 PAY  87 

    0x1cf0203e,// 115 PAY  88 

    0x3b87f812,// 116 PAY  89 

    0xf39b228f,// 117 PAY  90 

    0xb9dd9d49,// 118 PAY  91 

    0xb8cc519e,// 119 PAY  92 

    0x0a6d2376,// 120 PAY  93 

    0xc4a620b6,// 121 PAY  94 

    0x6d68b6fd,// 122 PAY  95 

    0x4ab9c5b1,// 123 PAY  96 

    0xdf317f59,// 124 PAY  97 

    0x7e6f958e,// 125 PAY  98 

    0xd55b8283,// 126 PAY  99 

    0xc180df9a,// 127 PAY 100 

    0x07d7acc4,// 128 PAY 101 

    0xac7b5a10,// 129 PAY 102 

    0x2c1a2f31,// 130 PAY 103 

    0x7eca476e,// 131 PAY 104 

    0xbec1c4cd,// 132 PAY 105 

    0xeae40000,// 133 PAY 106 

/// STA is 1 words. 

/// STA num_pkts       : 221 

/// STA pkt_idx        : 35 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xd4 

    0x008cd4dd // 134 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt68_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x80462898,// 4 SCX   2 

    0x00004442,// 5 SCX   3 

    0xac8e21cd,// 6 SCX   4 

    0x907a5f71,// 7 SCX   5 

    0x60473ae8,// 8 SCX   6 

    0xd06b1320,// 9 SCX   7 

    0xf0933ac6,// 10 SCX   8 

    0x59b95d57,// 11 SCX   9 

    0x9d715c46,// 12 SCX  10 

    0xb5dd6839,// 13 SCX  11 

    0x385137f9,// 14 SCX  12 

    0x38bfb7e2,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1261 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1014 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1014 

/// BFD lencrypto      : 576 

/// BFD ofstcrypto     : 72 

/// BFD (ofst+len)cry  : 648 

/// BFD ofstiv         : 20 

/// BFD ofsticv        : 1220 

    0x000003f6,// 16 BFD   1 

    0x00480240,// 17 BFD   2 

    0x04c40014,// 18 BFD   3 

/// MFM is 13 words. 

/// MFM vldnibs        : 5f 

    0x5f006055,// 19 MFM   1 

    0x65cfe4e9,// 20 MFM   2 

    0xae3bfb72,// 21 MFM   3 

    0xf69b62a1,// 22 MFM   4 

    0xa2e96187,// 23 MFM   5 

    0x7e422fe1,// 24 MFM   6 

    0xce283da9,// 25 MFM   7 

    0x8b3f52a8,// 26 MFM   8 

    0x7fbaa2e0,// 27 MFM   9 

    0xf92cd13f,// 28 MFM  10 

    0x89cac25d,// 29 MFM  11 

    0x42ebdf83,// 30 MFM  12 

    0x96000000,// 31 MFM  13 

/// BDA is 317 words. 

/// BDA size     is 1261 (0x4ed) 

/// BDA id       is 0x7985 

    0x04ed7985,// 32 BDA   1 

/// PAY Generic Data size   : 1261 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xe9379e5b,// 33 PAY   1 

    0xa5744c2f,// 34 PAY   2 

    0x9e866062,// 35 PAY   3 

    0x5abb80f7,// 36 PAY   4 

    0xc95a1666,// 37 PAY   5 

    0x8984a06a,// 38 PAY   6 

    0x0df22017,// 39 PAY   7 

    0x4f2da423,// 40 PAY   8 

    0x0b3b7be8,// 41 PAY   9 

    0x75f6d42e,// 42 PAY  10 

    0x6f0cb94d,// 43 PAY  11 

    0xf9b04fff,// 44 PAY  12 

    0x09c357e5,// 45 PAY  13 

    0x42a357c6,// 46 PAY  14 

    0xd69e9cd1,// 47 PAY  15 

    0x10b58799,// 48 PAY  16 

    0x39fa8472,// 49 PAY  17 

    0xd8be9594,// 50 PAY  18 

    0x8ca2e144,// 51 PAY  19 

    0x88c5cc39,// 52 PAY  20 

    0x711a79a5,// 53 PAY  21 

    0xeadd2129,// 54 PAY  22 

    0xe4b52755,// 55 PAY  23 

    0xc949eeb6,// 56 PAY  24 

    0x04a3434b,// 57 PAY  25 

    0x01f100a9,// 58 PAY  26 

    0x27021ec3,// 59 PAY  27 

    0x5f993e80,// 60 PAY  28 

    0xf11997a3,// 61 PAY  29 

    0x7f67fe6f,// 62 PAY  30 

    0xe36a5b27,// 63 PAY  31 

    0x5417c2cb,// 64 PAY  32 

    0x0d8d4be5,// 65 PAY  33 

    0x1ed93216,// 66 PAY  34 

    0xa416f8f2,// 67 PAY  35 

    0xc9b0dba1,// 68 PAY  36 

    0x962a5449,// 69 PAY  37 

    0x335639d2,// 70 PAY  38 

    0x8acab155,// 71 PAY  39 

    0x7373376e,// 72 PAY  40 

    0xa9a959dc,// 73 PAY  41 

    0x2b45a90b,// 74 PAY  42 

    0x0f3f4cbd,// 75 PAY  43 

    0x33ee557f,// 76 PAY  44 

    0x1274db4e,// 77 PAY  45 

    0x581e5da4,// 78 PAY  46 

    0x21c886de,// 79 PAY  47 

    0x45877f31,// 80 PAY  48 

    0xe7d7392d,// 81 PAY  49 

    0x34df7cc9,// 82 PAY  50 

    0xe61fbd77,// 83 PAY  51 

    0x9ed7b9fe,// 84 PAY  52 

    0x784c9b96,// 85 PAY  53 

    0x20302e86,// 86 PAY  54 

    0xcb3a43f9,// 87 PAY  55 

    0xd292205d,// 88 PAY  56 

    0xb93ecc52,// 89 PAY  57 

    0x96ada144,// 90 PAY  58 

    0xa4963878,// 91 PAY  59 

    0xcc1452f8,// 92 PAY  60 

    0xd3c64bce,// 93 PAY  61 

    0xbfd9b0cc,// 94 PAY  62 

    0x6d6e3403,// 95 PAY  63 

    0x11cc2d91,// 96 PAY  64 

    0x25790261,// 97 PAY  65 

    0x574a18ca,// 98 PAY  66 

    0x6b3e3d08,// 99 PAY  67 

    0xf2c1f1e0,// 100 PAY  68 

    0xcf212ed6,// 101 PAY  69 

    0x891dfa0d,// 102 PAY  70 

    0x6a05846e,// 103 PAY  71 

    0xa4d25e0c,// 104 PAY  72 

    0x9c1a99f1,// 105 PAY  73 

    0x88df8481,// 106 PAY  74 

    0xfadb7fc8,// 107 PAY  75 

    0x5452a04d,// 108 PAY  76 

    0xb193d5fe,// 109 PAY  77 

    0x07193dc6,// 110 PAY  78 

    0x712f0993,// 111 PAY  79 

    0xd9d30380,// 112 PAY  80 

    0x4a140913,// 113 PAY  81 

    0x8e2f6e5a,// 114 PAY  82 

    0x8c03b61b,// 115 PAY  83 

    0x0d132662,// 116 PAY  84 

    0xb3e9920c,// 117 PAY  85 

    0x01f4eca8,// 118 PAY  86 

    0xbd4724d2,// 119 PAY  87 

    0x28ed4ef4,// 120 PAY  88 

    0x20c99d3f,// 121 PAY  89 

    0xf5ac2980,// 122 PAY  90 

    0x858e09ff,// 123 PAY  91 

    0xd3fbe782,// 124 PAY  92 

    0xdce11fec,// 125 PAY  93 

    0xa2ea7f9b,// 126 PAY  94 

    0x8c4f4c3b,// 127 PAY  95 

    0xf81dd0b7,// 128 PAY  96 

    0xcb458156,// 129 PAY  97 

    0x7dff7621,// 130 PAY  98 

    0xf6374074,// 131 PAY  99 

    0x3abee07f,// 132 PAY 100 

    0x0d44394b,// 133 PAY 101 

    0x19795a5e,// 134 PAY 102 

    0xb2001a34,// 135 PAY 103 

    0x7c8291df,// 136 PAY 104 

    0xcd4eef3d,// 137 PAY 105 

    0xdaae440e,// 138 PAY 106 

    0x0bec566f,// 139 PAY 107 

    0xf6088867,// 140 PAY 108 

    0xceaf69b1,// 141 PAY 109 

    0x4c3bb5bc,// 142 PAY 110 

    0x92d58017,// 143 PAY 111 

    0x8763ab51,// 144 PAY 112 

    0x4acbd90f,// 145 PAY 113 

    0xf89626db,// 146 PAY 114 

    0x033eae85,// 147 PAY 115 

    0x40df2732,// 148 PAY 116 

    0x737b2347,// 149 PAY 117 

    0x68261ad1,// 150 PAY 118 

    0xdbcfb139,// 151 PAY 119 

    0x6ff496b6,// 152 PAY 120 

    0x42fb3998,// 153 PAY 121 

    0xe19165a2,// 154 PAY 122 

    0x3c3a2515,// 155 PAY 123 

    0xf8e1f810,// 156 PAY 124 

    0x9251e3de,// 157 PAY 125 

    0x48deb2ab,// 158 PAY 126 

    0xcb80171a,// 159 PAY 127 

    0x0d24ce93,// 160 PAY 128 

    0x19d02623,// 161 PAY 129 

    0x28189e79,// 162 PAY 130 

    0x511870a6,// 163 PAY 131 

    0x0c5ec1a2,// 164 PAY 132 

    0xac8196ab,// 165 PAY 133 

    0x13bacaa8,// 166 PAY 134 

    0xe0d07276,// 167 PAY 135 

    0xadc04f06,// 168 PAY 136 

    0x057b5e0c,// 169 PAY 137 

    0x20af52c6,// 170 PAY 138 

    0x0e1fd09d,// 171 PAY 139 

    0xee1e68c8,// 172 PAY 140 

    0xf8280d27,// 173 PAY 141 

    0x9bc671f0,// 174 PAY 142 

    0xfa7eac2f,// 175 PAY 143 

    0xb80b7c39,// 176 PAY 144 

    0x9aebb767,// 177 PAY 145 

    0xf5aa4398,// 178 PAY 146 

    0xf7548d62,// 179 PAY 147 

    0x2618137e,// 180 PAY 148 

    0x158a4153,// 181 PAY 149 

    0x29224933,// 182 PAY 150 

    0x4d3d848b,// 183 PAY 151 

    0x3de89d66,// 184 PAY 152 

    0xcc0b29f6,// 185 PAY 153 

    0x7f1742c4,// 186 PAY 154 

    0xfbe945b1,// 187 PAY 155 

    0x3fe9bb77,// 188 PAY 156 

    0xdc9d623a,// 189 PAY 157 

    0x53321fe1,// 190 PAY 158 

    0x2304779e,// 191 PAY 159 

    0x783b6c27,// 192 PAY 160 

    0x7105fb02,// 193 PAY 161 

    0xffdf79c6,// 194 PAY 162 

    0x2981b477,// 195 PAY 163 

    0x712a3aa4,// 196 PAY 164 

    0x07394cfc,// 197 PAY 165 

    0x91aff1b3,// 198 PAY 166 

    0x3f4888cb,// 199 PAY 167 

    0x56403f25,// 200 PAY 168 

    0x9e92171e,// 201 PAY 169 

    0xefa85b9b,// 202 PAY 170 

    0x326fe355,// 203 PAY 171 

    0x6ceb6e20,// 204 PAY 172 

    0x778cb3e7,// 205 PAY 173 

    0xd36b9772,// 206 PAY 174 

    0x602891c6,// 207 PAY 175 

    0xc207658d,// 208 PAY 176 

    0x3d212ead,// 209 PAY 177 

    0xa7d619f2,// 210 PAY 178 

    0x2616e394,// 211 PAY 179 

    0xbfe7ad24,// 212 PAY 180 

    0x8e6d0bac,// 213 PAY 181 

    0x5d00317d,// 214 PAY 182 

    0x6f48a1f7,// 215 PAY 183 

    0xe2ce266b,// 216 PAY 184 

    0x4ff4a92b,// 217 PAY 185 

    0x1cfd7fd4,// 218 PAY 186 

    0xcb2cba90,// 219 PAY 187 

    0x4251e762,// 220 PAY 188 

    0x6db075a9,// 221 PAY 189 

    0xd6bbc8af,// 222 PAY 190 

    0x177e284b,// 223 PAY 191 

    0x75d3d8bb,// 224 PAY 192 

    0x899938d6,// 225 PAY 193 

    0x1f374566,// 226 PAY 194 

    0xcd5d78ef,// 227 PAY 195 

    0x1ad7c31a,// 228 PAY 196 

    0xefcafd26,// 229 PAY 197 

    0x4c8b7e68,// 230 PAY 198 

    0xa2c38a6a,// 231 PAY 199 

    0xa9a9ba39,// 232 PAY 200 

    0x964d0e83,// 233 PAY 201 

    0x7281077b,// 234 PAY 202 

    0x33a7509b,// 235 PAY 203 

    0xc187ca2a,// 236 PAY 204 

    0x531e7512,// 237 PAY 205 

    0x9510a407,// 238 PAY 206 

    0x626a7b3b,// 239 PAY 207 

    0xa9069a01,// 240 PAY 208 

    0xf0f01534,// 241 PAY 209 

    0x19841239,// 242 PAY 210 

    0x55af6c9e,// 243 PAY 211 

    0x0b1c1f67,// 244 PAY 212 

    0xd3af9e49,// 245 PAY 213 

    0x52e5f12f,// 246 PAY 214 

    0xf3f3c25c,// 247 PAY 215 

    0xf315d661,// 248 PAY 216 

    0xd1f168eb,// 249 PAY 217 

    0x48e3c554,// 250 PAY 218 

    0x774c698d,// 251 PAY 219 

    0x5b576c5f,// 252 PAY 220 

    0x93f0c9a2,// 253 PAY 221 

    0x59ee121c,// 254 PAY 222 

    0xbafaf42f,// 255 PAY 223 

    0xc13a386f,// 256 PAY 224 

    0xcbf81839,// 257 PAY 225 

    0x1202e478,// 258 PAY 226 

    0xe52ed787,// 259 PAY 227 

    0x5cd180cf,// 260 PAY 228 

    0xe7f4ff41,// 261 PAY 229 

    0x4afb77e7,// 262 PAY 230 

    0xfa6c750a,// 263 PAY 231 

    0x85e86d16,// 264 PAY 232 

    0xc3075d99,// 265 PAY 233 

    0xcfe904bd,// 266 PAY 234 

    0x3b09a799,// 267 PAY 235 

    0x74365f0b,// 268 PAY 236 

    0x53cd3f46,// 269 PAY 237 

    0x171e7ea4,// 270 PAY 238 

    0x7bb99730,// 271 PAY 239 

    0x51d3bd5c,// 272 PAY 240 

    0x06709dc4,// 273 PAY 241 

    0x6f817624,// 274 PAY 242 

    0x92b0c597,// 275 PAY 243 

    0x23028c89,// 276 PAY 244 

    0x1ff4511d,// 277 PAY 245 

    0xccd13f00,// 278 PAY 246 

    0xeb2dd85c,// 279 PAY 247 

    0xe548e0b5,// 280 PAY 248 

    0x7fc4701f,// 281 PAY 249 

    0x5e45c00e,// 282 PAY 250 

    0x3bd5b440,// 283 PAY 251 

    0xf8c8c604,// 284 PAY 252 

    0x0b1128d0,// 285 PAY 253 

    0x8ceee55c,// 286 PAY 254 

    0xcb141d69,// 287 PAY 255 

    0x18058c48,// 288 PAY 256 

    0x9f9869e1,// 289 PAY 257 

    0x5f911163,// 290 PAY 258 

    0xd8780c8b,// 291 PAY 259 

    0x7fe659e6,// 292 PAY 260 

    0x14c8c60a,// 293 PAY 261 

    0xf6b29964,// 294 PAY 262 

    0x9e241d9c,// 295 PAY 263 

    0x9e9a56df,// 296 PAY 264 

    0xe47dc8ca,// 297 PAY 265 

    0xb1e5bfbe,// 298 PAY 266 

    0x376eca92,// 299 PAY 267 

    0xf3d1c871,// 300 PAY 268 

    0xf97929dd,// 301 PAY 269 

    0xdfee3c6d,// 302 PAY 270 

    0x4e0042dc,// 303 PAY 271 

    0x0c1f719a,// 304 PAY 272 

    0x679176bf,// 305 PAY 273 

    0x30fa37f5,// 306 PAY 274 

    0xfcdd8402,// 307 PAY 275 

    0xdf1408da,// 308 PAY 276 

    0xfbc7b1a3,// 309 PAY 277 

    0xe9aa9077,// 310 PAY 278 

    0xa96aa20e,// 311 PAY 279 

    0xa079a07d,// 312 PAY 280 

    0xeaa16f0e,// 313 PAY 281 

    0x1128946e,// 314 PAY 282 

    0x5f1e4f1c,// 315 PAY 283 

    0x7bb2a5a2,// 316 PAY 284 

    0x2080b388,// 317 PAY 285 

    0xec76033f,// 318 PAY 286 

    0x7ce6eff4,// 319 PAY 287 

    0xfca6f19a,// 320 PAY 288 

    0x435fc981,// 321 PAY 289 

    0x1a611e3c,// 322 PAY 290 

    0x73849c25,// 323 PAY 291 

    0xe8e5e7d0,// 324 PAY 292 

    0xf490c220,// 325 PAY 293 

    0x4c4745b9,// 326 PAY 294 

    0x24c61166,// 327 PAY 295 

    0xc800af45,// 328 PAY 296 

    0x6be0d618,// 329 PAY 297 

    0xb37f4457,// 330 PAY 298 

    0xd5e50f15,// 331 PAY 299 

    0xaec8922d,// 332 PAY 300 

    0x71afac5d,// 333 PAY 301 

    0x985ef063,// 334 PAY 302 

    0x7f569580,// 335 PAY 303 

    0xf89b913e,// 336 PAY 304 

    0xe1533ac1,// 337 PAY 305 

    0x2112235e,// 338 PAY 306 

    0x94dac432,// 339 PAY 307 

    0x7effe76c,// 340 PAY 308 

    0x758801db,// 341 PAY 309 

    0x1cf5bff3,// 342 PAY 310 

    0xce2b4a3b,// 343 PAY 311 

    0xee34abb3,// 344 PAY 312 

    0x20fa5b17,// 345 PAY 313 

    0x96ae18b6,// 346 PAY 314 

    0x98f1c547,// 347 PAY 315 

    0x6b000000,// 348 PAY 316 

/// STA is 1 words. 

/// STA num_pkts       : 198 

/// STA pkt_idx        : 217 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x9d 

    0x03659dc6 // 349 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt69_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x804128ec,// 4 SCX   2 

    0x00001400,// 5 SCX   3 

    0xcc0b5b25,// 6 SCX   4 

    0x35c0a106,// 7 SCX   5 

    0xee227593,// 8 SCX   6 

    0x644efeb0,// 9 SCX   7 

    0xa335a13e,// 10 SCX   8 

    0x06f4b276,// 11 SCX   9 

    0x728cf091,// 12 SCX  10 

    0x5f1a122e,// 13 SCX  11 

    0x22134e6b,// 14 SCX  12 

    0xc2f97996,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 723 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 501 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 501 

/// BFD lencrypto      : 312 

/// BFD ofstcrypto     : 188 

/// BFD (ofst+len)cry  : 500 

/// BFD ofstiv         : 76 

/// BFD ofsticv        : 524 

    0x000001f5,// 16 BFD   1 

    0x00bc0138,// 17 BFD   2 

    0x020c004c,// 18 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 75 

    0x7500c77e,// 19 MFM   1 

    0x7328bc47,// 20 MFM   2 

    0xc0eb16ce,// 21 MFM   3 

    0x0ca58bec,// 22 MFM   4 

    0xd4d5e55d,// 23 MFM   5 

    0x68628b06,// 24 MFM   6 

    0xd0e0fc42,// 25 MFM   7 

    0xc495dce6,// 26 MFM   8 

    0x374fe876,// 27 MFM   9 

    0x0854bb8e,// 28 MFM  10 

    0x057b2c1e,// 29 MFM  11 

    0xbbab5925,// 30 MFM  12 

    0xf8709818,// 31 MFM  13 

    0x284c09fe,// 32 MFM  14 

    0x37f55aa7,// 33 MFM  15 

    0x90000000,// 34 MFM  16 

/// BDA is 182 words. 

/// BDA size     is 723 (0x2d3) 

/// BDA id       is 0xe834 

    0x02d3e834,// 35 BDA   1 

/// PAY Generic Data size   : 723 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xe814653f,// 36 PAY   1 

    0xcdb3dc58,// 37 PAY   2 

    0xb79ac96c,// 38 PAY   3 

    0xe3629787,// 39 PAY   4 

    0xa7f66568,// 40 PAY   5 

    0xf0a83ed9,// 41 PAY   6 

    0x1445a929,// 42 PAY   7 

    0x5c8e768f,// 43 PAY   8 

    0x10497a47,// 44 PAY   9 

    0x3efe485a,// 45 PAY  10 

    0xfca0e50b,// 46 PAY  11 

    0xbd835a00,// 47 PAY  12 

    0xee4f0e86,// 48 PAY  13 

    0x4f99366b,// 49 PAY  14 

    0xdf4026a2,// 50 PAY  15 

    0x68c21b38,// 51 PAY  16 

    0x3a09d5ba,// 52 PAY  17 

    0x9e620913,// 53 PAY  18 

    0xb3bf05df,// 54 PAY  19 

    0xe275c8f7,// 55 PAY  20 

    0xea983d13,// 56 PAY  21 

    0x946e32a3,// 57 PAY  22 

    0x715d08ba,// 58 PAY  23 

    0x9a12e528,// 59 PAY  24 

    0xe39f881c,// 60 PAY  25 

    0x2aca0664,// 61 PAY  26 

    0xf81297bf,// 62 PAY  27 

    0x68b62d3e,// 63 PAY  28 

    0xb3b7db68,// 64 PAY  29 

    0x2776622e,// 65 PAY  30 

    0x6119861d,// 66 PAY  31 

    0xee8c2476,// 67 PAY  32 

    0xa4e92437,// 68 PAY  33 

    0x949d8699,// 69 PAY  34 

    0x6ce64f0a,// 70 PAY  35 

    0x2d0a4eb5,// 71 PAY  36 

    0xf6092333,// 72 PAY  37 

    0xb02f009c,// 73 PAY  38 

    0xe838460f,// 74 PAY  39 

    0x8b0879f9,// 75 PAY  40 

    0x703d68f0,// 76 PAY  41 

    0xdc0d3b02,// 77 PAY  42 

    0xa2558219,// 78 PAY  43 

    0x232dd04c,// 79 PAY  44 

    0x03c7047f,// 80 PAY  45 

    0xc25f4b98,// 81 PAY  46 

    0x583b1920,// 82 PAY  47 

    0xf9a1e34a,// 83 PAY  48 

    0x545cb19d,// 84 PAY  49 

    0x6d817e80,// 85 PAY  50 

    0x8af271ad,// 86 PAY  51 

    0x808ed065,// 87 PAY  52 

    0x1a2b00ed,// 88 PAY  53 

    0xfadeb17f,// 89 PAY  54 

    0xb6741fa7,// 90 PAY  55 

    0xf28289c6,// 91 PAY  56 

    0x64c59e8d,// 92 PAY  57 

    0x138da49b,// 93 PAY  58 

    0xa0f27cab,// 94 PAY  59 

    0x0a21da7b,// 95 PAY  60 

    0xecbbfd35,// 96 PAY  61 

    0x6d5ae7f5,// 97 PAY  62 

    0x361d8674,// 98 PAY  63 

    0x4d7e70fa,// 99 PAY  64 

    0x47e37e53,// 100 PAY  65 

    0xccd97df2,// 101 PAY  66 

    0xc1244412,// 102 PAY  67 

    0x2d3363c6,// 103 PAY  68 

    0x00104f13,// 104 PAY  69 

    0x5a54da50,// 105 PAY  70 

    0xc5661963,// 106 PAY  71 

    0xa5cf6307,// 107 PAY  72 

    0x106277ba,// 108 PAY  73 

    0x04e71be2,// 109 PAY  74 

    0xf7871e19,// 110 PAY  75 

    0x9da71c5c,// 111 PAY  76 

    0xebfb1106,// 112 PAY  77 

    0x7103169d,// 113 PAY  78 

    0xbf783ab8,// 114 PAY  79 

    0x26c8d9f5,// 115 PAY  80 

    0xa46104e0,// 116 PAY  81 

    0xb253ceaa,// 117 PAY  82 

    0xd7190a8b,// 118 PAY  83 

    0xceda7560,// 119 PAY  84 

    0xd4e77846,// 120 PAY  85 

    0xa145fc53,// 121 PAY  86 

    0x432a8864,// 122 PAY  87 

    0x687bbc7f,// 123 PAY  88 

    0x855d95c2,// 124 PAY  89 

    0xc59ecbce,// 125 PAY  90 

    0x3facdcde,// 126 PAY  91 

    0x4c405509,// 127 PAY  92 

    0x5bfdac15,// 128 PAY  93 

    0xde54bb06,// 129 PAY  94 

    0xb0bfea4e,// 130 PAY  95 

    0xbfe3ccb7,// 131 PAY  96 

    0x5df95557,// 132 PAY  97 

    0xf83074ca,// 133 PAY  98 

    0x14f63ac9,// 134 PAY  99 

    0x84c7b85a,// 135 PAY 100 

    0x976180b4,// 136 PAY 101 

    0xc2e57460,// 137 PAY 102 

    0x7ff041c1,// 138 PAY 103 

    0x64b7ab2c,// 139 PAY 104 

    0x68d0c168,// 140 PAY 105 

    0x6d3a7220,// 141 PAY 106 

    0x10d9175c,// 142 PAY 107 

    0xf6e940f8,// 143 PAY 108 

    0x223d0a6a,// 144 PAY 109 

    0x1d998f04,// 145 PAY 110 

    0x12092a09,// 146 PAY 111 

    0x0da3829e,// 147 PAY 112 

    0x3b64b6dd,// 148 PAY 113 

    0x41f5ca6d,// 149 PAY 114 

    0xf9f3d8bb,// 150 PAY 115 

    0x0dad31d0,// 151 PAY 116 

    0xced554f6,// 152 PAY 117 

    0xb6f28f57,// 153 PAY 118 

    0x33300863,// 154 PAY 119 

    0x0731af62,// 155 PAY 120 

    0x3424acfc,// 156 PAY 121 

    0x16810834,// 157 PAY 122 

    0xb41b729c,// 158 PAY 123 

    0x15809b68,// 159 PAY 124 

    0x60a75a38,// 160 PAY 125 

    0x7ce69cbe,// 161 PAY 126 

    0x720138bc,// 162 PAY 127 

    0xef265c98,// 163 PAY 128 

    0x99ee63c8,// 164 PAY 129 

    0xcd3407d6,// 165 PAY 130 

    0xd45418b4,// 166 PAY 131 

    0x2e195ede,// 167 PAY 132 

    0xdf37a754,// 168 PAY 133 

    0x689e2340,// 169 PAY 134 

    0xacd5edfc,// 170 PAY 135 

    0xdb581fb2,// 171 PAY 136 

    0x5112af13,// 172 PAY 137 

    0x50bd20f4,// 173 PAY 138 

    0xa1f2e880,// 174 PAY 139 

    0xe737506e,// 175 PAY 140 

    0xe5289709,// 176 PAY 141 

    0xf76bd1fa,// 177 PAY 142 

    0xcfec7309,// 178 PAY 143 

    0x6481e5c7,// 179 PAY 144 

    0x39ed5332,// 180 PAY 145 

    0xfa596287,// 181 PAY 146 

    0x682892f1,// 182 PAY 147 

    0xf3037963,// 183 PAY 148 

    0x7ae3e57a,// 184 PAY 149 

    0xefe3f2e9,// 185 PAY 150 

    0x0bfaf489,// 186 PAY 151 

    0x20d1f226,// 187 PAY 152 

    0x1e8e06ac,// 188 PAY 153 

    0x90fbf338,// 189 PAY 154 

    0x9ca42b49,// 190 PAY 155 

    0x3141e275,// 191 PAY 156 

    0x378f9f44,// 192 PAY 157 

    0xb688d204,// 193 PAY 158 

    0x62cbe52e,// 194 PAY 159 

    0xb83ea27e,// 195 PAY 160 

    0x106d800f,// 196 PAY 161 

    0xe20cdb41,// 197 PAY 162 

    0x89b6fe45,// 198 PAY 163 

    0x2be96f01,// 199 PAY 164 

    0xa4753cea,// 200 PAY 165 

    0x356f7233,// 201 PAY 166 

    0xcafa0ff0,// 202 PAY 167 

    0xb9c68f8e,// 203 PAY 168 

    0x60ab2471,// 204 PAY 169 

    0x4ba7dc06,// 205 PAY 170 

    0x97fe8380,// 206 PAY 171 

    0xbf92ba35,// 207 PAY 172 

    0x8085a4dd,// 208 PAY 173 

    0x7a1cc29a,// 209 PAY 174 

    0x9da70131,// 210 PAY 175 

    0x20859f18,// 211 PAY 176 

    0xaadf8f92,// 212 PAY 177 

    0x440681ab,// 213 PAY 178 

    0x79afca0e,// 214 PAY 179 

    0xfd892c35,// 215 PAY 180 

    0x68a97f00,// 216 PAY 181 

/// STA is 1 words. 

/// STA num_pkts       : 24 

/// STA pkt_idx        : 247 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xed 

    0x03dded18 // 217 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt70_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x804628c3,// 4 SCX   2 

    0x00006382,// 5 SCX   3 

    0xa6105a85,// 6 SCX   4 

    0xbe8e4529,// 7 SCX   5 

    0x2c971e8d,// 8 SCX   6 

    0x56a0c58b,// 9 SCX   7 

    0x6cab56ed,// 10 SCX   8 

    0x16019602,// 11 SCX   9 

    0x1348f5e2,// 12 SCX  10 

    0xe378104a,// 13 SCX  11 

    0x9ecad292,// 14 SCX  12 

    0x107c0429,// 15 SCX  13 

    0x5b521895,// 16 SCX  14 

    0x287e1d36,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1275 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 482 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 482 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 252 

/// BFD (ofst+len)cry  : 260 

/// BFD ofstiv         : 184 

/// BFD ofsticv        : 552 

    0x000001e2,// 18 BFD   1 

    0x00fc0008,// 19 BFD   2 

    0x022800b8,// 20 BFD   3 

/// MFM is 14 words. 

/// MFM vldnibs        : 65 

    0x6500fab5,// 21 MFM   1 

    0x754f92ca,// 22 MFM   2 

    0x9497f066,// 23 MFM   3 

    0x9542fef3,// 24 MFM   4 

    0xd2c3bd33,// 25 MFM   5 

    0xde4e00fe,// 26 MFM   6 

    0x92b2ff9b,// 27 MFM   7 

    0xe20cc5be,// 28 MFM   8 

    0xf4af33b3,// 29 MFM   9 

    0x7fbb445d,// 30 MFM  10 

    0x1ced18f9,// 31 MFM  11 

    0xbca279ab,// 32 MFM  12 

    0xf0d6d796,// 33 MFM  13 

    0xd0000000,// 34 MFM  14 

/// BDA is 320 words. 

/// BDA size     is 1275 (0x4fb) 

/// BDA id       is 0x8e57 

    0x04fb8e57,// 35 BDA   1 

/// PAY Generic Data size   : 1275 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xa731afbd,// 36 PAY   1 

    0x38656022,// 37 PAY   2 

    0x0cf67191,// 38 PAY   3 

    0xead8f177,// 39 PAY   4 

    0x8e435470,// 40 PAY   5 

    0x4fff8886,// 41 PAY   6 

    0xb4c68706,// 42 PAY   7 

    0x2bb01678,// 43 PAY   8 

    0x7071ee1f,// 44 PAY   9 

    0xefb9311f,// 45 PAY  10 

    0xde05699b,// 46 PAY  11 

    0xda3c7ebb,// 47 PAY  12 

    0x60aed44c,// 48 PAY  13 

    0x3cadb8a9,// 49 PAY  14 

    0xea69fd67,// 50 PAY  15 

    0xa068a89e,// 51 PAY  16 

    0x632525c0,// 52 PAY  17 

    0xaba87026,// 53 PAY  18 

    0xefd2b87c,// 54 PAY  19 

    0x8ef0adc4,// 55 PAY  20 

    0x1a9890b1,// 56 PAY  21 

    0xd040cfd1,// 57 PAY  22 

    0x56d92059,// 58 PAY  23 

    0x82228553,// 59 PAY  24 

    0xf289b70d,// 60 PAY  25 

    0x46d724fa,// 61 PAY  26 

    0xe6fdc91c,// 62 PAY  27 

    0x07f9d702,// 63 PAY  28 

    0x1beb154e,// 64 PAY  29 

    0x5022d167,// 65 PAY  30 

    0xa9c7a732,// 66 PAY  31 

    0x207492d5,// 67 PAY  32 

    0xd6a2aa9e,// 68 PAY  33 

    0x64fdc0b6,// 69 PAY  34 

    0x4a48e466,// 70 PAY  35 

    0x719a7568,// 71 PAY  36 

    0x733f2267,// 72 PAY  37 

    0x0696463d,// 73 PAY  38 

    0x9c6646e8,// 74 PAY  39 

    0x24accfaf,// 75 PAY  40 

    0x32cd5272,// 76 PAY  41 

    0x8a83da19,// 77 PAY  42 

    0x917ef8d7,// 78 PAY  43 

    0x82f71c9f,// 79 PAY  44 

    0x370dee2f,// 80 PAY  45 

    0x8891dc4d,// 81 PAY  46 

    0xfa2815d9,// 82 PAY  47 

    0xa557af77,// 83 PAY  48 

    0x47d0a8b8,// 84 PAY  49 

    0x54f6634a,// 85 PAY  50 

    0xceaccc4e,// 86 PAY  51 

    0x69718c79,// 87 PAY  52 

    0xc1f7122a,// 88 PAY  53 

    0x2bffa2d6,// 89 PAY  54 

    0xf5cda604,// 90 PAY  55 

    0x6036ab05,// 91 PAY  56 

    0x865d2b5d,// 92 PAY  57 

    0xc5f2d241,// 93 PAY  58 

    0x18aec89d,// 94 PAY  59 

    0x14089f88,// 95 PAY  60 

    0x9d83bfc9,// 96 PAY  61 

    0x5864a85a,// 97 PAY  62 

    0xd47e0051,// 98 PAY  63 

    0x6756a05a,// 99 PAY  64 

    0x63d84206,// 100 PAY  65 

    0xf75284b2,// 101 PAY  66 

    0x914589e3,// 102 PAY  67 

    0x95fb12d1,// 103 PAY  68 

    0x2a403e3b,// 104 PAY  69 

    0x50451b81,// 105 PAY  70 

    0x9aa9dfdd,// 106 PAY  71 

    0x3fb2b038,// 107 PAY  72 

    0xe4e74af1,// 108 PAY  73 

    0xc2ce3eaa,// 109 PAY  74 

    0x54548d87,// 110 PAY  75 

    0xc8fb92c5,// 111 PAY  76 

    0x833362e1,// 112 PAY  77 

    0x66d8af5e,// 113 PAY  78 

    0x09d1ab98,// 114 PAY  79 

    0x0f010e54,// 115 PAY  80 

    0x98baf4dd,// 116 PAY  81 

    0x432582de,// 117 PAY  82 

    0x3936d2a2,// 118 PAY  83 

    0xcd203897,// 119 PAY  84 

    0x37ee013f,// 120 PAY  85 

    0x44e88f4c,// 121 PAY  86 

    0x7f2f9e9e,// 122 PAY  87 

    0x766990ee,// 123 PAY  88 

    0xf5d1911b,// 124 PAY  89 

    0xe171d13e,// 125 PAY  90 

    0x73d9b399,// 126 PAY  91 

    0x61b2f402,// 127 PAY  92 

    0x57f5a1fa,// 128 PAY  93 

    0x7760a275,// 129 PAY  94 

    0x93fe1392,// 130 PAY  95 

    0xfe836d70,// 131 PAY  96 

    0xa643c1f0,// 132 PAY  97 

    0x288c2f82,// 133 PAY  98 

    0xe4ce759d,// 134 PAY  99 

    0xf7dba10e,// 135 PAY 100 

    0xa940d30b,// 136 PAY 101 

    0x682f3cd2,// 137 PAY 102 

    0x675277c0,// 138 PAY 103 

    0xe9a2e7e9,// 139 PAY 104 

    0x9c88435d,// 140 PAY 105 

    0x67225229,// 141 PAY 106 

    0x4bf117ea,// 142 PAY 107 

    0xdfebf5e8,// 143 PAY 108 

    0x93e0d679,// 144 PAY 109 

    0xe0cbd582,// 145 PAY 110 

    0x899f358b,// 146 PAY 111 

    0x77287992,// 147 PAY 112 

    0x9a8be002,// 148 PAY 113 

    0x7ef280e4,// 149 PAY 114 

    0xff1926ab,// 150 PAY 115 

    0xd241b86e,// 151 PAY 116 

    0xb277cacc,// 152 PAY 117 

    0x23b7182c,// 153 PAY 118 

    0xab05adc2,// 154 PAY 119 

    0xf6af014a,// 155 PAY 120 

    0xe8773a15,// 156 PAY 121 

    0xa76917f3,// 157 PAY 122 

    0x370d0225,// 158 PAY 123 

    0x224b76f1,// 159 PAY 124 

    0xec70922d,// 160 PAY 125 

    0x03f03973,// 161 PAY 126 

    0x69e0c98e,// 162 PAY 127 

    0xa5b11733,// 163 PAY 128 

    0xfd325efb,// 164 PAY 129 

    0xd6103059,// 165 PAY 130 

    0x7265d6bf,// 166 PAY 131 

    0xf066d8ef,// 167 PAY 132 

    0x0e39ee4d,// 168 PAY 133 

    0x8190daff,// 169 PAY 134 

    0x21880f02,// 170 PAY 135 

    0xbeda5f6a,// 171 PAY 136 

    0x1e4bfade,// 172 PAY 137 

    0x5b34237f,// 173 PAY 138 

    0x18cf7f68,// 174 PAY 139 

    0x69f7ea65,// 175 PAY 140 

    0xe450bfae,// 176 PAY 141 

    0x5832f0e4,// 177 PAY 142 

    0x79d8b242,// 178 PAY 143 

    0x408f8288,// 179 PAY 144 

    0xbcc16df5,// 180 PAY 145 

    0x75ceb821,// 181 PAY 146 

    0x0b76d7c7,// 182 PAY 147 

    0x0affc07a,// 183 PAY 148 

    0x65358d8d,// 184 PAY 149 

    0xc46b0ac7,// 185 PAY 150 

    0x14462f43,// 186 PAY 151 

    0x836bc9b7,// 187 PAY 152 

    0x94067df0,// 188 PAY 153 

    0x53cf69e6,// 189 PAY 154 

    0x14cd8886,// 190 PAY 155 

    0xfe258da3,// 191 PAY 156 

    0xa3938772,// 192 PAY 157 

    0x6e5bfae0,// 193 PAY 158 

    0x7943758a,// 194 PAY 159 

    0x9143ef99,// 195 PAY 160 

    0x1bb70b28,// 196 PAY 161 

    0x69c23c78,// 197 PAY 162 

    0x13bde055,// 198 PAY 163 

    0x01b1b7d0,// 199 PAY 164 

    0xdd16643e,// 200 PAY 165 

    0x35e24993,// 201 PAY 166 

    0x9e2097a8,// 202 PAY 167 

    0x2aefc1bc,// 203 PAY 168 

    0xe83d4106,// 204 PAY 169 

    0x83ee2a62,// 205 PAY 170 

    0xef970178,// 206 PAY 171 

    0x8838ad4a,// 207 PAY 172 

    0x7c99fd4a,// 208 PAY 173 

    0x40e62d81,// 209 PAY 174 

    0xb74a9ad3,// 210 PAY 175 

    0x6b98bebc,// 211 PAY 176 

    0x54f1c59c,// 212 PAY 177 

    0xa4754fba,// 213 PAY 178 

    0x503c836c,// 214 PAY 179 

    0xd4677536,// 215 PAY 180 

    0xaf873c05,// 216 PAY 181 

    0x1258cdf5,// 217 PAY 182 

    0x0836b495,// 218 PAY 183 

    0x1c4c874b,// 219 PAY 184 

    0x9bb01696,// 220 PAY 185 

    0x74b4c2bd,// 221 PAY 186 

    0x3602ed03,// 222 PAY 187 

    0xb764d3a7,// 223 PAY 188 

    0x362bddbf,// 224 PAY 189 

    0x3c3f1961,// 225 PAY 190 

    0x10eec89d,// 226 PAY 191 

    0xff60380f,// 227 PAY 192 

    0x76a32d58,// 228 PAY 193 

    0x70717367,// 229 PAY 194 

    0xceb2ed54,// 230 PAY 195 

    0x318dc4c8,// 231 PAY 196 

    0xa23aa1f6,// 232 PAY 197 

    0x4fa683a3,// 233 PAY 198 

    0x504b1f01,// 234 PAY 199 

    0x91d454dd,// 235 PAY 200 

    0x413f2df0,// 236 PAY 201 

    0x57ec28c2,// 237 PAY 202 

    0x2b806b96,// 238 PAY 203 

    0x0a6b327a,// 239 PAY 204 

    0x264d75d3,// 240 PAY 205 

    0xad3ab59e,// 241 PAY 206 

    0x7fdc19d9,// 242 PAY 207 

    0x228c22b8,// 243 PAY 208 

    0xd9875fd2,// 244 PAY 209 

    0x42a9ada7,// 245 PAY 210 

    0x4d485edf,// 246 PAY 211 

    0x5f600df8,// 247 PAY 212 

    0x6ef97e41,// 248 PAY 213 

    0x32621879,// 249 PAY 214 

    0xd718f099,// 250 PAY 215 

    0x54c4e205,// 251 PAY 216 

    0xcc37bc67,// 252 PAY 217 

    0x51eb9a28,// 253 PAY 218 

    0x60052a84,// 254 PAY 219 

    0xf23b16c9,// 255 PAY 220 

    0x8181c92c,// 256 PAY 221 

    0x423c6460,// 257 PAY 222 

    0xc20e0cee,// 258 PAY 223 

    0xfa96538d,// 259 PAY 224 

    0x3bc45fe5,// 260 PAY 225 

    0x6c3a42ab,// 261 PAY 226 

    0xf8abd54c,// 262 PAY 227 

    0x2cf6eedb,// 263 PAY 228 

    0xd4f381e4,// 264 PAY 229 

    0x9e6f48ff,// 265 PAY 230 

    0xdce6af13,// 266 PAY 231 

    0x06df2757,// 267 PAY 232 

    0xa9e6ea34,// 268 PAY 233 

    0xa0dafffb,// 269 PAY 234 

    0xe901b5b2,// 270 PAY 235 

    0x6e9417a3,// 271 PAY 236 

    0xed3f6ddc,// 272 PAY 237 

    0xa7ceebe4,// 273 PAY 238 

    0xbc0abd11,// 274 PAY 239 

    0x43498bdf,// 275 PAY 240 

    0x2eee88c3,// 276 PAY 241 

    0x87089588,// 277 PAY 242 

    0x78dbab9c,// 278 PAY 243 

    0x76e46ee5,// 279 PAY 244 

    0xc5156c0f,// 280 PAY 245 

    0x189b3dd9,// 281 PAY 246 

    0x5da610ef,// 282 PAY 247 

    0xeb9ee7dc,// 283 PAY 248 

    0x87144ead,// 284 PAY 249 

    0x266aefe6,// 285 PAY 250 

    0xa91db10e,// 286 PAY 251 

    0x491ca2e7,// 287 PAY 252 

    0x7a0a3962,// 288 PAY 253 

    0x1cad827a,// 289 PAY 254 

    0x27b1c1d2,// 290 PAY 255 

    0xd890569d,// 291 PAY 256 

    0x287b2494,// 292 PAY 257 

    0x69414c28,// 293 PAY 258 

    0xdc92695b,// 294 PAY 259 

    0x2cb2d138,// 295 PAY 260 

    0x320312b0,// 296 PAY 261 

    0xd9a5fb13,// 297 PAY 262 

    0x5f1f7781,// 298 PAY 263 

    0x165a4c9a,// 299 PAY 264 

    0x01cc65ef,// 300 PAY 265 

    0x27b065fd,// 301 PAY 266 

    0xedc29901,// 302 PAY 267 

    0xf36c8678,// 303 PAY 268 

    0x64aa9eb6,// 304 PAY 269 

    0xfc14e015,// 305 PAY 270 

    0x698a93f2,// 306 PAY 271 

    0x981c1261,// 307 PAY 272 

    0x1ce87baa,// 308 PAY 273 

    0x46f848ad,// 309 PAY 274 

    0xaa4246be,// 310 PAY 275 

    0x91970ecb,// 311 PAY 276 

    0xbbeab6d0,// 312 PAY 277 

    0xd048bcd4,// 313 PAY 278 

    0x036763ca,// 314 PAY 279 

    0x73ead135,// 315 PAY 280 

    0x1e1acde0,// 316 PAY 281 

    0x5aca35d8,// 317 PAY 282 

    0x27f29aec,// 318 PAY 283 

    0x488a4e58,// 319 PAY 284 

    0x5cc51821,// 320 PAY 285 

    0x821767e8,// 321 PAY 286 

    0x9e3953e3,// 322 PAY 287 

    0x5f74da4d,// 323 PAY 288 

    0x76263571,// 324 PAY 289 

    0xbf462c2e,// 325 PAY 290 

    0xe7e6aeea,// 326 PAY 291 

    0x510f1d9a,// 327 PAY 292 

    0xa72d2cb8,// 328 PAY 293 

    0xb7c10be1,// 329 PAY 294 

    0xed91aa2b,// 330 PAY 295 

    0x0404c639,// 331 PAY 296 

    0x07d06c73,// 332 PAY 297 

    0x1cf306aa,// 333 PAY 298 

    0xf33b3c4b,// 334 PAY 299 

    0xce1851fe,// 335 PAY 300 

    0x98044f00,// 336 PAY 301 

    0x8f51c7a5,// 337 PAY 302 

    0xfdf461a8,// 338 PAY 303 

    0x818108f1,// 339 PAY 304 

    0xabf7dd2d,// 340 PAY 305 

    0xb66cbfd2,// 341 PAY 306 

    0x449a5c9d,// 342 PAY 307 

    0x20042617,// 343 PAY 308 

    0xac075975,// 344 PAY 309 

    0x53cdae0e,// 345 PAY 310 

    0xc4bb1c38,// 346 PAY 311 

    0x881e13a2,// 347 PAY 312 

    0xeb850728,// 348 PAY 313 

    0xce7a7577,// 349 PAY 314 

    0xff981773,// 350 PAY 315 

    0x3dd24e80,// 351 PAY 316 

    0x92df9fe7,// 352 PAY 317 

    0xab22d160,// 353 PAY 318 

    0xa4500900,// 354 PAY 319 

/// STA is 1 words. 

/// STA num_pkts       : 20 

/// STA pkt_idx        : 132 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x13 

    0x02111314 // 355 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt71_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0000000f,// 3 SCX   1 

    0x804428b2,// 4 SCX   2 

    0x000001c2,// 5 SCX   3 

    0xeb82896f,// 6 SCX   4 

    0xfe895283,// 7 SCX   5 

    0xe30812ac,// 8 SCX   6 

    0x968c39d4,// 9 SCX   7 

    0x05fd79cd,// 10 SCX   8 

    0x73d9f557,// 11 SCX   9 

    0xa38fea6f,// 12 SCX  10 

    0x08a968c1,// 13 SCX  11 

    0x27b7da6e,// 14 SCX  12 

    0xdfbe9534,// 15 SCX  13 

    0xddbf715e,// 16 SCX  14 

    0xf8c397a0,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1223 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 266 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 266 

/// BFD lencrypto      : 168 

/// BFD ofstcrypto     : 92 

/// BFD (ofst+len)cry  : 260 

/// BFD ofstiv         : 20 

/// BFD ofsticv        : 612 

    0x0000010a,// 18 BFD   1 

    0x005c00a8,// 19 BFD   2 

    0x02640014,// 20 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : e 

    0x0e005fd7,// 21 MFM   1 

    0x1a8d974e,// 22 MFM   2 

    0xbe000000,// 23 MFM   3 

/// BDA is 307 words. 

/// BDA size     is 1223 (0x4c7) 

/// BDA id       is 0xc9c9 

    0x04c7c9c9,// 24 BDA   1 

/// PAY Generic Data size   : 1223 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x93535ef4,// 25 PAY   1 

    0x31b37ca3,// 26 PAY   2 

    0xaf8633d3,// 27 PAY   3 

    0x4fc3bc01,// 28 PAY   4 

    0x9ee538a3,// 29 PAY   5 

    0x28c621b9,// 30 PAY   6 

    0x09a89d27,// 31 PAY   7 

    0xde451940,// 32 PAY   8 

    0xf3e0e9db,// 33 PAY   9 

    0xeab308c7,// 34 PAY  10 

    0x3f454e35,// 35 PAY  11 

    0xf1e3d20d,// 36 PAY  12 

    0x803d2386,// 37 PAY  13 

    0x67d61b83,// 38 PAY  14 

    0x384bdbeb,// 39 PAY  15 

    0xf472a74b,// 40 PAY  16 

    0x325b01b5,// 41 PAY  17 

    0xf574cc3a,// 42 PAY  18 

    0x7e9a3c27,// 43 PAY  19 

    0xbece69ff,// 44 PAY  20 

    0x9502f31c,// 45 PAY  21 

    0x02c84a34,// 46 PAY  22 

    0x503b3557,// 47 PAY  23 

    0x2d470e31,// 48 PAY  24 

    0xb73281de,// 49 PAY  25 

    0x8dc1a128,// 50 PAY  26 

    0xa01c643b,// 51 PAY  27 

    0x218c2d18,// 52 PAY  28 

    0xada3b0ca,// 53 PAY  29 

    0x645a4fca,// 54 PAY  30 

    0xd24c0d2a,// 55 PAY  31 

    0x44e5b656,// 56 PAY  32 

    0x17e4cbbd,// 57 PAY  33 

    0x0a62f625,// 58 PAY  34 

    0x560f6d97,// 59 PAY  35 

    0xe37de73a,// 60 PAY  36 

    0xdc42f44f,// 61 PAY  37 

    0x3eb97359,// 62 PAY  38 

    0x6e1382f0,// 63 PAY  39 

    0xa7e4f12d,// 64 PAY  40 

    0x531a0f29,// 65 PAY  41 

    0x2f603d6a,// 66 PAY  42 

    0x1cb9bde2,// 67 PAY  43 

    0x61250a1d,// 68 PAY  44 

    0x5250e6e8,// 69 PAY  45 

    0x65a52242,// 70 PAY  46 

    0x1d855593,// 71 PAY  47 

    0x6cf735e3,// 72 PAY  48 

    0xe97a2c8c,// 73 PAY  49 

    0x0c546286,// 74 PAY  50 

    0xaf436c5a,// 75 PAY  51 

    0x52a2a3eb,// 76 PAY  52 

    0x2a10f8f2,// 77 PAY  53 

    0x04350f16,// 78 PAY  54 

    0x1c24f26f,// 79 PAY  55 

    0xf344a66d,// 80 PAY  56 

    0xb8ae8718,// 81 PAY  57 

    0x5a102f9a,// 82 PAY  58 

    0xc0b16879,// 83 PAY  59 

    0x835ed99e,// 84 PAY  60 

    0x1e963918,// 85 PAY  61 

    0xbd84c499,// 86 PAY  62 

    0xc08b98f4,// 87 PAY  63 

    0x91cdad18,// 88 PAY  64 

    0xc84b9dff,// 89 PAY  65 

    0xb7085da7,// 90 PAY  66 

    0x58f64a3a,// 91 PAY  67 

    0x488e3a26,// 92 PAY  68 

    0x21c9d2fe,// 93 PAY  69 

    0xd722a351,// 94 PAY  70 

    0x4fc2ac4b,// 95 PAY  71 

    0x404348bd,// 96 PAY  72 

    0x84fdda40,// 97 PAY  73 

    0x20bdb30f,// 98 PAY  74 

    0xb3951a39,// 99 PAY  75 

    0x9574977c,// 100 PAY  76 

    0x1f7d6fe5,// 101 PAY  77 

    0x80be8f39,// 102 PAY  78 

    0x299cc98e,// 103 PAY  79 

    0xa1eb7d34,// 104 PAY  80 

    0xa11204be,// 105 PAY  81 

    0xe80170fe,// 106 PAY  82 

    0x27f13fd0,// 107 PAY  83 

    0x1fef0790,// 108 PAY  84 

    0xe05e0c39,// 109 PAY  85 

    0x02ea676a,// 110 PAY  86 

    0x4738c840,// 111 PAY  87 

    0x02a0df77,// 112 PAY  88 

    0x0a3c4a26,// 113 PAY  89 

    0xabc613c8,// 114 PAY  90 

    0xbf288444,// 115 PAY  91 

    0xd2a14993,// 116 PAY  92 

    0x9dd8c97e,// 117 PAY  93 

    0x9961bab8,// 118 PAY  94 

    0x51388a07,// 119 PAY  95 

    0xb77b5603,// 120 PAY  96 

    0xaac47a40,// 121 PAY  97 

    0x62e3a73a,// 122 PAY  98 

    0xbf1567ce,// 123 PAY  99 

    0x8cb249fb,// 124 PAY 100 

    0x5cc3df0f,// 125 PAY 101 

    0x087bc034,// 126 PAY 102 

    0x60f3fe3b,// 127 PAY 103 

    0x6f014bbb,// 128 PAY 104 

    0x968d6818,// 129 PAY 105 

    0xf8865bb2,// 130 PAY 106 

    0x6ab26356,// 131 PAY 107 

    0xc1a51bd9,// 132 PAY 108 

    0xf2aabf73,// 133 PAY 109 

    0x51c0d950,// 134 PAY 110 

    0x425b3d1d,// 135 PAY 111 

    0x70458f55,// 136 PAY 112 

    0xfa0fc01e,// 137 PAY 113 

    0x8a2c022e,// 138 PAY 114 

    0x8f97d757,// 139 PAY 115 

    0xe94b50bd,// 140 PAY 116 

    0x56e33aa1,// 141 PAY 117 

    0x99b184d7,// 142 PAY 118 

    0xfb1224aa,// 143 PAY 119 

    0xdf4148e1,// 144 PAY 120 

    0x4b14150a,// 145 PAY 121 

    0x5ce722e9,// 146 PAY 122 

    0x570ee6a3,// 147 PAY 123 

    0x18633896,// 148 PAY 124 

    0xac943f29,// 149 PAY 125 

    0xc46f0abd,// 150 PAY 126 

    0x109b1ff3,// 151 PAY 127 

    0xbd7019d2,// 152 PAY 128 

    0xb13ed464,// 153 PAY 129 

    0x12e3340c,// 154 PAY 130 

    0xdb9b17a9,// 155 PAY 131 

    0x3f31927d,// 156 PAY 132 

    0x24a56c90,// 157 PAY 133 

    0x1de5f8d9,// 158 PAY 134 

    0x0108920b,// 159 PAY 135 

    0xfbfbcc6b,// 160 PAY 136 

    0xb847da45,// 161 PAY 137 

    0xc2612b49,// 162 PAY 138 

    0xdd6617a8,// 163 PAY 139 

    0xc2c5995c,// 164 PAY 140 

    0x63754d97,// 165 PAY 141 

    0x0acdfbe4,// 166 PAY 142 

    0x10c44c65,// 167 PAY 143 

    0x0481bf85,// 168 PAY 144 

    0xfdd3aaf0,// 169 PAY 145 

    0x2d3a31f7,// 170 PAY 146 

    0xd3cfaf91,// 171 PAY 147 

    0xc7e0466c,// 172 PAY 148 

    0xeee3d9bd,// 173 PAY 149 

    0x2ac0f10a,// 174 PAY 150 

    0x3cf2efe7,// 175 PAY 151 

    0xf4bb0e7e,// 176 PAY 152 

    0xdd558009,// 177 PAY 153 

    0xd6ae4d39,// 178 PAY 154 

    0x8c61e215,// 179 PAY 155 

    0x9b98eed8,// 180 PAY 156 

    0x84308b33,// 181 PAY 157 

    0x9fe1639b,// 182 PAY 158 

    0x32ea71fe,// 183 PAY 159 

    0xe5e66d35,// 184 PAY 160 

    0xf90d342a,// 185 PAY 161 

    0xf5a51c8c,// 186 PAY 162 

    0x6d52c87d,// 187 PAY 163 

    0xd2398e8d,// 188 PAY 164 

    0x4bb12088,// 189 PAY 165 

    0x36b0b54d,// 190 PAY 166 

    0x7afe18d6,// 191 PAY 167 

    0x505303e9,// 192 PAY 168 

    0xaee69759,// 193 PAY 169 

    0x8eda9d70,// 194 PAY 170 

    0x2d6b7537,// 195 PAY 171 

    0x1f9043f7,// 196 PAY 172 

    0xa8fd84d9,// 197 PAY 173 

    0x4c409742,// 198 PAY 174 

    0xfbeababb,// 199 PAY 175 

    0x5725e4e8,// 200 PAY 176 

    0x0abef7f2,// 201 PAY 177 

    0xe8716edb,// 202 PAY 178 

    0xac50bba7,// 203 PAY 179 

    0xf86c846c,// 204 PAY 180 

    0x815a61d7,// 205 PAY 181 

    0x9912b7f9,// 206 PAY 182 

    0x8925d10a,// 207 PAY 183 

    0x8d64502e,// 208 PAY 184 

    0x7bf2bdb5,// 209 PAY 185 

    0x967fbaad,// 210 PAY 186 

    0xb147caa8,// 211 PAY 187 

    0x13493382,// 212 PAY 188 

    0xeb8410d1,// 213 PAY 189 

    0x4573a155,// 214 PAY 190 

    0x8c4290f0,// 215 PAY 191 

    0xe0a6b1b0,// 216 PAY 192 

    0x513fbd4e,// 217 PAY 193 

    0xf02beecb,// 218 PAY 194 

    0x15d653cc,// 219 PAY 195 

    0xcbb21213,// 220 PAY 196 

    0xde38b5d3,// 221 PAY 197 

    0xf8f49530,// 222 PAY 198 

    0x499ab83f,// 223 PAY 199 

    0x7e27bb52,// 224 PAY 200 

    0xd86e084b,// 225 PAY 201 

    0x02950e22,// 226 PAY 202 

    0x523e3fc7,// 227 PAY 203 

    0xf8dc55d3,// 228 PAY 204 

    0xa3de63f2,// 229 PAY 205 

    0x91163767,// 230 PAY 206 

    0xf3ac1fe2,// 231 PAY 207 

    0xd3d014f7,// 232 PAY 208 

    0xa05ab35d,// 233 PAY 209 

    0x1c4e90c0,// 234 PAY 210 

    0x4c7b550f,// 235 PAY 211 

    0xbac09ec9,// 236 PAY 212 

    0x83a6e934,// 237 PAY 213 

    0x1f9a48e5,// 238 PAY 214 

    0xfcbfc784,// 239 PAY 215 

    0x808d58ad,// 240 PAY 216 

    0x39bd5c37,// 241 PAY 217 

    0xa590c28b,// 242 PAY 218 

    0x6b3e8175,// 243 PAY 219 

    0xe897c723,// 244 PAY 220 

    0x30d2480c,// 245 PAY 221 

    0x3e2c7b56,// 246 PAY 222 

    0xe6085f0f,// 247 PAY 223 

    0x760a3e29,// 248 PAY 224 

    0xa1810b6e,// 249 PAY 225 

    0xa9c330d2,// 250 PAY 226 

    0xfc2c6339,// 251 PAY 227 

    0x2f724d86,// 252 PAY 228 

    0x8d747bfb,// 253 PAY 229 

    0xb4051c85,// 254 PAY 230 

    0xf184adf1,// 255 PAY 231 

    0x180d4dc0,// 256 PAY 232 

    0x99218fe3,// 257 PAY 233 

    0x515e3c97,// 258 PAY 234 

    0xb5cdfe7d,// 259 PAY 235 

    0xe79a4d2d,// 260 PAY 236 

    0xd0d4a626,// 261 PAY 237 

    0xbfa218a9,// 262 PAY 238 

    0x442bdb78,// 263 PAY 239 

    0x09d1db9f,// 264 PAY 240 

    0xb619fc79,// 265 PAY 241 

    0xc2f10d96,// 266 PAY 242 

    0x622f6926,// 267 PAY 243 

    0xcdf81522,// 268 PAY 244 

    0xf7fb8699,// 269 PAY 245 

    0x66efadb3,// 270 PAY 246 

    0xd94080da,// 271 PAY 247 

    0x57161937,// 272 PAY 248 

    0x167a62d6,// 273 PAY 249 

    0xe10ab55e,// 274 PAY 250 

    0x574abc09,// 275 PAY 251 

    0xc30c2a1d,// 276 PAY 252 

    0x079a3e06,// 277 PAY 253 

    0xe2aaa3e9,// 278 PAY 254 

    0x2ebf09f9,// 279 PAY 255 

    0xda0662c8,// 280 PAY 256 

    0xac4f5540,// 281 PAY 257 

    0xcd628647,// 282 PAY 258 

    0xdca5d8e1,// 283 PAY 259 

    0xe8e2186d,// 284 PAY 260 

    0x0ca7e676,// 285 PAY 261 

    0x62aaccab,// 286 PAY 262 

    0x7d6ff48b,// 287 PAY 263 

    0xf12bfbdc,// 288 PAY 264 

    0xa24d12b7,// 289 PAY 265 

    0xcdec1baf,// 290 PAY 266 

    0xddf23f46,// 291 PAY 267 

    0xde0be85a,// 292 PAY 268 

    0x3cb34812,// 293 PAY 269 

    0xe1c30fdb,// 294 PAY 270 

    0x476a27bc,// 295 PAY 271 

    0x447ba0e4,// 296 PAY 272 

    0x46dd3c7e,// 297 PAY 273 

    0x825916cb,// 298 PAY 274 

    0xed18db2b,// 299 PAY 275 

    0x171e175b,// 300 PAY 276 

    0x765dd56b,// 301 PAY 277 

    0x8f39822a,// 302 PAY 278 

    0xb482c2f5,// 303 PAY 279 

    0x8efbc7d1,// 304 PAY 280 

    0x1716626d,// 305 PAY 281 

    0x97396074,// 306 PAY 282 

    0x098ba85c,// 307 PAY 283 

    0x1758e231,// 308 PAY 284 

    0xa2942edc,// 309 PAY 285 

    0x088ffc00,// 310 PAY 286 

    0x68a64093,// 311 PAY 287 

    0x9411f84c,// 312 PAY 288 

    0x3f99a3af,// 313 PAY 289 

    0x96c46df2,// 314 PAY 290 

    0x42246c37,// 315 PAY 291 

    0xfed23de3,// 316 PAY 292 

    0x9fa1a7cb,// 317 PAY 293 

    0xa2199d34,// 318 PAY 294 

    0xbf76e2e8,// 319 PAY 295 

    0x428f1e69,// 320 PAY 296 

    0x91b2a809,// 321 PAY 297 

    0x2cf92a15,// 322 PAY 298 

    0xcbafe4ae,// 323 PAY 299 

    0xc8996674,// 324 PAY 300 

    0x34afc052,// 325 PAY 301 

    0xefef8a10,// 326 PAY 302 

    0xed3c405d,// 327 PAY 303 

    0x23eaca19,// 328 PAY 304 

    0xa5ef9c7e,// 329 PAY 305 

    0x9fe10d00,// 330 PAY 306 

/// STA is 1 words. 

/// STA num_pkts       : 85 

/// STA pkt_idx        : 179 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf5 

    0x02ccf555 // 331 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt72_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv !insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0000000f,// 3 SCX   1 

    0x8045284d,// 4 SCX   2 

    0x00004482,// 5 SCX   3 

    0xb344ee08,// 6 SCX   4 

    0x0c1be253,// 7 SCX   5 

    0x220fb0a6,// 8 SCX   6 

    0x2a14e5b5,// 9 SCX   7 

    0xfb340727,// 10 SCX   8 

    0x65641cca,// 11 SCX   9 

    0x43b99d77,// 12 SCX  10 

    0x15486249,// 13 SCX  11 

    0x291b7201,// 14 SCX  12 

    0xd009c5c5,// 15 SCX  13 

    0x18281ce8,// 16 SCX  14 

    0x8bb4d70f,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 105 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 33 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 33 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 8 

/// BFD (ofst+len)cry  : 16 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 68 

    0x00000021,// 18 BFD   1 

    0x00080008,// 19 BFD   2 

    0x00440000,// 20 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 1 

    0x01006000,// 21 MFM   1 

/// BDA is 28 words. 

/// BDA size     is 105 (0x69) 

/// BDA id       is 0xdad4 

    0x0069dad4,// 22 BDA   1 

/// PAY Generic Data size   : 105 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x2e4c8f44,// 23 PAY   1 

    0x845e6a32,// 24 PAY   2 

    0x516e96dc,// 25 PAY   3 

    0x1f270468,// 26 PAY   4 

    0x47ed8be4,// 27 PAY   5 

    0x0ca55f53,// 28 PAY   6 

    0x13460391,// 29 PAY   7 

    0xe257145d,// 30 PAY   8 

    0x3034a7e3,// 31 PAY   9 

    0xb42026b0,// 32 PAY  10 

    0x514ef3a6,// 33 PAY  11 

    0x3d6c22f1,// 34 PAY  12 

    0x8208e2ce,// 35 PAY  13 

    0x083595ec,// 36 PAY  14 

    0xcb2f7c82,// 37 PAY  15 

    0x364ff57f,// 38 PAY  16 

    0xe1078ddd,// 39 PAY  17 

    0xe357313d,// 40 PAY  18 

    0xffd06821,// 41 PAY  19 

    0x258ffb7a,// 42 PAY  20 

    0x40f9295c,// 43 PAY  21 

    0xc15a3818,// 44 PAY  22 

    0x98fcab8c,// 45 PAY  23 

    0x72c722e0,// 46 PAY  24 

    0xf06cefa6,// 47 PAY  25 

    0x8f50159c,// 48 PAY  26 

    0x46000000,// 49 PAY  27 

/// STA is 1 words. 

/// STA num_pkts       : 44 

/// STA pkt_idx        : 45 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x94 

    0x00b5942c // 50 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt73_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x80422853,// 4 SCX   2 

    0x00004200,// 5 SCX   3 

    0xdf92daf3,// 6 SCX   4 

    0xcbf24784,// 7 SCX   5 

    0x9c2a1047,// 8 SCX   6 

    0x2d61c73f,// 9 SCX   7 

    0x49f3bb13,// 10 SCX   8 

    0x583ac0bf,// 11 SCX   9 

    0x69f7a5f3,// 12 SCX  10 

    0x8c8ac7f3,// 13 SCX  11 

    0xc9b352f3,// 14 SCX  12 

    0xf9349f5b,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 429 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 18 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 18 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 8 

/// BFD (ofst+len)cry  : 16 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 404 

    0x00000012,// 16 BFD   1 

    0x00080008,// 17 BFD   2 

    0x01940000,// 18 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 3 

    0x0300c500,// 19 MFM   1 

/// BDA is 109 words. 

/// BDA size     is 429 (0x1ad) 

/// BDA id       is 0xb041 

    0x01adb041,// 20 BDA   1 

/// PAY Generic Data size   : 429 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0xf1149571,// 21 PAY   1 

    0x2a17d39f,// 22 PAY   2 

    0xbf8dfc43,// 23 PAY   3 

    0xb57e4193,// 24 PAY   4 

    0x5582d983,// 25 PAY   5 

    0x52921999,// 26 PAY   6 

    0x705ca01f,// 27 PAY   7 

    0xc4df5b02,// 28 PAY   8 

    0x7eb02e24,// 29 PAY   9 

    0xcd76d848,// 30 PAY  10 

    0x63801ee4,// 31 PAY  11 

    0x35f2ed30,// 32 PAY  12 

    0x6bc4804e,// 33 PAY  13 

    0xd16a3c7c,// 34 PAY  14 

    0x3f01b1c6,// 35 PAY  15 

    0xd7c41b18,// 36 PAY  16 

    0xa79a2569,// 37 PAY  17 

    0x869eedba,// 38 PAY  18 

    0x49a2581b,// 39 PAY  19 

    0x928ccfa9,// 40 PAY  20 

    0xf29ebcf3,// 41 PAY  21 

    0x351f4ca4,// 42 PAY  22 

    0xb7e5d945,// 43 PAY  23 

    0x59066568,// 44 PAY  24 

    0x7bfe764e,// 45 PAY  25 

    0xdbdc9669,// 46 PAY  26 

    0xdc9bec84,// 47 PAY  27 

    0xaebde1f9,// 48 PAY  28 

    0x182a2923,// 49 PAY  29 

    0xc4aa871e,// 50 PAY  30 

    0xb7c19f41,// 51 PAY  31 

    0xf983cd05,// 52 PAY  32 

    0xafad39d5,// 53 PAY  33 

    0x762ba32e,// 54 PAY  34 

    0xb4cc6c2e,// 55 PAY  35 

    0x4714bd3c,// 56 PAY  36 

    0xba54b963,// 57 PAY  37 

    0x613a7520,// 58 PAY  38 

    0x3433113d,// 59 PAY  39 

    0xa8a762a9,// 60 PAY  40 

    0x40749acb,// 61 PAY  41 

    0xfd530b69,// 62 PAY  42 

    0x2a4ee7f3,// 63 PAY  43 

    0xac1874be,// 64 PAY  44 

    0x4beef707,// 65 PAY  45 

    0xc4d18805,// 66 PAY  46 

    0xc4704f37,// 67 PAY  47 

    0xc9be9f82,// 68 PAY  48 

    0x39a274de,// 69 PAY  49 

    0x69de2cf8,// 70 PAY  50 

    0x15c820db,// 71 PAY  51 

    0xb7ccd921,// 72 PAY  52 

    0x8a3479fe,// 73 PAY  53 

    0xe165c96c,// 74 PAY  54 

    0x537ee4f6,// 75 PAY  55 

    0x1c1aee5a,// 76 PAY  56 

    0x4340d233,// 77 PAY  57 

    0x9bec2138,// 78 PAY  58 

    0xab1e15d8,// 79 PAY  59 

    0x8abd0451,// 80 PAY  60 

    0xeaf35917,// 81 PAY  61 

    0x72b0af5e,// 82 PAY  62 

    0x50c444b9,// 83 PAY  63 

    0xb0e82c97,// 84 PAY  64 

    0x922640cb,// 85 PAY  65 

    0x835962fd,// 86 PAY  66 

    0xae522b80,// 87 PAY  67 

    0x8aa64481,// 88 PAY  68 

    0x7ea18dcc,// 89 PAY  69 

    0x98a937bd,// 90 PAY  70 

    0xecc8286f,// 91 PAY  71 

    0x31a4bad9,// 92 PAY  72 

    0x0edd2e6d,// 93 PAY  73 

    0xfd7fc345,// 94 PAY  74 

    0x592b25b9,// 95 PAY  75 

    0x87f23a29,// 96 PAY  76 

    0x3d6883e9,// 97 PAY  77 

    0xf655347c,// 98 PAY  78 

    0xecb9f0aa,// 99 PAY  79 

    0x4076a3fd,// 100 PAY  80 

    0x259078f8,// 101 PAY  81 

    0xbb309c1a,// 102 PAY  82 

    0xcba123c8,// 103 PAY  83 

    0x46e7684e,// 104 PAY  84 

    0x704b8164,// 105 PAY  85 

    0x639e6fb2,// 106 PAY  86 

    0x989a5ae0,// 107 PAY  87 

    0x0fa0d68f,// 108 PAY  88 

    0x8d8e4fb3,// 109 PAY  89 

    0xf92e6e23,// 110 PAY  90 

    0x2355b339,// 111 PAY  91 

    0x36da1cad,// 112 PAY  92 

    0xf46db92f,// 113 PAY  93 

    0x67d90d58,// 114 PAY  94 

    0xf2c75b48,// 115 PAY  95 

    0x1b019897,// 116 PAY  96 

    0x62ff8ee5,// 117 PAY  97 

    0x50f2b0e9,// 118 PAY  98 

    0x1581a56f,// 119 PAY  99 

    0x2c563c95,// 120 PAY 100 

    0x7b1b7473,// 121 PAY 101 

    0x90f3eb88,// 122 PAY 102 

    0x902c577a,// 123 PAY 103 

    0x50e63144,// 124 PAY 104 

    0x4d716264,// 125 PAY 105 

    0x95443caf,// 126 PAY 106 

    0x2bbd243e,// 127 PAY 107 

    0x5c000000,// 128 PAY 108 

/// STA is 1 words. 

/// STA num_pkts       : 218 

/// STA pkt_idx        : 241 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x44 

    0x03c544da // 129 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt74_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x0c 

/// ECH pdu_tag        : 0x00 

    0x000c0000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x8040287e,// 4 SCX   2 

    0x00004200,// 5 SCX   3 

    0xee85b63a,// 6 SCX   4 

    0xa99b7144,// 7 SCX   5 

    0x6d3b500d,// 8 SCX   6 

    0xd526e171,// 9 SCX   7 

    0x81c7d3f4,// 10 SCX   8 

    0xd9c06785,// 11 SCX   9 

    0xb4018431,// 12 SCX  10 

    0xe621acc6,// 13 SCX  11 

    0xdb349c1d,// 14 SCX  12 

    0xa351c28e,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1885 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1800 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1800 

/// BFD lencrypto      : 296 

/// BFD ofstcrypto     : 1376 

/// BFD (ofst+len)cry  : 1672 

/// BFD ofstiv         : 888 

/// BFD ofsticv        : 1864 

    0x00000708,// 16 BFD   1 

    0x05600128,// 17 BFD   2 

    0x07480378,// 18 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c00c0a3,// 19 MFM   1 

    0x2bbac793,// 20 MFM   2 

    0x4f8ffcde,// 21 MFM   3 

    0xee986b3a,// 22 MFM   4 

    0x1f959478,// 23 MFM   5 

    0x43ccf251,// 24 MFM   6 

    0xf3cc131e,// 25 MFM   7 

    0x9fea44a2,// 26 MFM   8 

    0x36fb6d00,// 27 MFM   9 

    0x2543ef1e,// 28 MFM  10 

    0x5a812fd3,// 29 MFM  11 

    0x16cd0d8d,// 30 MFM  12 

    0x22f29644,// 31 MFM  13 

    0xe02e3f43,// 32 MFM  14 

    0x7add57ef,// 33 MFM  15 

    0xed61b422,// 34 MFM  16 

/// BDA is 473 words. 

/// BDA size     is 1885 (0x75d) 

/// BDA id       is 0xa0be 

    0x075da0be,// 35 BDA   1 

/// PAY Generic Data size   : 1885 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x5cd118cb,// 36 PAY   1 

    0x16489fb9,// 37 PAY   2 

    0x0fb3080a,// 38 PAY   3 

    0x9a3de689,// 39 PAY   4 

    0x802e6100,// 40 PAY   5 

    0xce4393a4,// 41 PAY   6 

    0x7abe2e7f,// 42 PAY   7 

    0xe68ac8a4,// 43 PAY   8 

    0xbf4ca502,// 44 PAY   9 

    0x97b083be,// 45 PAY  10 

    0x43aaa914,// 46 PAY  11 

    0xbeab49bf,// 47 PAY  12 

    0xdeab60cd,// 48 PAY  13 

    0x44bf5494,// 49 PAY  14 

    0x0b9c32be,// 50 PAY  15 

    0x4ae85f49,// 51 PAY  16 

    0x0423034f,// 52 PAY  17 

    0xbcc4fc99,// 53 PAY  18 

    0xccdcc124,// 54 PAY  19 

    0xe4f08bb7,// 55 PAY  20 

    0xf0daccf4,// 56 PAY  21 

    0xfd431b65,// 57 PAY  22 

    0xf7a9a11a,// 58 PAY  23 

    0xbecbbf26,// 59 PAY  24 

    0x58fd3a58,// 60 PAY  25 

    0x8b2086da,// 61 PAY  26 

    0x69a05a21,// 62 PAY  27 

    0x93a14140,// 63 PAY  28 

    0x4cd700ae,// 64 PAY  29 

    0x2751f0c4,// 65 PAY  30 

    0x7be8b910,// 66 PAY  31 

    0xf75ae2f2,// 67 PAY  32 

    0x472ff78c,// 68 PAY  33 

    0xcf6716b7,// 69 PAY  34 

    0xca33a4a6,// 70 PAY  35 

    0xc25af151,// 71 PAY  36 

    0xf1619095,// 72 PAY  37 

    0x3ea3c726,// 73 PAY  38 

    0xedaaeb55,// 74 PAY  39 

    0xfa603639,// 75 PAY  40 

    0x1185d6a8,// 76 PAY  41 

    0x9a3eea05,// 77 PAY  42 

    0xa23b9d11,// 78 PAY  43 

    0xbc77c351,// 79 PAY  44 

    0xbc603d67,// 80 PAY  45 

    0xb9718142,// 81 PAY  46 

    0x72dda0e1,// 82 PAY  47 

    0xe0ce5244,// 83 PAY  48 

    0x4a7607a0,// 84 PAY  49 

    0xc2bfa806,// 85 PAY  50 

    0x26e34f55,// 86 PAY  51 

    0x8f7487cc,// 87 PAY  52 

    0x03ebc37d,// 88 PAY  53 

    0xaf7048fb,// 89 PAY  54 

    0x390981bb,// 90 PAY  55 

    0x2025f23f,// 91 PAY  56 

    0x1d96a86a,// 92 PAY  57 

    0xf1d75e93,// 93 PAY  58 

    0x70d693ea,// 94 PAY  59 

    0xa366e9fd,// 95 PAY  60 

    0x64a08016,// 96 PAY  61 

    0x063deba1,// 97 PAY  62 

    0x370fa7ef,// 98 PAY  63 

    0x736b7d55,// 99 PAY  64 

    0xf99b23a2,// 100 PAY  65 

    0x51915110,// 101 PAY  66 

    0x42e32910,// 102 PAY  67 

    0x6f0c1fb9,// 103 PAY  68 

    0x9d2997cb,// 104 PAY  69 

    0x4e0ff9e0,// 105 PAY  70 

    0x233b0bda,// 106 PAY  71 

    0xd38f2360,// 107 PAY  72 

    0xc613f025,// 108 PAY  73 

    0x436c56d1,// 109 PAY  74 

    0x400cb8e5,// 110 PAY  75 

    0x690b9f67,// 111 PAY  76 

    0x96f6c2b3,// 112 PAY  77 

    0xdc7cc3f8,// 113 PAY  78 

    0xde71f785,// 114 PAY  79 

    0x67640147,// 115 PAY  80 

    0xa782817f,// 116 PAY  81 

    0x8c3b1ea1,// 117 PAY  82 

    0x153c4dd3,// 118 PAY  83 

    0x98799afa,// 119 PAY  84 

    0xced99272,// 120 PAY  85 

    0x3fef0fd3,// 121 PAY  86 

    0x06067513,// 122 PAY  87 

    0x1e45d32c,// 123 PAY  88 

    0xd00bc1d0,// 124 PAY  89 

    0x77a37f85,// 125 PAY  90 

    0x41d138fa,// 126 PAY  91 

    0xcef437a6,// 127 PAY  92 

    0x19dbbc2c,// 128 PAY  93 

    0x98e4156a,// 129 PAY  94 

    0x2e4bb72b,// 130 PAY  95 

    0xcf4d4a70,// 131 PAY  96 

    0xaedbe741,// 132 PAY  97 

    0x544c6254,// 133 PAY  98 

    0x9c67e2f4,// 134 PAY  99 

    0x5535641d,// 135 PAY 100 

    0x2594b87d,// 136 PAY 101 

    0x5ce8cb2e,// 137 PAY 102 

    0x09eb1073,// 138 PAY 103 

    0x84179727,// 139 PAY 104 

    0xa8a05491,// 140 PAY 105 

    0x2e26c25d,// 141 PAY 106 

    0x30eb60b7,// 142 PAY 107 

    0xe1fe83e8,// 143 PAY 108 

    0xeea12ae5,// 144 PAY 109 

    0x4ba2f204,// 145 PAY 110 

    0xcf46af54,// 146 PAY 111 

    0x7b673d7f,// 147 PAY 112 

    0x34e5ca05,// 148 PAY 113 

    0xb218a4e7,// 149 PAY 114 

    0x96f2d1a6,// 150 PAY 115 

    0xc848785f,// 151 PAY 116 

    0x557749ac,// 152 PAY 117 

    0xa4f42d5c,// 153 PAY 118 

    0xff464575,// 154 PAY 119 

    0x34ceadcb,// 155 PAY 120 

    0x3f791e63,// 156 PAY 121 

    0xb7deac31,// 157 PAY 122 

    0x4dda39d9,// 158 PAY 123 

    0x68411e3c,// 159 PAY 124 

    0xf271b756,// 160 PAY 125 

    0x81eb8ca0,// 161 PAY 126 

    0xbfdd9c48,// 162 PAY 127 

    0x921e1c2f,// 163 PAY 128 

    0xa72ab4dd,// 164 PAY 129 

    0x5f0f0d35,// 165 PAY 130 

    0xf45d6678,// 166 PAY 131 

    0x38d25461,// 167 PAY 132 

    0x9c80b547,// 168 PAY 133 

    0x40652c6b,// 169 PAY 134 

    0x41975b31,// 170 PAY 135 

    0x3f86bafb,// 171 PAY 136 

    0x61785b62,// 172 PAY 137 

    0x90c5bc51,// 173 PAY 138 

    0x63cf25a3,// 174 PAY 139 

    0xb7c6a057,// 175 PAY 140 

    0x4c7598fc,// 176 PAY 141 

    0x257fdd9e,// 177 PAY 142 

    0x030f4e13,// 178 PAY 143 

    0x003581fb,// 179 PAY 144 

    0x49ac8389,// 180 PAY 145 

    0x55fa427d,// 181 PAY 146 

    0xb4ec7ba8,// 182 PAY 147 

    0xb7f6f4f5,// 183 PAY 148 

    0x4f21a5b0,// 184 PAY 149 

    0xe53b4a94,// 185 PAY 150 

    0x87ac8444,// 186 PAY 151 

    0xefce69f7,// 187 PAY 152 

    0xcb3edfed,// 188 PAY 153 

    0xab489494,// 189 PAY 154 

    0xd575dc07,// 190 PAY 155 

    0x60360898,// 191 PAY 156 

    0x197eea18,// 192 PAY 157 

    0xe49ce216,// 193 PAY 158 

    0xa3eec54f,// 194 PAY 159 

    0x3fe70785,// 195 PAY 160 

    0x8af5fd68,// 196 PAY 161 

    0x2dfff093,// 197 PAY 162 

    0x1886bb99,// 198 PAY 163 

    0xc5cbbba2,// 199 PAY 164 

    0xa92c68c5,// 200 PAY 165 

    0xc4436048,// 201 PAY 166 

    0xa4637da6,// 202 PAY 167 

    0x9e316e59,// 203 PAY 168 

    0x05997632,// 204 PAY 169 

    0x8fb7c7df,// 205 PAY 170 

    0x8299ef87,// 206 PAY 171 

    0x5760ea36,// 207 PAY 172 

    0x655fa70b,// 208 PAY 173 

    0x8ba83105,// 209 PAY 174 

    0x4f3a60a1,// 210 PAY 175 

    0xd4aab2eb,// 211 PAY 176 

    0x1bf553fc,// 212 PAY 177 

    0x757fc414,// 213 PAY 178 

    0x2f3cec51,// 214 PAY 179 

    0x0fecae9a,// 215 PAY 180 

    0x60b66947,// 216 PAY 181 

    0x2267959a,// 217 PAY 182 

    0x3eecf956,// 218 PAY 183 

    0xbc926fa1,// 219 PAY 184 

    0xe3d37da7,// 220 PAY 185 

    0x74573fdd,// 221 PAY 186 

    0xe5583c6c,// 222 PAY 187 

    0x7c3ff67a,// 223 PAY 188 

    0xd2aa53f8,// 224 PAY 189 

    0xdbfc7653,// 225 PAY 190 

    0x849eb8c2,// 226 PAY 191 

    0x9261c6c6,// 227 PAY 192 

    0x01c379dc,// 228 PAY 193 

    0xad3048b1,// 229 PAY 194 

    0x0d6a0fa4,// 230 PAY 195 

    0xeba60c10,// 231 PAY 196 

    0x764ebdba,// 232 PAY 197 

    0xec3cb7cc,// 233 PAY 198 

    0x5c896468,// 234 PAY 199 

    0x1ccd07b6,// 235 PAY 200 

    0xfa588fa8,// 236 PAY 201 

    0xb261a581,// 237 PAY 202 

    0xf4d1a90a,// 238 PAY 203 

    0xeece991f,// 239 PAY 204 

    0xf9c54678,// 240 PAY 205 

    0x87d239ee,// 241 PAY 206 

    0xa2430abe,// 242 PAY 207 

    0x22a195f1,// 243 PAY 208 

    0x5c2ddc53,// 244 PAY 209 

    0x597e09e5,// 245 PAY 210 

    0xa5bc0319,// 246 PAY 211 

    0x194cf783,// 247 PAY 212 

    0x09b1d463,// 248 PAY 213 

    0xca956950,// 249 PAY 214 

    0xfcc7bfc3,// 250 PAY 215 

    0x4eac2c02,// 251 PAY 216 

    0x549b2c1b,// 252 PAY 217 

    0x07c11659,// 253 PAY 218 

    0xacf809ce,// 254 PAY 219 

    0x6be8b89a,// 255 PAY 220 

    0x8b1e799e,// 256 PAY 221 

    0x3ae1f2f6,// 257 PAY 222 

    0x7e8f7e12,// 258 PAY 223 

    0x06d9baa2,// 259 PAY 224 

    0x86c914a9,// 260 PAY 225 

    0xb33678b1,// 261 PAY 226 

    0x59298f87,// 262 PAY 227 

    0xa1c56593,// 263 PAY 228 

    0x1bec1270,// 264 PAY 229 

    0x25c44001,// 265 PAY 230 

    0x6f8e81d2,// 266 PAY 231 

    0xce9e2a32,// 267 PAY 232 

    0x35fc45ce,// 268 PAY 233 

    0x43c89c5a,// 269 PAY 234 

    0x3a7c85ce,// 270 PAY 235 

    0xd3db6328,// 271 PAY 236 

    0x4e87e803,// 272 PAY 237 

    0x0ebdda92,// 273 PAY 238 

    0x03a33cfc,// 274 PAY 239 

    0xb832e011,// 275 PAY 240 

    0x0d4c1d7e,// 276 PAY 241 

    0x1e202416,// 277 PAY 242 

    0xc5a4951a,// 278 PAY 243 

    0x584b01a4,// 279 PAY 244 

    0x9c5d70fc,// 280 PAY 245 

    0x486750e5,// 281 PAY 246 

    0xed4ddd57,// 282 PAY 247 

    0x01ab6949,// 283 PAY 248 

    0x123b734b,// 284 PAY 249 

    0xd37a76f5,// 285 PAY 250 

    0x7699881f,// 286 PAY 251 

    0x9df0fde9,// 287 PAY 252 

    0x693a2ecf,// 288 PAY 253 

    0x6c36e477,// 289 PAY 254 

    0x66ff2416,// 290 PAY 255 

    0x2075354b,// 291 PAY 256 

    0x1f51569e,// 292 PAY 257 

    0x088ac978,// 293 PAY 258 

    0xfd508690,// 294 PAY 259 

    0x7b098068,// 295 PAY 260 

    0x53085c4e,// 296 PAY 261 

    0xc09a210a,// 297 PAY 262 

    0x3fd5cf21,// 298 PAY 263 

    0x94414940,// 299 PAY 264 

    0x084dfaed,// 300 PAY 265 

    0x7ade8c5f,// 301 PAY 266 

    0x47ae005f,// 302 PAY 267 

    0x8b08cd18,// 303 PAY 268 

    0xe7747e41,// 304 PAY 269 

    0xc434a1a7,// 305 PAY 270 

    0x4be3b573,// 306 PAY 271 

    0x178a4e8b,// 307 PAY 272 

    0xf04a717d,// 308 PAY 273 

    0x41e2c8a8,// 309 PAY 274 

    0x18782cab,// 310 PAY 275 

    0xc4d1fa5b,// 311 PAY 276 

    0x3c9ccfe6,// 312 PAY 277 

    0xf96be32c,// 313 PAY 278 

    0x94cb32c5,// 314 PAY 279 

    0x914d0a12,// 315 PAY 280 

    0x5e746b05,// 316 PAY 281 

    0xa188f8eb,// 317 PAY 282 

    0xed97b84c,// 318 PAY 283 

    0x7e191d23,// 319 PAY 284 

    0xe01e2df2,// 320 PAY 285 

    0xa1a77f68,// 321 PAY 286 

    0x0852fd48,// 322 PAY 287 

    0xf3523617,// 323 PAY 288 

    0x5108f46f,// 324 PAY 289 

    0x7c5e737e,// 325 PAY 290 

    0x59987233,// 326 PAY 291 

    0x777478a4,// 327 PAY 292 

    0x1034605a,// 328 PAY 293 

    0xb796e67e,// 329 PAY 294 

    0x11ab7e7a,// 330 PAY 295 

    0xb23bda64,// 331 PAY 296 

    0x0d81845d,// 332 PAY 297 

    0x0e54bf65,// 333 PAY 298 

    0x180eddc0,// 334 PAY 299 

    0x4357768e,// 335 PAY 300 

    0x13765849,// 336 PAY 301 

    0x26fd3949,// 337 PAY 302 

    0xd5d30d73,// 338 PAY 303 

    0xac3b2c22,// 339 PAY 304 

    0x253ee495,// 340 PAY 305 

    0xbb7689e4,// 341 PAY 306 

    0xfcfd595d,// 342 PAY 307 

    0xcd1055bc,// 343 PAY 308 

    0xed9bc390,// 344 PAY 309 

    0xf5ed6739,// 345 PAY 310 

    0x5cb92cf2,// 346 PAY 311 

    0x33520483,// 347 PAY 312 

    0x9dbbb7fb,// 348 PAY 313 

    0x985a13b9,// 349 PAY 314 

    0x50645dc6,// 350 PAY 315 

    0xe5752864,// 351 PAY 316 

    0x5da47299,// 352 PAY 317 

    0x113a2391,// 353 PAY 318 

    0xc3a565ff,// 354 PAY 319 

    0x046b34b3,// 355 PAY 320 

    0x2dc89e23,// 356 PAY 321 

    0xb5fb9ddb,// 357 PAY 322 

    0xc1ac1bc4,// 358 PAY 323 

    0x46a345ea,// 359 PAY 324 

    0x6f42c6ce,// 360 PAY 325 

    0x54ee0304,// 361 PAY 326 

    0x9c45443e,// 362 PAY 327 

    0xe24c4d24,// 363 PAY 328 

    0x9b588071,// 364 PAY 329 

    0x0b5aeaf5,// 365 PAY 330 

    0x6c056462,// 366 PAY 331 

    0x22abaf9f,// 367 PAY 332 

    0x38e66dbb,// 368 PAY 333 

    0x3167cd72,// 369 PAY 334 

    0x21094064,// 370 PAY 335 

    0xf3a46c21,// 371 PAY 336 

    0x968cbe51,// 372 PAY 337 

    0xa323ea3b,// 373 PAY 338 

    0xacc772f3,// 374 PAY 339 

    0x63bc447f,// 375 PAY 340 

    0x2bdcc64d,// 376 PAY 341 

    0xdc20f80f,// 377 PAY 342 

    0x611e0178,// 378 PAY 343 

    0x1f3aa337,// 379 PAY 344 

    0x30994372,// 380 PAY 345 

    0x404e1edb,// 381 PAY 346 

    0x2066d28c,// 382 PAY 347 

    0x2b78c5ad,// 383 PAY 348 

    0x3dc18e27,// 384 PAY 349 

    0xd7d15ada,// 385 PAY 350 

    0x404a9822,// 386 PAY 351 

    0x5d7e67d2,// 387 PAY 352 

    0x60f7387c,// 388 PAY 353 

    0xe4057682,// 389 PAY 354 

    0x5fc7f468,// 390 PAY 355 

    0xd012b6cf,// 391 PAY 356 

    0x13b2fe17,// 392 PAY 357 

    0x22f10c32,// 393 PAY 358 

    0xe3a5e304,// 394 PAY 359 

    0x0eeaa237,// 395 PAY 360 

    0x0b250537,// 396 PAY 361 

    0x3f6d4884,// 397 PAY 362 

    0xfa6d06ef,// 398 PAY 363 

    0xe1ad3cc3,// 399 PAY 364 

    0x02978986,// 400 PAY 365 

    0x49598ee0,// 401 PAY 366 

    0x8926231c,// 402 PAY 367 

    0x2167d42a,// 403 PAY 368 

    0xa29246b4,// 404 PAY 369 

    0x15ac9b2a,// 405 PAY 370 

    0xa1ac528e,// 406 PAY 371 

    0xdd4ed76d,// 407 PAY 372 

    0x4d764de5,// 408 PAY 373 

    0x70b9dbcd,// 409 PAY 374 

    0x3e275250,// 410 PAY 375 

    0x7a9420d8,// 411 PAY 376 

    0xc4b6e3ee,// 412 PAY 377 

    0xcecae945,// 413 PAY 378 

    0x47e69402,// 414 PAY 379 

    0x8993c947,// 415 PAY 380 

    0x454f5fca,// 416 PAY 381 

    0x6b0ab73d,// 417 PAY 382 

    0x9967f03e,// 418 PAY 383 

    0xdff6fdfc,// 419 PAY 384 

    0xcad1a29f,// 420 PAY 385 

    0xedb2a8ce,// 421 PAY 386 

    0xf8c4a658,// 422 PAY 387 

    0x036d5165,// 423 PAY 388 

    0x3c6c1b32,// 424 PAY 389 

    0xd6a96d29,// 425 PAY 390 

    0xf4a1af02,// 426 PAY 391 

    0x96f137ec,// 427 PAY 392 

    0xb19bcb1a,// 428 PAY 393 

    0xc87207e7,// 429 PAY 394 

    0x965c5bf5,// 430 PAY 395 

    0xaaf7ab23,// 431 PAY 396 

    0xdb21a25a,// 432 PAY 397 

    0x72fcd373,// 433 PAY 398 

    0x658de58a,// 434 PAY 399 

    0x79a6bd08,// 435 PAY 400 

    0xe5411a01,// 436 PAY 401 

    0xbc62bd00,// 437 PAY 402 

    0xcb282fc1,// 438 PAY 403 

    0xd9d34caf,// 439 PAY 404 

    0xc5abed15,// 440 PAY 405 

    0xbc01de74,// 441 PAY 406 

    0xe98b53e9,// 442 PAY 407 

    0xee004c72,// 443 PAY 408 

    0xacfbe0ed,// 444 PAY 409 

    0x9df4da64,// 445 PAY 410 

    0x218b5c5d,// 446 PAY 411 

    0x7b31afe4,// 447 PAY 412 

    0x43a45860,// 448 PAY 413 

    0x14ba8f48,// 449 PAY 414 

    0x6fab9b79,// 450 PAY 415 

    0x7d7edaa3,// 451 PAY 416 

    0xb3dfa7d9,// 452 PAY 417 

    0x65e137fa,// 453 PAY 418 

    0x7b2ea867,// 454 PAY 419 

    0xf27064b6,// 455 PAY 420 

    0x5a1e1a92,// 456 PAY 421 

    0x00dc00b1,// 457 PAY 422 

    0x8f216257,// 458 PAY 423 

    0xa0e3d751,// 459 PAY 424 

    0x5be66629,// 460 PAY 425 

    0xa81dd09a,// 461 PAY 426 

    0x7c5352f4,// 462 PAY 427 

    0xfe11c291,// 463 PAY 428 

    0x1ab0d8fc,// 464 PAY 429 

    0xbdbfac1c,// 465 PAY 430 

    0x24dfadea,// 466 PAY 431 

    0x1284b541,// 467 PAY 432 

    0xc8b4f65e,// 468 PAY 433 

    0x2eb70400,// 469 PAY 434 

    0x207c48d2,// 470 PAY 435 

    0x5d2875e1,// 471 PAY 436 

    0x6f283785,// 472 PAY 437 

    0x830de6f7,// 473 PAY 438 

    0xef0c99c4,// 474 PAY 439 

    0x43a05b6a,// 475 PAY 440 

    0x24aa0f2a,// 476 PAY 441 

    0x0ea68045,// 477 PAY 442 

    0xe8e5dce7,// 478 PAY 443 

    0xeb9fb12d,// 479 PAY 444 

    0xdc9d5720,// 480 PAY 445 

    0xfff8abe7,// 481 PAY 446 

    0xb753aee6,// 482 PAY 447 

    0x01207b90,// 483 PAY 448 

    0x84530973,// 484 PAY 449 

    0x072838b3,// 485 PAY 450 

    0x777a9d5e,// 486 PAY 451 

    0x6b46a34e,// 487 PAY 452 

    0xb4abaddf,// 488 PAY 453 

    0xd3e49609,// 489 PAY 454 

    0x12555f7f,// 490 PAY 455 

    0x572fb596,// 491 PAY 456 

    0x1a230aa1,// 492 PAY 457 

    0x8ee60f57,// 493 PAY 458 

    0xa1404a1e,// 494 PAY 459 

    0x4a53e79a,// 495 PAY 460 

    0x02d908a2,// 496 PAY 461 

    0x44210caf,// 497 PAY 462 

    0x934b7306,// 498 PAY 463 

    0x72c85721,// 499 PAY 464 

    0x7d0ed246,// 500 PAY 465 

    0x5b3f079d,// 501 PAY 466 

    0x6710c495,// 502 PAY 467 

    0xc86c52c8,// 503 PAY 468 

    0x39c86f69,// 504 PAY 469 

    0x6e01f1e7,// 505 PAY 470 

    0x1b820798,// 506 PAY 471 

    0x69000000,// 507 PAY 472 

/// STA is 1 words. 

/// STA num_pkts       : 111 

/// STA pkt_idx        : 124 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4d 

    0x01f04d6f // 508 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt75_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x02 

/// ECH pdu_tag        : 0x00 

    0x00020000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0000000f,// 3 SCX   1 

    0x80462898,// 4 SCX   2 

    0x00003482,// 5 SCX   3 

    0x032691ce,// 6 SCX   4 

    0x61556187,// 7 SCX   5 

    0x99f72ba2,// 8 SCX   6 

    0x1d982586,// 9 SCX   7 

    0x5edc1e2f,// 10 SCX   8 

    0x684aa6b4,// 11 SCX   9 

    0xb597d8b1,// 12 SCX  10 

    0x47af6c14,// 13 SCX  11 

    0x7111cb4b,// 14 SCX  12 

    0x1008de2b,// 15 SCX  13 

    0xfa3a572b,// 16 SCX  14 

    0x70791114,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 195 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 53 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 53 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 40 

/// BFD (ofst+len)cry  : 48 

/// BFD ofstiv         : 28 

/// BFD ofsticv        : 96 

    0x00000035,// 18 BFD   1 

    0x00280008,// 19 BFD   2 

    0x0060001c,// 20 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : b 

    0x0b00e914,// 21 MFM   1 

    0xabd89020,// 22 MFM   2 

/// BDA is 50 words. 

/// BDA size     is 195 (0xc3) 

/// BDA id       is 0xec5d 

    0x00c3ec5d,// 23 BDA   1 

/// PAY Generic Data size   : 195 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x94f648b0,// 24 PAY   1 

    0x6b7ad3d1,// 25 PAY   2 

    0x0396f6c2,// 26 PAY   3 

    0x9c2a26d3,// 27 PAY   4 

    0x36c20979,// 28 PAY   5 

    0x81df17a3,// 29 PAY   6 

    0x2dc338c8,// 30 PAY   7 

    0x28371ae6,// 31 PAY   8 

    0xf6d069de,// 32 PAY   9 

    0x543d4d07,// 33 PAY  10 

    0x61c94804,// 34 PAY  11 

    0xf9b1e40d,// 35 PAY  12 

    0x83120e96,// 36 PAY  13 

    0x1ff63663,// 37 PAY  14 

    0xb84e0529,// 38 PAY  15 

    0x7ae8a415,// 39 PAY  16 

    0xeb9555a2,// 40 PAY  17 

    0x3651f616,// 41 PAY  18 

    0xa6ad2f01,// 42 PAY  19 

    0xee30f979,// 43 PAY  20 

    0xc810231d,// 44 PAY  21 

    0xaeaa55d3,// 45 PAY  22 

    0xb72b4958,// 46 PAY  23 

    0x415ccb89,// 47 PAY  24 

    0x95fc3872,// 48 PAY  25 

    0xdde06f1f,// 49 PAY  26 

    0xe52a13f1,// 50 PAY  27 

    0x90fefbb7,// 51 PAY  28 

    0xa6fe71e0,// 52 PAY  29 

    0x405abc36,// 53 PAY  30 

    0x0ad6e8ed,// 54 PAY  31 

    0x31ec6605,// 55 PAY  32 

    0x27f7be31,// 56 PAY  33 

    0x859d2bdb,// 57 PAY  34 

    0xdc92d336,// 58 PAY  35 

    0x6938d1c3,// 59 PAY  36 

    0xef76a541,// 60 PAY  37 

    0xd86df547,// 61 PAY  38 

    0xdea17f8c,// 62 PAY  39 

    0x6425cc81,// 63 PAY  40 

    0x84cdd12e,// 64 PAY  41 

    0xeeed8270,// 65 PAY  42 

    0xe56331f0,// 66 PAY  43 

    0xfea4f5d1,// 67 PAY  44 

    0xaf293ce6,// 68 PAY  45 

    0xe97c44de,// 69 PAY  46 

    0xcd7f4f08,// 70 PAY  47 

    0x2f64b546,// 71 PAY  48 

    0xf6aa6900,// 72 PAY  49 

/// STA is 1 words. 

/// STA num_pkts       : 147 

/// STA pkt_idx        : 180 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x96 

    0x02d09693 // 73 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt76_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x8040283a,// 4 SCX   2 

    0x00001400,// 5 SCX   3 

    0x90241325,// 6 SCX   4 

    0x785e483b,// 7 SCX   5 

    0x5c936625,// 8 SCX   6 

    0x51525c06,// 9 SCX   7 

    0xf4abe146,// 10 SCX   8 

    0x176e0403,// 11 SCX   9 

    0xed87a02c,// 12 SCX  10 

    0xd9e503bf,// 13 SCX  11 

    0xdc6c58c3,// 14 SCX  12 

    0xe3e7d8af,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1467 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 352 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 352 

/// BFD lencrypto      : 192 

/// BFD ofstcrypto     : 28 

/// BFD (ofst+len)cry  : 220 

/// BFD ofstiv         : 4 

/// BFD ofsticv        : 612 

    0x00000160,// 16 BFD   1 

    0x001c00c0,// 17 BFD   2 

    0x02640004,// 18 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : d 

    0x0d007b73,// 19 MFM   1 

    0xf29d8b47,// 20 MFM   2 

    0x50000000,// 21 MFM   3 

/// BDA is 368 words. 

/// BDA size     is 1467 (0x5bb) 

/// BDA id       is 0xd76a 

    0x05bbd76a,// 22 BDA   1 

/// PAY Generic Data size   : 1467 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xdcb71168,// 23 PAY   1 

    0xbab8f1bb,// 24 PAY   2 

    0x57d5ee01,// 25 PAY   3 

    0x625ff6e4,// 26 PAY   4 

    0x310f9664,// 27 PAY   5 

    0x7447cbf7,// 28 PAY   6 

    0xa517698b,// 29 PAY   7 

    0x702a1f6c,// 30 PAY   8 

    0xd291c3df,// 31 PAY   9 

    0x4e768413,// 32 PAY  10 

    0x120668e4,// 33 PAY  11 

    0x3ca13629,// 34 PAY  12 

    0x4aeb471a,// 35 PAY  13 

    0x4df25be9,// 36 PAY  14 

    0x83dccf1e,// 37 PAY  15 

    0x7a1bb8a4,// 38 PAY  16 

    0xa68c9a7e,// 39 PAY  17 

    0x12e0bd45,// 40 PAY  18 

    0x83244464,// 41 PAY  19 

    0x76d53bc2,// 42 PAY  20 

    0xb189cc6a,// 43 PAY  21 

    0x014f47d0,// 44 PAY  22 

    0x3eaac55f,// 45 PAY  23 

    0x1ad1b453,// 46 PAY  24 

    0xaf2617e7,// 47 PAY  25 

    0xabef9cc2,// 48 PAY  26 

    0x58b26c9f,// 49 PAY  27 

    0x17521ee2,// 50 PAY  28 

    0x9e8cb422,// 51 PAY  29 

    0xb51a3ca9,// 52 PAY  30 

    0x12331b25,// 53 PAY  31 

    0x9b099619,// 54 PAY  32 

    0xd7d2d750,// 55 PAY  33 

    0x0b80f7c7,// 56 PAY  34 

    0xd20c11ec,// 57 PAY  35 

    0xb75b7594,// 58 PAY  36 

    0x071547d2,// 59 PAY  37 

    0x8b51a593,// 60 PAY  38 

    0x2e9fa92f,// 61 PAY  39 

    0x646edc06,// 62 PAY  40 

    0xb36d689c,// 63 PAY  41 

    0x97a97d0d,// 64 PAY  42 

    0x2c4129dd,// 65 PAY  43 

    0x7a1b1835,// 66 PAY  44 

    0x6fc6b399,// 67 PAY  45 

    0x595c1df0,// 68 PAY  46 

    0x67d52694,// 69 PAY  47 

    0xdc4e503c,// 70 PAY  48 

    0xa1c519d8,// 71 PAY  49 

    0xdd3c144f,// 72 PAY  50 

    0x1ddef0c7,// 73 PAY  51 

    0x50d6117e,// 74 PAY  52 

    0x1f0a4122,// 75 PAY  53 

    0x515c923d,// 76 PAY  54 

    0x315dc996,// 77 PAY  55 

    0x35e2be80,// 78 PAY  56 

    0x506ada4a,// 79 PAY  57 

    0xa89d856e,// 80 PAY  58 

    0x3ed855fc,// 81 PAY  59 

    0xc3bf1397,// 82 PAY  60 

    0xb5dba28a,// 83 PAY  61 

    0x056a8e30,// 84 PAY  62 

    0x937d479e,// 85 PAY  63 

    0x152e9962,// 86 PAY  64 

    0x9b4b158d,// 87 PAY  65 

    0x0b9896b2,// 88 PAY  66 

    0x2da92449,// 89 PAY  67 

    0x7bfb15cf,// 90 PAY  68 

    0x157acbc4,// 91 PAY  69 

    0x44c6e716,// 92 PAY  70 

    0x9ea8e637,// 93 PAY  71 

    0x11c8cb31,// 94 PAY  72 

    0xe4a0b65c,// 95 PAY  73 

    0x115e351f,// 96 PAY  74 

    0x696ae8a6,// 97 PAY  75 

    0x879d449b,// 98 PAY  76 

    0x1b109e06,// 99 PAY  77 

    0xa2a2db90,// 100 PAY  78 

    0x462f6625,// 101 PAY  79 

    0x2a6d7556,// 102 PAY  80 

    0xad789c3e,// 103 PAY  81 

    0x4d790bd0,// 104 PAY  82 

    0xc981d5e9,// 105 PAY  83 

    0x4b719fdf,// 106 PAY  84 

    0xbdcd798e,// 107 PAY  85 

    0x5d1e3ca2,// 108 PAY  86 

    0x40f9a928,// 109 PAY  87 

    0xc390bcdd,// 110 PAY  88 

    0x28e09484,// 111 PAY  89 

    0x43e5ac60,// 112 PAY  90 

    0x4b3ae0de,// 113 PAY  91 

    0xf22eb863,// 114 PAY  92 

    0x3ea6700e,// 115 PAY  93 

    0x5a3b5439,// 116 PAY  94 

    0x7cc8b60f,// 117 PAY  95 

    0xc621085b,// 118 PAY  96 

    0xaf12bf5d,// 119 PAY  97 

    0xcade557b,// 120 PAY  98 

    0xc8d67b64,// 121 PAY  99 

    0x12cdafa1,// 122 PAY 100 

    0x3f687664,// 123 PAY 101 

    0x8053d026,// 124 PAY 102 

    0xc099092e,// 125 PAY 103 

    0x8fbd0cc5,// 126 PAY 104 

    0x5c4ffda1,// 127 PAY 105 

    0x6cad20b4,// 128 PAY 106 

    0xda78d895,// 129 PAY 107 

    0x6566ca53,// 130 PAY 108 

    0x2164dcef,// 131 PAY 109 

    0x7af3b123,// 132 PAY 110 

    0x7fae9c51,// 133 PAY 111 

    0x8591cd70,// 134 PAY 112 

    0x3820fb8e,// 135 PAY 113 

    0x78f1b4a3,// 136 PAY 114 

    0x079e2de7,// 137 PAY 115 

    0xca9431cb,// 138 PAY 116 

    0xb2866964,// 139 PAY 117 

    0xdcf8554b,// 140 PAY 118 

    0xa1d36996,// 141 PAY 119 

    0xa4c631a4,// 142 PAY 120 

    0xd1ecd319,// 143 PAY 121 

    0xff6d64a4,// 144 PAY 122 

    0x168d8bba,// 145 PAY 123 

    0x94fbb9b3,// 146 PAY 124 

    0xc23dfbc0,// 147 PAY 125 

    0xf715b97d,// 148 PAY 126 

    0xe7b29d9f,// 149 PAY 127 

    0x8b1d5ca0,// 150 PAY 128 

    0x3371df66,// 151 PAY 129 

    0xcdacaca4,// 152 PAY 130 

    0x27ba2077,// 153 PAY 131 

    0x1d99d0d5,// 154 PAY 132 

    0x8363f120,// 155 PAY 133 

    0xeffcd87f,// 156 PAY 134 

    0xea2679a9,// 157 PAY 135 

    0x52b8a574,// 158 PAY 136 

    0xc610e4e6,// 159 PAY 137 

    0x19eec8d5,// 160 PAY 138 

    0x201297c8,// 161 PAY 139 

    0xcadf3fb6,// 162 PAY 140 

    0x6276c27a,// 163 PAY 141 

    0x84544b12,// 164 PAY 142 

    0x8300bd45,// 165 PAY 143 

    0x4a369fc3,// 166 PAY 144 

    0x79a703f5,// 167 PAY 145 

    0x988fd9fe,// 168 PAY 146 

    0x1c8ede8a,// 169 PAY 147 

    0xd789560e,// 170 PAY 148 

    0x1d33b639,// 171 PAY 149 

    0xbdcc26c8,// 172 PAY 150 

    0x9300ccce,// 173 PAY 151 

    0x9495d212,// 174 PAY 152 

    0x82fa706d,// 175 PAY 153 

    0x4254520e,// 176 PAY 154 

    0xd312c692,// 177 PAY 155 

    0x9efd457c,// 178 PAY 156 

    0xc807d293,// 179 PAY 157 

    0x1e878f35,// 180 PAY 158 

    0x1168e676,// 181 PAY 159 

    0xf3d8c292,// 182 PAY 160 

    0x146ecb79,// 183 PAY 161 

    0xddcbbf52,// 184 PAY 162 

    0x4c5e5a74,// 185 PAY 163 

    0x0b529dbf,// 186 PAY 164 

    0x7ebc9f61,// 187 PAY 165 

    0xb7dee152,// 188 PAY 166 

    0x6c9e37f3,// 189 PAY 167 

    0x708b444d,// 190 PAY 168 

    0xc7ec48b5,// 191 PAY 169 

    0x01a1db0b,// 192 PAY 170 

    0x045e5bc9,// 193 PAY 171 

    0xa03714c9,// 194 PAY 172 

    0x2e01edfc,// 195 PAY 173 

    0x9cb882e7,// 196 PAY 174 

    0x0befb83b,// 197 PAY 175 

    0x4dee41fd,// 198 PAY 176 

    0x0a57dc0d,// 199 PAY 177 

    0x3c01a48e,// 200 PAY 178 

    0xf85a9c08,// 201 PAY 179 

    0x9a023edf,// 202 PAY 180 

    0x4eb7f442,// 203 PAY 181 

    0x3e97151d,// 204 PAY 182 

    0x6115f9f3,// 205 PAY 183 

    0x080ea43d,// 206 PAY 184 

    0x573a408a,// 207 PAY 185 

    0x08241f9d,// 208 PAY 186 

    0x0c1ba14a,// 209 PAY 187 

    0x4f18cd0d,// 210 PAY 188 

    0xbfeb67cc,// 211 PAY 189 

    0xe77664a3,// 212 PAY 190 

    0x534e9848,// 213 PAY 191 

    0xaaf72eb4,// 214 PAY 192 

    0x2f85cdc9,// 215 PAY 193 

    0x3192b929,// 216 PAY 194 

    0xbd14df0a,// 217 PAY 195 

    0x404a3993,// 218 PAY 196 

    0xafb80388,// 219 PAY 197 

    0x1c182eca,// 220 PAY 198 

    0x40b84ebb,// 221 PAY 199 

    0xdd907731,// 222 PAY 200 

    0x608a08c5,// 223 PAY 201 

    0x8dafd6ed,// 224 PAY 202 

    0x142f045c,// 225 PAY 203 

    0xcdcbed1e,// 226 PAY 204 

    0xedf6a461,// 227 PAY 205 

    0x65891603,// 228 PAY 206 

    0x454f1f0b,// 229 PAY 207 

    0x7f503409,// 230 PAY 208 

    0xfbde7e5f,// 231 PAY 209 

    0x935230fe,// 232 PAY 210 

    0x01277f0b,// 233 PAY 211 

    0x6efddc10,// 234 PAY 212 

    0x830a7469,// 235 PAY 213 

    0xb829f93a,// 236 PAY 214 

    0x28255fb1,// 237 PAY 215 

    0x7c887d1b,// 238 PAY 216 

    0x5c75c1cb,// 239 PAY 217 

    0xa335874d,// 240 PAY 218 

    0xd758d5c3,// 241 PAY 219 

    0xff1a2c86,// 242 PAY 220 

    0x92dd1480,// 243 PAY 221 

    0x81d412a6,// 244 PAY 222 

    0x2cc85308,// 245 PAY 223 

    0x812f2d65,// 246 PAY 224 

    0x80734e93,// 247 PAY 225 

    0x9b75e249,// 248 PAY 226 

    0xfe071e25,// 249 PAY 227 

    0xaf6646b9,// 250 PAY 228 

    0x61cf071a,// 251 PAY 229 

    0xb4e15e21,// 252 PAY 230 

    0xae119cc6,// 253 PAY 231 

    0x0ae46ecb,// 254 PAY 232 

    0xc59f929a,// 255 PAY 233 

    0x9e25402f,// 256 PAY 234 

    0x1247c380,// 257 PAY 235 

    0xeb34367e,// 258 PAY 236 

    0x7a22c6aa,// 259 PAY 237 

    0xfa47f032,// 260 PAY 238 

    0x02703359,// 261 PAY 239 

    0xc48349da,// 262 PAY 240 

    0xaf2e7bb4,// 263 PAY 241 

    0xaa3aaa60,// 264 PAY 242 

    0x2f74bac2,// 265 PAY 243 

    0x91ccac29,// 266 PAY 244 

    0xf54f44d5,// 267 PAY 245 

    0xbae23c5a,// 268 PAY 246 

    0x34cd7a28,// 269 PAY 247 

    0x8700f19d,// 270 PAY 248 

    0xbcd2f877,// 271 PAY 249 

    0x37175925,// 272 PAY 250 

    0x04cfdf73,// 273 PAY 251 

    0x0562638e,// 274 PAY 252 

    0x9b3e0207,// 275 PAY 253 

    0xe094e3c7,// 276 PAY 254 

    0xad67c4c5,// 277 PAY 255 

    0x2d8344b0,// 278 PAY 256 

    0xdfeabc5a,// 279 PAY 257 

    0x01ce7cf6,// 280 PAY 258 

    0x4934a073,// 281 PAY 259 

    0xb58a4b75,// 282 PAY 260 

    0xc74c15b6,// 283 PAY 261 

    0xee40a6c4,// 284 PAY 262 

    0x296e92bd,// 285 PAY 263 

    0xa5a8d7b3,// 286 PAY 264 

    0x579b7fa7,// 287 PAY 265 

    0xd4f44efd,// 288 PAY 266 

    0x4d5c1e44,// 289 PAY 267 

    0x7ef776ad,// 290 PAY 268 

    0x3dff29ea,// 291 PAY 269 

    0x7c7fae64,// 292 PAY 270 

    0xbae1540f,// 293 PAY 271 

    0x5dc9c42f,// 294 PAY 272 

    0x71443a6d,// 295 PAY 273 

    0x8d997fa8,// 296 PAY 274 

    0x1eda9222,// 297 PAY 275 

    0x5263bddb,// 298 PAY 276 

    0x21a9be3e,// 299 PAY 277 

    0xbdc6aea4,// 300 PAY 278 

    0xf97edb48,// 301 PAY 279 

    0xaa84707f,// 302 PAY 280 

    0x72d86587,// 303 PAY 281 

    0xd4f82320,// 304 PAY 282 

    0xb9c960a6,// 305 PAY 283 

    0xa9cb221b,// 306 PAY 284 

    0x651f0b2f,// 307 PAY 285 

    0x056dcf9f,// 308 PAY 286 

    0x4c47917e,// 309 PAY 287 

    0x5b3a0c5e,// 310 PAY 288 

    0x47ffab1f,// 311 PAY 289 

    0xd8175afb,// 312 PAY 290 

    0x04476140,// 313 PAY 291 

    0x85f9b020,// 314 PAY 292 

    0x1db35e27,// 315 PAY 293 

    0x72a9e3a8,// 316 PAY 294 

    0x27eb06bc,// 317 PAY 295 

    0x5ebfc441,// 318 PAY 296 

    0xecd048f9,// 319 PAY 297 

    0x037173c4,// 320 PAY 298 

    0x856c289c,// 321 PAY 299 

    0x27df5db0,// 322 PAY 300 

    0x8cee0092,// 323 PAY 301 

    0xe44b3ad0,// 324 PAY 302 

    0x365c1329,// 325 PAY 303 

    0xff382457,// 326 PAY 304 

    0x4afb0eee,// 327 PAY 305 

    0x41859ac5,// 328 PAY 306 

    0x2f3160f7,// 329 PAY 307 

    0x191305e8,// 330 PAY 308 

    0x4e00ea46,// 331 PAY 309 

    0xa2acbf15,// 332 PAY 310 

    0x5ecfdeec,// 333 PAY 311 

    0x00e83d82,// 334 PAY 312 

    0x1599638e,// 335 PAY 313 

    0xdfa9f1eb,// 336 PAY 314 

    0x3ec4f585,// 337 PAY 315 

    0x3e47b551,// 338 PAY 316 

    0x92f53c2b,// 339 PAY 317 

    0x96d2a57c,// 340 PAY 318 

    0x2b5b1bd7,// 341 PAY 319 

    0xdaf2bc51,// 342 PAY 320 

    0xbc935cc2,// 343 PAY 321 

    0xdcc967a6,// 344 PAY 322 

    0xd49c5cdc,// 345 PAY 323 

    0xd2b180b4,// 346 PAY 324 

    0x9127d59b,// 347 PAY 325 

    0x0031e187,// 348 PAY 326 

    0xe7a78cb3,// 349 PAY 327 

    0x33c3be7f,// 350 PAY 328 

    0xc920afdc,// 351 PAY 329 

    0x8169cd65,// 352 PAY 330 

    0xf26870f0,// 353 PAY 331 

    0x256245ee,// 354 PAY 332 

    0x6e87c2d3,// 355 PAY 333 

    0x0c7e4f1d,// 356 PAY 334 

    0xaee75cd0,// 357 PAY 335 

    0xcce57dc4,// 358 PAY 336 

    0x6a9b304e,// 359 PAY 337 

    0x6994b8dd,// 360 PAY 338 

    0xc616d8ff,// 361 PAY 339 

    0xfef3d0cc,// 362 PAY 340 

    0x3ae5304b,// 363 PAY 341 

    0xdb545a6b,// 364 PAY 342 

    0x171a6f04,// 365 PAY 343 

    0x32b5f5f0,// 366 PAY 344 

    0xf1466242,// 367 PAY 345 

    0x5f5ea4c6,// 368 PAY 346 

    0x94eaca01,// 369 PAY 347 

    0x1e100f3b,// 370 PAY 348 

    0xd3816c4a,// 371 PAY 349 

    0x0746d15c,// 372 PAY 350 

    0x1f53a79a,// 373 PAY 351 

    0xd79a854d,// 374 PAY 352 

    0x83cd4161,// 375 PAY 353 

    0xd57bbd2b,// 376 PAY 354 

    0x65368ca0,// 377 PAY 355 

    0xb0586a82,// 378 PAY 356 

    0xcd46b67c,// 379 PAY 357 

    0x6230717e,// 380 PAY 358 

    0x69bb35ae,// 381 PAY 359 

    0x75b59ae3,// 382 PAY 360 

    0x790465ab,// 383 PAY 361 

    0x1eea1cd9,// 384 PAY 362 

    0x26c7670f,// 385 PAY 363 

    0x9d34de4e,// 386 PAY 364 

    0xcbffd58f,// 387 PAY 365 

    0xf679d2f9,// 388 PAY 366 

    0x9be9a200,// 389 PAY 367 

/// STA is 1 words. 

/// STA num_pkts       : 235 

/// STA pkt_idx        : 178 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1c 

    0x02c81ceb // 390 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt77_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x08 

/// ECH pdu_tag        : 0x00 

    0x00080000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x804528ab,// 4 SCX   2 

    0x00007142,// 5 SCX   3 

    0x22594197,// 6 SCX   4 

    0x1cf18f4b,// 7 SCX   5 

    0xe814dc87,// 8 SCX   6 

    0x946fcc75,// 9 SCX   7 

    0x2841a9c2,// 10 SCX   8 

    0x460f4f23,// 11 SCX   9 

    0xa7eccdda,// 12 SCX  10 

    0x716bab38,// 13 SCX  11 

    0x025131b7,// 14 SCX  12 

    0xf5965567,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 147 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 113 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 113 

/// BFD lencrypto      : 48 

/// BFD ofstcrypto     : 60 

/// BFD (ofst+len)cry  : 108 

/// BFD ofstiv         : 40 

/// BFD ofsticv        : 124 

    0x00000071,// 16 BFD   1 

    0x003c0030,// 17 BFD   2 

    0x007c0028,// 18 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 11 

    0x11005a8c,// 19 MFM   1 

    0x733972c6,// 20 MFM   2 

    0xa4029000,// 21 MFM   3 

/// BDA is 38 words. 

/// BDA size     is 147 (0x93) 

/// BDA id       is 0xaa5 

    0x00930aa5,// 22 BDA   1 

/// PAY Generic Data size   : 147 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x98b0b8e7,// 23 PAY   1 

    0xf49fb0e7,// 24 PAY   2 

    0x6081bcaf,// 25 PAY   3 

    0x6df5f018,// 26 PAY   4 

    0x6e1971cb,// 27 PAY   5 

    0xb0cfbfa8,// 28 PAY   6 

    0x83506234,// 29 PAY   7 

    0xba898c05,// 30 PAY   8 

    0xb54983cb,// 31 PAY   9 

    0x2b81b82c,// 32 PAY  10 

    0x33e3f069,// 33 PAY  11 

    0x00317e1c,// 34 PAY  12 

    0xf4a79466,// 35 PAY  13 

    0x2705e3d6,// 36 PAY  14 

    0x49793e51,// 37 PAY  15 

    0x9bea7cdf,// 38 PAY  16 

    0xc1f90fea,// 39 PAY  17 

    0x00b32128,// 40 PAY  18 

    0x344c4860,// 41 PAY  19 

    0x716d559a,// 42 PAY  20 

    0x33a17fee,// 43 PAY  21 

    0xb00c6b40,// 44 PAY  22 

    0xb1c76b12,// 45 PAY  23 

    0x6770bbc9,// 46 PAY  24 

    0x8ee86683,// 47 PAY  25 

    0x756b8911,// 48 PAY  26 

    0xd1512154,// 49 PAY  27 

    0xc1e412aa,// 50 PAY  28 

    0xe947de80,// 51 PAY  29 

    0x47141fc3,// 52 PAY  30 

    0x44268174,// 53 PAY  31 

    0x71e8bb2c,// 54 PAY  32 

    0x98abbe7f,// 55 PAY  33 

    0x14f1743d,// 56 PAY  34 

    0xe9a4a329,// 57 PAY  35 

    0xb52a08e6,// 58 PAY  36 

    0x18eead00,// 59 PAY  37 

/// STA is 1 words. 

/// STA num_pkts       : 254 

/// STA pkt_idx        : 71 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xbe 

    0x011dbefe // 60 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt78_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x00 

/// ECH pdu_tag        : 0x00 

    0x00000000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv !check_icv !sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x804628af,// 4 SCX   2 

    0x00006142,// 5 SCX   3 

    0x432081a7,// 6 SCX   4 

    0x243f7d43,// 7 SCX   5 

    0x1aac986c,// 8 SCX   6 

    0xd91f4982,// 9 SCX   7 

    0xe3d9434f,// 10 SCX   8 

    0xfe607322,// 11 SCX   9 

    0x7da1d66f,// 12 SCX  10 

    0x6a997072,// 13 SCX  11 

    0x3cf3df34,// 14 SCX  12 

    0x26bafd7c,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1698 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 729 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 729 

/// BFD lencrypto      : 144 

/// BFD ofstcrypto     : 576 

/// BFD (ofst+len)cry  : 720 

/// BFD ofstiv         : 556 

/// BFD ofsticv        : 984 

    0x000002d9,// 16 BFD   1 

    0x02400090,// 17 BFD   2 

    0x03d8022c,// 18 BFD   3 

/// MFM is 4 words. 

/// MFM vldnibs        : 16 

    0x1600cb52,// 19 MFM   1 

    0xbcb0db86,// 20 MFM   2 

    0x8951b43a,// 21 MFM   3 

    0x8b000000,// 22 MFM   4 

/// BDA is 426 words. 

/// BDA size     is 1698 (0x6a2) 

/// BDA id       is 0xdef3 

    0x06a2def3,// 23 BDA   1 

/// PAY Generic Data size   : 1698 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x66bbf8ae,// 24 PAY   1 

    0x6c9f2a31,// 25 PAY   2 

    0xb68419b5,// 26 PAY   3 

    0x72349853,// 27 PAY   4 

    0x3061dd4e,// 28 PAY   5 

    0xc9ed3787,// 29 PAY   6 

    0xec90d578,// 30 PAY   7 

    0x9aac210f,// 31 PAY   8 

    0x46abaaf7,// 32 PAY   9 

    0x4bd085d1,// 33 PAY  10 

    0x1338b232,// 34 PAY  11 

    0x111be187,// 35 PAY  12 

    0x154e5c58,// 36 PAY  13 

    0x3b2ac451,// 37 PAY  14 

    0x72b6cfce,// 38 PAY  15 

    0x8f286513,// 39 PAY  16 

    0x77f9d5a5,// 40 PAY  17 

    0x50efa950,// 41 PAY  18 

    0xfdeb8472,// 42 PAY  19 

    0x73c399d2,// 43 PAY  20 

    0xfe598f54,// 44 PAY  21 

    0xd1fc3ba4,// 45 PAY  22 

    0x8508972e,// 46 PAY  23 

    0xe34aea4f,// 47 PAY  24 

    0xceb023ca,// 48 PAY  25 

    0xaf93fb4d,// 49 PAY  26 

    0x5d7fe955,// 50 PAY  27 

    0x62058bc5,// 51 PAY  28 

    0x487785e6,// 52 PAY  29 

    0xf3e250d5,// 53 PAY  30 

    0x91ce1654,// 54 PAY  31 

    0x3faa2785,// 55 PAY  32 

    0x525289a3,// 56 PAY  33 

    0xee536ca3,// 57 PAY  34 

    0x87c301ef,// 58 PAY  35 

    0x738b4746,// 59 PAY  36 

    0x41758eb9,// 60 PAY  37 

    0x3453462e,// 61 PAY  38 

    0x10d6a591,// 62 PAY  39 

    0xe7353d38,// 63 PAY  40 

    0x00dbc516,// 64 PAY  41 

    0x43666421,// 65 PAY  42 

    0x0e02ca09,// 66 PAY  43 

    0x626b933d,// 67 PAY  44 

    0x01dbdeea,// 68 PAY  45 

    0xb75a5f3e,// 69 PAY  46 

    0x9f5ae494,// 70 PAY  47 

    0x1815f132,// 71 PAY  48 

    0xaaecf338,// 72 PAY  49 

    0xb9bfe2b9,// 73 PAY  50 

    0xdedf8d50,// 74 PAY  51 

    0xa98732f7,// 75 PAY  52 

    0xf7ee8896,// 76 PAY  53 

    0xa3ab4bf2,// 77 PAY  54 

    0x969641f4,// 78 PAY  55 

    0xe14fe560,// 79 PAY  56 

    0x2606912b,// 80 PAY  57 

    0x84ee38c1,// 81 PAY  58 

    0xaa121dd3,// 82 PAY  59 

    0xb0f532ec,// 83 PAY  60 

    0xf93b7e43,// 84 PAY  61 

    0x7b635909,// 85 PAY  62 

    0x60460fb4,// 86 PAY  63 

    0x6115df7b,// 87 PAY  64 

    0x73fd209a,// 88 PAY  65 

    0x81850ba7,// 89 PAY  66 

    0xd4835109,// 90 PAY  67 

    0x0e6da804,// 91 PAY  68 

    0x149ee413,// 92 PAY  69 

    0x68c31c4a,// 93 PAY  70 

    0x489dda12,// 94 PAY  71 

    0xf071e4ae,// 95 PAY  72 

    0x2c3743d7,// 96 PAY  73 

    0xce2b72a3,// 97 PAY  74 

    0xf2c3b7ff,// 98 PAY  75 

    0xd6cf88c8,// 99 PAY  76 

    0x1156fac5,// 100 PAY  77 

    0x139a93a6,// 101 PAY  78 

    0x35500adb,// 102 PAY  79 

    0x8815da01,// 103 PAY  80 

    0xc8d7ac74,// 104 PAY  81 

    0x048048c1,// 105 PAY  82 

    0x2fea9ab9,// 106 PAY  83 

    0x3c9e5a84,// 107 PAY  84 

    0x8fdf4803,// 108 PAY  85 

    0x3ee831f3,// 109 PAY  86 

    0x16f7d11b,// 110 PAY  87 

    0x4f84a6a0,// 111 PAY  88 

    0xe9f697c7,// 112 PAY  89 

    0xf6b567cb,// 113 PAY  90 

    0xdb346678,// 114 PAY  91 

    0xb306c7e8,// 115 PAY  92 

    0x2d37d2ff,// 116 PAY  93 

    0x3a693469,// 117 PAY  94 

    0xf16c491d,// 118 PAY  95 

    0x73230f9e,// 119 PAY  96 

    0xa291d707,// 120 PAY  97 

    0xc7ec22df,// 121 PAY  98 

    0xdc0c6ea0,// 122 PAY  99 

    0x55e028e6,// 123 PAY 100 

    0x28673027,// 124 PAY 101 

    0x3cc1e942,// 125 PAY 102 

    0x41c85cbb,// 126 PAY 103 

    0x090f390a,// 127 PAY 104 

    0x90372702,// 128 PAY 105 

    0xf28f5049,// 129 PAY 106 

    0x654a6999,// 130 PAY 107 

    0x1ecbe5cc,// 131 PAY 108 

    0xc0724e76,// 132 PAY 109 

    0x6e22a1dc,// 133 PAY 110 

    0xc1ed9981,// 134 PAY 111 

    0xa7efea52,// 135 PAY 112 

    0x96cf739c,// 136 PAY 113 

    0xc13b288c,// 137 PAY 114 

    0x04ea9d60,// 138 PAY 115 

    0x49be2106,// 139 PAY 116 

    0x28b9d47d,// 140 PAY 117 

    0x6a264957,// 141 PAY 118 

    0x6ac4ce7d,// 142 PAY 119 

    0x268f652a,// 143 PAY 120 

    0x11e3b015,// 144 PAY 121 

    0x6eb59a05,// 145 PAY 122 

    0xda577ad9,// 146 PAY 123 

    0x5936557a,// 147 PAY 124 

    0x8b8247dd,// 148 PAY 125 

    0x0d85fbd7,// 149 PAY 126 

    0x0447fbd8,// 150 PAY 127 

    0x9278ea9f,// 151 PAY 128 

    0x7ae760fa,// 152 PAY 129 

    0xc4046d67,// 153 PAY 130 

    0x98d58c79,// 154 PAY 131 

    0xf1af434e,// 155 PAY 132 

    0x5d13a655,// 156 PAY 133 

    0x13475404,// 157 PAY 134 

    0xe4692c87,// 158 PAY 135 

    0xa576fab3,// 159 PAY 136 

    0xae88ad46,// 160 PAY 137 

    0x684fde77,// 161 PAY 138 

    0xee3484a9,// 162 PAY 139 

    0x5396dc79,// 163 PAY 140 

    0xcfdbdac9,// 164 PAY 141 

    0x171cb9c0,// 165 PAY 142 

    0x6e3208b1,// 166 PAY 143 

    0x072a5221,// 167 PAY 144 

    0xddf6eb23,// 168 PAY 145 

    0x8b6ff9d6,// 169 PAY 146 

    0x4e7cad68,// 170 PAY 147 

    0xcf88f957,// 171 PAY 148 

    0xb90fd0fa,// 172 PAY 149 

    0x52a58f5a,// 173 PAY 150 

    0x0a562e37,// 174 PAY 151 

    0xcff2593e,// 175 PAY 152 

    0xcefd0f7a,// 176 PAY 153 

    0xc0fc7a56,// 177 PAY 154 

    0x5de5ee60,// 178 PAY 155 

    0x51ed6a9c,// 179 PAY 156 

    0x6c7ed47c,// 180 PAY 157 

    0x3d7dbee1,// 181 PAY 158 

    0x04d379d8,// 182 PAY 159 

    0xfb71b329,// 183 PAY 160 

    0x3a770a89,// 184 PAY 161 

    0xdc1263b8,// 185 PAY 162 

    0xd0dcd13c,// 186 PAY 163 

    0x46d5a06f,// 187 PAY 164 

    0xab304c9e,// 188 PAY 165 

    0xf9815912,// 189 PAY 166 

    0x2a324d5b,// 190 PAY 167 

    0xf8f41c54,// 191 PAY 168 

    0xd27fbd40,// 192 PAY 169 

    0x5499881e,// 193 PAY 170 

    0x635fd358,// 194 PAY 171 

    0x250120cd,// 195 PAY 172 

    0xccb49875,// 196 PAY 173 

    0xdb285d1e,// 197 PAY 174 

    0x59a3d33b,// 198 PAY 175 

    0xbcb1e5cd,// 199 PAY 176 

    0x3c9a153a,// 200 PAY 177 

    0xee8113b2,// 201 PAY 178 

    0x28e4c418,// 202 PAY 179 

    0x31d9650f,// 203 PAY 180 

    0xe8d83c36,// 204 PAY 181 

    0x35ccba16,// 205 PAY 182 

    0x299061bb,// 206 PAY 183 

    0x34579c10,// 207 PAY 184 

    0x2f6a1b08,// 208 PAY 185 

    0x63feee6c,// 209 PAY 186 

    0x611e8232,// 210 PAY 187 

    0x4144a780,// 211 PAY 188 

    0x42743aa4,// 212 PAY 189 

    0xca96ed08,// 213 PAY 190 

    0xc4943131,// 214 PAY 191 

    0x69a774fd,// 215 PAY 192 

    0xa078866e,// 216 PAY 193 

    0xd2d6ae85,// 217 PAY 194 

    0x130d2748,// 218 PAY 195 

    0xa1f0accf,// 219 PAY 196 

    0x3dc58ced,// 220 PAY 197 

    0x46fc5bb6,// 221 PAY 198 

    0x03259c43,// 222 PAY 199 

    0x89e559ed,// 223 PAY 200 

    0x7d6e53bb,// 224 PAY 201 

    0x222be8e8,// 225 PAY 202 

    0x0a3c6025,// 226 PAY 203 

    0xdd6bd3fa,// 227 PAY 204 

    0x996443dd,// 228 PAY 205 

    0x68b91afd,// 229 PAY 206 

    0x12653bb3,// 230 PAY 207 

    0xd4d4f4f7,// 231 PAY 208 

    0xf3b4cb51,// 232 PAY 209 

    0x863a67f9,// 233 PAY 210 

    0x5ecb324e,// 234 PAY 211 

    0x5292ff10,// 235 PAY 212 

    0x78a75cf4,// 236 PAY 213 

    0xb16e9cc7,// 237 PAY 214 

    0x61e40d71,// 238 PAY 215 

    0x8da36cd3,// 239 PAY 216 

    0x6d181471,// 240 PAY 217 

    0x44bde20b,// 241 PAY 218 

    0x2cb55d90,// 242 PAY 219 

    0x2b34dbcd,// 243 PAY 220 

    0x395b3470,// 244 PAY 221 

    0x60f384df,// 245 PAY 222 

    0xc1f9cee5,// 246 PAY 223 

    0x921e992a,// 247 PAY 224 

    0x9239a89b,// 248 PAY 225 

    0x4a78376f,// 249 PAY 226 

    0xe45c670c,// 250 PAY 227 

    0xa631c151,// 251 PAY 228 

    0x850fbee9,// 252 PAY 229 

    0x95449211,// 253 PAY 230 

    0xb06f85bc,// 254 PAY 231 

    0x3ef2f02b,// 255 PAY 232 

    0x6ecd2059,// 256 PAY 233 

    0xa0a2861e,// 257 PAY 234 

    0x9ec3b378,// 258 PAY 235 

    0xad21a664,// 259 PAY 236 

    0x34626ce9,// 260 PAY 237 

    0x82e30293,// 261 PAY 238 

    0xa8723299,// 262 PAY 239 

    0x5eecc034,// 263 PAY 240 

    0xa89ed554,// 264 PAY 241 

    0x2cc95da0,// 265 PAY 242 

    0x9039df63,// 266 PAY 243 

    0x4ac03516,// 267 PAY 244 

    0xab99c47c,// 268 PAY 245 

    0xbc23d964,// 269 PAY 246 

    0x6b7fce79,// 270 PAY 247 

    0x8d2da086,// 271 PAY 248 

    0x85f3d840,// 272 PAY 249 

    0x8d0cfc16,// 273 PAY 250 

    0x4dfdc3cd,// 274 PAY 251 

    0xde7500fa,// 275 PAY 252 

    0xaf99ded6,// 276 PAY 253 

    0xc9192356,// 277 PAY 254 

    0xa4413ccf,// 278 PAY 255 

    0xc3406903,// 279 PAY 256 

    0xa6d17343,// 280 PAY 257 

    0xff130a95,// 281 PAY 258 

    0x46f30ef4,// 282 PAY 259 

    0x29e2d2f3,// 283 PAY 260 

    0xca73429f,// 284 PAY 261 

    0x789bf9fc,// 285 PAY 262 

    0xd9e583eb,// 286 PAY 263 

    0x714614fe,// 287 PAY 264 

    0x9aa0fdc0,// 288 PAY 265 

    0xe7ee1e86,// 289 PAY 266 

    0xfebbaf76,// 290 PAY 267 

    0x2605f03d,// 291 PAY 268 

    0xb7f61b18,// 292 PAY 269 

    0xfe7652d5,// 293 PAY 270 

    0x11bc0ee9,// 294 PAY 271 

    0x2347d481,// 295 PAY 272 

    0xb7ec0f89,// 296 PAY 273 

    0x52300b84,// 297 PAY 274 

    0x88a0c548,// 298 PAY 275 

    0xba0f5a79,// 299 PAY 276 

    0x87d5d7f4,// 300 PAY 277 

    0xe0f882cf,// 301 PAY 278 

    0xffe03441,// 302 PAY 279 

    0xb6e3a87f,// 303 PAY 280 

    0xc5ae6e58,// 304 PAY 281 

    0x41972784,// 305 PAY 282 

    0xc0cb4a1d,// 306 PAY 283 

    0x6000fc60,// 307 PAY 284 

    0xaa813884,// 308 PAY 285 

    0xd9758572,// 309 PAY 286 

    0xf701494e,// 310 PAY 287 

    0x5c5a00d1,// 311 PAY 288 

    0x0d5fe768,// 312 PAY 289 

    0x713a3f5d,// 313 PAY 290 

    0xc95f23ac,// 314 PAY 291 

    0xa171071b,// 315 PAY 292 

    0xaae811bd,// 316 PAY 293 

    0xd6f988a7,// 317 PAY 294 

    0xbc68e2d0,// 318 PAY 295 

    0xc47522ea,// 319 PAY 296 

    0xab716307,// 320 PAY 297 

    0x9f277ce3,// 321 PAY 298 

    0x2da17ad6,// 322 PAY 299 

    0x0baa2866,// 323 PAY 300 

    0x3f7ce41e,// 324 PAY 301 

    0x46030ffb,// 325 PAY 302 

    0xf7333779,// 326 PAY 303 

    0x93633c62,// 327 PAY 304 

    0x7bff5a9c,// 328 PAY 305 

    0x1be5606c,// 329 PAY 306 

    0x14b4dc54,// 330 PAY 307 

    0xbbd15fa1,// 331 PAY 308 

    0x8cdab726,// 332 PAY 309 

    0x7cd62fa4,// 333 PAY 310 

    0x6942be7c,// 334 PAY 311 

    0xd425c38a,// 335 PAY 312 

    0xc45d72a8,// 336 PAY 313 

    0xc5b12a16,// 337 PAY 314 

    0x5073df78,// 338 PAY 315 

    0x95da2774,// 339 PAY 316 

    0xc5689718,// 340 PAY 317 

    0xf5028929,// 341 PAY 318 

    0x0550939d,// 342 PAY 319 

    0xa5a4acb0,// 343 PAY 320 

    0x7082752b,// 344 PAY 321 

    0x8970e04e,// 345 PAY 322 

    0x26470073,// 346 PAY 323 

    0x37d99eb8,// 347 PAY 324 

    0xeddaa8cf,// 348 PAY 325 

    0x3c8e15b9,// 349 PAY 326 

    0x9ef9dfac,// 350 PAY 327 

    0x629c7040,// 351 PAY 328 

    0x633ce5f2,// 352 PAY 329 

    0xb7f80cb8,// 353 PAY 330 

    0x54bab774,// 354 PAY 331 

    0x11038156,// 355 PAY 332 

    0xc4c11628,// 356 PAY 333 

    0x672516d2,// 357 PAY 334 

    0x76d20d8d,// 358 PAY 335 

    0xbd196e4b,// 359 PAY 336 

    0xfaded000,// 360 PAY 337 

    0xdef49cb4,// 361 PAY 338 

    0xebbd80ff,// 362 PAY 339 

    0x3c745936,// 363 PAY 340 

    0xf5fe9562,// 364 PAY 341 

    0x435af1e2,// 365 PAY 342 

    0xe2515717,// 366 PAY 343 

    0x2034d27e,// 367 PAY 344 

    0x0edced5f,// 368 PAY 345 

    0xaf665941,// 369 PAY 346 

    0x2233895f,// 370 PAY 347 

    0x033623c5,// 371 PAY 348 

    0xc0aa31f8,// 372 PAY 349 

    0xdeec3b4f,// 373 PAY 350 

    0x6f75a30f,// 374 PAY 351 

    0x760e69ec,// 375 PAY 352 

    0x743082aa,// 376 PAY 353 

    0x397094d9,// 377 PAY 354 

    0x41c36e44,// 378 PAY 355 

    0x6ca14635,// 379 PAY 356 

    0xaf4cc738,// 380 PAY 357 

    0x1dc555da,// 381 PAY 358 

    0xbcf88082,// 382 PAY 359 

    0x040dd611,// 383 PAY 360 

    0xb4b910f5,// 384 PAY 361 

    0x3a5a8e3c,// 385 PAY 362 

    0x078c118e,// 386 PAY 363 

    0xbe6c4302,// 387 PAY 364 

    0xfbb658bd,// 388 PAY 365 

    0xb95197ee,// 389 PAY 366 

    0x2824354a,// 390 PAY 367 

    0x5099332b,// 391 PAY 368 

    0x2dab1b3b,// 392 PAY 369 

    0x6b133c95,// 393 PAY 370 

    0x2092cf93,// 394 PAY 371 

    0xb0d4c426,// 395 PAY 372 

    0xc46f2c0e,// 396 PAY 373 

    0x713b04cb,// 397 PAY 374 

    0x773a52e8,// 398 PAY 375 

    0x8a24da9e,// 399 PAY 376 

    0x41ff7065,// 400 PAY 377 

    0x33f0ccb1,// 401 PAY 378 

    0xc4308679,// 402 PAY 379 

    0x7484add5,// 403 PAY 380 

    0x17fe5e64,// 404 PAY 381 

    0x3583a083,// 405 PAY 382 

    0x4d81a68f,// 406 PAY 383 

    0xe74c29db,// 407 PAY 384 

    0xe5e2e467,// 408 PAY 385 

    0xe72da5c4,// 409 PAY 386 

    0x2125cb03,// 410 PAY 387 

    0xcb6e75cb,// 411 PAY 388 

    0x9a6624bb,// 412 PAY 389 

    0xe5dd3f05,// 413 PAY 390 

    0xd5e2fe60,// 414 PAY 391 

    0x17179d60,// 415 PAY 392 

    0x649b74f2,// 416 PAY 393 

    0x837982c9,// 417 PAY 394 

    0xdeaf13cc,// 418 PAY 395 

    0x5c822c41,// 419 PAY 396 

    0x144892c1,// 420 PAY 397 

    0x13d1ba63,// 421 PAY 398 

    0x2ebfe02f,// 422 PAY 399 

    0xf6587f3d,// 423 PAY 400 

    0x5b7d3a09,// 424 PAY 401 

    0xeec3cbf1,// 425 PAY 402 

    0xdeb2b49f,// 426 PAY 403 

    0x993a5ce3,// 427 PAY 404 

    0xd0ddb538,// 428 PAY 405 

    0x17c5f698,// 429 PAY 406 

    0xceb0c676,// 430 PAY 407 

    0x6113ddcd,// 431 PAY 408 

    0xab5badec,// 432 PAY 409 

    0x1e709647,// 433 PAY 410 

    0x9cdab431,// 434 PAY 411 

    0xaa22132a,// 435 PAY 412 

    0x544efb78,// 436 PAY 413 

    0xa1a822d8,// 437 PAY 414 

    0x2d4567d8,// 438 PAY 415 

    0xfdadcfa0,// 439 PAY 416 

    0x30b99a16,// 440 PAY 417 

    0xc3192f3a,// 441 PAY 418 

    0x54782374,// 442 PAY 419 

    0xaac38ab6,// 443 PAY 420 

    0x0de313d7,// 444 PAY 421 

    0x1835f86c,// 445 PAY 422 

    0x920af321,// 446 PAY 423 

    0x7782e009,// 447 PAY 424 

    0xe8390000,// 448 PAY 425 

/// STA is 1 words. 

/// STA num_pkts       : 55 

/// STA pkt_idx        : 168 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf4 

    0x02a0f437 // 449 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt79_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0c 

/// ECH pdu_tag        : 0x00 

    0x000c0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x804428d1,// 4 SCX   2 

    0x00005382,// 5 SCX   3 

    0xe2db2c84,// 6 SCX   4 

    0xa88ce90e,// 7 SCX   5 

    0xdea63dfb,// 8 SCX   6 

    0x892e6578,// 9 SCX   7 

    0xa92fba19,// 10 SCX   8 

    0x99ff7411,// 11 SCX   9 

    0xb2e9a30b,// 12 SCX  10 

    0x28df1edb,// 13 SCX  11 

    0x33400fe7,// 14 SCX  12 

    0xa948f2af,// 15 SCX  13 

    0xa91e7774,// 16 SCX  14 

    0x64c24c51,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1036 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 361 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 361 

/// BFD lencrypto      : 56 

/// BFD ofstcrypto     : 124 

/// BFD (ofst+len)cry  : 180 

/// BFD ofstiv         : 12 

/// BFD ofsticv        : 392 

    0x00000169,// 18 BFD   1 

    0x007c0038,// 19 BFD   2 

    0x0188000c,// 20 BFD   3 

/// MFM is 11 words. 

/// MFM vldnibs        : 4e 

    0x4e00acdc,// 21 MFM   1 

    0x8f0ef18a,// 22 MFM   2 

    0x94412990,// 23 MFM   3 

    0x2dca029e,// 24 MFM   4 

    0x445f6286,// 25 MFM   5 

    0x02b6b16d,// 26 MFM   6 

    0xc4393847,// 27 MFM   7 

    0x16c958a1,// 28 MFM   8 

    0x78de2044,// 29 MFM   9 

    0xb826a37d,// 30 MFM  10 

    0xc4000000,// 31 MFM  11 

/// BDA is 260 words. 

/// BDA size     is 1036 (0x40c) 

/// BDA id       is 0x4d3 

    0x040c04d3,// 32 BDA   1 

/// PAY Generic Data size   : 1036 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x47abbdde,// 33 PAY   1 

    0x42ca9f58,// 34 PAY   2 

    0x6cef5265,// 35 PAY   3 

    0x54a9aabe,// 36 PAY   4 

    0x9bb72479,// 37 PAY   5 

    0x64ed60da,// 38 PAY   6 

    0xddf3b35f,// 39 PAY   7 

    0x9480271c,// 40 PAY   8 

    0x6f8b9959,// 41 PAY   9 

    0x4f59ec9f,// 42 PAY  10 

    0xbc5145fe,// 43 PAY  11 

    0x8cb55043,// 44 PAY  12 

    0x89317868,// 45 PAY  13 

    0x836899a6,// 46 PAY  14 

    0xa891d6ae,// 47 PAY  15 

    0x0b86cce6,// 48 PAY  16 

    0xe9eb057b,// 49 PAY  17 

    0x6b0bffba,// 50 PAY  18 

    0xc9fc98de,// 51 PAY  19 

    0xa3de6a84,// 52 PAY  20 

    0x92a91bb6,// 53 PAY  21 

    0xc50a3d44,// 54 PAY  22 

    0x1997fdda,// 55 PAY  23 

    0x88272f7b,// 56 PAY  24 

    0xf6883a3b,// 57 PAY  25 

    0xd15af502,// 58 PAY  26 

    0x4a971ae3,// 59 PAY  27 

    0xb805b529,// 60 PAY  28 

    0xaa10e06b,// 61 PAY  29 

    0x710610f6,// 62 PAY  30 

    0x3436aec4,// 63 PAY  31 

    0x7ac656ad,// 64 PAY  32 

    0x9a5b7466,// 65 PAY  33 

    0x24c2fb2e,// 66 PAY  34 

    0x73e57cdf,// 67 PAY  35 

    0x6d7f952e,// 68 PAY  36 

    0x09a54450,// 69 PAY  37 

    0x51e25a79,// 70 PAY  38 

    0x06dac3ae,// 71 PAY  39 

    0x3cf34c19,// 72 PAY  40 

    0xe4437d79,// 73 PAY  41 

    0xca691e98,// 74 PAY  42 

    0x586f7097,// 75 PAY  43 

    0xb28164cb,// 76 PAY  44 

    0xd11d49bf,// 77 PAY  45 

    0x35c15f31,// 78 PAY  46 

    0x7017f65b,// 79 PAY  47 

    0xed7c2e18,// 80 PAY  48 

    0xd3dc05e4,// 81 PAY  49 

    0x5fb695ab,// 82 PAY  50 

    0xa8c7062e,// 83 PAY  51 

    0x8baa42bc,// 84 PAY  52 

    0x418d1931,// 85 PAY  53 

    0xfad492cc,// 86 PAY  54 

    0xeb9f3ebe,// 87 PAY  55 

    0x143f8810,// 88 PAY  56 

    0xb9d5270d,// 89 PAY  57 

    0xe0615aeb,// 90 PAY  58 

    0xeb30cc52,// 91 PAY  59 

    0x1486cf9a,// 92 PAY  60 

    0xf00c27fb,// 93 PAY  61 

    0x78c2d862,// 94 PAY  62 

    0x3585e71f,// 95 PAY  63 

    0x508a3576,// 96 PAY  64 

    0x730218d1,// 97 PAY  65 

    0x317ab156,// 98 PAY  66 

    0x7f10e41b,// 99 PAY  67 

    0x36c02d08,// 100 PAY  68 

    0xe016a3eb,// 101 PAY  69 

    0x7e44bf63,// 102 PAY  70 

    0x6e253d43,// 103 PAY  71 

    0x96da5ac1,// 104 PAY  72 

    0x81ea9a2d,// 105 PAY  73 

    0x3b57abd2,// 106 PAY  74 

    0x2a02f90a,// 107 PAY  75 

    0x8f224017,// 108 PAY  76 

    0xc18144c3,// 109 PAY  77 

    0xe0ada1ad,// 110 PAY  78 

    0x3c52aac9,// 111 PAY  79 

    0x39adc753,// 112 PAY  80 

    0xa7c5f334,// 113 PAY  81 

    0x3e3eac07,// 114 PAY  82 

    0xfa9ac5df,// 115 PAY  83 

    0x9d4abf1a,// 116 PAY  84 

    0xa063a1e8,// 117 PAY  85 

    0x8ed1e4c3,// 118 PAY  86 

    0x4f2b5333,// 119 PAY  87 

    0xd1018462,// 120 PAY  88 

    0x3cbec1d5,// 121 PAY  89 

    0xdbca9d94,// 122 PAY  90 

    0x24da9978,// 123 PAY  91 

    0x58b77315,// 124 PAY  92 

    0x097ee72f,// 125 PAY  93 

    0x8d8594b7,// 126 PAY  94 

    0x0bd23b88,// 127 PAY  95 

    0x602dbd28,// 128 PAY  96 

    0x5e8169f3,// 129 PAY  97 

    0xe9bd9bdf,// 130 PAY  98 

    0x6ef24e52,// 131 PAY  99 

    0x7ecec815,// 132 PAY 100 

    0x78ca46f6,// 133 PAY 101 

    0x6007e43b,// 134 PAY 102 

    0x1d1e59a0,// 135 PAY 103 

    0x31ad82d9,// 136 PAY 104 

    0xb4cc9780,// 137 PAY 105 

    0xa35ca08f,// 138 PAY 106 

    0x245fbac0,// 139 PAY 107 

    0xd4f5a7e6,// 140 PAY 108 

    0x07650e70,// 141 PAY 109 

    0x23d959ae,// 142 PAY 110 

    0x43e514dc,// 143 PAY 111 

    0x53d9b803,// 144 PAY 112 

    0xea3e8260,// 145 PAY 113 

    0xd4bccb99,// 146 PAY 114 

    0x622489eb,// 147 PAY 115 

    0x6c345899,// 148 PAY 116 

    0x72015947,// 149 PAY 117 

    0x24d6051d,// 150 PAY 118 

    0xc8b1d46e,// 151 PAY 119 

    0xbad712e4,// 152 PAY 120 

    0x2241c559,// 153 PAY 121 

    0x48f63325,// 154 PAY 122 

    0x265d3696,// 155 PAY 123 

    0x1964dd75,// 156 PAY 124 

    0x6f372d98,// 157 PAY 125 

    0x6d2bd9c0,// 158 PAY 126 

    0x937062ca,// 159 PAY 127 

    0x018cf098,// 160 PAY 128 

    0xa44638b5,// 161 PAY 129 

    0x9c0ac7b9,// 162 PAY 130 

    0x924983b0,// 163 PAY 131 

    0xc8b555a4,// 164 PAY 132 

    0xcc5f6e96,// 165 PAY 133 

    0xcb929aa9,// 166 PAY 134 

    0xf9f95c8d,// 167 PAY 135 

    0xaf86cf1a,// 168 PAY 136 

    0x7c20c8b1,// 169 PAY 137 

    0xb60d0c2b,// 170 PAY 138 

    0x554c8410,// 171 PAY 139 

    0xe312308b,// 172 PAY 140 

    0xa22332cb,// 173 PAY 141 

    0x46a0299d,// 174 PAY 142 

    0xbedcfcad,// 175 PAY 143 

    0xb4988ca4,// 176 PAY 144 

    0xe92bd7de,// 177 PAY 145 

    0xe07436d1,// 178 PAY 146 

    0x7fffcbe2,// 179 PAY 147 

    0xef573017,// 180 PAY 148 

    0x080d119e,// 181 PAY 149 

    0xf9ff2299,// 182 PAY 150 

    0x459a199d,// 183 PAY 151 

    0x48c20eb7,// 184 PAY 152 

    0x257d77a8,// 185 PAY 153 

    0xbaf3f9e7,// 186 PAY 154 

    0x62f1ba5a,// 187 PAY 155 

    0xffb52354,// 188 PAY 156 

    0xa2b300ee,// 189 PAY 157 

    0x7e71d928,// 190 PAY 158 

    0x57a653fc,// 191 PAY 159 

    0x7e6cdb11,// 192 PAY 160 

    0x8f31c6e8,// 193 PAY 161 

    0x8ea549a4,// 194 PAY 162 

    0x6a3709d6,// 195 PAY 163 

    0x50139ec4,// 196 PAY 164 

    0x1a7d2bb8,// 197 PAY 165 

    0x38011b5c,// 198 PAY 166 

    0xe2d84199,// 199 PAY 167 

    0x6c8b92d9,// 200 PAY 168 

    0x18350fe7,// 201 PAY 169 

    0x4866d127,// 202 PAY 170 

    0x6cf89005,// 203 PAY 171 

    0x90eb8da2,// 204 PAY 172 

    0xf86e69d4,// 205 PAY 173 

    0x5ef1e04c,// 206 PAY 174 

    0x2017db81,// 207 PAY 175 

    0x89c25ba0,// 208 PAY 176 

    0xbfbe7e29,// 209 PAY 177 

    0x548b55c6,// 210 PAY 178 

    0xeb2328ba,// 211 PAY 179 

    0xaa31d7ca,// 212 PAY 180 

    0x024a5347,// 213 PAY 181 

    0x5973ad06,// 214 PAY 182 

    0xc8fe7431,// 215 PAY 183 

    0x4507565c,// 216 PAY 184 

    0x7098f236,// 217 PAY 185 

    0x63d52ec1,// 218 PAY 186 

    0x522d50ad,// 219 PAY 187 

    0x5217bac8,// 220 PAY 188 

    0x755afa36,// 221 PAY 189 

    0x8c76222e,// 222 PAY 190 

    0x87a51bfa,// 223 PAY 191 

    0x97cbb919,// 224 PAY 192 

    0x86a6963c,// 225 PAY 193 

    0xd0a80200,// 226 PAY 194 

    0xd3ac23b2,// 227 PAY 195 

    0x58a197e2,// 228 PAY 196 

    0x9b1f2ff7,// 229 PAY 197 

    0x3a015d76,// 230 PAY 198 

    0x11c9e1a2,// 231 PAY 199 

    0x9d69b389,// 232 PAY 200 

    0x6a57ac3e,// 233 PAY 201 

    0xaee271f0,// 234 PAY 202 

    0x872f0268,// 235 PAY 203 

    0xda8af501,// 236 PAY 204 

    0x49de5e7a,// 237 PAY 205 

    0x4aa2722f,// 238 PAY 206 

    0xcf4cc5a3,// 239 PAY 207 

    0x2e6034f9,// 240 PAY 208 

    0x39e5705a,// 241 PAY 209 

    0xe9709a37,// 242 PAY 210 

    0x290729e2,// 243 PAY 211 

    0x7d615457,// 244 PAY 212 

    0x3dbb0e7f,// 245 PAY 213 

    0xe132d046,// 246 PAY 214 

    0x9e63180c,// 247 PAY 215 

    0xf2b0f9a7,// 248 PAY 216 

    0x2977d27d,// 249 PAY 217 

    0x37d0d4ac,// 250 PAY 218 

    0x9d1a77fb,// 251 PAY 219 

    0xbaabdb00,// 252 PAY 220 

    0xe75740ac,// 253 PAY 221 

    0x1a0f9da9,// 254 PAY 222 

    0x588fa845,// 255 PAY 223 

    0x5ca3538b,// 256 PAY 224 

    0x7fe34e16,// 257 PAY 225 

    0xed5286e7,// 258 PAY 226 

    0xb7edc7ab,// 259 PAY 227 

    0x0d6ec339,// 260 PAY 228 

    0x3b4d33c0,// 261 PAY 229 

    0xf2ed4944,// 262 PAY 230 

    0x59f6231c,// 263 PAY 231 

    0x41e7e449,// 264 PAY 232 

    0x232bc02f,// 265 PAY 233 

    0x774fc4c5,// 266 PAY 234 

    0x7af5da5a,// 267 PAY 235 

    0x64080f97,// 268 PAY 236 

    0x94249d76,// 269 PAY 237 

    0x59b79e8e,// 270 PAY 238 

    0xdfa118e3,// 271 PAY 239 

    0xa3039a5e,// 272 PAY 240 

    0x71a97935,// 273 PAY 241 

    0xe6b41db9,// 274 PAY 242 

    0xdb8b7600,// 275 PAY 243 

    0x22055660,// 276 PAY 244 

    0x1a3a3e40,// 277 PAY 245 

    0x6b2fcb9b,// 278 PAY 246 

    0xa5f5e50d,// 279 PAY 247 

    0x0b97dabc,// 280 PAY 248 

    0x40269ca6,// 281 PAY 249 

    0xbc5c691f,// 282 PAY 250 

    0x84b679f6,// 283 PAY 251 

    0x75352ea1,// 284 PAY 252 

    0x6c0b279d,// 285 PAY 253 

    0x2b06bf3a,// 286 PAY 254 

    0x801c45bf,// 287 PAY 255 

    0x0f16b10e,// 288 PAY 256 

    0x4de8bc8f,// 289 PAY 257 

    0x63df05bf,// 290 PAY 258 

    0x2ba1bdda,// 291 PAY 259 

/// STA is 1 words. 

/// STA num_pkts       : 45 

/// STA pkt_idx        : 90 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf 

    0x01690f2d // 292 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt80_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0a 

/// ECH pdu_tag        : 0x00 

    0x000a0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0000000f,// 3 SCX   1 

    0x80462842,// 4 SCX   2 

    0x000033c2,// 5 SCX   3 

    0xb6496f6e,// 6 SCX   4 

    0xcb0e07d3,// 7 SCX   5 

    0xf047cdaf,// 8 SCX   6 

    0x769546c1,// 9 SCX   7 

    0xdca4c844,// 10 SCX   8 

    0x12561828,// 11 SCX   9 

    0xe783c154,// 12 SCX  10 

    0x08c6be86,// 13 SCX  11 

    0xc0d4bd87,// 14 SCX  12 

    0xa426f223,// 15 SCX  13 

    0x1619dc51,// 16 SCX  14 

    0x2ab359fb,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 796 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 237 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 237 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 224 

/// BFD (ofst+len)cry  : 232 

/// BFD ofstiv         : 128 

/// BFD ofsticv        : 500 

    0x000000ed,// 18 BFD   1 

    0x00e00008,// 19 BFD   2 

    0x01f40080,// 20 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 3 

    0x03008e40,// 21 MFM   1 

/// BDA is 200 words. 

/// BDA size     is 796 (0x31c) 

/// BDA id       is 0xcf5d 

    0x031ccf5d,// 22 BDA   1 

/// PAY Generic Data size   : 796 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x6aec1cf3,// 23 PAY   1 

    0x1104cb59,// 24 PAY   2 

    0xafa848ba,// 25 PAY   3 

    0xafbe4e1c,// 26 PAY   4 

    0xa358398a,// 27 PAY   5 

    0x480fdd6b,// 28 PAY   6 

    0xd614d1c8,// 29 PAY   7 

    0x18d7a876,// 30 PAY   8 

    0x5f23aaf1,// 31 PAY   9 

    0x6b141924,// 32 PAY  10 

    0x0aa0ea66,// 33 PAY  11 

    0xc591c2f3,// 34 PAY  12 

    0x3cb01aae,// 35 PAY  13 

    0x809b39e4,// 36 PAY  14 

    0x7c36cec2,// 37 PAY  15 

    0x2f866458,// 38 PAY  16 

    0x1cb3ea1a,// 39 PAY  17 

    0x5844b91c,// 40 PAY  18 

    0xfb8ea100,// 41 PAY  19 

    0x5c4c4e36,// 42 PAY  20 

    0x621c063a,// 43 PAY  21 

    0x8cdd9a48,// 44 PAY  22 

    0x88205c4d,// 45 PAY  23 

    0xbd85dedf,// 46 PAY  24 

    0xc6f7ad66,// 47 PAY  25 

    0x1a33e21d,// 48 PAY  26 

    0xdd97a041,// 49 PAY  27 

    0xaa067ac8,// 50 PAY  28 

    0x703f4bda,// 51 PAY  29 

    0x2cc515e9,// 52 PAY  30 

    0x8f1396a7,// 53 PAY  31 

    0x15bc3ac6,// 54 PAY  32 

    0xe9dd7ea8,// 55 PAY  33 

    0xa8d2d7c1,// 56 PAY  34 

    0x4b90037c,// 57 PAY  35 

    0xcff06688,// 58 PAY  36 

    0xba51025a,// 59 PAY  37 

    0x28f24c2c,// 60 PAY  38 

    0xb6c1461b,// 61 PAY  39 

    0x90dd9497,// 62 PAY  40 

    0x21a497a0,// 63 PAY  41 

    0x8994f48e,// 64 PAY  42 

    0x479e2152,// 65 PAY  43 

    0x7ad6e914,// 66 PAY  44 

    0x37a4f89f,// 67 PAY  45 

    0x161fff15,// 68 PAY  46 

    0x4febdd0c,// 69 PAY  47 

    0x7a921b2a,// 70 PAY  48 

    0xf81906f1,// 71 PAY  49 

    0x9ce8318e,// 72 PAY  50 

    0xe3e93aa7,// 73 PAY  51 

    0xf6f4fe48,// 74 PAY  52 

    0xd50f9b7b,// 75 PAY  53 

    0x950f6b98,// 76 PAY  54 

    0x59f83167,// 77 PAY  55 

    0xf33a362e,// 78 PAY  56 

    0x7f92896e,// 79 PAY  57 

    0xfc1a3f5f,// 80 PAY  58 

    0x2a12362c,// 81 PAY  59 

    0x332797c1,// 82 PAY  60 

    0xca0323a5,// 83 PAY  61 

    0x9869a22c,// 84 PAY  62 

    0x37949fce,// 85 PAY  63 

    0x747012f8,// 86 PAY  64 

    0xe2752454,// 87 PAY  65 

    0x7ca15ab7,// 88 PAY  66 

    0x3dd80786,// 89 PAY  67 

    0xdb4e701f,// 90 PAY  68 

    0x030495eb,// 91 PAY  69 

    0xf6e72453,// 92 PAY  70 

    0x16619c7f,// 93 PAY  71 

    0x13825497,// 94 PAY  72 

    0x4523868c,// 95 PAY  73 

    0x3e9896be,// 96 PAY  74 

    0xa438be40,// 97 PAY  75 

    0x792fdde9,// 98 PAY  76 

    0xa14f1635,// 99 PAY  77 

    0xf8108df2,// 100 PAY  78 

    0xc9a7cc97,// 101 PAY  79 

    0x7c7ef94b,// 102 PAY  80 

    0x7ee154a6,// 103 PAY  81 

    0x0ca1a1b5,// 104 PAY  82 

    0x18295151,// 105 PAY  83 

    0x653ee6b0,// 106 PAY  84 

    0x87a96946,// 107 PAY  85 

    0xf6ee4984,// 108 PAY  86 

    0xad570cb0,// 109 PAY  87 

    0x7cd3d0f9,// 110 PAY  88 

    0xdd2feb8a,// 111 PAY  89 

    0x6421ef9e,// 112 PAY  90 

    0x5467c010,// 113 PAY  91 

    0xec8c0cee,// 114 PAY  92 

    0xe0a8b0f2,// 115 PAY  93 

    0x2e8e058d,// 116 PAY  94 

    0xa70b342d,// 117 PAY  95 

    0x974a3dbe,// 118 PAY  96 

    0xe534dc77,// 119 PAY  97 

    0xa2956035,// 120 PAY  98 

    0x32d411b1,// 121 PAY  99 

    0x0792edff,// 122 PAY 100 

    0x7e1d2157,// 123 PAY 101 

    0x167ede4b,// 124 PAY 102 

    0x82c12579,// 125 PAY 103 

    0xe5f0e9b7,// 126 PAY 104 

    0xe5679844,// 127 PAY 105 

    0x71561f0b,// 128 PAY 106 

    0x96b0cf60,// 129 PAY 107 

    0x922cc734,// 130 PAY 108 

    0x3df9d972,// 131 PAY 109 

    0x9f2523fe,// 132 PAY 110 

    0xc0dc78db,// 133 PAY 111 

    0xb687f5f0,// 134 PAY 112 

    0xf495194e,// 135 PAY 113 

    0x1e14d156,// 136 PAY 114 

    0xe853253f,// 137 PAY 115 

    0x2e30bae3,// 138 PAY 116 

    0x75a7d642,// 139 PAY 117 

    0x4856bf40,// 140 PAY 118 

    0x4e828852,// 141 PAY 119 

    0xc00c2bb5,// 142 PAY 120 

    0x9f013d87,// 143 PAY 121 

    0xd386b89a,// 144 PAY 122 

    0x331e3f27,// 145 PAY 123 

    0x9d83da5c,// 146 PAY 124 

    0x4c3a2059,// 147 PAY 125 

    0x65c4ad82,// 148 PAY 126 

    0x236a7770,// 149 PAY 127 

    0xf4142e44,// 150 PAY 128 

    0xa98f1905,// 151 PAY 129 

    0x4e493381,// 152 PAY 130 

    0x29813f00,// 153 PAY 131 

    0xdf3477ea,// 154 PAY 132 

    0x94bc7e15,// 155 PAY 133 

    0xce0866c2,// 156 PAY 134 

    0x7f9392c7,// 157 PAY 135 

    0xb865ac53,// 158 PAY 136 

    0x6fc18f5c,// 159 PAY 137 

    0x2a00af5b,// 160 PAY 138 

    0x064d91d0,// 161 PAY 139 

    0xba474c0b,// 162 PAY 140 

    0xd1852ae6,// 163 PAY 141 

    0x3cae2e3b,// 164 PAY 142 

    0x9a207571,// 165 PAY 143 

    0xdfafa284,// 166 PAY 144 

    0x88bfd2fd,// 167 PAY 145 

    0x3cfda6d4,// 168 PAY 146 

    0x62bb7f2d,// 169 PAY 147 

    0xa2ef8256,// 170 PAY 148 

    0x9725e4ce,// 171 PAY 149 

    0xb625ebb3,// 172 PAY 150 

    0x855efbef,// 173 PAY 151 

    0xbd57465b,// 174 PAY 152 

    0xe8c62ecc,// 175 PAY 153 

    0xbbd8f474,// 176 PAY 154 

    0x0ede70b0,// 177 PAY 155 

    0x8037aa34,// 178 PAY 156 

    0xbfe763f7,// 179 PAY 157 

    0xd82c6041,// 180 PAY 158 

    0x9cb77aaf,// 181 PAY 159 

    0x6b07030f,// 182 PAY 160 

    0x71a9e0c1,// 183 PAY 161 

    0xfc16af52,// 184 PAY 162 

    0x90fad0e0,// 185 PAY 163 

    0x404d7117,// 186 PAY 164 

    0xfcad76ed,// 187 PAY 165 

    0x0e52ac3c,// 188 PAY 166 

    0xa39cfa71,// 189 PAY 167 

    0x1a06ba1d,// 190 PAY 168 

    0x61171d94,// 191 PAY 169 

    0x381136e9,// 192 PAY 170 

    0xe4c8bf67,// 193 PAY 171 

    0x2ac84ddb,// 194 PAY 172 

    0xf050aa7d,// 195 PAY 173 

    0xeae7fab5,// 196 PAY 174 

    0x72448868,// 197 PAY 175 

    0x8c566ade,// 198 PAY 176 

    0x3304b6b2,// 199 PAY 177 

    0x63f8bbf3,// 200 PAY 178 

    0xd7294ebf,// 201 PAY 179 

    0xed496946,// 202 PAY 180 

    0x76e17145,// 203 PAY 181 

    0xdd795993,// 204 PAY 182 

    0xcb109386,// 205 PAY 183 

    0x7cd5471a,// 206 PAY 184 

    0x81f0705c,// 207 PAY 185 

    0x8e999e2a,// 208 PAY 186 

    0x9e947300,// 209 PAY 187 

    0x33fb580d,// 210 PAY 188 

    0xd81fe3bf,// 211 PAY 189 

    0x6959841b,// 212 PAY 190 

    0x14c428db,// 213 PAY 191 

    0x12fca66c,// 214 PAY 192 

    0x249250c0,// 215 PAY 193 

    0x7a63746f,// 216 PAY 194 

    0xeb90817e,// 217 PAY 195 

    0xa6fd5a28,// 218 PAY 196 

    0x3f954111,// 219 PAY 197 

    0x666c5738,// 220 PAY 198 

    0xc89f41cc,// 221 PAY 199 

/// STA is 1 words. 

/// STA num_pkts       : 133 

/// STA pkt_idx        : 255 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x4 

    0x03fc0485 // 222 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt81_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x8041281c,// 4 SCX   2 

    0x00003100,// 5 SCX   3 

    0xadf4ebc4,// 6 SCX   4 

    0x478bf908,// 7 SCX   5 

    0xcec20a19,// 8 SCX   6 

    0x137a53f9,// 9 SCX   7 

    0xb81adaa1,// 10 SCX   8 

    0x2dee0860,// 11 SCX   9 

    0x25964cc2,// 12 SCX  10 

    0x3c3ff92f,// 13 SCX  11 

    0x689ebd6a,// 14 SCX  12 

    0x1d731e1a,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1168 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 796 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 796 

/// BFD lencrypto      : 96 

/// BFD ofstcrypto     : 312 

/// BFD (ofst+len)cry  : 408 

/// BFD ofstiv         : 212 

/// BFD ofsticv        : 836 

    0x0000031c,// 16 BFD   1 

    0x01380060,// 17 BFD   2 

    0x034400d4,// 18 BFD   3 

/// MFM is 13 words. 

/// MFM vldnibs        : 5f 

    0x5f001f11,// 19 MFM   1 

    0x51c4ca48,// 20 MFM   2 

    0x14fffbfd,// 21 MFM   3 

    0x86adfe55,// 22 MFM   4 

    0xdb73dcff,// 23 MFM   5 

    0x06e015e2,// 24 MFM   6 

    0xaa03ea4d,// 25 MFM   7 

    0xdd366313,// 26 MFM   8 

    0xca7e8304,// 27 MFM   9 

    0x6471b5a0,// 28 MFM  10 

    0x9d006b95,// 29 MFM  11 

    0x0c267717,// 30 MFM  12 

    0x04300000,// 31 MFM  13 

/// BDA is 293 words. 

/// BDA size     is 1168 (0x490) 

/// BDA id       is 0xe599 

    0x0490e599,// 32 BDA   1 

/// PAY Generic Data size   : 1168 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x42b5993a,// 33 PAY   1 

    0x1e6551e9,// 34 PAY   2 

    0xcba0a303,// 35 PAY   3 

    0x1b6a29a4,// 36 PAY   4 

    0x24814d27,// 37 PAY   5 

    0xff2ddce5,// 38 PAY   6 

    0x6b9c5b6e,// 39 PAY   7 

    0x42ce5930,// 40 PAY   8 

    0x903048a5,// 41 PAY   9 

    0xd4bac7d6,// 42 PAY  10 

    0x70a0b83d,// 43 PAY  11 

    0x96dc2828,// 44 PAY  12 

    0x78d1733c,// 45 PAY  13 

    0x0f4af923,// 46 PAY  14 

    0xe892aa0e,// 47 PAY  15 

    0xf708a57c,// 48 PAY  16 

    0x7787b579,// 49 PAY  17 

    0x36e4218d,// 50 PAY  18 

    0xa0aa2b15,// 51 PAY  19 

    0x6a7fd9ef,// 52 PAY  20 

    0x9a97b9ac,// 53 PAY  21 

    0x02a9b47c,// 54 PAY  22 

    0xbbbbac6b,// 55 PAY  23 

    0x5fe8ff30,// 56 PAY  24 

    0xd560f6bf,// 57 PAY  25 

    0x8b66d100,// 58 PAY  26 

    0xe96a19c0,// 59 PAY  27 

    0x51078bb5,// 60 PAY  28 

    0xea2651b0,// 61 PAY  29 

    0x0bd2c585,// 62 PAY  30 

    0x57e4e379,// 63 PAY  31 

    0x239c1167,// 64 PAY  32 

    0x157d14d5,// 65 PAY  33 

    0x17b08f07,// 66 PAY  34 

    0x00fd8b2d,// 67 PAY  35 

    0x9e483079,// 68 PAY  36 

    0x7c373aa8,// 69 PAY  37 

    0x17f447c1,// 70 PAY  38 

    0x4a0ee021,// 71 PAY  39 

    0x6858a7dd,// 72 PAY  40 

    0x5e73874f,// 73 PAY  41 

    0xe438b112,// 74 PAY  42 

    0x9080980d,// 75 PAY  43 

    0xab0b1fac,// 76 PAY  44 

    0x69094b5e,// 77 PAY  45 

    0x5f124273,// 78 PAY  46 

    0x9e78029f,// 79 PAY  47 

    0x6d634055,// 80 PAY  48 

    0xa2b21bdf,// 81 PAY  49 

    0x9297a65f,// 82 PAY  50 

    0xc2dcbf2b,// 83 PAY  51 

    0xce4c57c6,// 84 PAY  52 

    0x8ab2796f,// 85 PAY  53 

    0x3f19c5ea,// 86 PAY  54 

    0x39d7f4d1,// 87 PAY  55 

    0x65195c72,// 88 PAY  56 

    0x1db263fc,// 89 PAY  57 

    0x2a3e856e,// 90 PAY  58 

    0x31e5f23b,// 91 PAY  59 

    0x95eb6adb,// 92 PAY  60 

    0x0942e7a1,// 93 PAY  61 

    0xc534d88c,// 94 PAY  62 

    0xe8c34a88,// 95 PAY  63 

    0x35cd6497,// 96 PAY  64 

    0x57a40935,// 97 PAY  65 

    0x9d39e3f3,// 98 PAY  66 

    0xfa1fb6db,// 99 PAY  67 

    0x107dc17e,// 100 PAY  68 

    0xd348cb50,// 101 PAY  69 

    0x442e25e8,// 102 PAY  70 

    0xd736e9ac,// 103 PAY  71 

    0xd5020fdf,// 104 PAY  72 

    0x8cfa6e8f,// 105 PAY  73 

    0x30da5818,// 106 PAY  74 

    0x726309de,// 107 PAY  75 

    0xbf14593f,// 108 PAY  76 

    0x2defe2d0,// 109 PAY  77 

    0x2e399f9d,// 110 PAY  78 

    0x571710b0,// 111 PAY  79 

    0x1b72a051,// 112 PAY  80 

    0x3bb81219,// 113 PAY  81 

    0xd9c772e6,// 114 PAY  82 

    0x7bd82625,// 115 PAY  83 

    0xdc255c8b,// 116 PAY  84 

    0x3a8375f7,// 117 PAY  85 

    0xc195d46c,// 118 PAY  86 

    0x850ea8f0,// 119 PAY  87 

    0x7b8af034,// 120 PAY  88 

    0xb677a6ac,// 121 PAY  89 

    0x305393a4,// 122 PAY  90 

    0x13ffc8c8,// 123 PAY  91 

    0x92fa69d4,// 124 PAY  92 

    0xb6a79163,// 125 PAY  93 

    0x6de59a3c,// 126 PAY  94 

    0x1fcae34b,// 127 PAY  95 

    0xc9173df8,// 128 PAY  96 

    0x5ac3f93c,// 129 PAY  97 

    0x23924b30,// 130 PAY  98 

    0x00c484ff,// 131 PAY  99 

    0xa348e496,// 132 PAY 100 

    0x8041c853,// 133 PAY 101 

    0x1c60294c,// 134 PAY 102 

    0x6bf32684,// 135 PAY 103 

    0x4df690f7,// 136 PAY 104 

    0x3ce938ad,// 137 PAY 105 

    0x34e7e8fe,// 138 PAY 106 

    0x61f4896f,// 139 PAY 107 

    0x79cb9fc9,// 140 PAY 108 

    0xe4a43220,// 141 PAY 109 

    0x5cad8f01,// 142 PAY 110 

    0x0d4204c4,// 143 PAY 111 

    0xa0e740e3,// 144 PAY 112 

    0x5df32d68,// 145 PAY 113 

    0x46a2b342,// 146 PAY 114 

    0x373a5ec7,// 147 PAY 115 

    0xf7beabea,// 148 PAY 116 

    0xddce95c5,// 149 PAY 117 

    0xcc85f1ab,// 150 PAY 118 

    0x8ef0c9bc,// 151 PAY 119 

    0x788b00ca,// 152 PAY 120 

    0x02b419e6,// 153 PAY 121 

    0x31f68080,// 154 PAY 122 

    0x39ed5859,// 155 PAY 123 

    0x7b2db9e6,// 156 PAY 124 

    0x3dece79b,// 157 PAY 125 

    0xa792193a,// 158 PAY 126 

    0x98e40185,// 159 PAY 127 

    0xe734ffb1,// 160 PAY 128 

    0xb5151117,// 161 PAY 129 

    0xe0d84119,// 162 PAY 130 

    0xeefee000,// 163 PAY 131 

    0xec93acdd,// 164 PAY 132 

    0xf1f16cdb,// 165 PAY 133 

    0x5a683189,// 166 PAY 134 

    0x54e427cb,// 167 PAY 135 

    0x669d7a51,// 168 PAY 136 

    0xaa2b9705,// 169 PAY 137 

    0xd3df2694,// 170 PAY 138 

    0xcd72a0fc,// 171 PAY 139 

    0xc600ccd9,// 172 PAY 140 

    0x4411dff2,// 173 PAY 141 

    0xe8e0ebc8,// 174 PAY 142 

    0x7e88e415,// 175 PAY 143 

    0xfeacf916,// 176 PAY 144 

    0x4741a800,// 177 PAY 145 

    0x90f38208,// 178 PAY 146 

    0x91771327,// 179 PAY 147 

    0xe04e8491,// 180 PAY 148 

    0x0e1c7a93,// 181 PAY 149 

    0x344c9291,// 182 PAY 150 

    0x9e9b6a4f,// 183 PAY 151 

    0xe7620d50,// 184 PAY 152 

    0x1787f7f0,// 185 PAY 153 

    0x0a736e27,// 186 PAY 154 

    0x0bc8e65f,// 187 PAY 155 

    0x869e4f2a,// 188 PAY 156 

    0xb92333c9,// 189 PAY 157 

    0x322aa4d9,// 190 PAY 158 

    0x69698dad,// 191 PAY 159 

    0x229be6ba,// 192 PAY 160 

    0xaf19c359,// 193 PAY 161 

    0x0822641e,// 194 PAY 162 

    0xcc0289f9,// 195 PAY 163 

    0xcc6031ef,// 196 PAY 164 

    0x92aeebc2,// 197 PAY 165 

    0x8077e8c3,// 198 PAY 166 

    0x6d0202af,// 199 PAY 167 

    0x50a40237,// 200 PAY 168 

    0x9e75ec88,// 201 PAY 169 

    0x2d29edfc,// 202 PAY 170 

    0x20d6193a,// 203 PAY 171 

    0x46b6e152,// 204 PAY 172 

    0xf48fb614,// 205 PAY 173 

    0xb718da96,// 206 PAY 174 

    0x321fff2c,// 207 PAY 175 

    0x06312dca,// 208 PAY 176 

    0x28494580,// 209 PAY 177 

    0x4a72e939,// 210 PAY 178 

    0xa65ab225,// 211 PAY 179 

    0xca096c90,// 212 PAY 180 

    0x64954055,// 213 PAY 181 

    0xe408bde3,// 214 PAY 182 

    0xb7a4b33d,// 215 PAY 183 

    0x552aaa56,// 216 PAY 184 

    0x404f62c9,// 217 PAY 185 

    0x02b87584,// 218 PAY 186 

    0x1cc291f1,// 219 PAY 187 

    0x18d9cd6a,// 220 PAY 188 

    0xc39bdc6b,// 221 PAY 189 

    0xfaa1a7e3,// 222 PAY 190 

    0xa5f167da,// 223 PAY 191 

    0x098f675e,// 224 PAY 192 

    0x03fc1325,// 225 PAY 193 

    0x67c89bb4,// 226 PAY 194 

    0xc358d625,// 227 PAY 195 

    0x6d53f4c2,// 228 PAY 196 

    0x79fbe6f8,// 229 PAY 197 

    0x814ce051,// 230 PAY 198 

    0xf52eb3a2,// 231 PAY 199 

    0xd05c20b6,// 232 PAY 200 

    0x25f3dd49,// 233 PAY 201 

    0x7ed5fe7d,// 234 PAY 202 

    0xe7bdbaab,// 235 PAY 203 

    0x08a209d8,// 236 PAY 204 

    0xd62b09cd,// 237 PAY 205 

    0xbacb1c94,// 238 PAY 206 

    0x80147eab,// 239 PAY 207 

    0xce81bdd3,// 240 PAY 208 

    0x46676d12,// 241 PAY 209 

    0x34964125,// 242 PAY 210 

    0x3532ec2f,// 243 PAY 211 

    0x07df397d,// 244 PAY 212 

    0xb6f82621,// 245 PAY 213 

    0x4287e84c,// 246 PAY 214 

    0xa9598565,// 247 PAY 215 

    0x5109af92,// 248 PAY 216 

    0x6b400e45,// 249 PAY 217 

    0xacc4b7fe,// 250 PAY 218 

    0x7dfed360,// 251 PAY 219 

    0xbda9225e,// 252 PAY 220 

    0xfab7e432,// 253 PAY 221 

    0x998e3d34,// 254 PAY 222 

    0x39883c6f,// 255 PAY 223 

    0x0c6ca656,// 256 PAY 224 

    0x0a3cc909,// 257 PAY 225 

    0xe3bc8fe0,// 258 PAY 226 

    0x9e90a8bf,// 259 PAY 227 

    0x78699dcc,// 260 PAY 228 

    0x085612cd,// 261 PAY 229 

    0x75c6b123,// 262 PAY 230 

    0x0124bf35,// 263 PAY 231 

    0x0e94f33c,// 264 PAY 232 

    0x06ff0e99,// 265 PAY 233 

    0x2bbe6802,// 266 PAY 234 

    0x6cfabeb0,// 267 PAY 235 

    0x0c00d9d5,// 268 PAY 236 

    0xb4462514,// 269 PAY 237 

    0x95aee21e,// 270 PAY 238 

    0xbe65953f,// 271 PAY 239 

    0x1c051e8b,// 272 PAY 240 

    0x801897fe,// 273 PAY 241 

    0xa2602899,// 274 PAY 242 

    0xd8ab51b5,// 275 PAY 243 

    0x4a3f7156,// 276 PAY 244 

    0xa0d33201,// 277 PAY 245 

    0xecaca6fb,// 278 PAY 246 

    0xa62d7cc4,// 279 PAY 247 

    0xda2c11b3,// 280 PAY 248 

    0x39373a96,// 281 PAY 249 

    0x37ef946e,// 282 PAY 250 

    0x21db3408,// 283 PAY 251 

    0xc3c3f108,// 284 PAY 252 

    0x81d70531,// 285 PAY 253 

    0x5d62bc13,// 286 PAY 254 

    0x598c908b,// 287 PAY 255 

    0x54ca15d6,// 288 PAY 256 

    0x5ef1de5a,// 289 PAY 257 

    0xbfad2d2f,// 290 PAY 258 

    0xb85e81c7,// 291 PAY 259 

    0xb0e36874,// 292 PAY 260 

    0xa7cca493,// 293 PAY 261 

    0x54869c12,// 294 PAY 262 

    0x32b3cc1d,// 295 PAY 263 

    0x6b7d68b9,// 296 PAY 264 

    0xe530861a,// 297 PAY 265 

    0x881009d1,// 298 PAY 266 

    0x3a71a58b,// 299 PAY 267 

    0x299e8633,// 300 PAY 268 

    0x3f53d2fd,// 301 PAY 269 

    0x224ee610,// 302 PAY 270 

    0x54a4d05e,// 303 PAY 271 

    0xbe14449e,// 304 PAY 272 

    0x84756a47,// 305 PAY 273 

    0xd23ee597,// 306 PAY 274 

    0x0ad201b3,// 307 PAY 275 

    0x6c4f11bd,// 308 PAY 276 

    0xefb11912,// 309 PAY 277 

    0x93beda38,// 310 PAY 278 

    0x42030f1b,// 311 PAY 279 

    0x0b11bd76,// 312 PAY 280 

    0x50375203,// 313 PAY 281 

    0xf5504fa5,// 314 PAY 282 

    0xeaee5c66,// 315 PAY 283 

    0x493bb7ff,// 316 PAY 284 

    0x3a15e554,// 317 PAY 285 

    0xd93522ae,// 318 PAY 286 

    0xfd6e13b2,// 319 PAY 287 

    0xc7114be5,// 320 PAY 288 

    0xab40ace4,// 321 PAY 289 

    0xfca1a272,// 322 PAY 290 

    0x3b88b3da,// 323 PAY 291 

    0x3a8ea39e,// 324 PAY 292 

/// STA is 1 words. 

/// STA num_pkts       : 210 

/// STA pkt_idx        : 251 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x1f 

    0x03ed1fd2 // 325 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt82_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x06 

/// ECH pdu_tag        : 0x00 

    0x00060000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x804228ab,// 4 SCX   2 

    0x00000300,// 5 SCX   3 

    0x8f277c0a,// 6 SCX   4 

    0x12a933ea,// 7 SCX   5 

    0x2d365d71,// 8 SCX   6 

    0x461512a6,// 9 SCX   7 

    0xfd097baa,// 10 SCX   8 

    0x1401f307,// 11 SCX   9 

    0x0e35b84d,// 12 SCX  10 

    0x232fe176,// 13 SCX  11 

    0x5cab186b,// 14 SCX  12 

    0x03534e7a,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 678 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 313 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 313 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 264 

/// BFD (ofst+len)cry  : 296 

/// BFD ofstiv         : 156 

/// BFD ofsticv        : 340 

    0x00000139,// 16 BFD   1 

    0x01080020,// 17 BFD   2 

    0x0154009c,// 18 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : 11 

    0x110063cb,// 19 MFM   1 

    0x23b6fbab,// 20 MFM   2 

    0x7c83c000,// 21 MFM   3 

/// BDA is 171 words. 

/// BDA size     is 678 (0x2a6) 

/// BDA id       is 0x8517 

    0x02a68517,// 22 BDA   1 

/// PAY Generic Data size   : 678 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0x5f5d8290,// 23 PAY   1 

    0x26b8969c,// 24 PAY   2 

    0x1faf59f4,// 25 PAY   3 

    0x2ddf1acc,// 26 PAY   4 

    0x5a92d801,// 27 PAY   5 

    0x9c38897b,// 28 PAY   6 

    0x749a2521,// 29 PAY   7 

    0x4dbb4fc6,// 30 PAY   8 

    0xb04b5bfd,// 31 PAY   9 

    0xd9d7d590,// 32 PAY  10 

    0xea2e48bb,// 33 PAY  11 

    0x6885c108,// 34 PAY  12 

    0x65294ced,// 35 PAY  13 

    0x6c8be1b7,// 36 PAY  14 

    0x3007ac7e,// 37 PAY  15 

    0xacc53174,// 38 PAY  16 

    0xc44e2672,// 39 PAY  17 

    0x79aa7101,// 40 PAY  18 

    0x5e2b9a61,// 41 PAY  19 

    0x157873db,// 42 PAY  20 

    0xb5f9b1e0,// 43 PAY  21 

    0xebd9dfa9,// 44 PAY  22 

    0x74fd9937,// 45 PAY  23 

    0x0a1b2c33,// 46 PAY  24 

    0xfc932084,// 47 PAY  25 

    0x4c075bdf,// 48 PAY  26 

    0xc3558a20,// 49 PAY  27 

    0xcda700cd,// 50 PAY  28 

    0xf8a0f3ec,// 51 PAY  29 

    0xf1a6b214,// 52 PAY  30 

    0x722fbc6c,// 53 PAY  31 

    0xdbf37a00,// 54 PAY  32 

    0x09c2434e,// 55 PAY  33 

    0xc714f3cc,// 56 PAY  34 

    0xfa0fb82d,// 57 PAY  35 

    0xc7b7d619,// 58 PAY  36 

    0x33037434,// 59 PAY  37 

    0x92fc8467,// 60 PAY  38 

    0x1a342875,// 61 PAY  39 

    0xe85aafe7,// 62 PAY  40 

    0x398c50e6,// 63 PAY  41 

    0xd3024423,// 64 PAY  42 

    0x7b01b4eb,// 65 PAY  43 

    0x96b9a6d0,// 66 PAY  44 

    0x19782474,// 67 PAY  45 

    0xc3b32ffe,// 68 PAY  46 

    0x0e3883db,// 69 PAY  47 

    0x3f38026d,// 70 PAY  48 

    0xe4b8703f,// 71 PAY  49 

    0x750fe484,// 72 PAY  50 

    0xb550fd68,// 73 PAY  51 

    0x305b7778,// 74 PAY  52 

    0x0d5ffaf1,// 75 PAY  53 

    0x31f95267,// 76 PAY  54 

    0xcd837f05,// 77 PAY  55 

    0x8dd49460,// 78 PAY  56 

    0x2f6088b9,// 79 PAY  57 

    0x168c0702,// 80 PAY  58 

    0x9e7ce4d3,// 81 PAY  59 

    0x401cfc87,// 82 PAY  60 

    0x3d371a6a,// 83 PAY  61 

    0x06c6fc32,// 84 PAY  62 

    0xfce9edb3,// 85 PAY  63 

    0x6b393a89,// 86 PAY  64 

    0x681e1498,// 87 PAY  65 

    0x6af2f8ad,// 88 PAY  66 

    0x83bb0bd3,// 89 PAY  67 

    0x1bf83c2a,// 90 PAY  68 

    0x977e8fee,// 91 PAY  69 

    0x1c570991,// 92 PAY  70 

    0xe37b55d1,// 93 PAY  71 

    0xbd5b96a5,// 94 PAY  72 

    0x331b7226,// 95 PAY  73 

    0x8269677f,// 96 PAY  74 

    0x812804f9,// 97 PAY  75 

    0xb128b209,// 98 PAY  76 

    0x8eca133e,// 99 PAY  77 

    0x8e391398,// 100 PAY  78 

    0x0642ae4a,// 101 PAY  79 

    0x2b03acfd,// 102 PAY  80 

    0xa3c88df9,// 103 PAY  81 

    0x2c0746ef,// 104 PAY  82 

    0x107aff09,// 105 PAY  83 

    0xcf2a31b3,// 106 PAY  84 

    0xd8901bff,// 107 PAY  85 

    0x64d1eeec,// 108 PAY  86 

    0x1d1421a2,// 109 PAY  87 

    0xb741592c,// 110 PAY  88 

    0xf8f5241e,// 111 PAY  89 

    0xf95318d2,// 112 PAY  90 

    0xefcd6568,// 113 PAY  91 

    0xcdac554c,// 114 PAY  92 

    0xffce896e,// 115 PAY  93 

    0x9da1a8af,// 116 PAY  94 

    0x9529482b,// 117 PAY  95 

    0xbb00810e,// 118 PAY  96 

    0x569c2792,// 119 PAY  97 

    0x9e59d3a1,// 120 PAY  98 

    0x6a9f26bf,// 121 PAY  99 

    0xfebfac20,// 122 PAY 100 

    0x4502417d,// 123 PAY 101 

    0xbaf8de61,// 124 PAY 102 

    0xd8009212,// 125 PAY 103 

    0x5885bca8,// 126 PAY 104 

    0xc9647a60,// 127 PAY 105 

    0xb4493643,// 128 PAY 106 

    0x243d5ecc,// 129 PAY 107 

    0xdebc3d76,// 130 PAY 108 

    0x6f24e230,// 131 PAY 109 

    0x63bd8933,// 132 PAY 110 

    0x0b946ec6,// 133 PAY 111 

    0x83ef235e,// 134 PAY 112 

    0xaede92cc,// 135 PAY 113 

    0x7510d96c,// 136 PAY 114 

    0x65ff2e16,// 137 PAY 115 

    0xd36fdfd5,// 138 PAY 116 

    0xcdc3b1c5,// 139 PAY 117 

    0xda2f3bd6,// 140 PAY 118 

    0x5595aacf,// 141 PAY 119 

    0x4a2fed41,// 142 PAY 120 

    0x4d3768a5,// 143 PAY 121 

    0xa55eaacb,// 144 PAY 122 

    0x4ec9f68a,// 145 PAY 123 

    0x19a2368e,// 146 PAY 124 

    0xc8801f43,// 147 PAY 125 

    0x0927de40,// 148 PAY 126 

    0xc4ab8bd8,// 149 PAY 127 

    0x60dfe6a8,// 150 PAY 128 

    0x0a9ba76d,// 151 PAY 129 

    0x3715475d,// 152 PAY 130 

    0xa44eb991,// 153 PAY 131 

    0xea21eb45,// 154 PAY 132 

    0x289ab71b,// 155 PAY 133 

    0xd0c141ce,// 156 PAY 134 

    0x52982cb3,// 157 PAY 135 

    0x3dd1f213,// 158 PAY 136 

    0xdfde137e,// 159 PAY 137 

    0x42a3a472,// 160 PAY 138 

    0x31410465,// 161 PAY 139 

    0x3491fbe0,// 162 PAY 140 

    0x1c7491d2,// 163 PAY 141 

    0x4ffcac54,// 164 PAY 142 

    0x5033e5e0,// 165 PAY 143 

    0x8d516ba4,// 166 PAY 144 

    0x432bc37d,// 167 PAY 145 

    0xc5149b1d,// 168 PAY 146 

    0x8da90d64,// 169 PAY 147 

    0x312d5991,// 170 PAY 148 

    0x1a09df1c,// 171 PAY 149 

    0x8020b641,// 172 PAY 150 

    0x33e0d04a,// 173 PAY 151 

    0x9a3b48c3,// 174 PAY 152 

    0x3dca9bc4,// 175 PAY 153 

    0x5ed9c417,// 176 PAY 154 

    0x8d9b3e3a,// 177 PAY 155 

    0xaa226e02,// 178 PAY 156 

    0x99196241,// 179 PAY 157 

    0x6fed8bc0,// 180 PAY 158 

    0xc7223205,// 181 PAY 159 

    0xbc2b1411,// 182 PAY 160 

    0xaa0e8489,// 183 PAY 161 

    0x0dba8ee2,// 184 PAY 162 

    0xc07cd2a4,// 185 PAY 163 

    0xe6f59b47,// 186 PAY 164 

    0x9f0ca412,// 187 PAY 165 

    0x58685b4e,// 188 PAY 166 

    0x46566cd4,// 189 PAY 167 

    0x342c09f6,// 190 PAY 168 

    0x17f03722,// 191 PAY 169 

    0xbcfc0000,// 192 PAY 170 

/// STA is 1 words. 

/// STA num_pkts       : 81 

/// STA pkt_idx        : 247 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xdc 

    0x03dcdc51 // 193 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt83_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0f 

/// ECH pdu_tag        : 0x00 

    0x000f0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x80442853,// 4 SCX   2 

    0x00002382,// 5 SCX   3 

    0x79977ea9,// 6 SCX   4 

    0xf1e2ae03,// 7 SCX   5 

    0xb9050b61,// 8 SCX   6 

    0xa888e3b0,// 9 SCX   7 

    0x32fd3cf7,// 10 SCX   8 

    0xc851297e,// 11 SCX   9 

    0xc939c3fd,// 12 SCX  10 

    0x1e093ebb,// 13 SCX  11 

    0x2baf3de6,// 14 SCX  12 

    0x4a8e2aa9,// 15 SCX  13 

    0xde70bc25,// 16 SCX  14 

    0x39eb700d,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1056 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 945 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 945 

/// BFD lencrypto      : 152 

/// BFD ofstcrypto     : 676 

/// BFD (ofst+len)cry  : 828 

/// BFD ofstiv         : 220 

/// BFD ofsticv        : 980 

    0x000003b1,// 18 BFD   1 

    0x02a40098,// 19 BFD   2 

    0x03d400dc,// 20 BFD   3 

/// MFM is 13 words. 

/// MFM vldnibs        : 60 

    0x600064ff,// 21 MFM   1 

    0x6369059b,// 22 MFM   2 

    0x04ff76c2,// 23 MFM   3 

    0x437715ba,// 24 MFM   4 

    0xe691f52c,// 25 MFM   5 

    0xace808c6,// 26 MFM   6 

    0x5c54ab6d,// 27 MFM   7 

    0x7b09583e,// 28 MFM   8 

    0x27da02b0,// 29 MFM   9 

    0xa1894116,// 30 MFM  10 

    0x3fbd0879,// 31 MFM  11 

    0xd6bf8555,// 32 MFM  12 

    0xf5c10000,// 33 MFM  13 

/// BDA is 265 words. 

/// BDA size     is 1056 (0x420) 

/// BDA id       is 0x8d6d 

    0x04208d6d,// 34 BDA   1 

/// PAY Generic Data size   : 1056 byte(s) 

/// PAD Buffer Data Pad size   : 0 byte(s) 

    0x4f6bf28c,// 35 PAY   1 

    0x54e5c017,// 36 PAY   2 

    0xbc86ac8c,// 37 PAY   3 

    0x6db3e34b,// 38 PAY   4 

    0x1f8b8b0b,// 39 PAY   5 

    0xb9944e08,// 40 PAY   6 

    0x5c140254,// 41 PAY   7 

    0x87d7dc6d,// 42 PAY   8 

    0x82734e90,// 43 PAY   9 

    0xcda1b2d0,// 44 PAY  10 

    0x0a3bef63,// 45 PAY  11 

    0xd9efa2a6,// 46 PAY  12 

    0xb7e7116d,// 47 PAY  13 

    0xfab3442b,// 48 PAY  14 

    0xa5ce6fc9,// 49 PAY  15 

    0x5f3fdfcd,// 50 PAY  16 

    0xa654ec39,// 51 PAY  17 

    0xe0f41f3a,// 52 PAY  18 

    0x044e3c29,// 53 PAY  19 

    0x5cc25e1a,// 54 PAY  20 

    0x6f0962ab,// 55 PAY  21 

    0x9cab752e,// 56 PAY  22 

    0xbb70973d,// 57 PAY  23 

    0xcfd74dd6,// 58 PAY  24 

    0xbb449320,// 59 PAY  25 

    0x23f1d905,// 60 PAY  26 

    0xa13803f5,// 61 PAY  27 

    0x1ea95a2b,// 62 PAY  28 

    0xa36fed93,// 63 PAY  29 

    0x5d542d88,// 64 PAY  30 

    0x83da026a,// 65 PAY  31 

    0x27fd083c,// 66 PAY  32 

    0xa56a32aa,// 67 PAY  33 

    0x5c32bb9c,// 68 PAY  34 

    0x173f3a08,// 69 PAY  35 

    0xd19e2d4a,// 70 PAY  36 

    0xd8b0d123,// 71 PAY  37 

    0xa5eedcee,// 72 PAY  38 

    0x9e740923,// 73 PAY  39 

    0x36631632,// 74 PAY  40 

    0xc9dddbf3,// 75 PAY  41 

    0x677bc030,// 76 PAY  42 

    0xe13f2994,// 77 PAY  43 

    0x02a188ee,// 78 PAY  44 

    0xe51612af,// 79 PAY  45 

    0xb7632e5e,// 80 PAY  46 

    0x2a4d315e,// 81 PAY  47 

    0x33da3066,// 82 PAY  48 

    0x97c81f0d,// 83 PAY  49 

    0x7e155595,// 84 PAY  50 

    0xe7880ab7,// 85 PAY  51 

    0xd6d9312d,// 86 PAY  52 

    0x17093299,// 87 PAY  53 

    0x3af2917a,// 88 PAY  54 

    0x946bfea1,// 89 PAY  55 

    0x6f84a6a7,// 90 PAY  56 

    0x6973fb7a,// 91 PAY  57 

    0xa3df6ee8,// 92 PAY  58 

    0x10b230bb,// 93 PAY  59 

    0x06b735a6,// 94 PAY  60 

    0x3287b62d,// 95 PAY  61 

    0x07cf70a8,// 96 PAY  62 

    0x56882d87,// 97 PAY  63 

    0x8ffba09a,// 98 PAY  64 

    0x9126ea3f,// 99 PAY  65 

    0x10ef6e75,// 100 PAY  66 

    0x131e15f9,// 101 PAY  67 

    0x7e845747,// 102 PAY  68 

    0xe34b0f13,// 103 PAY  69 

    0x6fc20ee2,// 104 PAY  70 

    0xf535a79c,// 105 PAY  71 

    0x0f8d8822,// 106 PAY  72 

    0x274a2f08,// 107 PAY  73 

    0x90e860a7,// 108 PAY  74 

    0x9dd23bcb,// 109 PAY  75 

    0x7e2ecfe2,// 110 PAY  76 

    0x8aef6ea9,// 111 PAY  77 

    0xfd3e00f3,// 112 PAY  78 

    0x2d64c4aa,// 113 PAY  79 

    0xb1986218,// 114 PAY  80 

    0x1e4a87d2,// 115 PAY  81 

    0x1533151b,// 116 PAY  82 

    0xd1eab7a3,// 117 PAY  83 

    0x99992885,// 118 PAY  84 

    0x8b173a1f,// 119 PAY  85 

    0x90e03134,// 120 PAY  86 

    0x4b21ac2f,// 121 PAY  87 

    0x4fd92492,// 122 PAY  88 

    0x00aee959,// 123 PAY  89 

    0xbc5b57de,// 124 PAY  90 

    0x65021a58,// 125 PAY  91 

    0x612b9ce1,// 126 PAY  92 

    0xd9526e2f,// 127 PAY  93 

    0x4934eaf4,// 128 PAY  94 

    0xf784d333,// 129 PAY  95 

    0x315e2285,// 130 PAY  96 

    0xc2ec6e28,// 131 PAY  97 

    0x5551070a,// 132 PAY  98 

    0x71e3a827,// 133 PAY  99 

    0xf2e494f5,// 134 PAY 100 

    0xc5960fcc,// 135 PAY 101 

    0x2d95f0a5,// 136 PAY 102 

    0x1fe2fdd8,// 137 PAY 103 

    0x7304bdb5,// 138 PAY 104 

    0xc46c87f6,// 139 PAY 105 

    0xc2be0acc,// 140 PAY 106 

    0x324ed126,// 141 PAY 107 

    0x869d9b29,// 142 PAY 108 

    0xa924dc56,// 143 PAY 109 

    0xf79c9271,// 144 PAY 110 

    0xc2161add,// 145 PAY 111 

    0xdb6875eb,// 146 PAY 112 

    0x60adb534,// 147 PAY 113 

    0x49c59c04,// 148 PAY 114 

    0x67fa44a7,// 149 PAY 115 

    0x9b15507b,// 150 PAY 116 

    0x8ee55fda,// 151 PAY 117 

    0x2535f865,// 152 PAY 118 

    0x20aac7cb,// 153 PAY 119 

    0x596df16d,// 154 PAY 120 

    0x4c22e5d8,// 155 PAY 121 

    0x0ce3fa30,// 156 PAY 122 

    0xb09b60ca,// 157 PAY 123 

    0xcfb2b9ed,// 158 PAY 124 

    0x5b0c5945,// 159 PAY 125 

    0xafec8c22,// 160 PAY 126 

    0x7fa65812,// 161 PAY 127 

    0x43d9c939,// 162 PAY 128 

    0x1a2a9f16,// 163 PAY 129 

    0xd9ba4777,// 164 PAY 130 

    0x27e89b45,// 165 PAY 131 

    0x6e94c58f,// 166 PAY 132 

    0xcb500881,// 167 PAY 133 

    0xa7151ba1,// 168 PAY 134 

    0xa180653f,// 169 PAY 135 

    0xbd32f4a1,// 170 PAY 136 

    0x4aff7516,// 171 PAY 137 

    0x4d7e8f1b,// 172 PAY 138 

    0xb1b336df,// 173 PAY 139 

    0x1a14e000,// 174 PAY 140 

    0x4036ba76,// 175 PAY 141 

    0x3e9e099e,// 176 PAY 142 

    0x3825dcbe,// 177 PAY 143 

    0x96f7e76d,// 178 PAY 144 

    0xb32d12b3,// 179 PAY 145 

    0x724b129c,// 180 PAY 146 

    0x6fc1fe39,// 181 PAY 147 

    0xf2f85f51,// 182 PAY 148 

    0x6aaaf13b,// 183 PAY 149 

    0xd84c7f35,// 184 PAY 150 

    0x627b5866,// 185 PAY 151 

    0xda6db5fd,// 186 PAY 152 

    0x6fdaa956,// 187 PAY 153 

    0x6d09fcd6,// 188 PAY 154 

    0x91de973c,// 189 PAY 155 

    0x62c31f61,// 190 PAY 156 

    0xbfa746c0,// 191 PAY 157 

    0x5d517778,// 192 PAY 158 

    0x0777882e,// 193 PAY 159 

    0x0e05a6e7,// 194 PAY 160 

    0x465b26a2,// 195 PAY 161 

    0xac424019,// 196 PAY 162 

    0x1eec525a,// 197 PAY 163 

    0x0f491e70,// 198 PAY 164 

    0x806509e4,// 199 PAY 165 

    0xb85ba1a3,// 200 PAY 166 

    0x5abf9bf2,// 201 PAY 167 

    0xf55ec72d,// 202 PAY 168 

    0xf3f1e51d,// 203 PAY 169 

    0xec25da9c,// 204 PAY 170 

    0x98fbfd92,// 205 PAY 171 

    0x8080bd19,// 206 PAY 172 

    0x99119b25,// 207 PAY 173 

    0x0ccec254,// 208 PAY 174 

    0x8a6c4bde,// 209 PAY 175 

    0xe85f684d,// 210 PAY 176 

    0xe93b81f7,// 211 PAY 177 

    0x95f70852,// 212 PAY 178 

    0x70c40581,// 213 PAY 179 

    0x60189aac,// 214 PAY 180 

    0x7bde6c68,// 215 PAY 181 

    0x17f69d16,// 216 PAY 182 

    0x7ce1ecf4,// 217 PAY 183 

    0xadd8122a,// 218 PAY 184 

    0xe659b4bf,// 219 PAY 185 

    0xc30b7808,// 220 PAY 186 

    0xe4528e6c,// 221 PAY 187 

    0xa0acf0c1,// 222 PAY 188 

    0xe7c5199d,// 223 PAY 189 

    0xa3103e60,// 224 PAY 190 

    0x75cfbb34,// 225 PAY 191 

    0xdb569091,// 226 PAY 192 

    0xea40afd1,// 227 PAY 193 

    0xd52b64a0,// 228 PAY 194 

    0x1125dd29,// 229 PAY 195 

    0x6384504c,// 230 PAY 196 

    0x536debcc,// 231 PAY 197 

    0xcad13d8f,// 232 PAY 198 

    0xa19261f5,// 233 PAY 199 

    0x2f750d21,// 234 PAY 200 

    0xbf9dde2c,// 235 PAY 201 

    0x49d93c55,// 236 PAY 202 

    0x7914ed02,// 237 PAY 203 

    0x39d81cbe,// 238 PAY 204 

    0x1b9409b1,// 239 PAY 205 

    0x7e5a36b4,// 240 PAY 206 

    0xaf8197c2,// 241 PAY 207 

    0xd254bab7,// 242 PAY 208 

    0x0fecc96d,// 243 PAY 209 

    0xcb28cc26,// 244 PAY 210 

    0x42a8b206,// 245 PAY 211 

    0xd6efc660,// 246 PAY 212 

    0x69eff2d3,// 247 PAY 213 

    0x575b2f64,// 248 PAY 214 

    0x78bd8f64,// 249 PAY 215 

    0x0926ff4b,// 250 PAY 216 

    0xd0de100f,// 251 PAY 217 

    0xf5300a84,// 252 PAY 218 

    0x87601744,// 253 PAY 219 

    0x126d12e6,// 254 PAY 220 

    0xd2851cc4,// 255 PAY 221 

    0x27bc9817,// 256 PAY 222 

    0x16ea8017,// 257 PAY 223 

    0x46be7527,// 258 PAY 224 

    0x1ca9c4a7,// 259 PAY 225 

    0x6a7a0c0d,// 260 PAY 226 

    0xdbb3c718,// 261 PAY 227 

    0x1eb68c0b,// 262 PAY 228 

    0x3f09a9fe,// 263 PAY 229 

    0xcbaf63ed,// 264 PAY 230 

    0x760ee7e8,// 265 PAY 231 

    0x0f305afa,// 266 PAY 232 

    0x9013fd8d,// 267 PAY 233 

    0x4732d5cc,// 268 PAY 234 

    0xcdfe0ef4,// 269 PAY 235 

    0xb4cf9445,// 270 PAY 236 

    0xb41eb56e,// 271 PAY 237 

    0xc22e4aaf,// 272 PAY 238 

    0xb15c946c,// 273 PAY 239 

    0xa8530b88,// 274 PAY 240 

    0xa8e23b3f,// 275 PAY 241 

    0xe07c6510,// 276 PAY 242 

    0x8752761c,// 277 PAY 243 

    0x05bb1029,// 278 PAY 244 

    0xae52a23c,// 279 PAY 245 

    0x9759c29c,// 280 PAY 246 

    0xbe4387ba,// 281 PAY 247 

    0xeef84a4e,// 282 PAY 248 

    0x37b6fdf9,// 283 PAY 249 

    0x5b8fd88c,// 284 PAY 250 

    0x1fbf0d37,// 285 PAY 251 

    0x4eca03a9,// 286 PAY 252 

    0x47a92f98,// 287 PAY 253 

    0xf33f088d,// 288 PAY 254 

    0x7803ad71,// 289 PAY 255 

    0x1ca66cc2,// 290 PAY 256 

    0x3de4ad17,// 291 PAY 257 

    0xd924dc9c,// 292 PAY 258 

    0xe3d29f33,// 293 PAY 259 

    0xb461950b,// 294 PAY 260 

    0x629d6742,// 295 PAY 261 

    0xb81b9fa1,// 296 PAY 262 

    0xcc8730c3,// 297 PAY 263 

    0x966d05ad,// 298 PAY 264 

/// STA is 1 words. 

/// STA num_pkts       : 73 

/// STA pkt_idx        : 206 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x16 

    0x03391649 // 299 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt84_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0800000d,// 3 SCX   1 

    0x8040287c,// 4 SCX   2 

    0x00005300,// 5 SCX   3 

    0x7c784d68,// 6 SCX   4 

    0xe38a76ac,// 7 SCX   5 

    0xece11010,// 8 SCX   6 

    0xbc101ef9,// 9 SCX   7 

    0xd7e5108c,// 10 SCX   8 

    0xcdbe1d5f,// 11 SCX   9 

    0x747f5c5f,// 12 SCX  10 

    0x3b1b3d44,// 13 SCX  11 

    0x8b1bd3bf,// 14 SCX  12 

    0xbaf725af,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 901 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 565 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 565 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 524 

/// BFD (ofst+len)cry  : 556 

/// BFD ofstiv         : 496 

/// BFD ofsticv        : 732 

    0x00000235,// 16 BFD   1 

    0x020c0020,// 17 BFD   2 

    0x02dc01f0,// 18 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c000f06,// 19 MFM   1 

    0x0c046a46,// 20 MFM   2 

    0xafc68996,// 21 MFM   3 

    0x2a95ecc1,// 22 MFM   4 

    0x3854449e,// 23 MFM   5 

    0xa920cc10,// 24 MFM   6 

    0x4de8d743,// 25 MFM   7 

    0x4d0f69e4,// 26 MFM   8 

    0xd145a3fb,// 27 MFM   9 

    0x88d697f2,// 28 MFM  10 

    0xcdaa99ec,// 29 MFM  11 

    0xce59f903,// 30 MFM  12 

    0xdaaa56a5,// 31 MFM  13 

    0xeb95fb70,// 32 MFM  14 

    0x60264850,// 33 MFM  15 

    0x346c8565,// 34 MFM  16 

/// BDA is 227 words. 

/// BDA size     is 901 (0x385) 

/// BDA id       is 0x8ef 

    0x038508ef,// 35 BDA   1 

/// PAY Generic Data size   : 901 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x85100d80,// 36 PAY   1 

    0x63c54be0,// 37 PAY   2 

    0xc0340fdb,// 38 PAY   3 

    0x991d9a64,// 39 PAY   4 

    0x780acfd6,// 40 PAY   5 

    0xc24f033c,// 41 PAY   6 

    0x5bcf08bc,// 42 PAY   7 

    0xc024443a,// 43 PAY   8 

    0x2f05c192,// 44 PAY   9 

    0x08b99921,// 45 PAY  10 

    0x3359bd07,// 46 PAY  11 

    0x83124194,// 47 PAY  12 

    0x4a21c7fa,// 48 PAY  13 

    0xe7b84476,// 49 PAY  14 

    0x58ac643e,// 50 PAY  15 

    0x1bfa324e,// 51 PAY  16 

    0x4124c99f,// 52 PAY  17 

    0x79747ae8,// 53 PAY  18 

    0xcc500337,// 54 PAY  19 

    0xe98d61ba,// 55 PAY  20 

    0x634cda54,// 56 PAY  21 

    0x4797bc1c,// 57 PAY  22 

    0x97ff7c5f,// 58 PAY  23 

    0xd6a38b1e,// 59 PAY  24 

    0x548b5b14,// 60 PAY  25 

    0x20b75f17,// 61 PAY  26 

    0x30ba6400,// 62 PAY  27 

    0xddd43c1e,// 63 PAY  28 

    0x387e7571,// 64 PAY  29 

    0xabb171c2,// 65 PAY  30 

    0x950bb682,// 66 PAY  31 

    0xe986c476,// 67 PAY  32 

    0xb87f8eea,// 68 PAY  33 

    0x00184067,// 69 PAY  34 

    0x40c74f95,// 70 PAY  35 

    0x48bdcf13,// 71 PAY  36 

    0x660f8a5f,// 72 PAY  37 

    0xdb28890a,// 73 PAY  38 

    0xb3a4ec21,// 74 PAY  39 

    0x6813792d,// 75 PAY  40 

    0xb5b7f189,// 76 PAY  41 

    0xdff12800,// 77 PAY  42 

    0x622642c2,// 78 PAY  43 

    0x872f2844,// 79 PAY  44 

    0x81affe59,// 80 PAY  45 

    0x0fba94a1,// 81 PAY  46 

    0x33990d43,// 82 PAY  47 

    0x97e8913e,// 83 PAY  48 

    0x51734ad3,// 84 PAY  49 

    0xfb8ab4eb,// 85 PAY  50 

    0x83bdc52a,// 86 PAY  51 

    0xd38b8483,// 87 PAY  52 

    0x4d591778,// 88 PAY  53 

    0xf8c32e54,// 89 PAY  54 

    0x10fca49d,// 90 PAY  55 

    0xbcf4392b,// 91 PAY  56 

    0x11242553,// 92 PAY  57 

    0xd300fc03,// 93 PAY  58 

    0x05a7e4fd,// 94 PAY  59 

    0x922de5b0,// 95 PAY  60 

    0x379cdc02,// 96 PAY  61 

    0x21edaf16,// 97 PAY  62 

    0x3ab895fe,// 98 PAY  63 

    0x09559159,// 99 PAY  64 

    0x49b57881,// 100 PAY  65 

    0x4b586049,// 101 PAY  66 

    0x73c0052f,// 102 PAY  67 

    0xd3bdc4d4,// 103 PAY  68 

    0xf180a643,// 104 PAY  69 

    0x849264f0,// 105 PAY  70 

    0x07795755,// 106 PAY  71 

    0x1ac0b079,// 107 PAY  72 

    0xe2b8b4f0,// 108 PAY  73 

    0x44806f06,// 109 PAY  74 

    0xb6e4ef5c,// 110 PAY  75 

    0xa4b924ed,// 111 PAY  76 

    0xc366a765,// 112 PAY  77 

    0x48c3f211,// 113 PAY  78 

    0x8ec4b88c,// 114 PAY  79 

    0x6795990d,// 115 PAY  80 

    0x6ffc4a70,// 116 PAY  81 

    0xe0c69247,// 117 PAY  82 

    0x1cd5f59d,// 118 PAY  83 

    0x1f4571b2,// 119 PAY  84 

    0x1bb82823,// 120 PAY  85 

    0xed7bac26,// 121 PAY  86 

    0xdddf8b60,// 122 PAY  87 

    0xd2afa44f,// 123 PAY  88 

    0x112fb103,// 124 PAY  89 

    0xef887df9,// 125 PAY  90 

    0xe0ca6ffc,// 126 PAY  91 

    0x6855b46a,// 127 PAY  92 

    0x6a9070b0,// 128 PAY  93 

    0xa7fc897b,// 129 PAY  94 

    0x312a179b,// 130 PAY  95 

    0x476e8d63,// 131 PAY  96 

    0x5ef5fb7e,// 132 PAY  97 

    0x005764ba,// 133 PAY  98 

    0x4f58cdb3,// 134 PAY  99 

    0x4a3965b4,// 135 PAY 100 

    0xf6900a8d,// 136 PAY 101 

    0xd6423a49,// 137 PAY 102 

    0x8e7469be,// 138 PAY 103 

    0xc7443611,// 139 PAY 104 

    0x2f4d2943,// 140 PAY 105 

    0xc8f26b56,// 141 PAY 106 

    0x58bdcd04,// 142 PAY 107 

    0xd52db8dd,// 143 PAY 108 

    0xd4f0bb7e,// 144 PAY 109 

    0xb4c14021,// 145 PAY 110 

    0xf3e11b10,// 146 PAY 111 

    0xa3de78a4,// 147 PAY 112 

    0xd2fd495d,// 148 PAY 113 

    0xe48fb4cb,// 149 PAY 114 

    0x3696e254,// 150 PAY 115 

    0xe37cf27c,// 151 PAY 116 

    0xaec10fe6,// 152 PAY 117 

    0x81a2d3b2,// 153 PAY 118 

    0x8af770c8,// 154 PAY 119 

    0xe73cb39d,// 155 PAY 120 

    0x490dfbc9,// 156 PAY 121 

    0x835f77b1,// 157 PAY 122 

    0x35105e96,// 158 PAY 123 

    0x3f40b00a,// 159 PAY 124 

    0xdfd1e824,// 160 PAY 125 

    0x110ba00e,// 161 PAY 126 

    0xbbb908c2,// 162 PAY 127 

    0xa3adb4fd,// 163 PAY 128 

    0x2a4bc648,// 164 PAY 129 

    0x7a822d15,// 165 PAY 130 

    0xd4458b6d,// 166 PAY 131 

    0x857cb001,// 167 PAY 132 

    0xa186c5c5,// 168 PAY 133 

    0x89f0e8a0,// 169 PAY 134 

    0xaa96d33e,// 170 PAY 135 

    0x395b05da,// 171 PAY 136 

    0x5dc7bbd2,// 172 PAY 137 

    0x00661844,// 173 PAY 138 

    0x6463b334,// 174 PAY 139 

    0xb01db8fc,// 175 PAY 140 

    0xc5bc3a0c,// 176 PAY 141 

    0xa183e3f4,// 177 PAY 142 

    0x7344fe49,// 178 PAY 143 

    0x897c0588,// 179 PAY 144 

    0xada5b8f3,// 180 PAY 145 

    0x14181eae,// 181 PAY 146 

    0xf96f9905,// 182 PAY 147 

    0x56e75513,// 183 PAY 148 

    0xaef59fcf,// 184 PAY 149 

    0x52f6d1f5,// 185 PAY 150 

    0x864032e2,// 186 PAY 151 

    0x182e8803,// 187 PAY 152 

    0xea68f07a,// 188 PAY 153 

    0x1945b9c9,// 189 PAY 154 

    0xe1d9b0c8,// 190 PAY 155 

    0xd4f6262a,// 191 PAY 156 

    0x94a0f6ec,// 192 PAY 157 

    0xb4abb6a3,// 193 PAY 158 

    0x289bb28f,// 194 PAY 159 

    0x0e14c402,// 195 PAY 160 

    0xa3ef2e26,// 196 PAY 161 

    0xc3d52946,// 197 PAY 162 

    0xe42245b0,// 198 PAY 163 

    0x4ec3fbd5,// 199 PAY 164 

    0x3d44e06b,// 200 PAY 165 

    0x12ea2e9e,// 201 PAY 166 

    0x2164aba6,// 202 PAY 167 

    0x9cebfc8a,// 203 PAY 168 

    0xbc5de34b,// 204 PAY 169 

    0x5d54c7c9,// 205 PAY 170 

    0x1eeb1d8b,// 206 PAY 171 

    0x54adb716,// 207 PAY 172 

    0x91595072,// 208 PAY 173 

    0xbb416e7c,// 209 PAY 174 

    0x4a562c2a,// 210 PAY 175 

    0xebb2d9ef,// 211 PAY 176 

    0x38d4d8eb,// 212 PAY 177 

    0x48bcd044,// 213 PAY 178 

    0x0665d844,// 214 PAY 179 

    0x79189ee0,// 215 PAY 180 

    0x1def1323,// 216 PAY 181 

    0x44ffdc79,// 217 PAY 182 

    0xade654d7,// 218 PAY 183 

    0xe3c8e246,// 219 PAY 184 

    0x7ddcc45a,// 220 PAY 185 

    0x1b799979,// 221 PAY 186 

    0x4dd25f69,// 222 PAY 187 

    0x0812de14,// 223 PAY 188 

    0xd3d3e3f2,// 224 PAY 189 

    0x821bcf82,// 225 PAY 190 

    0xe15e6e90,// 226 PAY 191 

    0x4e6fa30d,// 227 PAY 192 

    0x2991ee29,// 228 PAY 193 

    0x0e1d47c2,// 229 PAY 194 

    0x8246fccc,// 230 PAY 195 

    0x7aef5ae3,// 231 PAY 196 

    0x17b4e94d,// 232 PAY 197 

    0xd933da6e,// 233 PAY 198 

    0x4fd95c06,// 234 PAY 199 

    0xa1623311,// 235 PAY 200 

    0x75601988,// 236 PAY 201 

    0xb225ade6,// 237 PAY 202 

    0x4ee01029,// 238 PAY 203 

    0x10003ca7,// 239 PAY 204 

    0xaae10b5a,// 240 PAY 205 

    0xe26bc0a3,// 241 PAY 206 

    0xd11f6e9c,// 242 PAY 207 

    0xf91533ed,// 243 PAY 208 

    0x060d7413,// 244 PAY 209 

    0x1d3dae7b,// 245 PAY 210 

    0x294a23d8,// 246 PAY 211 

    0x76ac0404,// 247 PAY 212 

    0xc9c5f018,// 248 PAY 213 

    0xb9b78485,// 249 PAY 214 

    0xa9756d9a,// 250 PAY 215 

    0xec6cd481,// 251 PAY 216 

    0x6cbbf150,// 252 PAY 217 

    0xc848a996,// 253 PAY 218 

    0xf30ca2b7,// 254 PAY 219 

    0x1d232061,// 255 PAY 220 

    0x57654e31,// 256 PAY 221 

    0x34479af6,// 257 PAY 222 

    0x3c3b7cbb,// 258 PAY 223 

    0xcf5730c3,// 259 PAY 224 

    0xd750d82a,// 260 PAY 225 

    0x4d000000,// 261 PAY 226 

/// STA is 1 words. 

/// STA num_pkts       : 53 

/// STA pkt_idx        : 49 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xb4 

    0x00c4b435 // 262 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt85_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x04 

/// ECH pdu_tag        : 0x00 

    0x00040000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x8045287f,// 4 SCX   2 

    0x000014c2,// 5 SCX   3 

    0xf286fac9,// 6 SCX   4 

    0x72c1f7fe,// 7 SCX   5 

    0xfe4c4405,// 8 SCX   6 

    0xe7011972,// 9 SCX   7 

    0x3322cb8b,// 10 SCX   8 

    0xcd8063d9,// 11 SCX   9 

    0x78be647e,// 12 SCX  10 

    0xf4e82fd5,// 13 SCX  11 

    0x73ed1d77,// 14 SCX  12 

    0x08230f0b,// 15 SCX  13 

    0x8d438263,// 16 SCX  14 

    0x4fe17b55,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 1997 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1141 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1141 

/// BFD lencrypto      : 24 

/// BFD ofstcrypto     : 892 

/// BFD (ofst+len)cry  : 916 

/// BFD ofstiv         : 576 

/// BFD ofsticv        : 1736 

    0x00000475,// 18 BFD   1 

    0x037c0018,// 19 BFD   2 

    0x06c80240,// 20 BFD   3 

/// MFM is 16 words. 

/// MFM vldnibs        : 7c 

    0x7c0023ad,// 21 MFM   1 

    0x32252a33,// 22 MFM   2 

    0xfa9a5be8,// 23 MFM   3 

    0xcf2a7c65,// 24 MFM   4 

    0x9442aca9,// 25 MFM   5 

    0x5fa823c8,// 26 MFM   6 

    0xe6075814,// 27 MFM   7 

    0x7672f034,// 28 MFM   8 

    0x3862eed3,// 29 MFM   9 

    0xc6e9a909,// 30 MFM  10 

    0xbe816e6e,// 31 MFM  11 

    0x19573981,// 32 MFM  12 

    0x5d829ed4,// 33 MFM  13 

    0x05a0051e,// 34 MFM  14 

    0x9d4edee6,// 35 MFM  15 

    0x460c5f1d,// 36 MFM  16 

/// BDA is 501 words. 

/// BDA size     is 1997 (0x7cd) 

/// BDA id       is 0xca9 

    0x07cd0ca9,// 37 BDA   1 

/// PAY Generic Data size   : 1997 byte(s) 

/// PAD Buffer Data Pad size   : 3 byte(s) 

    0x2c08faf8,// 38 PAY   1 

    0x39f740e4,// 39 PAY   2 

    0xc1e3d278,// 40 PAY   3 

    0xfc962da2,// 41 PAY   4 

    0x04033476,// 42 PAY   5 

    0xba39f6c4,// 43 PAY   6 

    0x1f307497,// 44 PAY   7 

    0x884574b6,// 45 PAY   8 

    0x635f18c7,// 46 PAY   9 

    0xde264c77,// 47 PAY  10 

    0x4732b862,// 48 PAY  11 

    0x3b91f0dd,// 49 PAY  12 

    0xc80312c2,// 50 PAY  13 

    0x0915cc14,// 51 PAY  14 

    0x35943c20,// 52 PAY  15 

    0x995f6c93,// 53 PAY  16 

    0x50594e51,// 54 PAY  17 

    0x4b5d8f2e,// 55 PAY  18 

    0x56fbc12d,// 56 PAY  19 

    0x944b7ebc,// 57 PAY  20 

    0x51c2d709,// 58 PAY  21 

    0xd9d95426,// 59 PAY  22 

    0xcba00c62,// 60 PAY  23 

    0x63c0e979,// 61 PAY  24 

    0x0a028882,// 62 PAY  25 

    0x59911d53,// 63 PAY  26 

    0x81217b4e,// 64 PAY  27 

    0x78c568c0,// 65 PAY  28 

    0xe96df748,// 66 PAY  29 

    0x1e6fd184,// 67 PAY  30 

    0xf5c0b2e6,// 68 PAY  31 

    0x6d967f18,// 69 PAY  32 

    0xd7edadc5,// 70 PAY  33 

    0x9a2ddec2,// 71 PAY  34 

    0xe515affa,// 72 PAY  35 

    0xe755b4eb,// 73 PAY  36 

    0x93656266,// 74 PAY  37 

    0x107336cc,// 75 PAY  38 

    0x0cc9ad16,// 76 PAY  39 

    0xff0bd07e,// 77 PAY  40 

    0x979a7b90,// 78 PAY  41 

    0x24853716,// 79 PAY  42 

    0x0362db59,// 80 PAY  43 

    0x7b3a7e30,// 81 PAY  44 

    0x8661bf6e,// 82 PAY  45 

    0x5ba02c50,// 83 PAY  46 

    0x44787274,// 84 PAY  47 

    0x2087cbf0,// 85 PAY  48 

    0xd08e9cd4,// 86 PAY  49 

    0x949251fc,// 87 PAY  50 

    0x02df3435,// 88 PAY  51 

    0xb8163cac,// 89 PAY  52 

    0x0bda4a97,// 90 PAY  53 

    0x3dcbedd2,// 91 PAY  54 

    0x00988fe3,// 92 PAY  55 

    0x770b4849,// 93 PAY  56 

    0xaf774cd3,// 94 PAY  57 

    0x2c40d3cc,// 95 PAY  58 

    0xff9a8e57,// 96 PAY  59 

    0x75f27f59,// 97 PAY  60 

    0x5015a05e,// 98 PAY  61 

    0xec399f06,// 99 PAY  62 

    0x15a33a46,// 100 PAY  63 

    0x5c9ecf67,// 101 PAY  64 

    0xc776eb66,// 102 PAY  65 

    0xcdee9cbd,// 103 PAY  66 

    0x6230f2e9,// 104 PAY  67 

    0x18b8d48a,// 105 PAY  68 

    0x57dbe6ba,// 106 PAY  69 

    0x68cbdffe,// 107 PAY  70 

    0x898c3b92,// 108 PAY  71 

    0x0360091a,// 109 PAY  72 

    0x1bceeb47,// 110 PAY  73 

    0x71ca1a0c,// 111 PAY  74 

    0x95a8a34a,// 112 PAY  75 

    0x9b9a04c6,// 113 PAY  76 

    0xf25e742a,// 114 PAY  77 

    0xba7017ee,// 115 PAY  78 

    0x22c16305,// 116 PAY  79 

    0x2ca4d41d,// 117 PAY  80 

    0xddee6527,// 118 PAY  81 

    0xba2b29ab,// 119 PAY  82 

    0x1ebc7565,// 120 PAY  83 

    0xdb094193,// 121 PAY  84 

    0x0f8012c2,// 122 PAY  85 

    0x6ddae70e,// 123 PAY  86 

    0x3e9dc1f3,// 124 PAY  87 

    0xe63acc4c,// 125 PAY  88 

    0x365c3be3,// 126 PAY  89 

    0x7a3abdaa,// 127 PAY  90 

    0x8464bfe7,// 128 PAY  91 

    0x09c0e809,// 129 PAY  92 

    0xe5307516,// 130 PAY  93 

    0xa8c84596,// 131 PAY  94 

    0x03246ea4,// 132 PAY  95 

    0xcbc7592a,// 133 PAY  96 

    0x36dc0f5c,// 134 PAY  97 

    0xe4c8b61b,// 135 PAY  98 

    0x31d91536,// 136 PAY  99 

    0xb016bbf4,// 137 PAY 100 

    0x90a5f955,// 138 PAY 101 

    0x88d4e711,// 139 PAY 102 

    0x9db17ab5,// 140 PAY 103 

    0xad449f9e,// 141 PAY 104 

    0x292e7b21,// 142 PAY 105 

    0x7486dcc0,// 143 PAY 106 

    0xe0fa86d8,// 144 PAY 107 

    0x9b72939b,// 145 PAY 108 

    0x99402dee,// 146 PAY 109 

    0x93804a5d,// 147 PAY 110 

    0xda3217e6,// 148 PAY 111 

    0x97d7c005,// 149 PAY 112 

    0xe3d6095a,// 150 PAY 113 

    0xcf884b0f,// 151 PAY 114 

    0xd0095a68,// 152 PAY 115 

    0xb528602a,// 153 PAY 116 

    0x59d290b7,// 154 PAY 117 

    0x490dcc6c,// 155 PAY 118 

    0x1eb91476,// 156 PAY 119 

    0x17f09b38,// 157 PAY 120 

    0x2a5b3e7f,// 158 PAY 121 

    0x8e342218,// 159 PAY 122 

    0xcab2b610,// 160 PAY 123 

    0x113c97cc,// 161 PAY 124 

    0x08ee2f74,// 162 PAY 125 

    0xb3b7f18b,// 163 PAY 126 

    0x64242487,// 164 PAY 127 

    0xbf23fc13,// 165 PAY 128 

    0x9d7b9bb6,// 166 PAY 129 

    0x684782d2,// 167 PAY 130 

    0xea416f87,// 168 PAY 131 

    0x3edc4314,// 169 PAY 132 

    0xa13040a7,// 170 PAY 133 

    0x372b5406,// 171 PAY 134 

    0x135757ff,// 172 PAY 135 

    0x52cbb5dc,// 173 PAY 136 

    0x83006b8f,// 174 PAY 137 

    0xe18c914c,// 175 PAY 138 

    0x13fc0b6c,// 176 PAY 139 

    0x1d401038,// 177 PAY 140 

    0xf232d9c4,// 178 PAY 141 

    0x2d251337,// 179 PAY 142 

    0xf1c7a9f1,// 180 PAY 143 

    0xb9c1fd46,// 181 PAY 144 

    0xf82ea63a,// 182 PAY 145 

    0xbe41a74c,// 183 PAY 146 

    0x007c799e,// 184 PAY 147 

    0x876ca738,// 185 PAY 148 

    0xca5862f5,// 186 PAY 149 

    0x6566ac5e,// 187 PAY 150 

    0xcb259acf,// 188 PAY 151 

    0xeeafdf22,// 189 PAY 152 

    0x3b39706d,// 190 PAY 153 

    0x23e5c72b,// 191 PAY 154 

    0xbd5edce5,// 192 PAY 155 

    0xda6488d8,// 193 PAY 156 

    0xaf8ed06d,// 194 PAY 157 

    0xfa992f35,// 195 PAY 158 

    0x6935044b,// 196 PAY 159 

    0xdcf6f4a9,// 197 PAY 160 

    0xf925f9d9,// 198 PAY 161 

    0xb6642cbe,// 199 PAY 162 

    0x1654f63f,// 200 PAY 163 

    0xdedb3b57,// 201 PAY 164 

    0x31dc8ee6,// 202 PAY 165 

    0x9e7e3505,// 203 PAY 166 

    0x23ad48a1,// 204 PAY 167 

    0x464cb102,// 205 PAY 168 

    0x4c82bd54,// 206 PAY 169 

    0x42484f9c,// 207 PAY 170 

    0xfead2285,// 208 PAY 171 

    0x11ffbd75,// 209 PAY 172 

    0x88c85ebb,// 210 PAY 173 

    0xce497c5b,// 211 PAY 174 

    0xc7649772,// 212 PAY 175 

    0x6dc01a2c,// 213 PAY 176 

    0x86dcebb5,// 214 PAY 177 

    0x941c5b30,// 215 PAY 178 

    0x7dc771bc,// 216 PAY 179 

    0x8324547b,// 217 PAY 180 

    0x318d0a90,// 218 PAY 181 

    0x662c14f7,// 219 PAY 182 

    0x769c77f8,// 220 PAY 183 

    0x11acf37d,// 221 PAY 184 

    0x5c7865cf,// 222 PAY 185 

    0xe1bf0fa5,// 223 PAY 186 

    0x0ec9ba25,// 224 PAY 187 

    0xe906f9da,// 225 PAY 188 

    0x7b8d2a24,// 226 PAY 189 

    0xfb741fe8,// 227 PAY 190 

    0xefa61b68,// 228 PAY 191 

    0x8df342b2,// 229 PAY 192 

    0x69c92aa1,// 230 PAY 193 

    0xb2f92f4e,// 231 PAY 194 

    0x4f3e3a3b,// 232 PAY 195 

    0xd67949c1,// 233 PAY 196 

    0x2a5f2927,// 234 PAY 197 

    0x16fdf7fc,// 235 PAY 198 

    0xc7e5a0c9,// 236 PAY 199 

    0xc8bcd42d,// 237 PAY 200 

    0xfab67935,// 238 PAY 201 

    0xf48c16ba,// 239 PAY 202 

    0xd988788a,// 240 PAY 203 

    0x88697738,// 241 PAY 204 

    0x96c0e8bf,// 242 PAY 205 

    0x18834df7,// 243 PAY 206 

    0xad5b163f,// 244 PAY 207 

    0xa20a9405,// 245 PAY 208 

    0xc4e3530b,// 246 PAY 209 

    0xa4815b32,// 247 PAY 210 

    0x06220567,// 248 PAY 211 

    0xc83b3e39,// 249 PAY 212 

    0xe4840966,// 250 PAY 213 

    0x7e18622e,// 251 PAY 214 

    0xddde866c,// 252 PAY 215 

    0x8e448dc9,// 253 PAY 216 

    0xfb8d51a3,// 254 PAY 217 

    0xf07b7470,// 255 PAY 218 

    0xee2e661b,// 256 PAY 219 

    0xc56bf53f,// 257 PAY 220 

    0x551aaf17,// 258 PAY 221 

    0x92327589,// 259 PAY 222 

    0xd4a59a11,// 260 PAY 223 

    0x44e2269e,// 261 PAY 224 

    0x2d587122,// 262 PAY 225 

    0xe9b8ad7e,// 263 PAY 226 

    0x854a75de,// 264 PAY 227 

    0xd0fbb805,// 265 PAY 228 

    0x9150ef20,// 266 PAY 229 

    0xba340ac8,// 267 PAY 230 

    0x2d488251,// 268 PAY 231 

    0x370da4a3,// 269 PAY 232 

    0xbd2f6847,// 270 PAY 233 

    0x688d5a54,// 271 PAY 234 

    0x3ee28453,// 272 PAY 235 

    0xbcf2d16d,// 273 PAY 236 

    0x308cdf6e,// 274 PAY 237 

    0x95cb0436,// 275 PAY 238 

    0xa1cc0897,// 276 PAY 239 

    0x578dce5f,// 277 PAY 240 

    0x9e14e78f,// 278 PAY 241 

    0x2c046c5f,// 279 PAY 242 

    0x3d9d21db,// 280 PAY 243 

    0x484309f9,// 281 PAY 244 

    0x1c54143c,// 282 PAY 245 

    0x3242af52,// 283 PAY 246 

    0x7ed3a3e7,// 284 PAY 247 

    0x182a9e19,// 285 PAY 248 

    0x3870b9e1,// 286 PAY 249 

    0xcac12dc2,// 287 PAY 250 

    0xc8a2d2c8,// 288 PAY 251 

    0x6a8bb317,// 289 PAY 252 

    0xe792e2f7,// 290 PAY 253 

    0x762bccff,// 291 PAY 254 

    0x3cc91118,// 292 PAY 255 

    0x47578617,// 293 PAY 256 

    0x8c742c85,// 294 PAY 257 

    0x2acbf70f,// 295 PAY 258 

    0xf5f4378b,// 296 PAY 259 

    0xdd4c9b92,// 297 PAY 260 

    0xf64d9c6b,// 298 PAY 261 

    0x1f0877c4,// 299 PAY 262 

    0x17316e4e,// 300 PAY 263 

    0xbd9f60ae,// 301 PAY 264 

    0xe168efe8,// 302 PAY 265 

    0x201e18ea,// 303 PAY 266 

    0xb6be696b,// 304 PAY 267 

    0x26d1bf9b,// 305 PAY 268 

    0x56c3bfa0,// 306 PAY 269 

    0xcf302eb4,// 307 PAY 270 

    0x0e30f959,// 308 PAY 271 

    0x44220191,// 309 PAY 272 

    0x72ffcca6,// 310 PAY 273 

    0x85e8e7e4,// 311 PAY 274 

    0x26a36b52,// 312 PAY 275 

    0x9d4660d7,// 313 PAY 276 

    0x7106584a,// 314 PAY 277 

    0xb7a77bf4,// 315 PAY 278 

    0xb03aec67,// 316 PAY 279 

    0x9583e68e,// 317 PAY 280 

    0x6c761c7c,// 318 PAY 281 

    0xa721fb50,// 319 PAY 282 

    0xd482ed86,// 320 PAY 283 

    0x4095d279,// 321 PAY 284 

    0x85e1000c,// 322 PAY 285 

    0xc04a1a5c,// 323 PAY 286 

    0xcbfb6eae,// 324 PAY 287 

    0x49e54a93,// 325 PAY 288 

    0x1cee031c,// 326 PAY 289 

    0x9f632453,// 327 PAY 290 

    0xf7e9470e,// 328 PAY 291 

    0x9c020c45,// 329 PAY 292 

    0x3227fc3d,// 330 PAY 293 

    0x9e8a0fe7,// 331 PAY 294 

    0x84c83bdc,// 332 PAY 295 

    0xa176eea1,// 333 PAY 296 

    0x8af0b079,// 334 PAY 297 

    0xe068ee4e,// 335 PAY 298 

    0x274fba59,// 336 PAY 299 

    0xa93e9ee2,// 337 PAY 300 

    0x71dcb54c,// 338 PAY 301 

    0x01980e08,// 339 PAY 302 

    0x66ab7e5a,// 340 PAY 303 

    0x2174e03c,// 341 PAY 304 

    0x6f7719ae,// 342 PAY 305 

    0x51d6f47f,// 343 PAY 306 

    0x48b6d299,// 344 PAY 307 

    0xe0117d0c,// 345 PAY 308 

    0xacb1c578,// 346 PAY 309 

    0x1be9aad3,// 347 PAY 310 

    0x54d806f7,// 348 PAY 311 

    0x9b01eac1,// 349 PAY 312 

    0x02edebd4,// 350 PAY 313 

    0x3ef34c60,// 351 PAY 314 

    0x9be1fbf7,// 352 PAY 315 

    0x482b3e85,// 353 PAY 316 

    0xa61b26ad,// 354 PAY 317 

    0xf79debf2,// 355 PAY 318 

    0x39abb782,// 356 PAY 319 

    0x49043f9b,// 357 PAY 320 

    0xa0ed345d,// 358 PAY 321 

    0xc19299e8,// 359 PAY 322 

    0xda82b3d5,// 360 PAY 323 

    0xd1798287,// 361 PAY 324 

    0xae7cae37,// 362 PAY 325 

    0x4b9c1051,// 363 PAY 326 

    0x3cecf81c,// 364 PAY 327 

    0x2a46f716,// 365 PAY 328 

    0x884b2474,// 366 PAY 329 

    0xa13a5776,// 367 PAY 330 

    0x799451c1,// 368 PAY 331 

    0x5ddb1714,// 369 PAY 332 

    0xd6328035,// 370 PAY 333 

    0x40ee3941,// 371 PAY 334 

    0x18f8c0be,// 372 PAY 335 

    0x609ffd5e,// 373 PAY 336 

    0xd465c598,// 374 PAY 337 

    0x8273755b,// 375 PAY 338 

    0x437afbc1,// 376 PAY 339 

    0x94d7f7f4,// 377 PAY 340 

    0xc73104ed,// 378 PAY 341 

    0xcc60bd6b,// 379 PAY 342 

    0x3217fed0,// 380 PAY 343 

    0x6c015a9d,// 381 PAY 344 

    0x691bed09,// 382 PAY 345 

    0xd487584e,// 383 PAY 346 

    0x36ce2fb7,// 384 PAY 347 

    0x960ddaac,// 385 PAY 348 

    0x1a38e754,// 386 PAY 349 

    0x4f85cd47,// 387 PAY 350 

    0x3b7769a3,// 388 PAY 351 

    0x3c292992,// 389 PAY 352 

    0x1c596e3e,// 390 PAY 353 

    0x5d72d9bb,// 391 PAY 354 

    0xe949f9de,// 392 PAY 355 

    0x7d9238ec,// 393 PAY 356 

    0x8d20709b,// 394 PAY 357 

    0xf16ba776,// 395 PAY 358 

    0x37ee35f7,// 396 PAY 359 

    0xfce72a3f,// 397 PAY 360 

    0x62c00fe9,// 398 PAY 361 

    0xd93f44a1,// 399 PAY 362 

    0x88a0675a,// 400 PAY 363 

    0x3cb21dc2,// 401 PAY 364 

    0x348db55e,// 402 PAY 365 

    0x538f88c5,// 403 PAY 366 

    0x894437d1,// 404 PAY 367 

    0xfb553156,// 405 PAY 368 

    0xf702b54c,// 406 PAY 369 

    0x197211a8,// 407 PAY 370 

    0xedd9af4a,// 408 PAY 371 

    0xbc28328d,// 409 PAY 372 

    0xd86f9873,// 410 PAY 373 

    0x773cbc0b,// 411 PAY 374 

    0x01f161b5,// 412 PAY 375 

    0x89614a0f,// 413 PAY 376 

    0x8fa6b2ad,// 414 PAY 377 

    0x1b7f8bf2,// 415 PAY 378 

    0x87ffd5f5,// 416 PAY 379 

    0xb88715cd,// 417 PAY 380 

    0x71a43545,// 418 PAY 381 

    0xcd6e2561,// 419 PAY 382 

    0x60223309,// 420 PAY 383 

    0x48c53c8a,// 421 PAY 384 

    0xac0c211b,// 422 PAY 385 

    0x624ee381,// 423 PAY 386 

    0xc0097bc3,// 424 PAY 387 

    0x3c1d74a8,// 425 PAY 388 

    0x6f89b449,// 426 PAY 389 

    0xec0018fd,// 427 PAY 390 

    0x977a52ef,// 428 PAY 391 

    0xe3bb7cfc,// 429 PAY 392 

    0x2e56a8d4,// 430 PAY 393 

    0xef5e05f8,// 431 PAY 394 

    0xfddd61e9,// 432 PAY 395 

    0x84322ed4,// 433 PAY 396 

    0x56e1fff9,// 434 PAY 397 

    0x634f1d73,// 435 PAY 398 

    0xb6f042f8,// 436 PAY 399 

    0x9c754e20,// 437 PAY 400 

    0xa527b7e4,// 438 PAY 401 

    0x64097978,// 439 PAY 402 

    0xf27caa08,// 440 PAY 403 

    0x7fb9ceba,// 441 PAY 404 

    0x762e4eb3,// 442 PAY 405 

    0x1dd1b64a,// 443 PAY 406 

    0x3f55444b,// 444 PAY 407 

    0xdb92f00a,// 445 PAY 408 

    0x1c973711,// 446 PAY 409 

    0x52652dff,// 447 PAY 410 

    0xe03fd1c8,// 448 PAY 411 

    0x5f9ccdc3,// 449 PAY 412 

    0x24c13386,// 450 PAY 413 

    0x9fd22ac0,// 451 PAY 414 

    0xa8b84ffc,// 452 PAY 415 

    0xb02e9a3b,// 453 PAY 416 

    0x2cc0ed1f,// 454 PAY 417 

    0x666ba837,// 455 PAY 418 

    0xd234d0d9,// 456 PAY 419 

    0xbe96a59c,// 457 PAY 420 

    0x70b3a743,// 458 PAY 421 

    0xccb088ff,// 459 PAY 422 

    0x56cd3919,// 460 PAY 423 

    0xa3946e78,// 461 PAY 424 

    0x9fe74185,// 462 PAY 425 

    0xd2e8070a,// 463 PAY 426 

    0x8d95a628,// 464 PAY 427 

    0x39edc4fd,// 465 PAY 428 

    0xc2578bd0,// 466 PAY 429 

    0xa521599c,// 467 PAY 430 

    0x320f5694,// 468 PAY 431 

    0x91ffe11f,// 469 PAY 432 

    0xeaf8a0fd,// 470 PAY 433 

    0x9792a92d,// 471 PAY 434 

    0xb59b4a0b,// 472 PAY 435 

    0x911340a4,// 473 PAY 436 

    0x4642242e,// 474 PAY 437 

    0x1828f176,// 475 PAY 438 

    0x4d725ce4,// 476 PAY 439 

    0x66e420e8,// 477 PAY 440 

    0x09096b85,// 478 PAY 441 

    0xac0bbd21,// 479 PAY 442 

    0xc0191a3d,// 480 PAY 443 

    0x34584775,// 481 PAY 444 

    0xcf24edbb,// 482 PAY 445 

    0xba02727f,// 483 PAY 446 

    0x21889932,// 484 PAY 447 

    0x3773d834,// 485 PAY 448 

    0x227fef74,// 486 PAY 449 

    0x2d53b5c1,// 487 PAY 450 

    0x7677f90c,// 488 PAY 451 

    0xeb32b454,// 489 PAY 452 

    0xcb7777eb,// 490 PAY 453 

    0x13bccb8d,// 491 PAY 454 

    0x257e353d,// 492 PAY 455 

    0x16a20b2a,// 493 PAY 456 

    0x8efe0509,// 494 PAY 457 

    0x567af12d,// 495 PAY 458 

    0x5ddb0157,// 496 PAY 459 

    0x702a3bd3,// 497 PAY 460 

    0xe6c18379,// 498 PAY 461 

    0xc4f58f20,// 499 PAY 462 

    0x3e4abd62,// 500 PAY 463 

    0xef77c193,// 501 PAY 464 

    0x57281e7f,// 502 PAY 465 

    0x0fb91165,// 503 PAY 466 

    0x9ae8fc9c,// 504 PAY 467 

    0x431cb11e,// 505 PAY 468 

    0x91a8d1b3,// 506 PAY 469 

    0xb344ca6b,// 507 PAY 470 

    0x8d17d051,// 508 PAY 471 

    0x06272cbd,// 509 PAY 472 

    0x9eb1a991,// 510 PAY 473 

    0x46347585,// 511 PAY 474 

    0xae7c11e3,// 512 PAY 475 

    0xe99b3791,// 513 PAY 476 

    0x08b5c582,// 514 PAY 477 

    0xb0eaa131,// 515 PAY 478 

    0x4ac907ae,// 516 PAY 479 

    0x06ac7f2b,// 517 PAY 480 

    0xbd51ed4c,// 518 PAY 481 

    0x2f74715a,// 519 PAY 482 

    0x2677abf5,// 520 PAY 483 

    0x968ae67d,// 521 PAY 484 

    0x5f67caa1,// 522 PAY 485 

    0x35c25061,// 523 PAY 486 

    0xa6781d07,// 524 PAY 487 

    0xb21f6f28,// 525 PAY 488 

    0xf25a8bd0,// 526 PAY 489 

    0xbf1b2863,// 527 PAY 490 

    0xa0dcc397,// 528 PAY 491 

    0x773b16f4,// 529 PAY 492 

    0xe2beffef,// 530 PAY 493 

    0x330c9d0f,// 531 PAY 494 

    0xd2a971be,// 532 PAY 495 

    0x1a9f7b18,// 533 PAY 496 

    0x7196bd64,// 534 PAY 497 

    0x10e874a6,// 535 PAY 498 

    0x5958fbf7,// 536 PAY 499 

    0x81000000,// 537 PAY 500 

/// STA is 1 words. 

/// STA num_pkts       : 126 

/// STA pkt_idx        : 53 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x5e 

    0x00d55e7e // 538 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt86_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound !save_icv !insert_icv !check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x3 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x8046289e,// 4 SCX   2 

    0x00000382,// 5 SCX   3 

    0x26382622,// 6 SCX   4 

    0x6b5a6271,// 7 SCX   5 

    0xaec469b4,// 8 SCX   6 

    0x1e5663fb,// 9 SCX   7 

    0xc25b1539,// 10 SCX   8 

    0x1e2e2429,// 11 SCX   9 

    0x0242650f,// 12 SCX  10 

    0xa9a5c84f,// 13 SCX  11 

    0x0e0cd394,// 14 SCX  12 

    0xe2ccc261,// 15 SCX  13 

    0xe289b74a,// 16 SCX  14 

    0x9dcaee4f,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 323 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 123 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 123 

/// BFD lencrypto      : 32 

/// BFD ofstcrypto     : 88 

/// BFD (ofst+len)cry  : 120 

/// BFD ofstiv         : 64 

/// BFD ofsticv        : 228 

    0x0000007b,// 18 BFD   1 

    0x00580020,// 19 BFD   2 

    0x00e40040,// 20 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : a 

    0x0a001dae,// 21 MFM   1 

    0x80213e00,// 22 MFM   2 

/// BDA is 82 words. 

/// BDA size     is 323 (0x143) 

/// BDA id       is 0xf6c2 

    0x0143f6c2,// 23 BDA   1 

/// PAY Generic Data size   : 323 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xc59bbf0d,// 24 PAY   1 

    0x0225f841,// 25 PAY   2 

    0x502c9168,// 26 PAY   3 

    0xc611e4eb,// 27 PAY   4 

    0x6e942304,// 28 PAY   5 

    0x256d8bcc,// 29 PAY   6 

    0x388443b2,// 30 PAY   7 

    0x4b86da18,// 31 PAY   8 

    0xdf920289,// 32 PAY   9 

    0xe5a13042,// 33 PAY  10 

    0x95880083,// 34 PAY  11 

    0x015f8dd8,// 35 PAY  12 

    0x4a57ff18,// 36 PAY  13 

    0x7053c84c,// 37 PAY  14 

    0x1a225ddf,// 38 PAY  15 

    0x92f3575e,// 39 PAY  16 

    0x80d5506b,// 40 PAY  17 

    0xb79b498e,// 41 PAY  18 

    0x56aaf465,// 42 PAY  19 

    0x763f5164,// 43 PAY  20 

    0x3cc00cac,// 44 PAY  21 

    0xac93b60e,// 45 PAY  22 

    0xeb698963,// 46 PAY  23 

    0xe72bb72f,// 47 PAY  24 

    0x924ed76f,// 48 PAY  25 

    0x04adfe79,// 49 PAY  26 

    0xaffd3421,// 50 PAY  27 

    0x417c8a9f,// 51 PAY  28 

    0x56945bd4,// 52 PAY  29 

    0xf25b2337,// 53 PAY  30 

    0x83f3f9b9,// 54 PAY  31 

    0x41ecebc5,// 55 PAY  32 

    0xd1a91e8c,// 56 PAY  33 

    0x3287a68a,// 57 PAY  34 

    0x1469c2a8,// 58 PAY  35 

    0x5e9fd187,// 59 PAY  36 

    0x1512760f,// 60 PAY  37 

    0xb4b5415d,// 61 PAY  38 

    0x2b4fce6c,// 62 PAY  39 

    0x94459f14,// 63 PAY  40 

    0x3d6f76a8,// 64 PAY  41 

    0x9f3a4ba3,// 65 PAY  42 

    0x485cf66e,// 66 PAY  43 

    0x7cf0c646,// 67 PAY  44 

    0xdc8dfd79,// 68 PAY  45 

    0xd453fd7d,// 69 PAY  46 

    0x0d46d79d,// 70 PAY  47 

    0x722a97eb,// 71 PAY  48 

    0xbad4ffef,// 72 PAY  49 

    0xd7009fab,// 73 PAY  50 

    0x533df91f,// 74 PAY  51 

    0xeefbde53,// 75 PAY  52 

    0x1f5c008d,// 76 PAY  53 

    0x2522f7a4,// 77 PAY  54 

    0xaa2c3f4d,// 78 PAY  55 

    0xe058b36a,// 79 PAY  56 

    0x15d0bdfe,// 80 PAY  57 

    0xb513bca0,// 81 PAY  58 

    0x766dd1f9,// 82 PAY  59 

    0x205a1339,// 83 PAY  60 

    0x1ced85a9,// 84 PAY  61 

    0xead2b6cd,// 85 PAY  62 

    0x73799a5d,// 86 PAY  63 

    0x61e056ae,// 87 PAY  64 

    0xaa357f8a,// 88 PAY  65 

    0x31d7ec6a,// 89 PAY  66 

    0x8435b859,// 90 PAY  67 

    0x9bef4ef2,// 91 PAY  68 

    0x0e68677b,// 92 PAY  69 

    0x1079e7d1,// 93 PAY  70 

    0xf8958ce1,// 94 PAY  71 

    0xa764a0fe,// 95 PAY  72 

    0x32681d81,// 96 PAY  73 

    0xb6a9f3ab,// 97 PAY  74 

    0xda714def,// 98 PAY  75 

    0xc312e702,// 99 PAY  76 

    0x9aeddcda,// 100 PAY  77 

    0x25ad37dc,// 101 PAY  78 

    0xdc98a148,// 102 PAY  79 

    0x0b783d1b,// 103 PAY  80 

    0xc6123100,// 104 PAY  81 

/// STA is 1 words. 

/// STA num_pkts       : 233 

/// STA pkt_idx        : 239 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0x5b 

    0x03bc5be9 // 105 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt87_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0e 

/// ECH pdu_tag        : 0x00 

    0x000e0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv insert_icv check_icv sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : AUTH_ENC 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x4 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0xc04628c1,// 4 SCX   2 

    0x00007482,// 5 SCX   3 

    0x150db8b7,// 6 SCX   4 

    0x374b9ba6,// 7 SCX   5 

    0x7fb51a42,// 8 SCX   6 

    0xcc87124a,// 9 SCX   7 

    0x8aaee1be,// 10 SCX   8 

    0x65b87c45,// 11 SCX   9 

    0x6705fe33,// 12 SCX  10 

    0x90247ff8,// 13 SCX  11 

    0x0a6498ac,// 14 SCX  12 

    0x76feac33,// 15 SCX  13 

    0x1ae4536a,// 16 SCX  14 

    0xde25d16d,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 258 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 40 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 40 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 32 

/// BFD (ofst+len)cry  : 40 

/// BFD ofstiv         : 16 

/// BFD ofsticv        : 196 

    0x00000028,// 18 BFD   1 

    0x00200008,// 19 BFD   2 

    0x00c40010,// 20 BFD   3 

/// MFM is 2 words. 

/// MFM vldnibs        : 7 

    0x0700c28e,// 21 MFM   1 

    0x44700000,// 22 MFM   2 

/// BDA is 66 words. 

/// BDA size     is 258 (0x102) 

/// BDA id       is 0x316c 

    0x0102316c,// 23 BDA   1 

/// PAY Generic Data size   : 258 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xf992bb71,// 24 PAY   1 

    0xd30abd4e,// 25 PAY   2 

    0x07511a45,// 26 PAY   3 

    0xa1eafe6b,// 27 PAY   4 

    0xe178ba9c,// 28 PAY   5 

    0xcefbc0c7,// 29 PAY   6 

    0xbb8427a6,// 30 PAY   7 

    0x1327f589,// 31 PAY   8 

    0xc37bee68,// 32 PAY   9 

    0x989588b6,// 33 PAY  10 

    0xf449527b,// 34 PAY  11 

    0x96287b2b,// 35 PAY  12 

    0x74ab2ca7,// 36 PAY  13 

    0xc00938a6,// 37 PAY  14 

    0x45c18ff1,// 38 PAY  15 

    0xfd646c6c,// 39 PAY  16 

    0x8276b1d5,// 40 PAY  17 

    0x7ddb86a7,// 41 PAY  18 

    0x78992c6f,// 42 PAY  19 

    0xfe4f6ec9,// 43 PAY  20 

    0x1b2f045e,// 44 PAY  21 

    0xe6a32a56,// 45 PAY  22 

    0xfbda0ea2,// 46 PAY  23 

    0x39c51962,// 47 PAY  24 

    0x1cd48ab5,// 48 PAY  25 

    0x8366407d,// 49 PAY  26 

    0x869bcdc3,// 50 PAY  27 

    0xfee07a8b,// 51 PAY  28 

    0xdcc25534,// 52 PAY  29 

    0xf69c3851,// 53 PAY  30 

    0xb23491a0,// 54 PAY  31 

    0xcd44c768,// 55 PAY  32 

    0xff08f18b,// 56 PAY  33 

    0xc453c019,// 57 PAY  34 

    0xf04cab9e,// 58 PAY  35 

    0x7d37a884,// 59 PAY  36 

    0xf9a53e13,// 60 PAY  37 

    0x57420112,// 61 PAY  38 

    0x284ed7d0,// 62 PAY  39 

    0x8d2a964a,// 63 PAY  40 

    0xc898c630,// 64 PAY  41 

    0xb07bc2bc,// 65 PAY  42 

    0xa704cfc3,// 66 PAY  43 

    0x17fc1ce5,// 67 PAY  44 

    0xde6e036a,// 68 PAY  45 

    0x891a9ce7,// 69 PAY  46 

    0xe9ab26ed,// 70 PAY  47 

    0xeab29391,// 71 PAY  48 

    0x010c3a35,// 72 PAY  49 

    0x6939e17e,// 73 PAY  50 

    0xe84cc0b3,// 74 PAY  51 

    0xc5730547,// 75 PAY  52 

    0x3e8888d5,// 76 PAY  53 

    0xe3fc863b,// 77 PAY  54 

    0x9d0493c2,// 78 PAY  55 

    0xf1e8bebf,// 79 PAY  56 

    0x9b8954ba,// 80 PAY  57 

    0x02dd5d00,// 81 PAY  58 

    0xac59bb95,// 82 PAY  59 

    0x15547158,// 83 PAY  60 

    0x1e0dbe22,// 84 PAY  61 

    0x6bbe6d53,// 85 PAY  62 

    0x24ce6ab9,// 86 PAY  63 

    0x204ed858,// 87 PAY  64 

    0x0ede0000,// 88 PAY  65 

/// STA is 1 words. 

/// STA num_pkts       : 189 

/// STA pkt_idx        : 136 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xcb 

    0x0220cbbd // 89 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 56 (0x38) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt88_tmpl[] = {
    0xb8010038,// 1 CCH   1 

/// ECH cache_idx      : 0x09 

/// ECH pdu_tag        : 0x00 

    0x00090000,// 2 ECH   1 

/// SCX is 13 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound save_icv insert_icv check_icv !sctx_iv  

/// SCX !exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : NORMAL_RC4INIT_AES128 

/// SCX aes_mode        : ECB 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x0 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 0 

/// SCX authctx_size    : 32 

    0x0000000d,// 3 SCX   1 

    0x804028de,// 4 SCX   2 

    0x00007100,// 5 SCX   3 

    0x910ab7e3,// 6 SCX   4 

    0xa781b159,// 7 SCX   5 

    0x2764691c,// 8 SCX   6 

    0x59f0ef92,// 9 SCX   7 

    0xcbdc858c,// 10 SCX   8 

    0xaf69f3f2,// 11 SCX   9 

    0x686228d0,// 12 SCX  10 

    0xc46652c4,// 13 SCX  11 

    0x033d6ade,// 14 SCX  12 

    0x1c841e1a,// 15 SCX  13 

/// BFD is 3 words. 

/// BFD tot_len        : 1983 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 1516 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 1516 

/// BFD lencrypto      : 816 

/// BFD ofstcrypto     : 168 

/// BFD (ofst+len)cry  : 984 

/// BFD ofstiv         : 72 

/// BFD ofsticv        : 1632 

    0x000005ec,// 16 BFD   1 

    0x00a80330,// 17 BFD   2 

    0x06600048,// 18 BFD   3 

/// MFM is 8 words. 

/// MFM vldnibs        : 3a 

    0x3a00518c,// 19 MFM   1 

    0xe8c2c2cd,// 20 MFM   2 

    0x4f6f935c,// 21 MFM   3 

    0x88406155,// 22 MFM   4 

    0x05f9562d,// 23 MFM   5 

    0x0513eff5,// 24 MFM   6 

    0x70826ea4,// 25 MFM   7 

    0x8fa2a400,// 26 MFM   8 

/// BDA is 497 words. 

/// BDA size     is 1983 (0x7bf) 

/// BDA id       is 0x441 

    0x07bf0441,// 27 BDA   1 

/// PAY Generic Data size   : 1983 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0xdb4bbc4c,// 28 PAY   1 

    0x035a6412,// 29 PAY   2 

    0x2b44f83e,// 30 PAY   3 

    0xb135c302,// 31 PAY   4 

    0x7e2249e9,// 32 PAY   5 

    0xf2df3f20,// 33 PAY   6 

    0xbe0f4a58,// 34 PAY   7 

    0x60f19455,// 35 PAY   8 

    0x8a0c66d4,// 36 PAY   9 

    0x8a0cc0b0,// 37 PAY  10 

    0xb2c9c9bd,// 38 PAY  11 

    0xec6f50fb,// 39 PAY  12 

    0xa84afffb,// 40 PAY  13 

    0x7de1c23b,// 41 PAY  14 

    0xb6da6bd7,// 42 PAY  15 

    0xe5bab197,// 43 PAY  16 

    0x80b2d08d,// 44 PAY  17 

    0x3fdeac9f,// 45 PAY  18 

    0x8aad85a2,// 46 PAY  19 

    0x36977b71,// 47 PAY  20 

    0x9f9e79de,// 48 PAY  21 

    0x39bcdee4,// 49 PAY  22 

    0x3a7e3af4,// 50 PAY  23 

    0xfd7e3238,// 51 PAY  24 

    0x76d059f6,// 52 PAY  25 

    0x42b88940,// 53 PAY  26 

    0xedb4b2cf,// 54 PAY  27 

    0xfda78aa0,// 55 PAY  28 

    0xa7882a0f,// 56 PAY  29 

    0xafc60964,// 57 PAY  30 

    0x2262a9b3,// 58 PAY  31 

    0xcfdf8061,// 59 PAY  32 

    0xae36b1f4,// 60 PAY  33 

    0xab69e80e,// 61 PAY  34 

    0xee852db2,// 62 PAY  35 

    0x6279d550,// 63 PAY  36 

    0xe4ca4f93,// 64 PAY  37 

    0x46777a9f,// 65 PAY  38 

    0x3c330961,// 66 PAY  39 

    0xd5a722fa,// 67 PAY  40 

    0xbbb03d76,// 68 PAY  41 

    0xdd7a13ea,// 69 PAY  42 

    0xb29c414f,// 70 PAY  43 

    0xc892f00c,// 71 PAY  44 

    0x0e18c126,// 72 PAY  45 

    0xfeaf3088,// 73 PAY  46 

    0xfc704076,// 74 PAY  47 

    0xec00f2c9,// 75 PAY  48 

    0x6bbdcad3,// 76 PAY  49 

    0x7f669957,// 77 PAY  50 

    0x1b61ae06,// 78 PAY  51 

    0x1aa1cb75,// 79 PAY  52 

    0x82123bb6,// 80 PAY  53 

    0x53ce292d,// 81 PAY  54 

    0x68840b6e,// 82 PAY  55 

    0x60f7ad51,// 83 PAY  56 

    0xc89109b5,// 84 PAY  57 

    0xa362bac3,// 85 PAY  58 

    0x01ddf663,// 86 PAY  59 

    0x69979c16,// 87 PAY  60 

    0xf48cf2c4,// 88 PAY  61 

    0x198a8c88,// 89 PAY  62 

    0x62a5549a,// 90 PAY  63 

    0x975437aa,// 91 PAY  64 

    0xbeaf5627,// 92 PAY  65 

    0xab844981,// 93 PAY  66 

    0x03d66297,// 94 PAY  67 

    0x779ca9ef,// 95 PAY  68 

    0x610e4b95,// 96 PAY  69 

    0x9d0ae4b9,// 97 PAY  70 

    0xf1c3a222,// 98 PAY  71 

    0x66e73680,// 99 PAY  72 

    0x6af5e5f7,// 100 PAY  73 

    0x31bb0a5e,// 101 PAY  74 

    0xa4064899,// 102 PAY  75 

    0xd7f9b6ed,// 103 PAY  76 

    0x6e90e63f,// 104 PAY  77 

    0xa9515c32,// 105 PAY  78 

    0x39eb3460,// 106 PAY  79 

    0xdd17309b,// 107 PAY  80 

    0x215f53f5,// 108 PAY  81 

    0x04746d1d,// 109 PAY  82 

    0xd89ab142,// 110 PAY  83 

    0xe25eb40d,// 111 PAY  84 

    0x6a6254ce,// 112 PAY  85 

    0x4dbc9876,// 113 PAY  86 

    0xa1dd9eef,// 114 PAY  87 

    0x576e2114,// 115 PAY  88 

    0xade1e504,// 116 PAY  89 

    0xb45998c7,// 117 PAY  90 

    0x694a8c06,// 118 PAY  91 

    0xc3332335,// 119 PAY  92 

    0x84801dc0,// 120 PAY  93 

    0x3e406efe,// 121 PAY  94 

    0x5fc97ca1,// 122 PAY  95 

    0xd2728b0e,// 123 PAY  96 

    0xa2c9abbb,// 124 PAY  97 

    0xde553233,// 125 PAY  98 

    0x78ad5771,// 126 PAY  99 

    0x6efbaaee,// 127 PAY 100 

    0xa45fb9f7,// 128 PAY 101 

    0xaec48798,// 129 PAY 102 

    0x9c42adaa,// 130 PAY 103 

    0xdf85b00b,// 131 PAY 104 

    0x36e11f30,// 132 PAY 105 

    0xda05f252,// 133 PAY 106 

    0x82b20f32,// 134 PAY 107 

    0x7e4aa8d2,// 135 PAY 108 

    0xac15209e,// 136 PAY 109 

    0xfa7ad28e,// 137 PAY 110 

    0x446ab095,// 138 PAY 111 

    0x6810ecb1,// 139 PAY 112 

    0x2c348481,// 140 PAY 113 

    0xc766875c,// 141 PAY 114 

    0x804ec8b2,// 142 PAY 115 

    0x75224e9e,// 143 PAY 116 

    0x4ada5b25,// 144 PAY 117 

    0x2f7ffe54,// 145 PAY 118 

    0x79003f2d,// 146 PAY 119 

    0xd9e90fa8,// 147 PAY 120 

    0x7d0290c7,// 148 PAY 121 

    0x22bb67cf,// 149 PAY 122 

    0x31113405,// 150 PAY 123 

    0x13a6d46e,// 151 PAY 124 

    0x73d4a88f,// 152 PAY 125 

    0xe423adb4,// 153 PAY 126 

    0x02c91440,// 154 PAY 127 

    0x12d5ab54,// 155 PAY 128 

    0xfd161090,// 156 PAY 129 

    0xcd9102fd,// 157 PAY 130 

    0xd32cf1db,// 158 PAY 131 

    0x016ffb38,// 159 PAY 132 

    0xde583e11,// 160 PAY 133 

    0x4bfd186a,// 161 PAY 134 

    0xe9a22e34,// 162 PAY 135 

    0xd4149158,// 163 PAY 136 

    0x61bca34a,// 164 PAY 137 

    0xe6c60c34,// 165 PAY 138 

    0x9e12a95f,// 166 PAY 139 

    0x99f608f8,// 167 PAY 140 

    0xec507d89,// 168 PAY 141 

    0x280c5a19,// 169 PAY 142 

    0x4c104484,// 170 PAY 143 

    0x82856b20,// 171 PAY 144 

    0x8e1979f4,// 172 PAY 145 

    0x1fb4f845,// 173 PAY 146 

    0x357a4643,// 174 PAY 147 

    0x201b179e,// 175 PAY 148 

    0x1dcba1e9,// 176 PAY 149 

    0x972a9d60,// 177 PAY 150 

    0x92bd528c,// 178 PAY 151 

    0x5480f8df,// 179 PAY 152 

    0x0be0e508,// 180 PAY 153 

    0xe08bbc1c,// 181 PAY 154 

    0xf1ad2ced,// 182 PAY 155 

    0x07ca44fe,// 183 PAY 156 

    0x24ff93f6,// 184 PAY 157 

    0x8a55cb63,// 185 PAY 158 

    0x47897b57,// 186 PAY 159 

    0xed4c1d47,// 187 PAY 160 

    0x0c7ef5d0,// 188 PAY 161 

    0xe73e41ec,// 189 PAY 162 

    0xd8a25c48,// 190 PAY 163 

    0x1c8c9a58,// 191 PAY 164 

    0x8e826100,// 192 PAY 165 

    0x2b0082ff,// 193 PAY 166 

    0x8697f3aa,// 194 PAY 167 

    0x264aa140,// 195 PAY 168 

    0xc457f0ea,// 196 PAY 169 

    0xdfd6d8c3,// 197 PAY 170 

    0x71504ab7,// 198 PAY 171 

    0xf9534046,// 199 PAY 172 

    0xc6263535,// 200 PAY 173 

    0x2ab98948,// 201 PAY 174 

    0x1882791d,// 202 PAY 175 

    0xde694aeb,// 203 PAY 176 

    0x11543f59,// 204 PAY 177 

    0xbf72f0bd,// 205 PAY 178 

    0x71949b4f,// 206 PAY 179 

    0x10f8f06d,// 207 PAY 180 

    0x33aeb722,// 208 PAY 181 

    0x86d4a101,// 209 PAY 182 

    0xb5960a16,// 210 PAY 183 

    0xbbd073fa,// 211 PAY 184 

    0x7e2440a8,// 212 PAY 185 

    0xc217aad6,// 213 PAY 186 

    0x837bf8b0,// 214 PAY 187 

    0x64e06ba9,// 215 PAY 188 

    0xd769ee93,// 216 PAY 189 

    0xc0b5ba5c,// 217 PAY 190 

    0x9ede8185,// 218 PAY 191 

    0xbcf33a62,// 219 PAY 192 

    0x616a8761,// 220 PAY 193 

    0x74974328,// 221 PAY 194 

    0xa38b8645,// 222 PAY 195 

    0x28607e27,// 223 PAY 196 

    0xd3970b35,// 224 PAY 197 

    0xfba3a1eb,// 225 PAY 198 

    0x09132aef,// 226 PAY 199 

    0x1bcf2e1f,// 227 PAY 200 

    0xf13d6187,// 228 PAY 201 

    0xd9c16f0f,// 229 PAY 202 

    0xd9c65f01,// 230 PAY 203 

    0x5a07340f,// 231 PAY 204 

    0xd2653ff7,// 232 PAY 205 

    0x87b3142a,// 233 PAY 206 

    0x8b665dd6,// 234 PAY 207 

    0x7e41fc9d,// 235 PAY 208 

    0x80c13826,// 236 PAY 209 

    0x6a0b96bf,// 237 PAY 210 

    0x18fec08a,// 238 PAY 211 

    0xb9fad661,// 239 PAY 212 

    0xe51a9289,// 240 PAY 213 

    0x95e0a26c,// 241 PAY 214 

    0x709dc34d,// 242 PAY 215 

    0x86a91d30,// 243 PAY 216 

    0x08482015,// 244 PAY 217 

    0x0e6406d3,// 245 PAY 218 

    0x77c27476,// 246 PAY 219 

    0x026187ae,// 247 PAY 220 

    0xb8d4a118,// 248 PAY 221 

    0xae0e6a05,// 249 PAY 222 

    0x80e16aa1,// 250 PAY 223 

    0xa36ef234,// 251 PAY 224 

    0x6f9a3023,// 252 PAY 225 

    0x625bc268,// 253 PAY 226 

    0x95cb3ccb,// 254 PAY 227 

    0x6097de83,// 255 PAY 228 

    0x6775cf93,// 256 PAY 229 

    0xaa98546a,// 257 PAY 230 

    0x564a339b,// 258 PAY 231 

    0xece87f5e,// 259 PAY 232 

    0x5baaeb96,// 260 PAY 233 

    0x6a1101de,// 261 PAY 234 

    0xd8d51b98,// 262 PAY 235 

    0x88baf1d4,// 263 PAY 236 

    0xdc65e745,// 264 PAY 237 

    0x18f4b3e7,// 265 PAY 238 

    0x39842fc6,// 266 PAY 239 

    0x22b340d3,// 267 PAY 240 

    0x4c8c26d9,// 268 PAY 241 

    0x87dc0274,// 269 PAY 242 

    0x780aae29,// 270 PAY 243 

    0x8fb13af3,// 271 PAY 244 

    0x1492b916,// 272 PAY 245 

    0x301a125f,// 273 PAY 246 

    0x1c74eb5a,// 274 PAY 247 

    0x62f273d8,// 275 PAY 248 

    0x37fa9063,// 276 PAY 249 

    0xed9f424a,// 277 PAY 250 

    0xf5a970fe,// 278 PAY 251 

    0x5f165cc4,// 279 PAY 252 

    0xe16a270c,// 280 PAY 253 

    0x0b3c2733,// 281 PAY 254 

    0xd5745bb8,// 282 PAY 255 

    0x0ee00a28,// 283 PAY 256 

    0x06733a55,// 284 PAY 257 

    0x428b7432,// 285 PAY 258 

    0x74d23e01,// 286 PAY 259 

    0x2be56125,// 287 PAY 260 

    0x8a400792,// 288 PAY 261 

    0x028ae596,// 289 PAY 262 

    0xb20875b3,// 290 PAY 263 

    0xc00bf066,// 291 PAY 264 

    0x21477532,// 292 PAY 265 

    0x62261918,// 293 PAY 266 

    0xd33b9a9f,// 294 PAY 267 

    0xd0d3ab74,// 295 PAY 268 

    0xb1d22169,// 296 PAY 269 

    0x13dec11e,// 297 PAY 270 

    0x39318545,// 298 PAY 271 

    0xe6e4505b,// 299 PAY 272 

    0x941ff45e,// 300 PAY 273 

    0x66063f3a,// 301 PAY 274 

    0x150466df,// 302 PAY 275 

    0x181ce2cd,// 303 PAY 276 

    0x4a52a3a8,// 304 PAY 277 

    0x9c7f3a54,// 305 PAY 278 

    0xe52031d9,// 306 PAY 279 

    0xd5d053b7,// 307 PAY 280 

    0xfa09ad09,// 308 PAY 281 

    0x22ccfadc,// 309 PAY 282 

    0xda0417bf,// 310 PAY 283 

    0x791e92a1,// 311 PAY 284 

    0xf21c84b9,// 312 PAY 285 

    0x47343679,// 313 PAY 286 

    0xdc2991b8,// 314 PAY 287 

    0x98003b30,// 315 PAY 288 

    0x60f6bc5b,// 316 PAY 289 

    0x08c3a8b5,// 317 PAY 290 

    0x58926b5d,// 318 PAY 291 

    0xf41cacb8,// 319 PAY 292 

    0x72b746bd,// 320 PAY 293 

    0xd9a0e195,// 321 PAY 294 

    0x0c6769e9,// 322 PAY 295 

    0x9743a9c5,// 323 PAY 296 

    0x5ce5e368,// 324 PAY 297 

    0x81c83c23,// 325 PAY 298 

    0x8558720b,// 326 PAY 299 

    0xde035db5,// 327 PAY 300 

    0x578c71dc,// 328 PAY 301 

    0x0bbb207f,// 329 PAY 302 

    0x971f810c,// 330 PAY 303 

    0x51b19796,// 331 PAY 304 

    0x3451cf20,// 332 PAY 305 

    0xe181a70f,// 333 PAY 306 

    0xf79503ad,// 334 PAY 307 

    0xb3747ef8,// 335 PAY 308 

    0x40bb9587,// 336 PAY 309 

    0x72c92e6e,// 337 PAY 310 

    0xc2a4e70a,// 338 PAY 311 

    0xe75805b1,// 339 PAY 312 

    0x07366d59,// 340 PAY 313 

    0xd1364d5c,// 341 PAY 314 

    0xc948b566,// 342 PAY 315 

    0xaba2c65c,// 343 PAY 316 

    0x9b22ceb0,// 344 PAY 317 

    0x96122060,// 345 PAY 318 

    0x0395e378,// 346 PAY 319 

    0x70cce60e,// 347 PAY 320 

    0xb4817395,// 348 PAY 321 

    0xb4c3760b,// 349 PAY 322 

    0xe11f99cc,// 350 PAY 323 

    0xd6467866,// 351 PAY 324 

    0x72975ebf,// 352 PAY 325 

    0x21322092,// 353 PAY 326 

    0xbbea0325,// 354 PAY 327 

    0x167ed5df,// 355 PAY 328 

    0xd0ad3359,// 356 PAY 329 

    0xd6a5bf45,// 357 PAY 330 

    0x33a8421b,// 358 PAY 331 

    0x006dccbd,// 359 PAY 332 

    0x459835f2,// 360 PAY 333 

    0x67ca43db,// 361 PAY 334 

    0xa36cba42,// 362 PAY 335 

    0x723184f1,// 363 PAY 336 

    0xa482902c,// 364 PAY 337 

    0x1b2b20d1,// 365 PAY 338 

    0x8691c5de,// 366 PAY 339 

    0xce49e9c3,// 367 PAY 340 

    0x42268132,// 368 PAY 341 

    0x783261be,// 369 PAY 342 

    0xa3277dde,// 370 PAY 343 

    0xb6b2c76f,// 371 PAY 344 

    0x4c5e5568,// 372 PAY 345 

    0x951e0a48,// 373 PAY 346 

    0x39559662,// 374 PAY 347 

    0xaed2ddd3,// 375 PAY 348 

    0x78e3fa26,// 376 PAY 349 

    0x2bf77fa6,// 377 PAY 350 

    0xa941e93a,// 378 PAY 351 

    0xc3fad5ba,// 379 PAY 352 

    0xb35004a6,// 380 PAY 353 

    0x2102bb5e,// 381 PAY 354 

    0xd8556deb,// 382 PAY 355 

    0x6e7c3ef5,// 383 PAY 356 

    0x0246f9dd,// 384 PAY 357 

    0x6201407d,// 385 PAY 358 

    0xa0abf3ff,// 386 PAY 359 

    0xae296958,// 387 PAY 360 

    0xf5277b33,// 388 PAY 361 

    0xdf8f7de9,// 389 PAY 362 

    0x30ddfa26,// 390 PAY 363 

    0x9134daaa,// 391 PAY 364 

    0x33fda7f6,// 392 PAY 365 

    0x62d65833,// 393 PAY 366 

    0xc2bc7eea,// 394 PAY 367 

    0xc37dadf8,// 395 PAY 368 

    0x32b3958b,// 396 PAY 369 

    0x5bd124cc,// 397 PAY 370 

    0x40202be2,// 398 PAY 371 

    0x871ca3b1,// 399 PAY 372 

    0x52e10f42,// 400 PAY 373 

    0x532ae8f9,// 401 PAY 374 

    0x5d94e2c3,// 402 PAY 375 

    0xcbce1a58,// 403 PAY 376 

    0x581f66b7,// 404 PAY 377 

    0x0a78793d,// 405 PAY 378 

    0x2e96d97e,// 406 PAY 379 

    0x28ba7b18,// 407 PAY 380 

    0xc0bd634c,// 408 PAY 381 

    0xe04a2b40,// 409 PAY 382 

    0xd72aac08,// 410 PAY 383 

    0xdf59188c,// 411 PAY 384 

    0x0f193466,// 412 PAY 385 

    0x2558bf65,// 413 PAY 386 

    0xb235b584,// 414 PAY 387 

    0xa9d25c1a,// 415 PAY 388 

    0x338fec95,// 416 PAY 389 

    0x8d513bfc,// 417 PAY 390 

    0xe8cb4bc9,// 418 PAY 391 

    0xb5345f33,// 419 PAY 392 

    0x9aa018fd,// 420 PAY 393 

    0xcbb903aa,// 421 PAY 394 

    0x28bf8045,// 422 PAY 395 

    0xee8a344f,// 423 PAY 396 

    0x53e596b2,// 424 PAY 397 

    0x1a90ef55,// 425 PAY 398 

    0x084eb40a,// 426 PAY 399 

    0xe26da42f,// 427 PAY 400 

    0x726b9135,// 428 PAY 401 

    0x557df7f9,// 429 PAY 402 

    0xae74a4dd,// 430 PAY 403 

    0x2c547c38,// 431 PAY 404 

    0x907a554b,// 432 PAY 405 

    0x9a9574de,// 433 PAY 406 

    0x714c6744,// 434 PAY 407 

    0xf8447635,// 435 PAY 408 

    0xb22b8b76,// 436 PAY 409 

    0x74ed8e94,// 437 PAY 410 

    0x2014fb0b,// 438 PAY 411 

    0x7acd71f9,// 439 PAY 412 

    0x4ab88662,// 440 PAY 413 

    0x31b826cf,// 441 PAY 414 

    0x93237164,// 442 PAY 415 

    0xd5cc49bf,// 443 PAY 416 

    0x10a5c0ec,// 444 PAY 417 

    0x07323f93,// 445 PAY 418 

    0xeab13545,// 446 PAY 419 

    0x02d90285,// 447 PAY 420 

    0x38e8dbb3,// 448 PAY 421 

    0x44688343,// 449 PAY 422 

    0x6fbb2117,// 450 PAY 423 

    0xf983960e,// 451 PAY 424 

    0xc66fb6cf,// 452 PAY 425 

    0x41a431a2,// 453 PAY 426 

    0x5c527e83,// 454 PAY 427 

    0xffd6f94d,// 455 PAY 428 

    0x607e4a59,// 456 PAY 429 

    0x73d369b1,// 457 PAY 430 

    0xb3be0c3d,// 458 PAY 431 

    0x70dfde56,// 459 PAY 432 

    0x529b3b06,// 460 PAY 433 

    0x17606de1,// 461 PAY 434 

    0x3b7f4b90,// 462 PAY 435 

    0x0b8bdf45,// 463 PAY 436 

    0x2656bc66,// 464 PAY 437 

    0x65ec4d3f,// 465 PAY 438 

    0x1c6020e6,// 466 PAY 439 

    0x0091151d,// 467 PAY 440 

    0x0ad7afb1,// 468 PAY 441 

    0x5817367c,// 469 PAY 442 

    0x4c7cd746,// 470 PAY 443 

    0xd0f9bc1e,// 471 PAY 444 

    0x292d8e96,// 472 PAY 445 

    0x9492dc16,// 473 PAY 446 

    0xddd3263e,// 474 PAY 447 

    0x63503b3b,// 475 PAY 448 

    0xbceb53c9,// 476 PAY 449 

    0xa07e6ae9,// 477 PAY 450 

    0x70499c8b,// 478 PAY 451 

    0x987e8c3c,// 479 PAY 452 

    0x1434588e,// 480 PAY 453 

    0xfd7eee85,// 481 PAY 454 

    0x0db779e9,// 482 PAY 455 

    0x2ef1c865,// 483 PAY 456 

    0xcc8b00f7,// 484 PAY 457 

    0x1e061cd0,// 485 PAY 458 

    0x96234bc3,// 486 PAY 459 

    0x497aab9f,// 487 PAY 460 

    0x5013492f,// 488 PAY 461 

    0x83f6f445,// 489 PAY 462 

    0x9d74ffd6,// 490 PAY 463 

    0xc45f6878,// 491 PAY 464 

    0x8b644f79,// 492 PAY 465 

    0xc807ab11,// 493 PAY 466 

    0x94340e4d,// 494 PAY 467 

    0x4eed9afb,// 495 PAY 468 

    0xa0c22228,// 496 PAY 469 

    0x41112297,// 497 PAY 470 

    0x5796dd8c,// 498 PAY 471 

    0x64f39b12,// 499 PAY 472 

    0x43ddc05b,// 500 PAY 473 

    0x09b7f6c6,// 501 PAY 474 

    0xc7d6f922,// 502 PAY 475 

    0x04cbd794,// 503 PAY 476 

    0x5635697a,// 504 PAY 477 

    0xcebea8d5,// 505 PAY 478 

    0x514e3126,// 506 PAY 479 

    0x156985a8,// 507 PAY 480 

    0xd6e61eef,// 508 PAY 481 

    0x3722c455,// 509 PAY 482 

    0x0b5465dc,// 510 PAY 483 

    0xcf218a65,// 511 PAY 484 

    0x687369af,// 512 PAY 485 

    0x7a77cb6e,// 513 PAY 486 

    0xaeb821e1,// 514 PAY 487 

    0x41960077,// 515 PAY 488 

    0x81852054,// 516 PAY 489 

    0x589006be,// 517 PAY 490 

    0x85568572,// 518 PAY 491 

    0x174cea40,// 519 PAY 492 

    0x106c78a7,// 520 PAY 493 

    0x1d592062,// 521 PAY 494 

    0x19fa5dc3,// 522 PAY 495 

    0xff9a5200,// 523 PAY 496 

/// STA is 1 words. 

/// STA num_pkts       : 126 

/// STA pkt_idx        : 146 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xf1 

    0x0248f17e // 524 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt89_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x0c 

/// ECH pdu_tag        : 0x00 

    0x000c0000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en !lock_en  

/// SCX inbound !save_icv insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : RC4UPDT_AES192 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x1 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0000000f,// 3 SCX   1 

    0x8045282c,// 4 SCX   2 

    0x000021c2,// 5 SCX   3 

    0x899bfe6d,// 6 SCX   4 

    0x5c66ac0d,// 7 SCX   5 

    0x13c9b3b0,// 8 SCX   6 

    0xdbf0fd0a,// 9 SCX   7 

    0xa8cd5803,// 10 SCX   8 

    0xee5df94c,// 11 SCX   9 

    0x15c686e1,// 12 SCX  10 

    0x176e4a42,// 13 SCX  11 

    0x4799e6b2,// 14 SCX  12 

    0x71ceba60,// 15 SCX  13 

    0x221595eb,// 16 SCX  14 

    0x0c2c1b75,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 594 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 215 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 215 

/// BFD lencrypto      : 72 

/// BFD ofstcrypto     : 8 

/// BFD (ofst+len)cry  : 80 

/// BFD ofstiv         : 0 

/// BFD ofsticv        : 388 

    0x000000d7,// 18 BFD   1 

    0x00080048,// 19 BFD   2 

    0x01840000,// 20 BFD   3 

/// MFM is 1 words. 

/// MFM vldnibs        : 1 

    0x01002000,// 21 MFM   1 

/// BDA is 150 words. 

/// BDA size     is 594 (0x252) 

/// BDA id       is 0x8e30 

    0x02528e30,// 22 BDA   1 

/// PAY Generic Data size   : 594 byte(s) 

/// PAD Buffer Data Pad size   : 2 byte(s) 

    0xa1ab798c,// 23 PAY   1 

    0x61f767aa,// 24 PAY   2 

    0x03270564,// 25 PAY   3 

    0x2599e4a3,// 26 PAY   4 

    0x2ab31a92,// 27 PAY   5 

    0x479f1f3d,// 28 PAY   6 

    0x3eef542a,// 29 PAY   7 

    0x91ed81b4,// 30 PAY   8 

    0xc6ab0e0f,// 31 PAY   9 

    0xb382ecb0,// 32 PAY  10 

    0x41492c86,// 33 PAY  11 

    0x31459aec,// 34 PAY  12 

    0x253823c0,// 35 PAY  13 

    0x2e322a4b,// 36 PAY  14 

    0x0a0b292a,// 37 PAY  15 

    0x47d8a75d,// 38 PAY  16 

    0xd9195d81,// 39 PAY  17 

    0x315f8acc,// 40 PAY  18 

    0x51c3dc23,// 41 PAY  19 

    0xa0565581,// 42 PAY  20 

    0x2366aede,// 43 PAY  21 

    0x3a4241ad,// 44 PAY  22 

    0x8f84cf28,// 45 PAY  23 

    0x419ba7bd,// 46 PAY  24 

    0x90b3abbb,// 47 PAY  25 

    0xd31cb90b,// 48 PAY  26 

    0xd467394d,// 49 PAY  27 

    0x0e3d8f4c,// 50 PAY  28 

    0x04c2c97f,// 51 PAY  29 

    0x0f57b3f1,// 52 PAY  30 

    0xeba365d9,// 53 PAY  31 

    0xecc4c413,// 54 PAY  32 

    0x214ab605,// 55 PAY  33 

    0x3f52957e,// 56 PAY  34 

    0x0b526681,// 57 PAY  35 

    0x4b8af58d,// 58 PAY  36 

    0x99aea507,// 59 PAY  37 

    0x9d70e2b4,// 60 PAY  38 

    0xa47eece6,// 61 PAY  39 

    0xdcc29d49,// 62 PAY  40 

    0xa2f6e04c,// 63 PAY  41 

    0xecb7555d,// 64 PAY  42 

    0x24a6b27f,// 65 PAY  43 

    0xf63e555b,// 66 PAY  44 

    0x96ce1d05,// 67 PAY  45 

    0x644b364e,// 68 PAY  46 

    0x6178154c,// 69 PAY  47 

    0x8c74f748,// 70 PAY  48 

    0x6f0620c2,// 71 PAY  49 

    0xf1195cd3,// 72 PAY  50 

    0x8630a9b3,// 73 PAY  51 

    0x24c6f4d3,// 74 PAY  52 

    0x21de246a,// 75 PAY  53 

    0xf20b2c33,// 76 PAY  54 

    0xfb044540,// 77 PAY  55 

    0x90b8f949,// 78 PAY  56 

    0x66bd8f66,// 79 PAY  57 

    0xec60668c,// 80 PAY  58 

    0x813d9c4d,// 81 PAY  59 

    0xdc208dad,// 82 PAY  60 

    0xaddc71b7,// 83 PAY  61 

    0x4860682b,// 84 PAY  62 

    0x39b759a7,// 85 PAY  63 

    0x9d3f4e8a,// 86 PAY  64 

    0x4e6c6bfc,// 87 PAY  65 

    0xa783a986,// 88 PAY  66 

    0x68953716,// 89 PAY  67 

    0xa66ad17d,// 90 PAY  68 

    0xde61c72a,// 91 PAY  69 

    0xc6da347f,// 92 PAY  70 

    0xeded06ab,// 93 PAY  71 

    0xdb043257,// 94 PAY  72 

    0x6b9f2490,// 95 PAY  73 

    0xbda9e4f9,// 96 PAY  74 

    0x333192f6,// 97 PAY  75 

    0xd7a59b53,// 98 PAY  76 

    0xffceb69a,// 99 PAY  77 

    0x87aa0bd0,// 100 PAY  78 

    0xfdb4c8db,// 101 PAY  79 

    0xdbee72e5,// 102 PAY  80 

    0x743de8e7,// 103 PAY  81 

    0xdee7e5fc,// 104 PAY  82 

    0xaafc315a,// 105 PAY  83 

    0xbb91153f,// 106 PAY  84 

    0x374a800f,// 107 PAY  85 

    0x979448c0,// 108 PAY  86 

    0x60e38f65,// 109 PAY  87 

    0x0a55a70a,// 110 PAY  88 

    0xb1316089,// 111 PAY  89 

    0xac0f7394,// 112 PAY  90 

    0xa1d94a8a,// 113 PAY  91 

    0x2a29aa5b,// 114 PAY  92 

    0x5b9adce0,// 115 PAY  93 

    0xdf7b2316,// 116 PAY  94 

    0x4e29b2c1,// 117 PAY  95 

    0x97440b87,// 118 PAY  96 

    0x38efe35d,// 119 PAY  97 

    0x3dc2cd99,// 120 PAY  98 

    0xc228f703,// 121 PAY  99 

    0x7dc16c6f,// 122 PAY 100 

    0x46223e77,// 123 PAY 101 

    0xcc75e613,// 124 PAY 102 

    0x77835261,// 125 PAY 103 

    0x806c5f95,// 126 PAY 104 

    0x22e43d85,// 127 PAY 105 

    0x70fc2e54,// 128 PAY 106 

    0xac05eb29,// 129 PAY 107 

    0x5848bd5d,// 130 PAY 108 

    0x1b5d5353,// 131 PAY 109 

    0x83bc6ef5,// 132 PAY 110 

    0xf9127a87,// 133 PAY 111 

    0xf484b714,// 134 PAY 112 

    0x895a8c40,// 135 PAY 113 

    0x14fcd826,// 136 PAY 114 

    0x10e0490d,// 137 PAY 115 

    0x835e92d4,// 138 PAY 116 

    0xe933d85f,// 139 PAY 117 

    0x493eb7d0,// 140 PAY 118 

    0x904639dd,// 141 PAY 119 

    0x1688936c,// 142 PAY 120 

    0x70ee9107,// 143 PAY 121 

    0x01072573,// 144 PAY 122 

    0xb7bcd260,// 145 PAY 123 

    0xe60f0a7e,// 146 PAY 124 

    0xdbaeb255,// 147 PAY 125 

    0xa4096421,// 148 PAY 126 

    0xac6029dd,// 149 PAY 127 

    0xf1ea51b2,// 150 PAY 128 

    0xc9188ffd,// 151 PAY 129 

    0x0c9f8727,// 152 PAY 130 

    0x00656b1a,// 153 PAY 131 

    0x43f0e599,// 154 PAY 132 

    0x6a607772,// 155 PAY 133 

    0x83fec90f,// 156 PAY 134 

    0xed462986,// 157 PAY 135 

    0x094ad044,// 158 PAY 136 

    0xf486f5f3,// 159 PAY 137 

    0xebfe45a7,// 160 PAY 138 

    0xdd46f8b0,// 161 PAY 139 

    0x65f92fb8,// 162 PAY 140 

    0x15294aba,// 163 PAY 141 

    0xa58bda9c,// 164 PAY 142 

    0x79e30939,// 165 PAY 143 

    0x8121e6df,// 166 PAY 144 

    0x0536d802,// 167 PAY 145 

    0xf566336d,// 168 PAY 146 

    0x66c3f1d7,// 169 PAY 147 

    0x6b3e033a,// 170 PAY 148 

    0x26300000,// 171 PAY 149 

/// STA is 1 words. 

/// STA num_pkts       : 49 

/// STA pkt_idx        : 98 

/// STA err_code       : SUCCESS 

/// STA error_details  : 0xc1 

    0x0188c131 // 172 STA   1 

};

//

/// CCH is 1 words  

/// CCH is NEW format  

/// CCH Opcode      = GENERIC (0x1) 

/// CCH CCTX length = 64 (0x40) 

/// CCH pipe select = 0 

/// CCH incl_sctx !incl_bct incl_bdesc incl_mfm  

/// CCH incl_bdata !incl_hash !incl_supdt !incl_sps !drop_bdata  

uint32 tx_des_md5_pkt90_tmpl[] = {
    0xb8010040,// 1 CCH   1 

/// ECH cache_idx      : 0x05 

/// ECH pdu_tag        : 0x00 

    0x00050000,// 2 ECH   1 

/// SCX is 15 words. 

/// SCX SA Type (sa_type) GENERIC  

/// SCX !cacheable !update_en lock_en  

/// SCX inbound save_icv !insert_icv !check_icv sctx_iv  

/// SCX exp_iv !gen_iv  

/// SCX order           : ENC_AUTH 

/// SCX encralg         : DES 

/// SCX authalg         : MD5 

/// SCX aes_size        : AES256 

/// SCX aes_mode        : CBC 

/// SCX authmode        : HMAC 

/// SCX authtype        : NORMAL_AES128 

/// SCX icv_size        : 0x2 

/// SCX iv_ovr_ofst     : 0x0 

/// SCX exp_iv_size     : 0x2 

/// SCX cryptokey_size  : 8 

/// SCX cryptoiv_size   : 8 

/// SCX authctx_size    : 32 

    0x0800000f,// 3 SCX   1 

    0x804628ff,// 4 SCX   2 

    0x000042c2,// 5 SCX   3 

    0xda3809d2,// 6 SCX   4 

    0x422ff20b,// 7 SCX   5 

    0x9ee1e0f0,// 8 SCX   6 

    0xbebe6e12,// 9 SCX   7 

    0x93bfe10f,// 10 SCX   8 

    0x7ec153ad,// 11 SCX   9 

    0x5877a17a,// 12 SCX  10 

    0xddd8ed62,// 13 SCX  11 

    0x2c407e0e,// 14 SCX  12 

    0x3f79e466,// 15 SCX  13 

    0xe27d4027,// 16 SCX  14 

    0x6944f6e0,// 17 SCX  15 

/// BFD is 3 words. 

/// BFD tot_len        : 311 

/// BFD hdr_len        : 0 

/// BFD sad_type       : ESP_BOTH 

/// BFD crypto_type    : DES 

/// BFD lenmac         : 222 

/// BFD ofstmac        : 0 

/// BFD (ofst+len)mac  : 222 

/// BFD lencrypto      : 8 

/// BFD ofstcrypto     : 212 

/// BFD (ofst+len)cry  : 220 

/// BFD ofstiv         : 152 

/// BFD ofsticv        : 232 

    0x000000de,// 18 BFD   1 

    0x00d40008,// 19 BFD   2 

    0x00e80098,// 20 BFD   3 

/// MFM is 3 words. 

/// MFM vldnibs        : f 

    0x0f002113,// 21 MFM   1 

    0x17a73006,// 22 MFM   2 

    0xe5400000,// 23 MFM   3 

/// BDA is 79 words. 

/// BDA size     is 311 (0x137) 

/// BDA id       is 0xa336 

    0x0137a336,// 24 BDA   1 

/// PAY Generic Data size   : 311 byte(s) 

/// PAD Buffer Data Pad size   : 1 byte(s) 

    0x5c0a8de0,// 25 PAY   1 

    0x52b0f583,// 26 PAY   2 

    0x9f74ecd3,// 27 PAY   3 

    0xf9b9f110,// 28 PAY   4 

    0x7e729762,// 29 PAY   5 

    0x32abba1d,// 30 PAY   6 

    0x88c4fd28,// 31 PAY   7 

    0x443f83bb,// 32 PAY   8 

    0x36c41cfe,// 33 PAY   9 

    0xf77dcbe8,// 34 PAY  10 

    0x9a540a09,// 35 PAY  11 

    0x502cd8ff,// 36 PAY  12 

    0xdec74db7,// 37 PAY  13 

    0x9eb5fa3d,// 38 PAY  14 










