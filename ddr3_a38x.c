/*******************************************************************************
Copyright (C) 2016 Marvell International Ltd.

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

#include <common.h>
#include <i2c.h>
#include <spl.h>
#include <asm/io.h>
#include <asm/arch/cpu.h>
#include <asm/arch/soc.h>

#include "ddr3_init.h"

#define DDR_INTERFACES_NUM		1
#define DDR_INTERFACE_OCTETS_NUM	5

#define SAR_DEV_ID_OFFS			27
#define SAR_DEV_ID_MASK			0x7

/* Termal Sensor Registers */
#define TSEN_CONTROL_LSB_REG		0xE4070
#define TSEN_CONTROL_LSB_TC_TRIM_OFFSET	0
#define TSEN_CONTROL_LSB_TC_TRIM_MASK	(0x7 << TSEN_CONTROL_LSB_TC_TRIM_OFFSET)
#define TSEN_CONTROL_MSB_REG		0xE4074
#define TSEN_CONTROL_MSB_RST_OFFSET	8
#define TSEN_CONTROL_MSB_RST_MASK	(0x1 << TSEN_CONTROL_MSB_RST_OFFSET)
#define TSEN_STATUS_REG			0xe4078
#define TSEN_STATUS_READOUT_VALID_OFFSET	10
#define TSEN_STATUS_READOUT_VALID_MASK	(0x1 <<				\
					 TSEN_STATUS_READOUT_VALID_OFFSET)
#define TSEN_STATUS_TEMP_OUT_OFFSET	0
#define TSEN_STATUS_TEMP_OUT_MASK	(0x3ff << TSEN_STATUS_TEMP_OUT_OFFSET)

static struct dfx_access interface_map[] = {
	/* Pipe	Client */
	{ 0, 17 },
	{ 1, 7 },
	{ 1, 11 },
	{ 0, 3 },
	{ 1, 25 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 }
};

/* This array hold the board round trip delay (DQ and CK) per <interface,bus> */
struct trip_delay_element a38x_board_round_trip_delay_array[] = {
	/* 1st board */
	/* Interface bus DQS-delay CK-delay */
	{ 3952, 5060 },
	{ 3192, 4493 },
	{ 4785, 6677 },
	{ 3413, 7267 },
	{ 4282, 6086 },	/* ECC PUP */
	{ 3952, 5134 },
	{ 3192, 4567 },
	{ 4785, 6751 },
	{ 3413, 7341 },
	{ 4282, 6160 },	/* ECC PUP */

	/* 2nd board */
	/* Interface bus DQS-delay CK-delay */
	{ 3952, 5060 },
	{ 3192, 4493 },
	{ 4785, 6677 },
	{ 3413, 7267 },
	{ 4282, 6086 },	/* ECC PUP */
	{ 3952, 5134 },
	{ 3192, 4567 },
	{ 4785, 6751 },
	{ 3413, 7341 },
	{ 4282, 6160 }	/* ECC PUP */
};

#ifdef STATIC_ALGO_SUPPORT
/* package trace */
static struct trip_delay_element a38x_package_round_trip_delay_array[] = {
	/* IF BUS DQ_DELAY CK_DELAY */
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 }
};

static int a38x_silicon_delay_offset[] = {
	/* board 0 */
	0,
	/* board 1 */
	0,
	/* board 2 */
	0
};
#endif

static u8 a38x_bw_per_freq[DDR_FREQ_LAST] = {
	0x3,			/* DDR_FREQ_100 */
	0x4,			/* DDR_FREQ_400 */
	0x4,			/* DDR_FREQ_533 */
	0x5,			/* DDR_FREQ_667 */
	0x5,			/* DDR_FREQ_800 */
	0x5,			/* DDR_FREQ_933 */
	0x5,			/* DDR_FREQ_1066 */
	0x3,			/* DDR_FREQ_311 */
	0x3,			/* DDR_FREQ_333 */
	0x4,			/* DDR_FREQ_467 */
	0x5,			/* DDR_FREQ_850 */
	0x5,			/* DDR_FREQ_600 */
	0x3,			/* DDR_FREQ_300 */
	0x5,			/* DDR_FREQ_900 */
	0x3,			/* DDR_FREQ_360 */
	0x5			/* DDR_FREQ_1000 */
};

