/* Copyright (c) 2017 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "mv_ddr_static.h"
#include "../ddr3_training_ip_def.h"

#ifdef CONFIG_MC_STATIC
static struct reg_data a38x_mc_800[] = {
	{0x1400, 0x7b00cc30, 0xffffffff},
	{0x1404, 0x36301848, 0xffffffff},
	{0x1408, 0x5315baab, 0xffffffff},
	{0x140c, 0x76011fcf, 0xffffffff},
	{0x1410, 0x15334400, 0xffffffff},
	{0x1414, 0x00000700, 0xffffffff},
	{0x1418, 0x00000000, 0xffffffff},
	{0x141c, 0x00000000, 0xffffffff},
	{0x1420, 0x00000000, 0xffffffff},
	{0x1424, 0x0060f3ff, 0xffffffff},
	{0x1428, 0x0013b940, 0xffffffff},
	{0x142c, 0x014c5138, 0xffffffff},
	{0x1474, 0x0000030c, 0xffffffff},
	{0x147c, 0x0000d791, 0xffffffff},
	{0x1494, 0x00120012, 0xffffffff},
	{0x1498, 0x00000000, 0xffffffff},
	{0x149c, 0x0000000f, 0xffffffff},
	{0x14a8, 0x00000000, 0xffffffff},
	{0x14cc, 0x8001200d, 0xffffffff},
	{0x150c, 0x0ffffff5, 0xffffffff},
	{0x1514, 0x0ffffff9, 0xffffffff},
	{0x151c, 0x0ffffffd, 0xffffffff},
	{0x1538, 0x00000d0d, 0xffffffff},
	{0x153c, 0x00001111, 0xffffffff},
	{0x15d0, 0x00000c70, 0xffffffff},
	{0x15d4, 0x00000046, 0xffffffff},
	{0x15d8, 0x00000018, 0xffffffff},
	{0x15dc, 0x00000000, 0xffffffff},
	{0x15e0, 0x00000023, 0xffffffff},
	{0x15e4, 0x00203c18, 0xffffffff},
	{0x15ec, 0xd9ff0029, 0xffffffff},
	{0xffffffff, 0, 0}
};

static struct reg_data a38x_mc_600[] = {
	{0x1400, 0x7b00c924, 0xffffffff},
	{0x1404, 0x36301848, 0xffffffff},
	{0x1408, 0x43149774, 0xffffffff},
	{0x140c, 0x76011f9c, 0xffffffff},
	{0x1410, 0x10334400, 0xffffffff},
	{0x1414, 0x00000700, 0xffffffff},
	{0x1418, 0x00000000, 0xffffffff},
	{0x141c, 0x00000000, 0xffffffff},
	{0x1420, 0x00000000, 0xffffffff},
	{0x1424, 0x0060f3ff, 0xffffffff},
	{0x1428, 0x00107830, 0xffffffff},
	{0x142c, 0x014c50e8, 0xffffffff},
	{0x1474, 0x0000030c, 0xffffffff},
	{0x1494, 0x00120012, 0xffffffff},
	{0x149c, 0x0000000f, 0xffffffff},
	{0x14a8, 0x00000000, 0xffffffff},
	{0x14cc, 0x0001200d, 0xffffffff},
	{0x1514, 0x0ffffff9, 0xffffffff},
	{0x151c, 0x0ffffffd, 0xffffffff},
	{0x1538, 0x00000909, 0xffffffff},
	{0x153c, 0x00000f0f, 0xffffffff},
	{0x15d0, 0x00000a50, 0xffffffff},
	{0x15d4, 0x00000046, 0xffffffff},
	{0x15d8, 0x00000010, 0xffffffff},
	{0x15dc, 0x00000000, 0xffffffff},
	{0x15e0, 0x00000023, 0xffffffff},
	{0x15e4, 0x00203c18, 0xffffffff},
	{0x15e8, 0x00000000, 0xffffffff},
	{0x15ec, 0xd9ff0029, 0xffffffff},
	{0xffffffff, 0, 0}
};
#endif /* CONFIG_MC_STATIC */

#ifdef CONFIG_PHY_STATIC
struct mv_ddr_subphys_reg_config {
	u32 reg_addr;
	u32 reg_data[5];
};

