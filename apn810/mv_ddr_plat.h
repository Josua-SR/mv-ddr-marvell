/*******************************************************************************
Copyright (C) 2018 Marvell International Ltd.

This software file (the "File") is owned and distributed by Marvell
International Ltd. and/or its affiliates ("Marvell") under the following
alternative licensing terms.  Once you have made an election to distribute the
File under one of the following license alternatives, please (i) delete this
introductory statement regarding license alternatives, (ii) delete the three
license alternatives that you have not elected to use and (iii) preserve the
Marvell copyright notice above.

********************************************************************************
Marvell Commercial License Option

If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.

********************************************************************************
Marvell GPL License Option

This program is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the Free
Software Foundation, either version 2 of the License, or any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

********************************************************************************
Marvell GNU General Public License FreeRTOS Exception

If you received this File from Marvell, you may opt to use, redistribute and/or
modify this File in accordance with the terms and conditions of the Lesser
General Public License Version 2.1 plus the following FreeRTOS exception.
An independent module is a module which is not derived from or based on
FreeRTOS.
Clause 1:
Linking FreeRTOS statically or dynamically with other modules is making a
combined work based on FreeRTOS. Thus, the terms and conditions of the GNU
General Public License cover the whole combination.
As a special exception, the copyright holder of FreeRTOS gives you permission
to link FreeRTOS with independent modules that communicate with FreeRTOS solely
through the FreeRTOS API interface, regardless of the license terms of these
independent modules, and to copy and distribute the resulting combined work
under terms of your choice, provided that:
1. Every copy of the combined work is accompanied by a written statement that
details to the recipient the version of FreeRTOS used and an offer by yourself
to provide the FreeRTOS source code (including any modifications you may have
made) should the recipient request it.
2. The combined work is not itself an RTOS, scheduler, kernel or related
product.
3. The independent modules add significant and primary functionality to
FreeRTOS and do not merely extend the existing functionality already present in
FreeRTOS.
Clause 2:
FreeRTOS may not be used for any competitive or comparative purpose, including
the publication of any form of run time or compile time metric, without the
express permission of Real Time Engineers Ltd. (this is the norm within the
industry and is intended to ensure information accuracy).

********************************************************************************
Marvell BSD License Option

If you received this File from Marvell, you may opt to use, redistribute and/or
modify this File under the following licensing terms.
Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

	* Redistributions of source code must retain the above copyright notice,
	  this list of conditions and the following disclaimer.

	* Redistributions in binary form must reproduce the above copyright
	  notice, this list of conditions and the following disclaimer in the
	  documentation and/or other materials provided with the distribution.

	* Neither the name of Marvell nor the names of its contributors may be
	  used to endorse or promote products derived from this software without
	  specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*******************************************************************************/

#ifndef _MV_DDR_PLAT_H
#define _MV_DDR_PLAT_H
/* #include "mv_ddr_static.h" TODO: add static support */
#define MAX_DEVICE_NUM			1
#define DDR_INTERFACE_OCTETS_NUM	9

#define SNPS_PHY_OFFSET			0x1000000	/* TODO: define as global parameter */

#define MAX_INTERFACE_NUM		1	/* TODO: take from topology */
#define MAX_BUS_NUM			9	/* TODO: take from topology */
#define DDR_IF_CTRL_SUBPHYS_NUM		3
#define ACTIVE_INTERFACE_MASK		0x1

#define NON_DRAM_MEM_RGN_START_ADDR	0xc0000000ULL
#define NON_DRAM_MEM_RGN_END_ADDR	0x100000000ULL

#define DSS_SCR_REG(n)			(0x6f0000 + 0x208 + ((n) * 0x4))
#define SDRAM_CS_SIZE			0x7fffffffUL	/* TODO: implement function for cs size per platform */

/* electrical parameters */
#define TUNE_TRAINING_PARAMS_CK_DELAY		160

#define TUNE_TRAINING_PARAMS_PHYREG3VAL		0xA
#define TUNE_TRAINING_PARAMS_PRI_DATA		123
#define TUNE_TRAINING_PARAMS_NRI_DATA		123
#define TUNE_TRAINING_PARAMS_PRI_CTRL		74
#define TUNE_TRAINING_PARAMS_NRI_CTRL		74
#define TUNE_TRAINING_PARAMS_P_ODT_DATA		45
#define TUNE_TRAINING_PARAMS_N_ODT_DATA		45
#define TUNE_TRAINING_PARAMS_P_ODT_CTRL		45
#define TUNE_TRAINING_PARAMS_N_ODT_CTRL		45
#define TUNE_TRAINING_PARAMS_DIC		0x2
#define TUNE_TRAINING_PARAMS_ODT_CONFIG_2CS	0x120012
#define TUNE_TRAINING_PARAMS_ODT_CONFIG_1CS	0x10000
#define TUNE_TRAINING_PARAMS_RTT_NOM		0x44

#if defined(CONFIG_DDR4)
#define TUNE_TRAINING_PARAMS_P_ODT_DATA_DDR4	0xD
#define TUNE_TRAINING_PARAMS_DIC_DDR4		0x0
#define TUNE_TRAINING_PARAMS_ODT_CONFIG_DDR4	0x330012	/* not used when park is on */
#define TUNE_TRAINING_PARAMS_RTT_NOM_DDR4	0x0		/* RZQ/3 = 0x600 */
#define TUNE_TRAINING_PARAMS_RTT_WR_1CS		0x0		/* RZQ/1 = 0x400 */
#define TUNE_TRAINING_PARAMS_RTT_WR_2CS		0x200		/* RZQ/1 = 0x400 */
#define TUNE_TRAINING_PARAMS_RTT_PARK_1CS	0x40		/* rtt park = 0x1 RZQ_div4 */
#define TUNE_TRAINING_PARAMS_RTT_PARK_2CS	0x100		/* rtt park = 0x1 RZQ_div4 */
#else /* CONFIG_DDR4 */
#define TUNE_TRAINING_PARAMS_RTT_WR_1CS		0x0
#define TUNE_TRAINING_PARAMS_RTT_WR_2CS		0x0
#endif /* CONFIG_DDR4 */

/* functions declaration */
int mv_ddr_pre_sys_config(void);
int mv_ddr_pre_config(void);
int mv_ddr_post_config(void);
int mv_ddr_mc_config(void);
int mv_ddr_mc_ena(void);
int mv_ddr_post_sys_config(void);
int mv_ddr_phy_config(void);
unsigned int mv_ddr_init_freq_get(void);

#endif /* _MV_DDR_PLAT_H */