static u8 a38x_rate_per_freq[DDR_FREQ_LAST] = {
	 /*TBD*/ 0x1,		/* DDR_FREQ_100 */
	0x2,			/* DDR_FREQ_400 */
	0x2,			/* DDR_FREQ_533 */
	0x2,			/* DDR_FREQ_667 */
	0x2,			/* DDR_FREQ_800 */
	0x3,			/* DDR_FREQ_933 */
	0x3,			/* DDR_FREQ_1066 */
	0x1,			/* DDR_FREQ_311 */
	0x1,			/* DDR_FREQ_333 */
	0x2,			/* DDR_FREQ_467 */
	0x2,			/* DDR_FREQ_850 */
	0x2,			/* DDR_FREQ_600 */
	0x1,			/* DDR_FREQ_300 */
	0x2,			/* DDR_FREQ_900 */
	0x1,			/* DDR_FREQ_360 */
	0x2			/* DDR_FREQ_1000 */
};

static u16 a38x_vco_freq_per_sar[] = {
	666,			/* 0 */
	1332,
	800,
	1600,
	1066,
	2132,
	1200,
	2400,
	1332,
	1332,
	1500,
	1500,
	1600,			/* 12 */
	1600,
	1700,
	1700,
	1866,
	1866,
	1800,			/* 18 */
	2000,
	2000,
	4000,
	2132,
	2132,
	2300,
	2300,
	2400,
	2400,
	2500,
	2500,
	800
};

u32 pipe_multicast_mask;

u32 dq_bit_map_2_phy_pin[] = {
	1, 0, 2, 6, 9, 8, 3, 7,	/* 0 */
	8, 9, 1, 7, 2, 6, 3, 0,	/* 1 */
	3, 9, 7, 8, 1, 0, 2, 6,	/* 2 */
	1, 0, 6, 2, 8, 3, 7, 9,	/* 3 */
	0, 1, 2, 9, 7, 8, 3, 6,	/* 4 */
};

static int ddr3_tip_a38x_set_divider(u8 dev_num, u32 if_id,
				     enum hws_ddr_freq freq);

/*
 * Read temperature TJ value
 */
u32 ddr3_ctrl_get_junc_temp(u8 dev_num)
{
	int reg = 0;

	/* Initiates TSEN hardware reset once */
	if ((reg_read(TSEN_CONTROL_MSB_REG) & TSEN_CONTROL_MSB_RST_MASK) == 0) {
		reg_bit_set(TSEN_CONTROL_MSB_REG, TSEN_CONTROL_MSB_RST_MASK);
		/* set Tsen Tc Trim to correct default value (errata #132698) */
		reg = reg_read(TSEN_CONTROL_LSB_REG);
		reg &= ~TSEN_CONTROL_LSB_TC_TRIM_MASK;
		reg |= 0x3 << TSEN_CONTROL_LSB_TC_TRIM_OFFSET;
		reg_write(TSEN_CONTROL_LSB_REG, reg);
	}
	mdelay(10);

	/* Check if the readout field is valid */
	if ((reg_read(TSEN_STATUS_REG) & TSEN_STATUS_READOUT_VALID_MASK) == 0) {
		printf("%s: TSEN not ready\n", __func__);
		return 0;
	}

	reg = reg_read(TSEN_STATUS_REG);
	reg = (reg & TSEN_STATUS_TEMP_OUT_MASK) >> TSEN_STATUS_TEMP_OUT_OFFSET;

	return ((((10000 * reg) / 21445) * 1000) - 272674) / 1000;
}