static struct mv_ddr_subphys_reg_config a38x_ctrl_phy_600[] = {
	{0x0, {0x6, 0x6, 0x6} },
	{0x1, {0x0, 0x0, 0x0} },
	{0x2, {0x0, 0x0, 0x0} },
	{0x3, {0x10, 0x10, 0x10} },
	{0x4, {0x0, 0x0, 0x0} },
	{0x5, {0x10, 0x10, 0x10} },
	{0x6, {0x0, 0x0, 0x0} },
	{0x7, {0x10, 0x10, 0x10} },
	{0x8, {0x0, 0x0, 0x0} },
	{0x9, {0x10, 0x10, 0x10} },
	{0xa, {0x0, 0x0, 0x0} },
	{0xb, {0x10, 0x10, 0x10} },
	{0xc, {0x0, 0x0, 0x0} },
	{0xd, {0x10, 0x10, 0x10} },
	{0xe, {0x0, 0x0, 0x0} },
	{0xf, {0x10, 0x10, 0x10} },
	{0x10, {0x0, 0x0, 0x0} },
	{0x11, {0x0, 0x0, 0x0} },
	{0x12, {0x0, 0x0, 0x0} },
	{0x13, {0x0, 0x0, 0x0} },
	{0x14, {0x0, 0x0, 0x0} },
	{0x15, {0x0, 0x0, 0x0} },
	{0x16, {0x0, 0x0, 0x0} },
	{0x17, {0x0, 0x0, 0x0} },
	{0x18, {0x0, 0x0, 0x0} },
	{0x19, {0x0, 0x0, 0x0} },
	{0x1a, {0x0, 0x0, 0x0} },
	{0x1b, {0x0, 0x0, 0x0} },
	{0x1c, {0x0, 0x0, 0x0} },
	{0x1d, {0x0, 0x0, 0x0} },
	{0x1e, {0x0, 0x0, 0x0} },
	{0x1f, {0x0, 0x0, 0x0} },
	{0x20, {0x0, 0x0, 0x0} },
	{0x21, {0x0, 0x0, 0x0} },
	{0x22, {0x0, 0x0, 0x0} },
	{0x23, {0x0, 0x0, 0x0} },
	{0x24, {0x0, 0x0, 0x0} },
	{0x25, {0x0, 0x0, 0x0} },
	{0x26, {0x0, 0x0, 0x0} },
	{0x27, {0x0, 0x0, 0x0} },
	{0x28, {0x0, 0x0, 0x0} },
	{0x29, {0x0, 0x0, 0x0} },
	{0x2a, {0x0, 0x0, 0x0} },
	{0x2b, {0x0, 0x0, 0x0} },
	{0x2c, {0x0, 0x0, 0x0} },
	{0x2d, {0x0, 0x0, 0x0} },
	{0x2e, {0x0, 0x0, 0x0} },
	{0x2f, {0x0, 0x0, 0x0} },
	{0x30, {0x0, 0x0, 0x0} },
	{0x31, {0x0, 0x0, 0x0} },
	{0x32, {0x0, 0x0, 0x0} },
	{0x33, {0x0, 0x0, 0x0} },
	{0x34, {0x0, 0x0, 0x0} },
	{0x35, {0x0, 0x0, 0x0} },
	{0x36, {0x0, 0x0, 0x0} },
	{0x37, {0x0, 0x0, 0x0} },
	{0x38, {0x0, 0x0, 0x0} },
	{0x39, {0x0, 0x0, 0x0} },
	{0x3a, {0x0, 0x0, 0x0} },
	{0x3b, {0x0, 0x0, 0x0} },
	{0x3c, {0x0, 0x0, 0x0} },
	{0x3d, {0x0, 0x0, 0x0} },
	{0x3e, {0x0, 0x0, 0x0} },
	{0x3f, {0x0, 0x0, 0x0} },
	{0x40, {0x0, 0x0, 0x0} },
	{0x41, {0x0, 0x0, 0x0} },
	{0x42, {0x0, 0x0, 0x0} },
	{0x43, {0x0, 0x0, 0x0} },
	{0x44, {0x0, 0x0, 0x0} },
	{0x45, {0x0, 0x0, 0x0} },
	{0x46, {0x0, 0x0, 0x0} },
	{0x47, {0x0, 0x0, 0x0} },
	{0x48, {0x0, 0x0, 0x0} },
	{0x49, {0x0, 0x0, 0x0} },
	{0x4a, {0x0, 0x0, 0x0} },
	{0x4b, {0x0, 0x0, 0x0} },
	{0x4c, {0x0, 0x0, 0x0} },
	{0x4d, {0x0, 0x0, 0x0} },
	{0x4e, {0x0, 0x0, 0x0} },
	{0x4f, {0x0, 0x0, 0x0} },
	{0x50, {0x0, 0x0, 0x0} },
	{0x51, {0x0, 0x0, 0x0} },
	{0x52, {0x0, 0x0, 0x0} },
	{0x53, {0x0, 0x0, 0x0} },
	{0x54, {0x0, 0x0, 0x0} },
	{0x55, {0x0, 0x0, 0x0} },
	{0x56, {0x0, 0x0, 0x0} },
	{0x57, {0x0, 0x0, 0x0} },
	{0x58, {0x0, 0x0, 0x0} },
	{0x59, {0x0, 0x0, 0x0} },
	{0x5a, {0x0, 0x0, 0x0} },
	{0x5b, {0x0, 0x0, 0x0} },
	{0x5c, {0x0, 0x0, 0x0} },
	{0x5d, {0x0, 0x0, 0x0} },
	{0x5e, {0x0, 0x0, 0x0} },
	{0x5f, {0x0, 0x0, 0x0} },
	{0x60, {0x0, 0x0, 0x0} },
	{0x61, {0x0, 0x0, 0x0} },
	{0x62, {0x0, 0x0, 0x0} },
	{0x63, {0x0, 0x0, 0x0} },
	{0x64, {0x0, 0x0, 0x0} },
	{0x65, {0x0, 0x0, 0x0} },
	{0x66, {0x0, 0x0, 0x0} },
	{0x67, {0x0, 0x0, 0x0} },
	{0x68, {0x0, 0x0, 0x0} },
	{0x69, {0x0, 0x0, 0x0} },
	{0x6a, {0x0, 0x0, 0x0} },
	{0x6b, {0x0, 0x0, 0x0} },
	{0x6c, {0x0, 0x0, 0x0} },
	{0x6d, {0x0, 0x0, 0x0} },
	{0x6e, {0x0, 0x0, 0x0} },
	{0x6f, {0x0, 0x0, 0x0} },
	{0x70, {0x0, 0x0, 0x0} },
	{0x71, {0x0, 0x0, 0x0} },
	{0x72, {0x0, 0x0, 0x0} },
	{0x73, {0x0, 0x0, 0x0} },
	{0x74, {0x0, 0x0, 0x0} },
	{0x75, {0x0, 0x0, 0x0} },
	{0x76, {0x0, 0x0, 0x0} },
	{0x77, {0x0, 0x0, 0x0} },
	{0x78, {0x0, 0x0, 0x0} },
	{0x79, {0x0, 0x0, 0x0} },
	{0x7a, {0x0, 0x0, 0x0} },
	{0x7b, {0x0, 0x0, 0x0} },
	{0x7c, {0x0, 0x0, 0x0} },
	{0x7d, {0x0, 0x0, 0x0} },
	{0x7e, {0x0, 0x0, 0x0} },
	{0x7f, {0x0, 0x0, 0x0} },
	{0x80, {0x0, 0x0, 0x0} },
	{0x81, {0x0, 0x0, 0x0} },
	{0x82, {0x0, 0x0, 0x0} },
	{0x83, {0x0, 0x0, 0x0} },
	{0x84, {0x0, 0x0, 0x0} },
	{0x85, {0x0, 0x0, 0x0} },
	{0x86, {0x0, 0x0, 0x0} },
	{0x87, {0x0, 0x0, 0x0} },
	{0x88, {0x0, 0x0, 0x0} },
	{0x89, {0x0, 0x0, 0x0} },
	{0x8a, {0x0, 0x0, 0x0} },
	{0x8b, {0x0, 0x0, 0x0} },
	{0x8c, {0x0, 0x0, 0x0} },
	{0x8d, {0x0, 0x0, 0x0} },
	{0x8e, {0x0, 0x0, 0x0} },
	{0x8f, {0x0, 0x0, 0x0} },
	{0x90, {0x2002, 0x2002, 0x2002} },
	{0x91, {0x0, 0x0, 0x0} },
	{0x92, {0x1503, 0x1503, 0x1503} },
	{0x93, {0x50, 0x50, 0x50} },
	{0x94, {0x12, 0x12, 0x12} },
	{0x95, {0xf, 0xf, 0xf} },
	{0x96, {0x0, 0x0, 0x0} },
	{0x97, {0x0, 0x0, 0x0} },
	{0x98, {0x0, 0x0, 0x0} },
	{0x99, {0x0, 0x0, 0x0} },
	{0x9a, {0x1, 0x1, 0x1} },
	{0x9b, {0x1fff, 0x1fff, 0x1fff} },
	{0x9c, {0x1, 0x1, 0x1} },
	{0x9d, {0x0, 0x0, 0x0} },
	{0x9e, {0x0, 0x0, 0x0} },
	{0x9f, {0x0, 0x0, 0x0} },
	{0xa0, {0x0, 0x0, 0x0} },
	{0xa1, {0x7ff, 0x7ff, 0x7ff} },
	{0xa2, {0x0, 0x0, 0x0} },
	{0xa3, {0x7ff, 0x7ff, 0x7ff} },
	{0xa4, {0x254a, 0x254a, 0x254a} },
	{0xa5, {0x34e9, 0x34e9, 0x34e9} },
	{0xa6, {0xb6d, 0xb6d, 0xb6d} },
	{0xa7, {0x5d1, 0x5d1, 0x5d1} },
	{0xa8, {0x434, 0x434, 0x434} },
	{0xa9, {0x0, 0x0, 0x0} },
	{0xaa, {0x0, 0x0, 0x0} },
	{0xab, {0x0, 0x0, 0x0} },
	{0xac, {0x0, 0x0, 0x0} },
	{0xad, {0x0, 0x0, 0x0} },
	{0xae, {0x0, 0x0, 0x0} },
	{0xaf, {0x0, 0x0, 0x0} },
	{0xb0, {0x0, 0x0, 0x0} },
	{0xb1, {0x0, 0x0, 0x0} },
	{0xb2, {0x1, 0x1, 0x1} },
	{0xb3, {0x0, 0x0, 0x0} },
	{0xb4, {0x0, 0x0, 0x0} },
	{0xb5, {0x0, 0x0, 0x0} },
	{0xb6, {0x0, 0x0, 0x0} },
	{0xb7, {0x0, 0x0, 0x0} },
	{0xb8, {0x0, 0x0, 0x0} },
	{0xb9, {0x0, 0x0, 0x0} },
	{0xba, {0x0, 0x0, 0x0} },
	{0xbb, {0x0, 0x0, 0x0} },
	{0xbc, {0x0, 0x0, 0x0} },
	{0xbd, {0x0, 0x0, 0x0} },
	{0xbe, {0x1, 0x1, 0x1} },
	{0xbf, {0x0, 0x0, 0x0} },
	{0xc0, {0x0, 0x0, 0x0} },
	{0xc1, {0x0, 0x0, 0x0} },
	{0xc2, {0x0, 0x0, 0x0} },
	{0xc3, {0x0, 0x0, 0x0} },
	{0xc4, {0x0, 0x0, 0x0} },
	{0xc5, {0x0, 0x0, 0x0} },
	{0xc6, {0x0, 0x0, 0x0} },
	{0xc7, {0x0, 0x0, 0x0} },
	{0xc8, {0x0, 0x0, 0x0} },
	{0xc9, {0x0, 0x0, 0x0} },
	{0xca, {0x0, 0x0, 0x0} },
	{0xcb, {0x0, 0x0, 0x0} },
	{0xcc, {0x0, 0x0, 0x0} },
	{0xcd, {0x0, 0x0, 0x0} },
	{0xce, {0x0, 0x0, 0x0} },
	{0xcf, {0x0, 0x0, 0x0} },
	{0xd0, {0x1f, 0x1f, 0x1f} },
	{0xd1, {0x1f, 0x1f, 0x1f} },
	{0xd2, {0x1f, 0x1f, 0x1f} },
	{0xd3, {0x1f, 0x1f, 0x1f} },
	{0xd4, {0x1f, 0x1f, 0x1f} },
	{0xd5, {0x1f, 0x1f, 0x1f} },
	{0xd6, {0x1f, 0x1f, 0x1f} },
	{0xd7, {0x1f, 0x1f, 0x1f} },
	{0xd8, {0x1f, 0x1f, 0x1f} },
	{0xd9, {0x1f, 0x1f, 0x1f} },
	{0xda, {0x1f, 0x1f, 0x1f} },
	{0xdb, {0x1f, 0x1f, 0x1f} },
	{0xdc, {0x1f, 0x1f, 0x1f} },
	{0xdd, {0x1f, 0x1f, 0x1f} },
	{0xde, {0x1f, 0x1f, 0x1f} },
	{0xdf, {0x1f, 0x1f, 0x1f} },
	{0xe0, {0x1f, 0x1f, 0x1f} },
	{0xe1, {0x1f, 0x1f, 0x1f} },
	{0xe2, {0x1f, 0x1f, 0x1f} },
	{0xe3, {0x1f, 0x1f, 0x1f} },
	{0xe4, {0x1f, 0x1f, 0x1f} },
	{0xe5, {0x1f, 0x1f, 0x1f} },
	{0xe6, {0x1f, 0x1f, 0x1f} },
	{0xe7, {0x1f, 0x1f, 0x1f} },
	{0xe8, {0x1f, 0x1f, 0x1f} },
	{0xe9, {0x1f, 0x1f, 0x1f} },
	{0xea, {0x1f, 0x1f, 0x1f} },
	{0xeb, {0x1f, 0x1f, 0x1f} },
	{0xec, {0x1f, 0x1f, 0x1f} },
	{0xed, {0x1f, 0x1f, 0x1f} },
	{0xee, {0x1f, 0x1f, 0x1f} },
	{0xef, {0x1f, 0x1f, 0x1f} },
	{0xf0, {0x1f, 0x1f, 0x1f} },
	{0xf1, {0x1f, 0x1f, 0x1f} },
	{0xf2, {0x1f, 0x1f, 0x1f} },
	{0xf3, {0x1f, 0x1f, 0x1f} },
	{0xf4, {0x1f, 0x1f, 0x1f} },
	{0xf5, {0x1f, 0x1f, 0x1f} },
	{0xf6, {0x1f, 0x1f, 0x1f} },
	{0xf7, {0x1f, 0x1f, 0x1f} },
	{0xf8, {0x1f, 0x1f, 0x1f} },
	{0xf9, {0x1f, 0x1f, 0x1f} },
	{0xfa, {0x1f, 0x1f, 0x1f} },
	{0xfb, {0x1f, 0x1f, 0x1f} },
	{0xfc, {0x1f, 0x1f, 0x1f} },
	{0xfd, {0x1f, 0x1f, 0x1f} },
	{0xfe, {0x1f, 0x1f, 0x1f} },
	{0xff, {0x1f, 0x1f, 0x1f} },
	{0xffffffff, {0, 0, 0} }
};

