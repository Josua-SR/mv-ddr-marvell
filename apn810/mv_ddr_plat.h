/* Copyright (c) 2018 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _MV_DDR_PLAT_H
#define _MV_DDR_PLAT_H

#include "mv_ddr_mrs.h"
/* #include "mv_ddr_static.h" TODO: add static support */

#define MAX_DEVICE_NUM			1
#define DDR_INTERFACE_OCTETS_NUM	9

#define SNPS_PHY_OFFSET			0x1000000	/* TODO: define as global parameter */

#define MC6_BASE(iface)			(0xfe0000 + ((iface) * MC6_OFFS))
#define MC6_OFFS			0x10000

#define MAX_INTERFACE_NUM		1	/* TODO: take from topology */
#define MAX_BUS_NUM			9	/* TODO: take from topology */
#define DDR_IF_CTRL_SUBPHYS_NUM		3
#define ACTIVE_INTERFACE_MASK		0x1

#define NON_DRAM_MEM_RGN_START_ADDR	0xc0000000ULL
#define NON_DRAM_MEM_RGN_END_ADDR	0x100000000ULL

#define SDRAM_CS_SIZE			0x7fffffffUL	/* TODO: implement function for cs size per platform */

/* functions declaration */
int mv_ddr_pre_config(void);
int mv_ddr_post_config(void);
int mv_ddr_mc_config(void);
int mv_ddr_mc_ena(void);
int mv_ddr_phy_config(void);
unsigned int mv_ddr_init_freq_get(void);
void mv_ddr_mmap_config(void);

#endif /* _MV_DDR_PLAT_H */