/*
 * Name:     ddr3_tip_a38x_get_freq_config.
 * Desc:
 * Args:
 * Notes:
 * Returns:  MV_OK if success, other error code if fail.
 */
int ddr3_tip_a38x_get_freq_config(u8 dev_num, enum hws_ddr_freq freq,
				  struct hws_tip_freq_config_info
				  *freq_config_info)
{
	if (a38x_bw_per_freq[freq] == 0xff)
		return MV_NOT_SUPPORTED;

	if (freq_config_info == NULL)
		return MV_BAD_PARAM;

	freq_config_info->bw_per_freq = a38x_bw_per_freq[freq];
	freq_config_info->rate_per_freq = a38x_rate_per_freq[freq];
	freq_config_info->is_supported = 1;

	return MV_OK;
}

/*
 * Name:     ddr3_tip_a38x_pipe_enable.
 * Desc:
 * Args:
 * Notes:
 * Returns:  MV_OK if success, other error code if fail.
 */
int ddr3_tip_a38x_pipe_enable(u8 dev_num, enum hws_access_type interface_access,
			      u32 if_id, int enable)
{
	u32 data_value, pipe_enable_mask = 0;

	if (enable == 0) {
		pipe_enable_mask = 0;
	} else {
		if (interface_access == ACCESS_TYPE_MULTICAST)
			pipe_enable_mask = pipe_multicast_mask;
		else
			pipe_enable_mask = (1 << interface_map[if_id].pipe);
	}

	CHECK_STATUS(ddr3_tip_reg_read
		     (dev_num, PIPE_ENABLE_ADDR, &data_value, MASK_ALL_BITS));
	data_value = (data_value & (~0xff)) | pipe_enable_mask;
	CHECK_STATUS(ddr3_tip_reg_write(dev_num, PIPE_ENABLE_ADDR, data_value));

	return MV_OK;
}

/*
 * Name:     ddr3_tip_a38x_if_write.
 * Desc:
 * Args:
 * Notes:
 * Returns:  MV_OK if success, other error code if fail.
 */
int ddr3_tip_a38x_if_write(u8 dev_num, enum hws_access_type interface_access,
			   u32 if_id, u32 reg_addr, u32 data_value,
			   u32 mask)
{
	u32 ui_data_read;

	if (mask != MASK_ALL_BITS) {
		CHECK_STATUS(ddr3_tip_a38x_if_read
			     (dev_num, ACCESS_TYPE_UNICAST, if_id, reg_addr,
			      &ui_data_read, MASK_ALL_BITS));
		data_value = (ui_data_read & (~mask)) | (data_value & mask);
	}

	reg_write(reg_addr, data_value);

	return MV_OK;
}

/*
 * Name:     ddr3_tip_a38x_if_read.
 * Desc:
 * Args:
 * Notes:
 * Returns:  MV_OK if success, other error code if fail.
 */
int ddr3_tip_a38x_if_read(u8 dev_num, enum hws_access_type interface_access,
			  u32 if_id, u32 reg_addr, u32 *data, u32 mask)
{
	*data = reg_read(reg_addr) & mask;

	return MV_OK;
}

/*
 * Name:     ddr3_tip_a38x_select_ddr_controller.
 * Desc:     Enable/Disable access to Marvell's server.
 * Args:     dev_num     - device number
 *           enable        - whether to enable or disable the server
 * Notes:
 * Returns:  MV_OK if success, other error code if fail.
 */
int ddr3_tip_a38x_select_ddr_controller(u8 dev_num, int enable)
{
	u32 reg;

	reg = reg_read(CS_ENABLE_REG);

	if (enable)
		reg |= (1 << 6);
	else
		reg &= ~(1 << 6);

	reg_write(CS_ENABLE_REG, reg);

	return MV_OK;
}