static struct mv_ddr_subphys_reg_config a38x_ctrl_phy_800[] = {
	{0x0, {0x8, 0x8, 0x8} },
	{0x1, {0x0, 0x0, 0x0} },
	{0x2, {0x0, 0x0, 0x0} },
	{0x3, {0x10, 0x10, 0x10} },
	{0x4, {0x0, 0x0, 0x0} },
	{0x5, {0x10, 0x10, 0x10} },
	{0x6, {0x0, 0x0, 0x0} },
	{0x7, {0x10, 0x10, 0x10} },
	{0x8, {0x0, 0x0, 0x0} },
	{0x9, {0x10, 0x10, 0x10} },
	{0xa, {0x0, 0x0, 0x0} },
	{0xb, {0x10, 0x10, 0x10} },
	{0xc, {0x0, 0x0, 0x0} },
	{0xd, {0x10, 0x10, 0x10} },
	{0xe, {0x0, 0x0, 0x0} },
	{0xf, {0x10, 0x10, 0x10} },
	{0x10, {0x0, 0x0, 0x0} },
	{0x11, {0x0, 0x0, 0x0} },
	{0x12, {0x0, 0x0, 0x0} },
	{0x13, {0x0, 0x0, 0x0} },
	{0x14, {0x0, 0x0, 0x0} },
	{0x15, {0x0, 0x0, 0x0} },
	{0x16, {0x0, 0x0, 0x0} },
	{0x17, {0x0, 0x0, 0x0} },
	{0x18, {0x0, 0x0, 0x0} },
	{0x19, {0x0, 0x0, 0x0} },
	{0x1a, {0x0, 0x0, 0x0} },
	{0x1b, {0x0, 0x0, 0x0} },
	{0x1c, {0x0, 0x0, 0x0} },
	{0x1d, {0x0, 0x0, 0x0} },
	{0x1e, {0x0, 0x0, 0x0} },
	{0x1f, {0x0, 0x0, 0x0} },
	{0x20, {0x0, 0x0, 0x0} },
	{0x21, {0x0, 0x0, 0x0} },
	{0x22, {0x0, 0x0, 0x0} },
	{0x23, {0x0, 0x0, 0x0} },
	{0x24, {0x0, 0x0, 0x0} },
	{0x25, {0x0, 0x0, 0x0} },
	{0x26, {0x0, 0x0, 0x0} },
	{0x27, {0x0, 0x0, 0x0} },
	{0x28, {0x0, 0x0, 0x0} },
	{0x29, {0x0, 0x0, 0x0} },
	{0x2a, {0x0, 0x0, 0x0} },
	{0x2b, {0x0, 0x0, 0x0} },
	{0x2c, {0x0, 0x0, 0x0} },
	{0x2d, {0x0, 0x0, 0x0} },
	{0x2e, {0x0, 0x0, 0x0} },
	{0x2f, {0x0, 0x0, 0x0} },
	{0x30, {0x0, 0x0, 0x0} },
	{0x31, {0x0, 0x0, 0x0} },
	{0x32, {0x0, 0x0, 0x0} },
	{0x33, {0x0, 0x0, 0x0} },
	{0x34, {0x0, 0x0, 0x0} },
	{0x35, {0x0, 0x0, 0x0} },
	{0x36, {0x0, 0x0, 0x0} },
	{0x37, {0x0, 0x0, 0x0} },
	{0x38, {0x0, 0x0, 0x0} },
	{0x39, {0x0, 0x0, 0x0} },
	{0x3a, {0x0, 0x0, 0x0} },
	{0x3b, {0x0, 0x0, 0x0} },
	{0x3c, {0x0, 0x0, 0x0} },
	{0x3d, {0x0, 0x0, 0x0} },
	{0x3e, {0x0, 0x0, 0x0} },
	{0x3f, {0x0, 0x0, 0x0} },
	{0x40, {0x0, 0x0, 0x0} },
	{0x41, {0x0, 0x0, 0x0} },
	{0x42, {0x0, 0x0, 0x0} },
	{0x43, {0x0, 0x0, 0x0} },
	{0x44, {0x0, 0x0, 0x0} },
	{0x45, {0x0, 0x0, 0x0} },
	{0x46, {0x0, 0x0, 0x0} },
	{0x47, {0x0, 0x0, 0x0} },
	{0x48, {0x0, 0x0, 0x0} },
	{0x49, {0x0, 0x0, 0x0} },
	{0x4a, {0x0, 0x0, 0x0} },
	{0x4b, {0x0, 0x0, 0x0} },
	{0x4c, {0x0, 0x0, 0x0} },
	{0x4d, {0x0, 0x0, 0x0} },
	{0x4e, {0x0, 0x0, 0x0} },
	{0x4f, {0x0, 0x0, 0x0} },
	{0x50, {0x0, 0x0, 0x0} },
	{0x51, {0x0, 0x0, 0x0} },
	{0x52, {0x0, 0x0, 0x0} },
	{0x53, {0x0, 0x0, 0x0} },
	{0x54, {0x0, 0x0, 0x0} },
	{0x55, {0x0, 0x0, 0x0} },
	{0x56, {0x0, 0x0, 0x0} },
	{0x57, {0x0, 0x0, 0x0} },
	{0x58, {0x0, 0x0, 0x0} },
	{0x59, {0x0, 0x0, 0x0} },
	{0x5a, {0x0, 0x0, 0x0} },
	{0x5b, {0x0, 0x0, 0x0} },
	{0x5c, {0x0, 0x0, 0x0} },
	{0x5d, {0x0, 0x0, 0x0} },
	{0x5e, {0x0, 0x0, 0x0} },
	{0x5f, {0x0, 0x0, 0x0} },
	{0x60, {0x0, 0x0, 0x0} },
	{0x61, {0x0, 0x0, 0x0} },
	{0x62, {0x0, 0x0, 0x0} },
	{0x63, {0x0, 0x0, 0x0} },
	{0x64, {0x0, 0x0, 0x0} },
	{0x65, {0x0, 0x0, 0x0} },
	{0x66, {0x0, 0x0, 0x0} },
	{0x67, {0x0, 0x0, 0x0} },
	{0x68, {0x0, 0x0, 0x0} },
	{0x69, {0x0, 0x0, 0x0} },
	{0x6a, {0x0, 0x0, 0x0} },
	{0x6b, {0x0, 0x0, 0x0} },
	{0x6c, {0x0, 0x0, 0x0} },
	{0x6d, {0x0, 0x0, 0x0} },
	{0x6e, {0x0, 0x0, 0x0} },
	{0x6f, {0x0, 0x0, 0x0} },
	{0x70, {0x0, 0x0, 0x0} },
	{0x71, {0x0, 0x0, 0x0} },
	{0x72, {0x0, 0x0, 0x0} },
	{0x73, {0x0, 0x0, 0x0} },
	{0x74, {0x0, 0x0, 0x0} },
	{0x75, {0x0, 0x0, 0x0} },
	{0x76, {0x0, 0x0, 0x0} },
	{0x77, {0x0, 0x0, 0x0} },
	{0x78, {0x0, 0x0, 0x0} },
	{0x79, {0x0, 0x0, 0x0} },
	{0x7a, {0x0, 0x0, 0x0} },
	{0x7b, {0x0, 0x0, 0x0} },
	{0x7c, {0x0, 0x0, 0x0} },
	{0x7d, {0x0, 0x0, 0x0} },
	{0x7e, {0x0, 0x0, 0x0} },
	{0x7f, {0x0, 0x0, 0x0} },
	{0x80, {0x0, 0x0, 0x0} },
	{0x81, {0x0, 0x0, 0x0} },
	{0x82, {0x0, 0x0, 0x0} },
	{0x83, {0x0, 0x0, 0x0} },
	{0x84, {0x0, 0x0, 0x0} },
	{0x85, {0x0, 0x0, 0x0} },
	{0x86, {0x0, 0x0, 0x0} },
	{0x87, {0x0, 0x0, 0x0} },
	{0x88, {0x0, 0x0, 0x0} },
	{0x89, {0x0, 0x0, 0x0} },
	{0x8a, {0x0, 0x0, 0x0} },
	{0x8b, {0x0, 0x0, 0x0} },
	{0x8c, {0x0, 0x0, 0x0} },
	{0x8d, {0x0, 0x0, 0x0} },
	{0x8e, {0x0, 0x0, 0x0} },
	{0x8f, {0x0, 0x0, 0x0} },
	{0x90, {0x2002, 0x2002, 0x2002} },
	{0x91, {0x0, 0x0, 0x0} },
	{0x92, {0x1503, 0x1503, 0x1503} },
	{0x93, {0x50, 0x50, 0x50} },
	{0x94, {0x12, 0x12, 0x12} },
	{0x95, {0xf, 0xf, 0xf} },
	{0x96, {0x0, 0x0, 0x0} },
	{0x97, {0x0, 0x0, 0x0} },
	{0x98, {0x0, 0x0, 0x0} },
	{0x99, {0x0, 0x0, 0x0} },
	{0x9a, {0x1, 0x1, 0x1} },
	{0x9b, {0x1fff, 0x1fff, 0x1fff} },
	{0x9c, {0x1, 0x1, 0x1} },
	{0x9d, {0x0, 0x0, 0x0} },
	{0x9e, {0x0, 0x0, 0x0} },
	{0x9f, {0x0, 0x0, 0x0} },
	{0xa0, {0x0, 0x0, 0x0} },
	{0xa1, {0x7ff, 0x7ff, 0x7ff} },
	{0xa2, {0x0, 0x0, 0x0} },
	{0xa3, {0x7ff, 0x7ff, 0x7ff} },
	{0xa4, {0x254a, 0x254a, 0x254a} },
	{0xa5, {0x34e9, 0x34e9, 0x34e9} },
	{0xa6, {0xb6d, 0xb6d, 0xb6d} },
	{0xa7, {0x5d1, 0x5d1, 0x5d1} },
	{0xa8, {0x434, 0x434, 0x434} },
	{0xa9, {0x0, 0x0, 0x0} },
	{0xaa, {0x0, 0x0, 0x0} },
	{0xab, {0x0, 0x0, 0x0} },
	{0xac, {0x0, 0x0, 0x0} },
	{0xad, {0x0, 0x0, 0x0} },
	{0xae, {0x0, 0x0, 0x0} },
	{0xaf, {0x0, 0x0, 0x0} },
	{0xb0, {0x0, 0x0, 0x0} },
	{0xb1, {0x0, 0x0, 0x0} },
	{0xb2, {0x1, 0x1, 0x1} },
	{0xb3, {0x0, 0x0, 0x0} },
	{0xb4, {0x0, 0x0, 0x0} },
	{0xb5, {0x0, 0x0, 0x0} },
	{0xb6, {0x0, 0x0, 0x0} },
	{0xb7, {0x0, 0x0, 0x0} },
	{0xb8, {0x0, 0x0, 0x0} },
	{0xb9, {0x0, 0x0, 0x0} },
	{0xba, {0x0, 0x0, 0x0} },
	{0xbb, {0x0, 0x0, 0x0} },
	{0xbc, {0x0, 0x0, 0x0} },
	{0xbd, {0x0, 0x0, 0x0} },
	{0xbe, {0x1, 0x1, 0x1} },
	{0xbf, {0x0, 0x0, 0x0} },
	{0xc0, {0x0, 0x0, 0x0} },
	{0xc1, {0x0, 0x0, 0x0} },
	{0xc2, {0x0, 0x0, 0x0} },
	{0xc3, {0x0, 0x0, 0x0} },
	{0xc4, {0x0, 0x0, 0x0} },
	{0xc5, {0x0, 0x0, 0x0} },
	{0xc6, {0x0, 0x0, 0x0} },
	{0xc7, {0x0, 0x0, 0x0} },
	{0xc8, {0x0, 0x0, 0x0} },
	{0xc9, {0x0, 0x0, 0x0} },
	{0xca, {0x0, 0x0, 0x0} },
	{0xcb, {0x0, 0x0, 0x0} },
	{0xcc, {0x0, 0x0, 0x0} },
	{0xcd, {0x0, 0x0, 0x0} },
	{0xce, {0x0, 0x0, 0x0} },
	{0xcf, {0x0, 0x0, 0x0} },
	{0xd0, {0x1f, 0x1f, 0x1f} },
	{0xd1, {0x1f, 0x1f, 0x1f} },
	{0xd2, {0x1f, 0x1f, 0x1f} },
	{0xd3, {0x1f, 0x1f, 0x1f} },
	{0xd4, {0x1f, 0x1f, 0x1f} },
	{0xd5, {0x1f, 0x1f, 0x1f} },
	{0xd6, {0x1f, 0x1f, 0x1f} },
	{0xd7, {0x1f, 0x1f, 0x1f} },
	{0xd8, {0x1f, 0x1f, 0x1f} },
	{0xd9, {0x1f, 0x1f, 0x1f} },
	{0xda, {0x1f, 0x1f, 0x1f} },
	{0xdb, {0x1f, 0x1f, 0x1f} },
	{0xdc, {0x1f, 0x1f, 0x1f} },
	{0xdd, {0x1f, 0x1f, 0x1f} },
	{0xde, {0x1f, 0x1f, 0x1f} },
	{0xdf, {0x1f, 0x1f, 0x1f} },
	{0xe0, {0x1f, 0x1f, 0x1f} },
	{0xe1, {0x1f, 0x1f, 0x1f} },
	{0xe2, {0x1f, 0x1f, 0x1f} },
	{0xe3, {0x1f, 0x1f, 0x1f} },
	{0xe4, {0x1f, 0x1f, 0x1f} },
	{0xe5, {0x1f, 0x1f, 0x1f} },
	{0xe6, {0x1f, 0x1f, 0x1f} },
	{0xe7, {0x1f, 0x1f, 0x1f} },
	{0xe8, {0x1f, 0x1f, 0x1f} },
	{0xe9, {0x1f, 0x1f, 0x1f} },
	{0xea, {0x1f, 0x1f, 0x1f} },
	{0xeb, {0x1f, 0x1f, 0x1f} },
	{0xec, {0x1f, 0x1f, 0x1f} },
	{0xed, {0x1f, 0x1f, 0x1f} },
	{0xee, {0x1f, 0x1f, 0x1f} },
	{0xef, {0x1f, 0x1f, 0x1f} },
	{0xf0, {0x1f, 0x1f, 0x1f} },
	{0xf1, {0x1f, 0x1f, 0x1f} },
	{0xf2, {0x1f, 0x1f, 0x1f} },
	{0xf3, {0x1f, 0x1f, 0x1f} },
	{0xf4, {0x1f, 0x1f, 0x1f} },
	{0xf5, {0x1f, 0x1f, 0x1f} },
	{0xf6, {0x1f, 0x1f, 0x1f} },
	{0xf7, {0x1f, 0x1f, 0x1f} },
	{0xf8, {0x1f, 0x1f, 0x1f} },
	{0xf9, {0x1f, 0x1f, 0x1f} },
	{0xfa, {0x1f, 0x1f, 0x1f} },
	{0xfb, {0x1f, 0x1f, 0x1f} },
	{0xfc, {0x1f, 0x1f, 0x1f} },
	{0xfd, {0x1f, 0x1f, 0x1f} },
	{0xfe, {0x1f, 0x1f, 0x1f} },
	{0xff, {0x1f, 0x1f, 0x1f} },
	{0xffffffff, {0, 0, 0} }
};