/*
 * Name:     ddr3_tip_init_a38x_silicon.
 * Desc:     init Training SW DB.
 * Args:
 * Notes:
 * Returns:  MV_OK if success, other error code if fail.
 */
static int ddr3_tip_init_a38x_silicon(u32 dev_num, u32 board_id)
{
	struct hws_tip_config_func_db config_func;
	enum hws_ddr_freq ddr_freq;
	int status;
	struct hws_topology_map *tm = ddr3_get_topology_map();

	/* new read leveling version */
	config_func.tip_dunit_read_func = ddr3_tip_a38x_if_read;
	config_func.tip_dunit_write_func = ddr3_tip_a38x_if_write;
	config_func.tip_dunit_mux_select_func =
		ddr3_tip_a38x_select_ddr_controller;
	config_func.tip_get_freq_config_info_func =
		ddr3_tip_a38x_get_freq_config;
	config_func.tip_set_freq_divider_func = ddr3_tip_a38x_set_divider;
	config_func.tip_get_device_info_func = ddr3_tip_a38x_get_device_info;
	config_func.tip_get_temperature = ddr3_ctrl_get_junc_temp;
	config_func.tip_get_clock_ratio = ddr3_tip_clock_mode;
	config_func.tip_external_read = ddr3_tip_ext_read;
	config_func.tip_external_write = ddr3_tip_ext_write;

	ddr3_tip_init_config_func(dev_num, &config_func);

	ddr3_tip_register_dq_table(dev_num, dq_bit_map_2_phy_pin);

	/* set device attributes*/
	ddr3_tip_dev_attr_init(dev_num);
	ddr3_tip_dev_attr_set(dev_num, MV_ATTR_TIP_REV, MV_TIP_REV_4);
	ddr3_tip_dev_attr_set(dev_num, MV_ATTR_OCTET_PER_INTERFACE, DDR_INTERFACE_OCTETS_NUM);

#ifdef STATIC_ALGO_SUPPORT
	{
		struct hws_tip_static_config_info static_config;
		u32 board_offset =
		    board_id * DDR_INTERFACES_NUM *
		    DDR_INTERFACE_OCTETS_NUM;

		static_config.silicon_delay =
			a38x_silicon_delay_offset[board_id];
		static_config.package_trace_arr =
			a38x_package_round_trip_delay_array;
		static_config.board_trace_arr =
			&a38x_board_round_trip_delay_array[board_offset];
		ddr3_tip_init_static_config_db(dev_num, &static_config);
	}
#endif
	status = ddr3_tip_a38x_get_init_freq(dev_num, &ddr_freq);
	if (MV_OK != status) {
		DEBUG_TRAINING_ACCESS(DEBUG_LEVEL_ERROR,
				      ("DDR3 silicon get target frequency - FAILED 0x%x\n",
				       status));
		return status;
	}

	mask_tune_func = (SET_LOW_FREQ_MASK_BIT |
			  LOAD_PATTERN_MASK_BIT |
			  SET_MEDIUM_FREQ_MASK_BIT | WRITE_LEVELING_MASK_BIT |
			  /* LOAD_PATTERN_2_MASK_BIT | */
			  WRITE_LEVELING_SUPP_MASK_BIT |
			  READ_LEVELING_MASK_BIT |
			  PBS_RX_MASK_BIT |
			  PBS_TX_MASK_BIT |
			  SET_TARGET_FREQ_MASK_BIT |
			  WRITE_LEVELING_TF_MASK_BIT |
			  WRITE_LEVELING_SUPP_TF_MASK_BIT |
			  READ_LEVELING_TF_MASK_BIT |
			  CENTRALIZATION_RX_MASK_BIT |
			  CENTRALIZATION_TX_MASK_BIT);
	rl_mid_freq_wa = 1;

	if ((ddr_freq == DDR_FREQ_333) || (ddr_freq == DDR_FREQ_400)) {
		mask_tune_func = (WRITE_LEVELING_MASK_BIT |
				  LOAD_PATTERN_2_MASK_BIT |
				  WRITE_LEVELING_SUPP_MASK_BIT |
				  READ_LEVELING_MASK_BIT |
				  PBS_RX_MASK_BIT |
				  PBS_TX_MASK_BIT |
				  CENTRALIZATION_RX_MASK_BIT |
				  CENTRALIZATION_TX_MASK_BIT);
		rl_mid_freq_wa = 0; /* WA not needed if 333/400 is TF */
	}

	/* Supplementary not supported for ECC modes */
	if (1 == ddr3_if_ecc_enabled()) {
		mask_tune_func &= ~WRITE_LEVELING_SUPP_TF_MASK_BIT;
		mask_tune_func &= ~WRITE_LEVELING_SUPP_MASK_BIT;
		mask_tune_func &= ~PBS_TX_MASK_BIT;
		mask_tune_func &= ~PBS_RX_MASK_BIT;
	}

	if (ck_delay == PARAM_UNDEFINED)
		ck_delay = 160;
	ca_delay = 0;
	delay_enable = 1;

	calibration_update_control = 1;

	init_freq = tm->interface_params[first_active_if].memory_freq;

	ddr3_tip_a38x_get_medium_freq(dev_num, &medium_freq);

	return MV_OK;
}

int ddr3_a38x_update_topology_map(u32 dev_num, struct hws_topology_map *tm)
{
	u32 if_id = 0;
	enum hws_ddr_freq freq;

	ddr3_tip_a38x_get_init_freq(dev_num, &freq);
	tm->interface_params[if_id].memory_freq = freq;

	/*
	 * re-calc topology parameters according to topology updates
	 * (if needed)
	 */
	CHECK_STATUS(hws_ddr3_tip_load_topology_map(dev_num, tm));

	return MV_OK;
}

int ddr3_tip_init_a38x(u32 dev_num, u32 board_id)
{
	struct hws_topology_map *tm = ddr3_get_topology_map();

	if (NULL == tm)
		return MV_FAIL;

	ddr3_a38x_update_topology_map(dev_num, tm);
	ddr3_tip_init_a38x_silicon(dev_num, board_id);

	return MV_OK;
}

int ddr3_tip_a38x_get_init_freq(int dev_num, enum hws_ddr_freq *freq)
{
	u32 reg;

	/* Read sample at reset setting */
	reg = (reg_read(REG_DEVICE_SAR1_ADDR) >>
	       RST2_CPU_DDR_CLOCK_SELECT_IN_OFFSET) &
		RST2_CPU_DDR_CLOCK_SELECT_IN_MASK;
	switch (reg) {
	case 0x0:
	case 0x1:
		*freq = DDR_FREQ_333;
		break;
	case 0x2:
	case 0x3:
		*freq = DDR_FREQ_400;
		break;
	case 0x4:
	case 0xd:
		*freq = DDR_FREQ_533;
		break;
	case 0x6:
		*freq = DDR_FREQ_600;
		break;
	case 0x8:
	case 0x11:
	case 0x14:
		*freq = DDR_FREQ_667;
		break;
	case 0xc:
	case 0x15:
	case 0x1b:
		*freq = DDR_FREQ_800;
		break;
	case 0x10:
		*freq = DDR_FREQ_933;
		break;
	case 0x12:
		*freq = DDR_FREQ_900;
		break;
	case 0x13:
		*freq = DDR_FREQ_900;
		break;
	default:
		*freq = 0;
		return MV_NOT_SUPPORTED;
	}

	return MV_OK;
}