static struct mv_ddr_subphys_reg_config a38x_data_phy_600[] = {
	{0x0, {0x4c0b, 0x2441, 0x6812, 0x4c0b} },
	{0x1, {0x15, 0xc, 0x1c, 0x14} },
	{0x2, {0xca, 0x107, 0x109, 0xd2} },
	{0x3, {0xd, 0xc, 0xc, 0xf} },
	{0x4, {0x4c0b, 0x2842, 0x6c13, 0x540d} },
	{0x5, {0x16, 0xc, 0x1c, 0x16} },
	{0x6, {0xca, 0x105, 0x10a, 0xd3} },
	{0x7, {0xd, 0xc, 0xe, 0x10} },
	{0x8, {0x0, 0x0, 0x0, 0x0} },
	{0x9, {0x10, 0x10, 0x10, 0x10} },
	{0xa, {0x0, 0x0, 0x0, 0x0} },
	{0xb, {0x10, 0x10, 0x10, 0x10} },
	{0xc, {0x0, 0x0, 0x0, 0x0} },
	{0xd, {0x10, 0x10, 0x10, 0x10} },
	{0xe, {0x0, 0x0, 0x0, 0x0} },
	{0xf, {0x10, 0x10, 0x10, 0x10} },
	{0x10, {0x6, 0x2, 0x3, 0x1} },
	{0x11, {0x5, 0x5, 0x0, 0x1} },
	{0x12, {0x2, 0x3, 0x6, 0x1} },
	{0x13, {0x3, 0x1, 0x5, 0x1} },
	{0x14, {0x3, 0x2, 0x6, 0x1} },
	{0x15, {0x3, 0x2, 0x6, 0x1} },
	{0x16, {0x4, 0x1, 0x7, 0x3} },
	{0x17, {0x5, 0x4, 0x4, 0x2} },
	{0x18, {0x3, 0x0, 0xd, 0x0} },
	{0x19, {0x0, 0x1, 0x7, 0x0} },
	{0x1a, {0x0, 0x0, 0x0, 0x0} },
	{0x1b, {0x0, 0x0, 0x0, 0x0} },
	{0x1c, {0x0, 0x0, 0x0, 0x0} },
	{0x1d, {0x0, 0x0, 0x0, 0x0} },
	{0x1e, {0x0, 0x0, 0x0, 0x0} },
	{0x1f, {0x10, 0x10, 0x10, 0x10} },
	{0x20, {0x2, 0x2, 0x6, 0x5} },
	{0x21, {0x3, 0x4, 0x0, 0x3} },
	{0x22, {0x3, 0x3, 0x7, 0x4} },
	{0x23, {0x1, 0x4, 0x5, 0x7} },
	{0x24, {0x3, 0x2, 0x4, 0x3} },
	{0x25, {0x3, 0x2, 0x4, 0x3} },
	{0x26, {0x4, 0x5, 0x7, 0x5} },
	{0x27, {0x6, 0x4, 0x4, 0x7} },
	{0x28, {0x1, 0x0, 0x9, 0x0} },
	{0x29, {0x0, 0x4, 0x9, 0x5} },
	{0x2a, {0x0, 0x0, 0x0, 0x0} },
	{0x2b, {0x0, 0x0, 0x0, 0x0} },
	{0x2c, {0x0, 0x0, 0x0, 0x0} },
	{0x2d, {0x0, 0x0, 0x0, 0x0} },
	{0x2e, {0x0, 0x0, 0x0, 0x0} },
	{0x2f, {0xc, 0xc, 0xc, 0xc} },
	{0x30, {0x0, 0x0, 0x0, 0x0} },
	{0x31, {0x0, 0x0, 0x0, 0x0} },
	{0x32, {0x0, 0x0, 0x0, 0x0} },
	{0x33, {0x0, 0x0, 0x0, 0x0} },
	{0x34, {0x0, 0x0, 0x0, 0x0} },
	{0x35, {0x0, 0x0, 0x0, 0x0} },
	{0x36, {0x0, 0x0, 0x0, 0x0} },
	{0x37, {0x0, 0x0, 0x0, 0x0} },
	{0x38, {0x0, 0x0, 0x0, 0x0} },
	{0x39, {0x0, 0x0, 0x0, 0x0} },
	{0x3a, {0x0, 0x0, 0x0, 0x0} },
	{0x3b, {0x0, 0x0, 0x0, 0x0} },
	{0x3c, {0x0, 0x0, 0x0, 0x0} },
	{0x3d, {0x0, 0x0, 0x0, 0x0} },
	{0x3e, {0x0, 0x0, 0x0, 0x0} },
	{0x3f, {0x0, 0x0, 0x0, 0x0} },
	{0x40, {0x0, 0x0, 0x0, 0x0} },
	{0x41, {0x0, 0x0, 0x0, 0x0} },
	{0x42, {0x0, 0x0, 0x0, 0x0} },
	{0x43, {0x0, 0x0, 0x0, 0x0} },
	{0x44, {0x0, 0x0, 0x0, 0x0} },
	{0x45, {0x0, 0x0, 0x0, 0x0} },
	{0x46, {0x0, 0x0, 0x0, 0x0} },
	{0x47, {0x0, 0x0, 0x0, 0x0} },
	{0x48, {0x0, 0x0, 0x0, 0x0} },
	{0x49, {0x0, 0x0, 0x0, 0x0} },
	{0x4a, {0x0, 0x0, 0x0, 0x0} },
	{0x4b, {0x0, 0x0, 0x0, 0x0} },
	{0x4c, {0x0, 0x0, 0x0, 0x0} },
	{0x4d, {0x0, 0x0, 0x0, 0x0} },
	{0x4e, {0x0, 0x0, 0x0, 0x0} },
	{0x4f, {0x0, 0x0, 0x0, 0x0} },
	{0x50, {0xc, 0xe, 0xc, 0xb} },
	{0x51, {0xc, 0x12, 0xa, 0xb} },
	{0x52, {0xb, 0xe, 0x10, 0xb} },
	{0x53, {0xc, 0xe, 0xc, 0xb} },
	{0x54, {0x4, 0x4, 0x4, 0x1} },
	{0x55, {0x4, 0x4, 0x4, 0x1} },
	{0x56, {0xc, 0xd, 0xd, 0xa} },
	{0x57, {0xc, 0xd, 0xb, 0xd} },
	{0x58, {0x12, 0xa, 0x12, 0xa} },
	{0x59, {0xa, 0xf, 0x10, 0xd} },
	{0x5a, {0x0, 0x0, 0x0, 0x0} },
	{0x5b, {0x0, 0x0, 0x0, 0x0} },
	{0x5c, {0x0, 0x0, 0x0, 0x0} },
	{0x5d, {0x0, 0x0, 0x0, 0x0} },
	{0x5e, {0x0, 0x0, 0x0, 0x0} },
	{0x5f, {0xc, 0xc, 0xc, 0xc} },
	{0x60, {0xb, 0xe, 0x10, 0x13} },
	{0x61, {0xc, 0xe, 0xa, 0xd} },
	{0x62, {0xc, 0xc, 0x10, 0x10} },
	{0x63, {0xd, 0xf, 0xe, 0xf} },
	{0x64, {0x2, 0x3, 0x9, 0x4} },
	{0x65, {0x2, 0x3, 0x9, 0x4} },
	{0x66, {0xe, 0xd, 0x10, 0xc} },
	{0x67, {0xc, 0x11, 0xe, 0x12} },
	{0x68, {0xc, 0xa, 0x14, 0xa} },
	{0x69, {0xa, 0xc, 0x1c, 0xc} },
	{0x6a, {0x0, 0x0, 0x0, 0x0} },
	{0x6b, {0x0, 0x0, 0x0, 0x0} },
	{0x6c, {0x0, 0x0, 0x0, 0x0} },
	{0x6d, {0x0, 0x0, 0x0, 0x0} },
	{0x6e, {0x0, 0x0, 0x0, 0x0} },
	{0x6f, {0x17, 0x17, 0x17, 0x17} },
	{0x70, {0x0, 0x0, 0x0, 0x0} },
	{0x71, {0x0, 0x0, 0x0, 0x0} },
	{0x72, {0x0, 0x0, 0x0, 0x0} },
	{0x73, {0x0, 0x0, 0x0, 0x0} },
	{0x74, {0x0, 0x0, 0x0, 0x0} },
	{0x75, {0x0, 0x0, 0x0, 0x0} },
	{0x76, {0x0, 0x0, 0x0, 0x0} },
	{0x77, {0x0, 0x0, 0x0, 0x0} },
	{0x78, {0x0, 0x0, 0x0, 0x0} },
	{0x79, {0x0, 0x0, 0x0, 0x0} },
	{0x7a, {0x0, 0x0, 0x0, 0x0} },
	{0x7b, {0x0, 0x0, 0x0, 0x0} },
	{0x7c, {0x0, 0x0, 0x0, 0x0} },
	{0x7d, {0x0, 0x0, 0x0, 0x0} },
	{0x7e, {0x0, 0x0, 0x0, 0x0} },
	{0x7f, {0x0, 0x0, 0x0, 0x0} },
	{0x80, {0x0, 0x0, 0x0, 0x0} },
	{0x81, {0x0, 0x0, 0x0, 0x0} },
	{0x82, {0x0, 0x0, 0x0, 0x0} },
	{0x83, {0x0, 0x0, 0x0, 0x0} },
	{0x84, {0x0, 0x0, 0x0, 0x0} },
	{0x85, {0x0, 0x0, 0x0, 0x0} },
	{0x86, {0x0, 0x0, 0x0, 0x0} },
	{0x87, {0x0, 0x0, 0x0, 0x0} },
	{0x88, {0x0, 0x0, 0x0, 0x0} },
	{0x89, {0x0, 0x0, 0x0, 0x0} },
	{0x8a, {0x0, 0x0, 0x0, 0x0} },
	{0x8b, {0x0, 0x0, 0x0, 0x0} },
	{0x8c, {0x0, 0x0, 0x0, 0x0} },
	{0x8d, {0x0, 0x0, 0x0, 0x0} },
	{0x8e, {0x0, 0x0, 0x0, 0x0} },
	{0x8f, {0x0, 0x0, 0x0, 0x0} },
	{0x90, {0x6002, 0x6002, 0x6002, 0x6002} },
	{0x91, {0x0, 0x0, 0x0, 0x0} },
	{0x92, {0x1503, 0x1503, 0x1503, 0x1503} },
	{0x93, {0x50, 0x50, 0x50, 0x50} },
	{0x94, {0x12, 0x12, 0x12, 0x12} },
	{0x95, {0xf, 0xf, 0xf, 0xf} },
	{0x96, {0x0, 0x0, 0x0, 0x0} },
	{0x97, {0x0, 0x0, 0x0, 0x0} },
	{0x98, {0x0, 0x0, 0x0, 0x0} },
	{0x99, {0x0, 0x0, 0x0, 0x0} },
	{0x9a, {0x1, 0x1, 0x1, 0x1} },
	{0x9b, {0x1fff, 0x1fff, 0x1fff, 0x1fff} },
	{0x9c, {0x1, 0x1, 0x1, 0x1} },
	{0x9d, {0x0, 0x0, 0x0, 0x0} },
	{0x9e, {0x0, 0x0, 0x0, 0x0} },
	{0x9f, {0x0, 0x0, 0x0, 0x0} },
	{0xa0, {0x0, 0x0, 0x0, 0x0} },
	{0xa1, {0x7ff, 0x7ff, 0x7ff, 0x7ff} },
	{0xa2, {0x0, 0x0, 0x0, 0x0} },
	{0xa3, {0x7ff, 0x7ff, 0x7ff, 0x7ff} },
	{0xa4, {0x3dfb, 0x3dfb, 0x3dfb, 0x3dfb} },
	{0xa5, {0x34e9, 0x34e9, 0x34e9, 0x34e9} },
	{0xa6, {0xb6d, 0xb6d, 0xb6d, 0xb6d} },
	{0xa7, {0x5d1, 0x5d1, 0x5d1, 0x5d1} },
	{0xa8, {0x434, 0x434, 0x434, 0x434} },
	{0xa9, {0x0, 0x0, 0x0, 0x0} },
	{0xaa, {0x0, 0x0, 0x0, 0x0} },
	{0xab, {0x0, 0x0, 0x0, 0x0} },
	{0xac, {0x0, 0x0, 0x0, 0x0} },
	{0xad, {0x0, 0x0, 0x0, 0x0} },
	{0xae, {0x0, 0x0, 0x0, 0x0} },
	{0xaf, {0x0, 0x0, 0x0, 0x0} },
	{0xb0, {0x0, 0x0, 0x0, 0x0} },
	{0xb1, {0x0, 0x0, 0x0, 0x0} },
	{0xb2, {0x1, 0x1, 0x1, 0x1} },
	{0xb3, {0x0, 0x0, 0x0, 0x0} },
	{0xb4, {0x0, 0x0, 0x0, 0x0} },
	{0xb5, {0x0, 0x0, 0x0, 0x0} },
	{0xb6, {0x0, 0x0, 0x0, 0x0} },
	{0xb7, {0x0, 0x0, 0x0, 0x0} },
	{0xb8, {0x0, 0x0, 0x0, 0x0} },
	{0xb9, {0x0, 0x0, 0x0, 0x0} },
	{0xba, {0x0, 0x0, 0x0, 0x0} },
	{0xbb, {0x0, 0x0, 0x0, 0x0} },
	{0xbc, {0x0, 0x0, 0x0, 0x0} },
	{0xbd, {0x0, 0x0, 0x0, 0x0} },
	{0xbe, {0x1, 0x1, 0x1, 0x1} },
	{0xbf, {0x0, 0x0, 0x0, 0x0} },
	{0xc0, {0x39c, 0x33a, 0x33c, 0x35b} },
	{0xc1, {0x39b, 0x33a, 0x2fc, 0x35b} },
	{0xc2, {0x0, 0x0, 0x0, 0x0} },
	{0xc3, {0x0, 0x0, 0x0, 0x0} },
	{0xc4, {0x0, 0x0, 0x0, 0x0} },
	{0xc5, {0x0, 0x0, 0x0, 0x0} },
	{0xc6, {0x0, 0x0, 0x0, 0x0} },
	{0xc7, {0x0, 0x0, 0x0, 0x0} },
	{0xc8, {0x0, 0x0, 0x0, 0x0} },
	{0xc9, {0x0, 0x0, 0x0, 0x0} },
	{0xca, {0x0, 0x0, 0x0, 0x0} },
	{0xcb, {0x0, 0x0, 0x0, 0x0} },
	{0xcc, {0x0, 0x0, 0x0, 0x0} },
	{0xcd, {0x0, 0x0, 0x0, 0x0} },
	{0xce, {0x0, 0x0, 0x0, 0x0} },
	{0xcf, {0x0, 0x0, 0x0, 0x0} },
	{0xd0, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xd1, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xd2, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xd3, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xd4, {0x1f, 0x1f, 0x1f, 0x1f} },
	{0xd5, {0x1f, 0x1f, 0x1f, 0x1f} },
	{0xd6, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xd7, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xd8, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xd9, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xda, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xdb, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xdc, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xdd, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xde, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xdf, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xe0, {0x1f, 0x1f, 0x1f, 0x1f} },
	{0xe1, {0x1f, 0x1f, 0x1f, 0x1f} },
	{0xe2, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xe3, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xe4, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xe5, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xe6, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xe7, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xe8, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xe9, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xea, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xeb, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xec, {0x1f, 0x1f, 0x1f, 0x1f} },
	{0xed, {0x1f, 0x1f, 0x1f, 0x1f} },
	{0xee, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xef, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xf0, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xf1, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xf2, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xf3, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xf4, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xf5, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xf6, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xf7, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xf8, {0x1f, 0x1f, 0x1f, 0x1f} },
	{0xf9, {0x1f, 0x1f, 0x1f, 0x1f} },
	{0xfa, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xfb, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xfc, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xfd, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xfe, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xff, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xffffffff, {0, 0, 0, 0} }
};

static struct mv_ddr_subphys_reg_config a38x_data_phy_800[] = {
	{0x0, {0x6411, 0x544d, 0x7c17, 0x6010} },
	{0x1, {0x19, 0x16, 0x1f, 0x17} },
	{0x2, {0xc, 0x51, 0x57, 0x1d} },
	{0x3, {0xf, 0xc, 0xa, 0xd} },
	{0x4, {0x6010, 0x544d, 0x8018, 0x6010} },
	{0x5, {0x18, 0x15, 0x1f, 0x17} },
	{0x6, {0xd, 0x52, 0x58, 0x1d} },
	{0x7, {0x10, 0xb, 0xb, 0xe} },
	{0x8, {0x0, 0x0, 0x0, 0x0} },
	{0x9, {0x10, 0x10, 0x10, 0x10} },
	{0xa, {0x0, 0x0, 0x0, 0x0} },
	{0xb, {0x10, 0x10, 0x10, 0x10} },
	{0xc, {0x0, 0x0, 0x0, 0x0} },
	{0xd, {0x10, 0x10, 0x10, 0x10} },
	{0xe, {0x0, 0x0, 0x0, 0x0} },
	{0xf, {0x10, 0x10, 0x10, 0x10} },
	{0x10, {0x6, 0x1, 0x3, 0x2} },
	{0x11, {0x4, 0x4, 0x0, 0x1} },
	{0x12, {0x2, 0x2, 0x7, 0x2} },
	{0x13, {0x3, 0x0, 0x5, 0x2} },
	{0x14, {0x3, 0x2, 0x6, 0x2} },
	{0x15, {0x3, 0x2, 0x6, 0x2} },
	{0x16, {0x4, 0x1, 0x7, 0x4} },
	{0x17, {0x4, 0x3, 0x5, 0x3} },
	{0x18, {0x2, 0x1, 0xd, 0x1} },
	{0x19, {0x0, 0x0, 0x8, 0x0} },
	{0x1a, {0x0, 0x0, 0x0, 0x0} },
	{0x1b, {0x0, 0x0, 0x0, 0x0} },
	{0x1c, {0x0, 0x0, 0x0, 0x0} },
	{0x1d, {0x0, 0x0, 0x0, 0x0} },
	{0x1e, {0x0, 0x0, 0x0, 0x0} },
	{0x1f, {0xe, 0xe, 0xe, 0xe} },
	{0x20, {0x2, 0x1, 0x7, 0x6} },
	{0x21, {0x3, 0x3, 0x0, 0x2} },
	{0x22, {0x4, 0x2, 0x8, 0x4} },
	{0x23, {0x2, 0x3, 0x5, 0x7} },
	{0x24, {0x3, 0x2, 0x5, 0x3} },
	{0x25, {0x3, 0x2, 0x5, 0x3} },
	{0x26, {0x5, 0x4, 0x8, 0x5} },
	{0x27, {0x6, 0x3, 0x5, 0x7} },
	{0x28, {0x2, 0x0, 0xa, 0x0} },
	{0x29, {0x0, 0x3, 0xa, 0x5} },
	{0x2a, {0x0, 0x0, 0x0, 0x0} },
	{0x2b, {0x0, 0x0, 0x0, 0x0} },
	{0x2c, {0x0, 0x0, 0x0, 0x0} },
	{0x2d, {0x0, 0x0, 0x0, 0x0} },
	{0x2e, {0x0, 0x0, 0x0, 0x0} },
	{0x2f, {0xf, 0xf, 0xf, 0xf} },
	{0x30, {0x0, 0x0, 0x0, 0x0} },
	{0x31, {0x0, 0x0, 0x0, 0x0} },
	{0x32, {0x0, 0x0, 0x0, 0x0} },
	{0x33, {0x0, 0x0, 0x0, 0x0} },
	{0x34, {0x0, 0x0, 0x0, 0x0} },
	{0x35, {0x0, 0x0, 0x0, 0x0} },
	{0x36, {0x0, 0x0, 0x0, 0x0} },
	{0x37, {0x0, 0x0, 0x0, 0x0} },
	{0x38, {0x0, 0x0, 0x0, 0x0} },
	{0x39, {0x0, 0x0, 0x0, 0x0} },
	{0x3a, {0x0, 0x0, 0x0, 0x0} },
	{0x3b, {0x0, 0x0, 0x0, 0x0} },
	{0x3c, {0x0, 0x0, 0x0, 0x0} },
	{0x3d, {0x0, 0x0, 0x0, 0x0} },
	{0x3e, {0x0, 0x0, 0x0, 0x0} },
	{0x3f, {0x0, 0x0, 0x0, 0x0} },
	{0x40, {0x0, 0x0, 0x0, 0x0} },
	{0x41, {0x0, 0x0, 0x0, 0x0} },
	{0x42, {0x0, 0x0, 0x0, 0x0} },
	{0x43, {0x0, 0x0, 0x0, 0x0} },
	{0x44, {0x0, 0x0, 0x0, 0x0} },
	{0x45, {0x0, 0x0, 0x0, 0x0} },
	{0x46, {0x0, 0x0, 0x0, 0x0} },
	{0x47, {0x0, 0x0, 0x0, 0x0} },
	{0x48, {0x0, 0x0, 0x0, 0x0} },
	{0x49, {0x0, 0x0, 0x0, 0x0} },
	{0x4a, {0x0, 0x0, 0x0, 0x0} },
	{0x4b, {0x0, 0x0, 0x0, 0x0} },
	{0x4c, {0x0, 0x0, 0x0, 0x0} },
	{0x4d, {0x0, 0x0, 0x0, 0x0} },
	{0x4e, {0x0, 0x0, 0x0, 0x0} },
	{0x4f, {0x0, 0x0, 0x0, 0x0} },
	{0x50, {0xd, 0xf, 0xc, 0xe} },
	{0x51, {0xd, 0xf, 0xa, 0xe} },
	{0x52, {0xb, 0xd, 0xd, 0xe} },
	{0x53, {0xc, 0x11, 0xc, 0xe} },
	{0x54, {0x2, 0x3, 0x3, 0x2} },
	{0x55, {0x2, 0x3, 0x3, 0x2} },
	{0x56, {0xc, 0xd, 0xd, 0xb} },
	{0x57, {0xd, 0xf, 0xb, 0xf} },
	{0x58, {0xe, 0xa, 0x10, 0xa} },
	{0x59, {0xa, 0xf, 0x10, 0xe} },
	{0x5a, {0x0, 0x0, 0x0, 0x0} },
	{0x5b, {0x0, 0x0, 0x0, 0x0} },
	{0x5c, {0x0, 0x0, 0x0, 0x0} },
	{0x5d, {0x0, 0x0, 0x0, 0x0} },
	{0x5e, {0x0, 0x0, 0x0, 0x0} },
	{0x5f, {0x9, 0x9, 0x9, 0x9} },
	{0x60, {0xd, 0xb, 0xf, 0x13} },
	{0x61, {0xe, 0xb, 0xa, 0xf} },
	{0x62, {0xe, 0xc, 0xf, 0x10} },
	{0x63, {0x10, 0xd, 0xd, 0x10} },
	{0x64, {0x3, 0x2, 0x6, 0x4} },
	{0x65, {0x3, 0x2, 0x6, 0x4} },
	{0x66, {0x10, 0xb, 0xf, 0xe} },
	{0x67, {0x10, 0xe, 0xe, 0x11} },
	{0x68, {0xe, 0xa, 0x12, 0xa} },
	{0x69, {0xa, 0xb, 0x17, 0xe} },
	{0x6a, {0x0, 0x0, 0x0, 0x0} },
	{0x6b, {0x0, 0x0, 0x0, 0x0} },
	{0x6c, {0x0, 0x0, 0x0, 0x0} },
	{0x6d, {0x0, 0x0, 0x0, 0x0} },
	{0x6e, {0x0, 0x0, 0x0, 0x0} },
	{0x6f, {0xe, 0xe, 0xe, 0xe} },
	{0x70, {0x0, 0x0, 0x0, 0x0} },
	{0x71, {0x0, 0x0, 0x0, 0x0} },
	{0x72, {0x0, 0x0, 0x0, 0x0} },
	{0x73, {0x0, 0x0, 0x0, 0x0} },
	{0x74, {0x0, 0x0, 0x0, 0x0} },
	{0x75, {0x0, 0x0, 0x0, 0x0} },
	{0x76, {0x0, 0x0, 0x0, 0x0} },
	{0x77, {0x0, 0x0, 0x0, 0x0} },
	{0x78, {0x0, 0x0, 0x0, 0x0} },
	{0x79, {0x0, 0x0, 0x0, 0x0} },
	{0x7a, {0x0, 0x0, 0x0, 0x0} },
	{0x7b, {0x0, 0x0, 0x0, 0x0} },
	{0x7c, {0x0, 0x0, 0x0, 0x0} },
	{0x7d, {0x0, 0x0, 0x0, 0x0} },
	{0x7e, {0x0, 0x0, 0x0, 0x0} },
	{0x7f, {0x0, 0x0, 0x0, 0x0} },
	{0x80, {0x0, 0x0, 0x0, 0x0} },
	{0x81, {0x0, 0x0, 0x0, 0x0} },
	{0x82, {0x0, 0x0, 0x0, 0x0} },
	{0x83, {0x0, 0x0, 0x0, 0x0} },
	{0x84, {0x0, 0x0, 0x0, 0x0} },
	{0x85, {0x0, 0x0, 0x0, 0x0} },
	{0x86, {0x0, 0x0, 0x0, 0x0} },
	{0x87, {0x0, 0x0, 0x0, 0x0} },
	{0x88, {0x0, 0x0, 0x0, 0x0} },
	{0x89, {0x0, 0x0, 0x0, 0x0} },
	{0x8a, {0x0, 0x0, 0x0, 0x0} },
	{0x8b, {0x0, 0x0, 0x0, 0x0} },
	{0x8c, {0x0, 0x0, 0x0, 0x0} },
	{0x8d, {0x0, 0x0, 0x0, 0x0} },
	{0x8e, {0x0, 0x0, 0x0, 0x0} },
	{0x8f, {0x0, 0x0, 0x0, 0x0} },
	{0x90, {0x6002, 0x6002, 0x6002, 0x6002} },
	{0x91, {0x0, 0x0, 0x0, 0x0} },
	{0x92, {0x1503, 0x1503, 0x1503, 0x1503} },
	{0x93, {0x50, 0x50, 0x50, 0x50} },
	{0x94, {0x12, 0x12, 0x12, 0x12} },
	{0x95, {0xf, 0xf, 0xf, 0xf} },
	{0x96, {0x0, 0x0, 0x0, 0x0} },
	{0x97, {0x0, 0x0, 0x0, 0x0} },
	{0x98, {0x0, 0x0, 0x0, 0x0} },
	{0x99, {0x0, 0x0, 0x0, 0x0} },
	{0x9a, {0x1, 0x1, 0x1, 0x1} },
	{0x9b, {0x1fff, 0x1fff, 0x1fff, 0x1fff} },
	{0x9c, {0x1, 0x1, 0x1, 0x1} },
	{0x9d, {0x0, 0x0, 0x0, 0x0} },
	{0x9e, {0x0, 0x0, 0x0, 0x0} },
	{0x9f, {0x0, 0x0, 0x0, 0x0} },
	{0xa0, {0x0, 0x0, 0x0, 0x0} },
	{0xa1, {0x7ff, 0x7ff, 0x7ff, 0x7ff} },
	{0xa2, {0x0, 0x0, 0x0, 0x0} },
	{0xa3, {0x7ff, 0x7ff, 0x7ff, 0x7ff} },
	{0xa4, {0x3dfb, 0x3dfb, 0x3dfb, 0x3dfb} },
	{0xa5, {0x34e9, 0x34e9, 0x34e9, 0x34e9} },
	{0xa6, {0xb6d, 0xb6d, 0xb6d, 0xb6d} },
	{0xa7, {0x5d1, 0x5d1, 0x5d1, 0x5d1} },
	{0xa8, {0x434, 0x434, 0x434, 0x434} },
	{0xa9, {0x0, 0x0, 0x0, 0x0} },
	{0xaa, {0x0, 0x0, 0x0, 0x0} },
	{0xab, {0x0, 0x0, 0x0, 0x0} },
	{0xac, {0x0, 0x0, 0x0, 0x0} },
	{0xad, {0x0, 0x0, 0x0, 0x0} },
	{0xae, {0x0, 0x0, 0x0, 0x0} },
	{0xaf, {0x0, 0x0, 0x0, 0x0} },
	{0xb0, {0x0, 0x0, 0x0, 0x0} },
	{0xb1, {0x0, 0x0, 0x0, 0x0} },
	{0xb2, {0x1, 0x1, 0x1, 0x1} },
	{0xb3, {0x0, 0x0, 0x0, 0x0} },
	{0xb4, {0x0, 0x0, 0x0, 0x0} },
	{0xb5, {0x0, 0x0, 0x0, 0x0} },
	{0xb6, {0x0, 0x0, 0x0, 0x0} },
	{0xb7, {0x0, 0x0, 0x0, 0x0} },
	{0xb8, {0x0, 0x0, 0x0, 0x0} },
	{0xb9, {0x0, 0x0, 0x0, 0x0} },
	{0xba, {0x0, 0x0, 0x0, 0x0} },
	{0xbb, {0x0, 0x0, 0x0, 0x0} },
	{0xbc, {0x0, 0x0, 0x0, 0x0} },
	{0xbd, {0x0, 0x0, 0x0, 0x0} },
	{0xbe, {0x1, 0x1, 0x1, 0x1} },
	{0xbf, {0x0, 0x0, 0x0, 0x0} },
	{0xc0, {0x33a, 0x2ba, 0x2ba, 0x339} },
	{0xc1, {0x2f8, 0x2bb, 0x2db, 0x339} },
	{0xc2, {0x0, 0x0, 0x0, 0x0} },
	{0xc3, {0x0, 0x0, 0x0, 0x0} },
	{0xc4, {0x0, 0x0, 0x0, 0x0} },
	{0xc5, {0x0, 0x0, 0x0, 0x0} },
	{0xc6, {0x0, 0x0, 0x0, 0x0} },
	{0xc7, {0x0, 0x0, 0x0, 0x0} },
	{0xc8, {0x0, 0x0, 0x0, 0x0} },
	{0xc9, {0x0, 0x0, 0x0, 0x0} },
	{0xca, {0x0, 0x0, 0x0, 0x0} },
	{0xcb, {0x0, 0x0, 0x0, 0x0} },
	{0xcc, {0x0, 0x0, 0x0, 0x0} },
	{0xcd, {0x0, 0x0, 0x0, 0x0} },
	{0xce, {0x0, 0x0, 0x0, 0x0} },
	{0xcf, {0x0, 0x0, 0x0, 0x0} },
	{0xd0, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xd1, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xd2, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xd3, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xd4, {0x1f, 0x1f, 0x1f, 0x1f} },
	{0xd5, {0x1f, 0x1f, 0x1f, 0x1f} },
	{0xd6, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xd7, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xd8, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xd9, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xda, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xdb, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xdc, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xdd, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xde, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xdf, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xe0, {0x1f, 0x1f, 0x1f, 0x1f} },
	{0xe1, {0x1f, 0x1f, 0x1f, 0x1f} },
	{0xe2, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xe3, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xe4, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xe5, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xe6, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xe7, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xe8, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xe9, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xea, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xeb, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xec, {0x1f, 0x1f, 0x1f, 0x1f} },
	{0xed, {0x1f, 0x1f, 0x1f, 0x1f} },
	{0xee, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xef, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xf0, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xf1, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xf2, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xf3, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xf4, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xf5, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xf6, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xf7, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xf8, {0x1f, 0x1f, 0x1f, 0x1f} },
	{0xf9, {0x1f, 0x1f, 0x1f, 0x1f} },
	{0xfa, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xfb, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xfc, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xfd, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xfe, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xff, {0x3f, 0x3f, 0x3f, 0x3f} },
	{0xffffffff, {0, 0, 0, 0} }
};
#endif /* CONFIG_PHY_STATIC */