int ddr3_tip_a38x_get_medium_freq(int dev_num, enum hws_ddr_freq *freq)
{
	u32 reg;

	/* Read sample at reset setting */
	reg = (reg_read(REG_DEVICE_SAR1_ADDR) >>
	       RST2_CPU_DDR_CLOCK_SELECT_IN_OFFSET) &
		RST2_CPU_DDR_CLOCK_SELECT_IN_MASK;
	switch (reg) {
	case 0x0:
	case 0x1:
		/* Medium is same as TF to run PBS in this freq */
		*freq = DDR_FREQ_333;
		break;
	case 0x2:
	case 0x3:
		/* Medium is same as TF to run PBS in this freq */
		*freq = DDR_FREQ_400;
		break;
	case 0x4:
	case 0xd:
		*freq = DDR_FREQ_533;
		break;
	case 0x8:
	case 0x11:
	case 0x14:
		*freq = DDR_FREQ_333;
		break;
	case 0xc:
	case 0x15:
	case 0x1b:
		*freq = DDR_FREQ_400;
		break;
	case 0x6:
		*freq = DDR_FREQ_300;
		break;
	case 0x12:
		*freq = DDR_FREQ_360;
		break;
	case 0x13:
		*freq = DDR_FREQ_400;
		break;
	default:
		*freq = 0;
		return MV_NOT_SUPPORTED;
	}

	return MV_OK;
}

u32 ddr3_tip_get_init_freq(void)
{
	enum hws_ddr_freq freq;

	ddr3_tip_a38x_get_init_freq(0, &freq);

	return freq;
}

static int ddr3_tip_a38x_set_divider(u8 dev_num, u32 if_id,
				     enum hws_ddr_freq frequency)
{
	u32 divider = 0;
	u32 sar_val;

	if (if_id != 0) {
		DEBUG_TRAINING_ACCESS(DEBUG_LEVEL_ERROR,
				      ("A38x does not support interface 0x%x\n",
				       if_id));
		return MV_BAD_PARAM;
	}

	/* get VCO freq index */
	sar_val = (reg_read(REG_DEVICE_SAR1_ADDR) >>
		   RST2_CPU_DDR_CLOCK_SELECT_IN_OFFSET) &
		RST2_CPU_DDR_CLOCK_SELECT_IN_MASK;
	divider = a38x_vco_freq_per_sar[sar_val] / freq_val[frequency];

	/* Set Sync mode */
	CHECK_STATUS(ddr3_tip_a38x_if_write
		     (dev_num, ACCESS_TYPE_UNICAST, if_id, 0x20220, 0x0,
		      0x1000));
	CHECK_STATUS(ddr3_tip_a38x_if_write
		     (dev_num, ACCESS_TYPE_UNICAST, if_id, 0xe42f4, 0x0,
		      0x200));

	/* cpupll_clkdiv_reset_mask */
	CHECK_STATUS(ddr3_tip_a38x_if_write
		     (dev_num, ACCESS_TYPE_UNICAST, if_id, 0xe4264, 0x1f,
		      0xff));

	/* cpupll_clkdiv_reload_smooth */
	CHECK_STATUS(ddr3_tip_a38x_if_write
		     (dev_num, ACCESS_TYPE_UNICAST, if_id, 0xe4260,
		      (0x2 << 8), (0xff << 8)));

	/* cpupll_clkdiv_relax_en */
	CHECK_STATUS(ddr3_tip_a38x_if_write
		     (dev_num, ACCESS_TYPE_UNICAST, if_id, 0xe4260,
		      (0x2 << 24), (0xff << 24)));

	/* write the divider */
	CHECK_STATUS(ddr3_tip_a38x_if_write
		     (dev_num, ACCESS_TYPE_UNICAST, if_id, 0xe4268,
		      (divider << 8), (0x3f << 8)));

	/* set cpupll_clkdiv_reload_ratio */
	CHECK_STATUS(ddr3_tip_a38x_if_write
		     (dev_num, ACCESS_TYPE_UNICAST, if_id, 0xe4264,
		      (1 << 8), (1 << 8)));

	/* undet cpupll_clkdiv_reload_ratio */
	CHECK_STATUS(ddr3_tip_a38x_if_write
		     (dev_num, ACCESS_TYPE_UNICAST, if_id, 0xe4264, 0,
		      (1 << 8)));