#if defined(CONFIG_PHY_STATIC) || defined(CONFIG_MC_STATIC)
struct dram_modes {
	char *mode_name;
	u8 cpu_freq;
	struct reg_data *mc_regs;
	struct mv_ddr_subphys_reg_config *ctrl_phy_regs;
	struct mv_ddr_subphys_reg_config *data_phy_regs;
};

static struct dram_modes ddr_modes[] = {
	/* Conf name, DDR Frequency, MC regs, PHY cntrl, PHY data */
#if !defined(CONFIG_DDR4)
	{"a38x_600", MV_DDR_FREQ_600, a38x_mc_600, a38x_ctrl_phy_600, a38x_data_phy_600},
#endif
	{"a38x_800", MV_DDR_FREQ_800, a38x_mc_800, a38x_ctrl_phy_800, a38x_data_phy_800},
	{"", MV_DDR_FREQ_LAST, NULL, NULL, NULL}
};

/*
 * init memory controller with static parameters
 * with no hw training procedure by providing with
 * header file including appropriate registers data
 */
u32 ddr3_get_static_ddr_mode(void)
{
	u32 i;

	for (i = 0; ddr_modes[i].mc_regs != NULL; i++) {
		if (mv_ddr_init_freq_get() == ddr_modes[i].cpu_freq)
			return i;
	}

	printf("\n*** Error: ddr3_get_static_ddr_mode: No match for requested DDR mode. ***\n\n");

	return 0;
}
#endif /* CONFIG_PHY_STATIC || CONFIG_MC_STATIC */