	/* clear cpupll_clkdiv_reload_force */
	CHECK_STATUS(ddr3_tip_a38x_if_write
		     (dev_num, ACCESS_TYPE_UNICAST, if_id, 0xe4260, 0,
		      (0xff << 8)));

	/* clear cpupll_clkdiv_relax_en */
	CHECK_STATUS(ddr3_tip_a38x_if_write
		     (dev_num, ACCESS_TYPE_UNICAST, if_id, 0xe4260, 0,
		      (0xff << 24)));

	/* clear cpupll_clkdiv_reset_mask */
	CHECK_STATUS(ddr3_tip_a38x_if_write
		     (dev_num, ACCESS_TYPE_UNICAST, if_id, 0xe4264, 0,
		      0xff));

	/* Dunit training clock + 1:1 mode */
	if ((frequency == DDR_FREQ_LOW_FREQ) || (freq_val[frequency] <= 400)) {
		CHECK_STATUS(ddr3_tip_a38x_if_write
			     (dev_num, ACCESS_TYPE_UNICAST, if_id, 0x18488,
			      (1 << 16), (1 << 16)));
		CHECK_STATUS(ddr3_tip_a38x_if_write
			     (dev_num, ACCESS_TYPE_UNICAST, if_id, 0x1524,
			      (0 << 15), (1 << 15)));
	} else {
		CHECK_STATUS(ddr3_tip_a38x_if_write
			     (dev_num, ACCESS_TYPE_UNICAST, if_id, 0x18488,
			      0, (1 << 16)));
		CHECK_STATUS(ddr3_tip_a38x_if_write
			     (dev_num, ACCESS_TYPE_UNICAST, if_id, 0x1524,
			      (1 << 15), (1 << 15)));
	}

	return MV_OK;
}

u8 ddr3_tip_clock_mode(u32 frequency)
{
	if ((frequency == DDR_FREQ_LOW_FREQ) || (freq_val[frequency] <= 400))
		return 1;

	return 2;
}

/*
 * external read from memory
 */
int ddr3_tip_ext_read(u32 dev_num, u32 if_id, u32 reg_addr,
		      u32 num_of_bursts, u32 *data)
{
	u32 burst_num;

	for (burst_num = 0; burst_num < num_of_bursts * 8; burst_num++)
		data[burst_num] = readl(reg_addr + 4 * burst_num);

	return MV_OK;
}

/*
 * external write to memory
 */
int ddr3_tip_ext_write(u32 dev_num, u32 if_id, u32 reg_addr,
		       u32 num_of_bursts, u32 *data) {
	u32 burst_num;

	for (burst_num = 0; burst_num < num_of_bursts * 8; burst_num++)
		writel(data[burst_num], reg_addr + 4 * burst_num);

	return MV_OK;
}

int ddr3_silicon_pre_init(void)
{
	int result;

	result = ddr3_silicon_init();

	return result;
}

int ddr3_post_run_alg(void)
{
	return MV_OK;
}

int ddr3_silicon_post_init(void)
{
	struct hws_topology_map *tm = ddr3_get_topology_map();

	/* Set half bus width */
	if (DDR3_IS_16BIT_DRAM_MODE(tm->bus_act_mask)) {
		CHECK_STATUS(ddr3_tip_if_write
			     (0, ACCESS_TYPE_UNICAST, PARAM_NOT_CARE,
			      REG_SDRAM_CONFIG_ADDR, 0x0, 0x8000));
	}

	return MV_OK;
}

int ddr3_tip_a38x_get_device_info(u8 dev_num, struct ddr3_device_info *info_ptr)
{
#if defined(CONFIG_ARMADA_39X)
	info_ptr->device_id = 0x6900;
#else
	info_ptr->device_id = 0x6800;
#endif
	info_ptr->ck_delay = ck_delay;

	return MV_OK;
}