#ifdef CONFIG_MC_STATIC
int mv_ddr_mc_static_config(void)
{
	u32 mode, i = 0;

	mode = ddr3_get_static_ddr_mode();
	while (ddr_modes[mode].mc_regs[i].reg_addr != 0xffffffff) {
		ddr3_tip_if_write(0, ACCESS_TYPE_MULTICAST, PARAM_NOT_CARE,
				  ddr_modes[mode].mc_regs[i].reg_addr,
				  ddr_modes[mode].mc_regs[i].reg_data,
				  ddr_modes[mode].mc_regs[i].reg_mask);
		i++;
	}

	return MV_OK;
}
#endif /* CONFIG_MC_STATIC */

#ifdef CONFIG_PHY_STATIC
static int mv_ddr_a38x_phy_static_config(u32 if_id, u32 subphys_num, enum hws_ddr_phy subphy_type)
{
	u32 i, mode, subphy_id, dev_num = 0;

	mode = ddr3_get_static_ddr_mode();
	if (subphy_type == DDR_PHY_DATA) {
		for (subphy_id = 0; subphy_id < subphys_num; subphy_id++) {
			i = 0;
			while (ddr_modes[mode].data_phy_regs[i].reg_addr != 0xffffffff) {
				ddr3_tip_bus_write(dev_num, ACCESS_TYPE_UNICAST, if_id, ACCESS_TYPE_UNICAST,
							subphy_id, subphy_type,
							ddr_modes[mode].data_phy_regs[i].reg_addr,
							ddr_modes[mode].data_phy_regs[i].reg_data[subphy_id]);
				i++;
			}
		}
	} else {
		for (subphy_id = 0; subphy_id < subphys_num; subphy_id++) {
			i = 0;
			while (ddr_modes[mode].ctrl_phy_regs[i].reg_addr != 0xffffffff) {
				ddr3_tip_bus_write(dev_num, ACCESS_TYPE_UNICAST, if_id, ACCESS_TYPE_UNICAST,
							subphy_id, subphy_type,
							ddr_modes[mode].ctrl_phy_regs[i].reg_addr,
							ddr_modes[mode].ctrl_phy_regs[i].reg_data[subphy_id]);
				i++;
			}
		}
	}

	return MV_OK;
}

void mv_ddr_phy_static_config(void)
{
	/* TODO: use variable for subphys number */
	mv_ddr_a38x_phy_static_config(0, 4, DDR_PHY_DATA);
	mv_ddr_a38x_phy_static_config(0, 3, DDR_PHY_CONTROL);
}
#endif /* CONFIG_PHY_STATIC */
