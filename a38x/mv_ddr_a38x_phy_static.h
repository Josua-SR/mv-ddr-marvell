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

#ifndef _MV_DDR_A38X_PHY_STATIC_H
#define _MV_DDR_A38X_PHY_STATIC_H

#ifdef SUPPORT_STATIC_PHY_CONFIG

struct mv_ddr_subphys_reg_config a38x_ctrl_phy_600[] = {
	{0x0,{0x6,0x6,0x6}},
	{0x1,{0x0,0x0,0x0}},
	{0x2,{0x0,0x0,0x0}},
	{0x3,{0x10,0x10,0x10}},
	{0x4,{0x0,0x0,0x0}},
	{0x5,{0x10,0x10,0x10}},
	{0x6,{0x0,0x0,0x0}},
	{0x7,{0x10,0x10,0x10}},
	{0x8,{0x0,0x0,0x0}},
	{0x9,{0x10,0x10,0x10}},
	{0xa,{0x0,0x0,0x0}},
	{0xb,{0x10,0x10,0x10}},
	{0xc,{0x0,0x0,0x0}},
	{0xd,{0x10,0x10,0x10}},
	{0xe,{0x0,0x0,0x0}},
	{0xf,{0x10,0x10,0x10}},
	{0x10,{0x0,0x0,0x0}},
	{0x11,{0x0,0x0,0x0}},
	{0x12,{0x0,0x0,0x0}},
	{0x13,{0x0,0x0,0x0}},
	{0x14,{0x0,0x0,0x0}},
	{0x15,{0x0,0x0,0x0}},
	{0x16,{0x0,0x0,0x0}},
	{0x17,{0x0,0x0,0x0}},
	{0x18,{0x0,0x0,0x0}},
	{0x19,{0x0,0x0,0x0}},
	{0x1a,{0x0,0x0,0x0}},
	{0x1b,{0x0,0x0,0x0}},
	{0x1c,{0x0,0x0,0x0}},
	{0x1d,{0x0,0x0,0x0}},
	{0x1e,{0x0,0x0,0x0}},
	{0x1f,{0x0,0x0,0x0}},
	{0x20,{0x0,0x0,0x0}},
	{0x21,{0x0,0x0,0x0}},
	{0x22,{0x0,0x0,0x0}},
	{0x23,{0x0,0x0,0x0}},
	{0x24,{0x0,0x0,0x0}},
	{0x25,{0x0,0x0,0x0}},
	{0x26,{0x0,0x0,0x0}},
	{0x27,{0x0,0x0,0x0}},
	{0x28,{0x0,0x0,0x0}},
	{0x29,{0x0,0x0,0x0}},
	{0x2a,{0x0,0x0,0x0}},
	{0x2b,{0x0,0x0,0x0}},
	{0x2c,{0x0,0x0,0x0}},
	{0x2d,{0x0,0x0,0x0}},
	{0x2e,{0x0,0x0,0x0}},
	{0x2f,{0x0,0x0,0x0}},
	{0x30,{0x0,0x0,0x0}},
	{0x31,{0x0,0x0,0x0}},
	{0x32,{0x0,0x0,0x0}},
	{0x33,{0x0,0x0,0x0}},
	{0x34,{0x0,0x0,0x0}},
	{0x35,{0x0,0x0,0x0}},
	{0x36,{0x0,0x0,0x0}},
	{0x37,{0x0,0x0,0x0}},
	{0x38,{0x0,0x0,0x0}},
	{0x39,{0x0,0x0,0x0}},
	{0x3a,{0x0,0x0,0x0}},
	{0x3b,{0x0,0x0,0x0}},
	{0x3c,{0x0,0x0,0x0}},
	{0x3d,{0x0,0x0,0x0}},
	{0x3e,{0x0,0x0,0x0}},
	{0x3f,{0x0,0x0,0x0}},
	{0x40,{0x0,0x0,0x0}},
	{0x41,{0x0,0x0,0x0}},
	{0x42,{0x0,0x0,0x0}},
	{0x43,{0x0,0x0,0x0}},
	{0x44,{0x0,0x0,0x0}},
	{0x45,{0x0,0x0,0x0}},
	{0x46,{0x0,0x0,0x0}},
	{0x47,{0x0,0x0,0x0}},
	{0x48,{0x0,0x0,0x0}},
	{0x49,{0x0,0x0,0x0}},
	{0x4a,{0x0,0x0,0x0}},
	{0x4b,{0x0,0x0,0x0}},
	{0x4c,{0x0,0x0,0x0}},
	{0x4d,{0x0,0x0,0x0}},
	{0x4e,{0x0,0x0,0x0}},
	{0x4f,{0x0,0x0,0x0}},
	{0x50,{0x0,0x0,0x0}},
	{0x51,{0x0,0x0,0x0}},
	{0x52,{0x0,0x0,0x0}},
	{0x53,{0x0,0x0,0x0}},
	{0x54,{0x0,0x0,0x0}},
	{0x55,{0x0,0x0,0x0}},
	{0x56,{0x0,0x0,0x0}},
	{0x57,{0x0,0x0,0x0}},
	{0x58,{0x0,0x0,0x0}},
	{0x59,{0x0,0x0,0x0}},
	{0x5a,{0x0,0x0,0x0}},
	{0x5b,{0x0,0x0,0x0}},
	{0x5c,{0x0,0x0,0x0}},
	{0x5d,{0x0,0x0,0x0}},
	{0x5e,{0x0,0x0,0x0}},
	{0x5f,{0x0,0x0,0x0}},
	{0x60,{0x0,0x0,0x0}},
	{0x61,{0x0,0x0,0x0}},
	{0x62,{0x0,0x0,0x0}},
	{0x63,{0x0,0x0,0x0}},
	{0x64,{0x0,0x0,0x0}},
	{0x65,{0x0,0x0,0x0}},
	{0x66,{0x0,0x0,0x0}},
	{0x67,{0x0,0x0,0x0}},
	{0x68,{0x0,0x0,0x0}},
	{0x69,{0x0,0x0,0x0}},
	{0x6a,{0x0,0x0,0x0}},
	{0x6b,{0x0,0x0,0x0}},
	{0x6c,{0x0,0x0,0x0}},
	{0x6d,{0x0,0x0,0x0}},
	{0x6e,{0x0,0x0,0x0}},
	{0x6f,{0x0,0x0,0x0}},
	{0x70,{0x0,0x0,0x0}},
	{0x71,{0x0,0x0,0x0}},
	{0x72,{0x0,0x0,0x0}},
	{0x73,{0x0,0x0,0x0}},
	{0x74,{0x0,0x0,0x0}},
	{0x75,{0x0,0x0,0x0}},
	{0x76,{0x0,0x0,0x0}},
	{0x77,{0x0,0x0,0x0}},
	{0x78,{0x0,0x0,0x0}},
	{0x79,{0x0,0x0,0x0}},
	{0x7a,{0x0,0x0,0x0}},
	{0x7b,{0x0,0x0,0x0}},
	{0x7c,{0x0,0x0,0x0}},
	{0x7d,{0x0,0x0,0x0}},
	{0x7e,{0x0,0x0,0x0}},
	{0x7f,{0x0,0x0,0x0}},
	{0x80,{0x0,0x0,0x0}},
	{0x81,{0x0,0x0,0x0}},
	{0x82,{0x0,0x0,0x0}},
	{0x83,{0x0,0x0,0x0}},
	{0x84,{0x0,0x0,0x0}},
	{0x85,{0x0,0x0,0x0}},
	{0x86,{0x0,0x0,0x0}},
	{0x87,{0x0,0x0,0x0}},
	{0x88,{0x0,0x0,0x0}},
	{0x89,{0x0,0x0,0x0}},
	{0x8a,{0x0,0x0,0x0}},
	{0x8b,{0x0,0x0,0x0}},
	{0x8c,{0x0,0x0,0x0}},
	{0x8d,{0x0,0x0,0x0}},
	{0x8e,{0x0,0x0,0x0}},
	{0x8f,{0x0,0x0,0x0}},
	{0x90,{0x2002,0x2002,0x2002}},
	{0x91,{0x0,0x0,0x0}},
	{0x92,{0x1503,0x1503,0x1503}},
	{0x93,{0x50,0x50,0x50}},
	{0x94,{0x12,0x12,0x12}},
	{0x95,{0xf,0xf,0xf}},
	{0x96,{0x0,0x0,0x0}},
	{0x97,{0x0,0x0,0x0}},
	{0x98,{0x0,0x0,0x0}},
	{0x99,{0x0,0x0,0x0}},
	{0x9a,{0x1,0x1,0x1}},
	{0x9b,{0x1fff,0x1fff,0x1fff}},
	{0x9c,{0x1,0x1,0x1}},
	{0x9d,{0x0,0x0,0x0}},
	{0x9e,{0x0,0x0,0x0}},
	{0x9f,{0x0,0x0,0x0}},
	{0xa0,{0x0,0x0,0x0}},
	{0xa1,{0x7ff,0x7ff,0x7ff}},
	{0xa2,{0x0,0x0,0x0}},
	{0xa3,{0x7ff,0x7ff,0x7ff}},
	{0xa4,{0x254a,0x254a,0x254a}},
	{0xa5,{0x34e9,0x34e9,0x34e9}},
	{0xa6,{0xb6d,0xb6d,0xb6d}},
	{0xa7,{0x5d1,0x5d1,0x5d1}},
	{0xa8,{0x434,0x434,0x434}},
	{0xa9,{0x0,0x0,0x0}},
	{0xaa,{0x0,0x0,0x0}},
	{0xab,{0x0,0x0,0x0}},
	{0xac,{0x0,0x0,0x0}},
	{0xad,{0x0,0x0,0x0}},
	{0xae,{0x0,0x0,0x0}},
	{0xaf,{0x0,0x0,0x0}},
	{0xb0,{0x0,0x0,0x0}},
	{0xb1,{0x0,0x0,0x0}},
	{0xb2,{0x1,0x1,0x1}},
	{0xb3,{0x0,0x0,0x0}},
	{0xb4,{0x0,0x0,0x0}},
	{0xb5,{0x0,0x0,0x0}},
	{0xb6,{0x0,0x0,0x0}},
	{0xb7,{0x0,0x0,0x0}},
	{0xb8,{0x0,0x0,0x0}},
	{0xb9,{0x0,0x0,0x0}},
	{0xba,{0x0,0x0,0x0}},
	{0xbb,{0x0,0x0,0x0}},
	{0xbc,{0x0,0x0,0x0}},
	{0xbd,{0x0,0x0,0x0}},
	{0xbe,{0x1,0x1,0x1}},
	{0xbf,{0x0,0x0,0x0}},
	{0xc0,{0x0,0x0,0x0}},
	{0xc1,{0x0,0x0,0x0}},
	{0xc2,{0x0,0x0,0x0}},
	{0xc3,{0x0,0x0,0x0}},
	{0xc4,{0x0,0x0,0x0}},
	{0xc5,{0x0,0x0,0x0}},
	{0xc6,{0x0,0x0,0x0}},
	{0xc7,{0x0,0x0,0x0}},
	{0xc8,{0x0,0x0,0x0}},
	{0xc9,{0x0,0x0,0x0}},
	{0xca,{0x0,0x0,0x0}},
	{0xcb,{0x0,0x0,0x0}},
	{0xcc,{0x0,0x0,0x0}},
	{0xcd,{0x0,0x0,0x0}},
	{0xce,{0x0,0x0,0x0}},
	{0xcf,{0x0,0x0,0x0}},
	{0xd0,{0x1f,0x1f,0x1f}},
	{0xd1,{0x1f,0x1f,0x1f}},
	{0xd2,{0x1f,0x1f,0x1f}},
	{0xd3,{0x1f,0x1f,0x1f}},
	{0xd4,{0x1f,0x1f,0x1f}},
	{0xd5,{0x1f,0x1f,0x1f}},
	{0xd6,{0x1f,0x1f,0x1f}},
	{0xd7,{0x1f,0x1f,0x1f}},
	{0xd8,{0x1f,0x1f,0x1f}},
	{0xd9,{0x1f,0x1f,0x1f}},
	{0xda,{0x1f,0x1f,0x1f}},
	{0xdb,{0x1f,0x1f,0x1f}},
	{0xdc,{0x1f,0x1f,0x1f}},
	{0xdd,{0x1f,0x1f,0x1f}},
	{0xde,{0x1f,0x1f,0x1f}},
	{0xdf,{0x1f,0x1f,0x1f}},
	{0xe0,{0x1f,0x1f,0x1f}},
	{0xe1,{0x1f,0x1f,0x1f}},
	{0xe2,{0x1f,0x1f,0x1f}},
	{0xe3,{0x1f,0x1f,0x1f}},
	{0xe4,{0x1f,0x1f,0x1f}},
	{0xe5,{0x1f,0x1f,0x1f}},
	{0xe6,{0x1f,0x1f,0x1f}},
	{0xe7,{0x1f,0x1f,0x1f}},
	{0xe8,{0x1f,0x1f,0x1f}},
	{0xe9,{0x1f,0x1f,0x1f}},
	{0xea,{0x1f,0x1f,0x1f}},
	{0xeb,{0x1f,0x1f,0x1f}},
	{0xec,{0x1f,0x1f,0x1f}},
	{0xed,{0x1f,0x1f,0x1f}},
	{0xee,{0x1f,0x1f,0x1f}},
	{0xef,{0x1f,0x1f,0x1f}},
	{0xf0,{0x1f,0x1f,0x1f}},
	{0xf1,{0x1f,0x1f,0x1f}},
	{0xf2,{0x1f,0x1f,0x1f}},
	{0xf3,{0x1f,0x1f,0x1f}},
	{0xf4,{0x1f,0x1f,0x1f}},
	{0xf5,{0x1f,0x1f,0x1f}},
	{0xf6,{0x1f,0x1f,0x1f}},
	{0xf7,{0x1f,0x1f,0x1f}},
	{0xf8,{0x1f,0x1f,0x1f}},
	{0xf9,{0x1f,0x1f,0x1f}},
	{0xfa,{0x1f,0x1f,0x1f}},
	{0xfb,{0x1f,0x1f,0x1f}},
	{0xfc,{0x1f,0x1f,0x1f}},
	{0xfd,{0x1f,0x1f,0x1f}},
	{0xfe,{0x1f,0x1f,0x1f}},
	{0xff,{0x1f,0x1f,0x1f}},
	{0xffffffff, {0, 0, 0}}
};

struct mv_ddr_subphys_reg_config a38x_ctrl_phy_800[] = {
	{0x0,{0x8,0x8,0x8}},
	{0x1,{0x0,0x0,0x0}},
	{0x2,{0x0,0x0,0x0}},
	{0x3,{0x10,0x10,0x10}},
	{0x4,{0x0,0x0,0x0}},
	{0x5,{0x10,0x10,0x10}},
	{0x6,{0x0,0x0,0x0}},
	{0x7,{0x10,0x10,0x10}},
	{0x8,{0x0,0x0,0x0}},
	{0x9,{0x10,0x10,0x10}},
	{0xa,{0x0,0x0,0x0}},
	{0xb,{0x10,0x10,0x10}},
	{0xc,{0x0,0x0,0x0}},
	{0xd,{0x10,0x10,0x10}},
	{0xe,{0x0,0x0,0x0}},
	{0xf,{0x10,0x10,0x10}},
	{0x10,{0x0,0x0,0x0}},
	{0x11,{0x0,0x0,0x0}},
	{0x12,{0x0,0x0,0x0}},
	{0x13,{0x0,0x0,0x0}},
	{0x14,{0x0,0x0,0x0}},
	{0x15,{0x0,0x0,0x0}},
	{0x16,{0x0,0x0,0x0}},
	{0x17,{0x0,0x0,0x0}},
	{0x18,{0x0,0x0,0x0}},
	{0x19,{0x0,0x0,0x0}},
	{0x1a,{0x0,0x0,0x0}},
	{0x1b,{0x0,0x0,0x0}},
	{0x1c,{0x0,0x0,0x0}},
	{0x1d,{0x0,0x0,0x0}},
	{0x1e,{0x0,0x0,0x0}},
	{0x1f,{0x0,0x0,0x0}},
	{0x20,{0x0,0x0,0x0}},
	{0x21,{0x0,0x0,0x0}},
	{0x22,{0x0,0x0,0x0}},
	{0x23,{0x0,0x0,0x0}},
	{0x24,{0x0,0x0,0x0}},
	{0x25,{0x0,0x0,0x0}},
	{0x26,{0x0,0x0,0x0}},
	{0x27,{0x0,0x0,0x0}},
	{0x28,{0x0,0x0,0x0}},
	{0x29,{0x0,0x0,0x0}},
	{0x2a,{0x0,0x0,0x0}},
	{0x2b,{0x0,0x0,0x0}},
	{0x2c,{0x0,0x0,0x0}},
	{0x2d,{0x0,0x0,0x0}},
	{0x2e,{0x0,0x0,0x0}},
	{0x2f,{0x0,0x0,0x0}},
	{0x30,{0x0,0x0,0x0}},
	{0x31,{0x0,0x0,0x0}},
	{0x32,{0x0,0x0,0x0}},
	{0x33,{0x0,0x0,0x0}},
	{0x34,{0x0,0x0,0x0}},
	{0x35,{0x0,0x0,0x0}},
	{0x36,{0x0,0x0,0x0}},
	{0x37,{0x0,0x0,0x0}},
	{0x38,{0x0,0x0,0x0}},
	{0x39,{0x0,0x0,0x0}},
	{0x3a,{0x0,0x0,0x0}},
	{0x3b,{0x0,0x0,0x0}},
	{0x3c,{0x0,0x0,0x0}},
	{0x3d,{0x0,0x0,0x0}},
	{0x3e,{0x0,0x0,0x0}},
	{0x3f,{0x0,0x0,0x0}},
	{0x40,{0x0,0x0,0x0}},
	{0x41,{0x0,0x0,0x0}},
	{0x42,{0x0,0x0,0x0}},
	{0x43,{0x0,0x0,0x0}},
	{0x44,{0x0,0x0,0x0}},
	{0x45,{0x0,0x0,0x0}},
	{0x46,{0x0,0x0,0x0}},
	{0x47,{0x0,0x0,0x0}},
	{0x48,{0x0,0x0,0x0}},
	{0x49,{0x0,0x0,0x0}},
	{0x4a,{0x0,0x0,0x0}},
	{0x4b,{0x0,0x0,0x0}},
	{0x4c,{0x0,0x0,0x0}},
	{0x4d,{0x0,0x0,0x0}},
	{0x4e,{0x0,0x0,0x0}},
	{0x4f,{0x0,0x0,0x0}},
	{0x50,{0x0,0x0,0x0}},
	{0x51,{0x0,0x0,0x0}},
	{0x52,{0x0,0x0,0x0}},
	{0x53,{0x0,0x0,0x0}},
	{0x54,{0x0,0x0,0x0}},
	{0x55,{0x0,0x0,0x0}},
	{0x56,{0x0,0x0,0x0}},
	{0x57,{0x0,0x0,0x0}},
	{0x58,{0x0,0x0,0x0}},
	{0x59,{0x0,0x0,0x0}},
	{0x5a,{0x0,0x0,0x0}},
	{0x5b,{0x0,0x0,0x0}},
	{0x5c,{0x0,0x0,0x0}},
	{0x5d,{0x0,0x0,0x0}},
	{0x5e,{0x0,0x0,0x0}},
	{0x5f,{0x0,0x0,0x0}},
	{0x60,{0x0,0x0,0x0}},
	{0x61,{0x0,0x0,0x0}},
	{0x62,{0x0,0x0,0x0}},
	{0x63,{0x0,0x0,0x0}},
	{0x64,{0x0,0x0,0x0}},
	{0x65,{0x0,0x0,0x0}},
	{0x66,{0x0,0x0,0x0}},
	{0x67,{0x0,0x0,0x0}},
	{0x68,{0x0,0x0,0x0}},
	{0x69,{0x0,0x0,0x0}},
	{0x6a,{0x0,0x0,0x0}},
	{0x6b,{0x0,0x0,0x0}},
	{0x6c,{0x0,0x0,0x0}},
	{0x6d,{0x0,0x0,0x0}},
	{0x6e,{0x0,0x0,0x0}},
	{0x6f,{0x0,0x0,0x0}},
	{0x70,{0x0,0x0,0x0}},
	{0x71,{0x0,0x0,0x0}},
	{0x72,{0x0,0x0,0x0}},
	{0x73,{0x0,0x0,0x0}},
	{0x74,{0x0,0x0,0x0}},
	{0x75,{0x0,0x0,0x0}},
	{0x76,{0x0,0x0,0x0}},
	{0x77,{0x0,0x0,0x0}},
	{0x78,{0x0,0x0,0x0}},
	{0x79,{0x0,0x0,0x0}},
	{0x7a,{0x0,0x0,0x0}},
	{0x7b,{0x0,0x0,0x0}},
	{0x7c,{0x0,0x0,0x0}},
	{0x7d,{0x0,0x0,0x0}},
	{0x7e,{0x0,0x0,0x0}},
	{0x7f,{0x0,0x0,0x0}},
	{0x80,{0x0,0x0,0x0}},
	{0x81,{0x0,0x0,0x0}},
	{0x82,{0x0,0x0,0x0}},
	{0x83,{0x0,0x0,0x0}},
	{0x84,{0x0,0x0,0x0}},
	{0x85,{0x0,0x0,0x0}},
	{0x86,{0x0,0x0,0x0}},
	{0x87,{0x0,0x0,0x0}},
	{0x88,{0x0,0x0,0x0}},
	{0x89,{0x0,0x0,0x0}},
	{0x8a,{0x0,0x0,0x0}},
	{0x8b,{0x0,0x0,0x0}},
	{0x8c,{0x0,0x0,0x0}},
	{0x8d,{0x0,0x0,0x0}},
	{0x8e,{0x0,0x0,0x0}},
	{0x8f,{0x0,0x0,0x0}},
	{0x90,{0x2002,0x2002,0x2002}},
	{0x91,{0x0,0x0,0x0}},
	{0x92,{0x1503,0x1503,0x1503}},
	{0x93,{0x50,0x50,0x50}},
	{0x94,{0x12,0x12,0x12}},
	{0x95,{0xf,0xf,0xf}},
	{0x96,{0x0,0x0,0x0}},
	{0x97,{0x0,0x0,0x0}},
	{0x98,{0x0,0x0,0x0}},
	{0x99,{0x0,0x0,0x0}},
	{0x9a,{0x1,0x1,0x1}},
	{0x9b,{0x1fff,0x1fff,0x1fff}},
	{0x9c,{0x1,0x1,0x1}},
	{0x9d,{0x0,0x0,0x0}},
	{0x9e,{0x0,0x0,0x0}},
	{0x9f,{0x0,0x0,0x0}},
	{0xa0,{0x0,0x0,0x0}},
	{0xa1,{0x7ff,0x7ff,0x7ff}},
	{0xa2,{0x0,0x0,0x0}},
	{0xa3,{0x7ff,0x7ff,0x7ff}},
	{0xa4,{0x254a,0x254a,0x254a}},
	{0xa5,{0x34e9,0x34e9,0x34e9}},
	{0xa6,{0xb6d,0xb6d,0xb6d}},
	{0xa7,{0x5d1,0x5d1,0x5d1}},
	{0xa8,{0x434,0x434,0x434}},
	{0xa9,{0x0,0x0,0x0}},
	{0xaa,{0x0,0x0,0x0}},
	{0xab,{0x0,0x0,0x0}},
	{0xac,{0x0,0x0,0x0}},
	{0xad,{0x0,0x0,0x0}},
	{0xae,{0x0,0x0,0x0}},
	{0xaf,{0x0,0x0,0x0}},
	{0xb0,{0x0,0x0,0x0}},
	{0xb1,{0x0,0x0,0x0}},
	{0xb2,{0x1,0x1,0x1}},
	{0xb3,{0x0,0x0,0x0}},
	{0xb4,{0x0,0x0,0x0}},
	{0xb5,{0x0,0x0,0x0}},
	{0xb6,{0x0,0x0,0x0}},
	{0xb7,{0x0,0x0,0x0}},
	{0xb8,{0x0,0x0,0x0}},
	{0xb9,{0x0,0x0,0x0}},
	{0xba,{0x0,0x0,0x0}},
	{0xbb,{0x0,0x0,0x0}},
	{0xbc,{0x0,0x0,0x0}},
	{0xbd,{0x0,0x0,0x0}},
	{0xbe,{0x1,0x1,0x1}},
	{0xbf,{0x0,0x0,0x0}},
	{0xc0,{0x0,0x0,0x0}},
	{0xc1,{0x0,0x0,0x0}},
	{0xc2,{0x0,0x0,0x0}},
	{0xc3,{0x0,0x0,0x0}},
	{0xc4,{0x0,0x0,0x0}},
	{0xc5,{0x0,0x0,0x0}},
	{0xc6,{0x0,0x0,0x0}},
	{0xc7,{0x0,0x0,0x0}},
	{0xc8,{0x0,0x0,0x0}},
	{0xc9,{0x0,0x0,0x0}},
	{0xca,{0x0,0x0,0x0}},
	{0xcb,{0x0,0x0,0x0}},
	{0xcc,{0x0,0x0,0x0}},
	{0xcd,{0x0,0x0,0x0}},
	{0xce,{0x0,0x0,0x0}},
	{0xcf,{0x0,0x0,0x0}},
	{0xd0,{0x1f,0x1f,0x1f}},
	{0xd1,{0x1f,0x1f,0x1f}},
	{0xd2,{0x1f,0x1f,0x1f}},
	{0xd3,{0x1f,0x1f,0x1f}},
	{0xd4,{0x1f,0x1f,0x1f}},
	{0xd5,{0x1f,0x1f,0x1f}},
	{0xd6,{0x1f,0x1f,0x1f}},
	{0xd7,{0x1f,0x1f,0x1f}},
	{0xd8,{0x1f,0x1f,0x1f}},
	{0xd9,{0x1f,0x1f,0x1f}},
	{0xda,{0x1f,0x1f,0x1f}},
	{0xdb,{0x1f,0x1f,0x1f}},
	{0xdc,{0x1f,0x1f,0x1f}},
	{0xdd,{0x1f,0x1f,0x1f}},
	{0xde,{0x1f,0x1f,0x1f}},
	{0xdf,{0x1f,0x1f,0x1f}},
	{0xe0,{0x1f,0x1f,0x1f}},
	{0xe1,{0x1f,0x1f,0x1f}},
	{0xe2,{0x1f,0x1f,0x1f}},
	{0xe3,{0x1f,0x1f,0x1f}},
	{0xe4,{0x1f,0x1f,0x1f}},
	{0xe5,{0x1f,0x1f,0x1f}},
	{0xe6,{0x1f,0x1f,0x1f}},
	{0xe7,{0x1f,0x1f,0x1f}},
	{0xe8,{0x1f,0x1f,0x1f}},
	{0xe9,{0x1f,0x1f,0x1f}},
	{0xea,{0x1f,0x1f,0x1f}},
	{0xeb,{0x1f,0x1f,0x1f}},
	{0xec,{0x1f,0x1f,0x1f}},
	{0xed,{0x1f,0x1f,0x1f}},
	{0xee,{0x1f,0x1f,0x1f}},
	{0xef,{0x1f,0x1f,0x1f}},
	{0xf0,{0x1f,0x1f,0x1f}},
	{0xf1,{0x1f,0x1f,0x1f}},
	{0xf2,{0x1f,0x1f,0x1f}},
	{0xf3,{0x1f,0x1f,0x1f}},
	{0xf4,{0x1f,0x1f,0x1f}},
	{0xf5,{0x1f,0x1f,0x1f}},
	{0xf6,{0x1f,0x1f,0x1f}},
	{0xf7,{0x1f,0x1f,0x1f}},
	{0xf8,{0x1f,0x1f,0x1f}},
	{0xf9,{0x1f,0x1f,0x1f}},
	{0xfa,{0x1f,0x1f,0x1f}},
	{0xfb,{0x1f,0x1f,0x1f}},
	{0xfc,{0x1f,0x1f,0x1f}},
	{0xfd,{0x1f,0x1f,0x1f}},
	{0xfe,{0x1f,0x1f,0x1f}},
	{0xff,{0x1f,0x1f,0x1f}},
	{0xffffffff, {0, 0, 0}}
};

struct mv_ddr_subphys_reg_config a38x_data_phy_600[] = {
	{0x0,{0x4c0b,0x2441,0x6812,0x4c0b}},
	{0x1,{0x15,0xc,0x1c,0x14}},
	{0x2,{0xca,0x107,0x109,0xd2}},
	{0x3,{0xd,0xc,0xc,0xf}},
	{0x4,{0x4c0b,0x2842,0x6c13,0x540d}},
	{0x5,{0x16,0xc,0x1c,0x16}},
	{0x6,{0xca,0x105,0x10a,0xd3}},
	{0x7,{0xd,0xc,0xe,0x10}},
	{0x8,{0x0,0x0,0x0,0x0}},
	{0x9,{0x10,0x10,0x10,0x10}},
	{0xa,{0x0,0x0,0x0,0x0}},
	{0xb,{0x10,0x10,0x10,0x10}},
	{0xc,{0x0,0x0,0x0,0x0}},
	{0xd,{0x10,0x10,0x10,0x10}},
	{0xe,{0x0,0x0,0x0,0x0}},
	{0xf,{0x10,0x10,0x10,0x10}},
	{0x10,{0x6,0x2,0x3,0x1}},
	{0x11,{0x5,0x5,0x0,0x1}},
	{0x12,{0x2,0x3,0x6,0x1}},
	{0x13,{0x3,0x1,0x5,0x1}},
	{0x14,{0x3,0x2,0x6,0x1}},
	{0x15,{0x3,0x2,0x6,0x1}},
	{0x16,{0x4,0x1,0x7,0x3}},
	{0x17,{0x5,0x4,0x4,0x2}},
	{0x18,{0x3,0x0,0xd,0x0}},
	{0x19,{0x0,0x1,0x7,0x0}},
	{0x1a,{0x0,0x0,0x0,0x0}},
	{0x1b,{0x0,0x0,0x0,0x0}},
	{0x1c,{0x0,0x0,0x0,0x0}},
	{0x1d,{0x0,0x0,0x0,0x0}},
	{0x1e,{0x0,0x0,0x0,0x0}},
	{0x1f,{0x10,0x10,0x10,0x10}},
	{0x20,{0x2,0x2,0x6,0x5}},
	{0x21,{0x3,0x4,0x0,0x3}},
	{0x22,{0x3,0x3,0x7,0x4}},
	{0x23,{0x1,0x4,0x5,0x7}},
	{0x24,{0x3,0x2,0x4,0x3}},
	{0x25,{0x3,0x2,0x4,0x3}},
	{0x26,{0x4,0x5,0x7,0x5}},
	{0x27,{0x6,0x4,0x4,0x7}},
	{0x28,{0x1,0x0,0x9,0x0}},
	{0x29,{0x0,0x4,0x9,0x5}},
	{0x2a,{0x0,0x0,0x0,0x0}},
	{0x2b,{0x0,0x0,0x0,0x0}},
	{0x2c,{0x0,0x0,0x0,0x0}},
	{0x2d,{0x0,0x0,0x0,0x0}},
	{0x2e,{0x0,0x0,0x0,0x0}},
	{0x2f,{0xc,0xc,0xc,0xc}},
	{0x30,{0x0,0x0,0x0,0x0}},
	{0x31,{0x0,0x0,0x0,0x0}},
	{0x32,{0x0,0x0,0x0,0x0}},
	{0x33,{0x0,0x0,0x0,0x0}},
	{0x34,{0x0,0x0,0x0,0x0}},
	{0x35,{0x0,0x0,0x0,0x0}},
	{0x36,{0x0,0x0,0x0,0x0}},
	{0x37,{0x0,0x0,0x0,0x0}},
	{0x38,{0x0,0x0,0x0,0x0}},
	{0x39,{0x0,0x0,0x0,0x0}},
	{0x3a,{0x0,0x0,0x0,0x0}},
	{0x3b,{0x0,0x0,0x0,0x0}},
	{0x3c,{0x0,0x0,0x0,0x0}},
	{0x3d,{0x0,0x0,0x0,0x0}},
	{0x3e,{0x0,0x0,0x0,0x0}},
	{0x3f,{0x0,0x0,0x0,0x0}},
	{0x40,{0x0,0x0,0x0,0x0}},
	{0x41,{0x0,0x0,0x0,0x0}},
	{0x42,{0x0,0x0,0x0,0x0}},
	{0x43,{0x0,0x0,0x0,0x0}},
	{0x44,{0x0,0x0,0x0,0x0}},
	{0x45,{0x0,0x0,0x0,0x0}},
	{0x46,{0x0,0x0,0x0,0x0}},
	{0x47,{0x0,0x0,0x0,0x0}},
	{0x48,{0x0,0x0,0x0,0x0}},
	{0x49,{0x0,0x0,0x0,0x0}},
	{0x4a,{0x0,0x0,0x0,0x0}},
	{0x4b,{0x0,0x0,0x0,0x0}},
	{0x4c,{0x0,0x0,0x0,0x0}},
	{0x4d,{0x0,0x0,0x0,0x0}},
	{0x4e,{0x0,0x0,0x0,0x0}},
	{0x4f,{0x0,0x0,0x0,0x0}},
	{0x50,{0xc,0xe,0xc,0xb}},
	{0x51,{0xc,0x12,0xa,0xb}},
	{0x52,{0xb,0xe,0x10,0xb}},
	{0x53,{0xc,0xe,0xc,0xb}},
	{0x54,{0x4,0x4,0x4,0x1}},
	{0x55,{0x4,0x4,0x4,0x1}},
	{0x56,{0xc,0xd,0xd,0xa}},
	{0x57,{0xc,0xd,0xb,0xd}},
	{0x58,{0x12,0xa,0x12,0xa}},
	{0x59,{0xa,0xf,0x10,0xd}},
	{0x5a,{0x0,0x0,0x0,0x0}},
	{0x5b,{0x0,0x0,0x0,0x0}},
	{0x5c,{0x0,0x0,0x0,0x0}},
	{0x5d,{0x0,0x0,0x0,0x0}},
	{0x5e,{0x0,0x0,0x0,0x0}},
	{0x5f,{0xc,0xc,0xc,0xc}},
	{0x60,{0xb,0xe,0x10,0x13}},
	{0x61,{0xc,0xe,0xa,0xd}},
	{0x62,{0xc,0xc,0x10,0x10}},
	{0x63,{0xd,0xf,0xe,0xf}},
	{0x64,{0x2,0x3,0x9,0x4}},
	{0x65,{0x2,0x3,0x9,0x4}},
	{0x66,{0xe,0xd,0x10,0xc}},
	{0x67,{0xc,0x11,0xe,0x12}},
	{0x68,{0xc,0xa,0x14,0xa}},
	{0x69,{0xa,0xc,0x1c,0xc}},
	{0x6a,{0x0,0x0,0x0,0x0}},
	{0x6b,{0x0,0x0,0x0,0x0}},
	{0x6c,{0x0,0x0,0x0,0x0}},
	{0x6d,{0x0,0x0,0x0,0x0}},
	{0x6e,{0x0,0x0,0x0,0x0}},
	{0x6f,{0x17,0x17,0x17,0x17}},
	{0x70,{0x0,0x0,0x0,0x0}},
	{0x71,{0x0,0x0,0x0,0x0}},
	{0x72,{0x0,0x0,0x0,0x0}},
	{0x73,{0x0,0x0,0x0,0x0}},
	{0x74,{0x0,0x0,0x0,0x0}},
	{0x75,{0x0,0x0,0x0,0x0}},
	{0x76,{0x0,0x0,0x0,0x0}},
	{0x77,{0x0,0x0,0x0,0x0}},
	{0x78,{0x0,0x0,0x0,0x0}},
	{0x79,{0x0,0x0,0x0,0x0}},
	{0x7a,{0x0,0x0,0x0,0x0}},
	{0x7b,{0x0,0x0,0x0,0x0}},
	{0x7c,{0x0,0x0,0x0,0x0}},
	{0x7d,{0x0,0x0,0x0,0x0}},
	{0x7e,{0x0,0x0,0x0,0x0}},
	{0x7f,{0x0,0x0,0x0,0x0}},
	{0x80,{0x0,0x0,0x0,0x0}},
	{0x81,{0x0,0x0,0x0,0x0}},
	{0x82,{0x0,0x0,0x0,0x0}},
	{0x83,{0x0,0x0,0x0,0x0}},
	{0x84,{0x0,0x0,0x0,0x0}},
	{0x85,{0x0,0x0,0x0,0x0}},
	{0x86,{0x0,0x0,0x0,0x0}},
	{0x87,{0x0,0x0,0x0,0x0}},
	{0x88,{0x0,0x0,0x0,0x0}},
	{0x89,{0x0,0x0,0x0,0x0}},
	{0x8a,{0x0,0x0,0x0,0x0}},
	{0x8b,{0x0,0x0,0x0,0x0}},
	{0x8c,{0x0,0x0,0x0,0x0}},
	{0x8d,{0x0,0x0,0x0,0x0}},
	{0x8e,{0x0,0x0,0x0,0x0}},
	{0x8f,{0x0,0x0,0x0,0x0}},
	{0x90,{0x6002,0x6002,0x6002,0x6002}},
	{0x91,{0x0,0x0,0x0,0x0}},
	{0x92,{0x1503,0x1503,0x1503,0x1503}},
	{0x93,{0x50,0x50,0x50,0x50}},
	{0x94,{0x12,0x12,0x12,0x12}},
	{0x95,{0xf,0xf,0xf,0xf}},
	{0x96,{0x0,0x0,0x0,0x0}},
	{0x97,{0x0,0x0,0x0,0x0}},
	{0x98,{0x0,0x0,0x0,0x0}},
	{0x99,{0x0,0x0,0x0,0x0}},
	{0x9a,{0x1,0x1,0x1,0x1}},
	{0x9b,{0x1fff,0x1fff,0x1fff,0x1fff}},
	{0x9c,{0x1,0x1,0x1,0x1}},
	{0x9d,{0x0,0x0,0x0,0x0}},
	{0x9e,{0x0,0x0,0x0,0x0}},
	{0x9f,{0x0,0x0,0x0,0x0}},
	{0xa0,{0x0,0x0,0x0,0x0}},
	{0xa1,{0x7ff,0x7ff,0x7ff,0x7ff}},
	{0xa2,{0x0,0x0,0x0,0x0}},
	{0xa3,{0x7ff,0x7ff,0x7ff,0x7ff}},
	{0xa4,{0x3dfb,0x3dfb,0x3dfb,0x3dfb}},
	{0xa5,{0x34e9,0x34e9,0x34e9,0x34e9}},
	{0xa6,{0xb6d,0xb6d,0xb6d,0xb6d}},
	{0xa7,{0x5d1,0x5d1,0x5d1,0x5d1}},
	{0xa8,{0x434,0x434,0x434,0x434}},
	{0xa9,{0x0,0x0,0x0,0x0}},
	{0xaa,{0x0,0x0,0x0,0x0}},
	{0xab,{0x0,0x0,0x0,0x0}},
	{0xac,{0x0,0x0,0x0,0x0}},
	{0xad,{0x0,0x0,0x0,0x0}},
	{0xae,{0x0,0x0,0x0,0x0}},
	{0xaf,{0x0,0x0,0x0,0x0}},
	{0xb0,{0x0,0x0,0x0,0x0}},
	{0xb1,{0x0,0x0,0x0,0x0}},
	{0xb2,{0x1,0x1,0x1,0x1}},
	{0xb3,{0x0,0x0,0x0,0x0}},
	{0xb4,{0x0,0x0,0x0,0x0}},
	{0xb5,{0x0,0x0,0x0,0x0}},
	{0xb6,{0x0,0x0,0x0,0x0}},
	{0xb7,{0x0,0x0,0x0,0x0}},
	{0xb8,{0x0,0x0,0x0,0x0}},
	{0xb9,{0x0,0x0,0x0,0x0}},
	{0xba,{0x0,0x0,0x0,0x0}},
	{0xbb,{0x0,0x0,0x0,0x0}},
	{0xbc,{0x0,0x0,0x0,0x0}},
	{0xbd,{0x0,0x0,0x0,0x0}},
	{0xbe,{0x1,0x1,0x1,0x1}},
	{0xbf,{0x0,0x0,0x0,0x0}},
	{0xc0,{0x39c,0x33a,0x33c,0x35b}},
	{0xc1,{0x39b,0x33a,0x2fc,0x35b}},
	{0xc2,{0x0,0x0,0x0,0x0}},
	{0xc3,{0x0,0x0,0x0,0x0}},
	{0xc4,{0x0,0x0,0x0,0x0}},
	{0xc5,{0x0,0x0,0x0,0x0}},
	{0xc6,{0x0,0x0,0x0,0x0}},
	{0xc7,{0x0,0x0,0x0,0x0}},
	{0xc8,{0x0,0x0,0x0,0x0}},
	{0xc9,{0x0,0x0,0x0,0x0}},
	{0xca,{0x0,0x0,0x0,0x0}},
	{0xcb,{0x0,0x0,0x0,0x0}},
	{0xcc,{0x0,0x0,0x0,0x0}},
	{0xcd,{0x0,0x0,0x0,0x0}},
	{0xce,{0x0,0x0,0x0,0x0}},
	{0xcf,{0x0,0x0,0x0,0x0}},
	{0xd0,{0x3f,0x3f,0x3f,0x3f}},
	{0xd1,{0x3f,0x3f,0x3f,0x3f}},
	{0xd2,{0x3f,0x3f,0x3f,0x3f}},
	{0xd3,{0x3f,0x3f,0x3f,0x3f}},
	{0xd4,{0x1f,0x1f,0x1f,0x1f}},
	{0xd5,{0x1f,0x1f,0x1f,0x1f}},
	{0xd6,{0x3f,0x3f,0x3f,0x3f}},
	{0xd7,{0x3f,0x3f,0x3f,0x3f}},
	{0xd8,{0x3f,0x3f,0x3f,0x3f}},
	{0xd9,{0x3f,0x3f,0x3f,0x3f}},
	{0xda,{0x3f,0x3f,0x3f,0x3f}},
	{0xdb,{0x3f,0x3f,0x3f,0x3f}},
	{0xdc,{0x3f,0x3f,0x3f,0x3f}},
	{0xdd,{0x3f,0x3f,0x3f,0x3f}},
	{0xde,{0x3f,0x3f,0x3f,0x3f}},
	{0xdf,{0x3f,0x3f,0x3f,0x3f}},
	{0xe0,{0x1f,0x1f,0x1f,0x1f}},
	{0xe1,{0x1f,0x1f,0x1f,0x1f}},
	{0xe2,{0x3f,0x3f,0x3f,0x3f}},
	{0xe3,{0x3f,0x3f,0x3f,0x3f}},
	{0xe4,{0x3f,0x3f,0x3f,0x3f}},
	{0xe5,{0x3f,0x3f,0x3f,0x3f}},
	{0xe6,{0x3f,0x3f,0x3f,0x3f}},
	{0xe7,{0x3f,0x3f,0x3f,0x3f}},
	{0xe8,{0x3f,0x3f,0x3f,0x3f}},
	{0xe9,{0x3f,0x3f,0x3f,0x3f}},
	{0xea,{0x3f,0x3f,0x3f,0x3f}},
	{0xeb,{0x3f,0x3f,0x3f,0x3f}},
	{0xec,{0x1f,0x1f,0x1f,0x1f}},
	{0xed,{0x1f,0x1f,0x1f,0x1f}},
	{0xee,{0x3f,0x3f,0x3f,0x3f}},
	{0xef,{0x3f,0x3f,0x3f,0x3f}},
	{0xf0,{0x3f,0x3f,0x3f,0x3f}},
	{0xf1,{0x3f,0x3f,0x3f,0x3f}},
	{0xf2,{0x3f,0x3f,0x3f,0x3f}},
	{0xf3,{0x3f,0x3f,0x3f,0x3f}},
	{0xf4,{0x3f,0x3f,0x3f,0x3f}},
	{0xf5,{0x3f,0x3f,0x3f,0x3f}},
	{0xf6,{0x3f,0x3f,0x3f,0x3f}},
	{0xf7,{0x3f,0x3f,0x3f,0x3f}},
	{0xf8,{0x1f,0x1f,0x1f,0x1f}},
	{0xf9,{0x1f,0x1f,0x1f,0x1f}},
	{0xfa,{0x3f,0x3f,0x3f,0x3f}},
	{0xfb,{0x3f,0x3f,0x3f,0x3f}},
	{0xfc,{0x3f,0x3f,0x3f,0x3f}},
	{0xfd,{0x3f,0x3f,0x3f,0x3f}},
	{0xfe,{0x3f,0x3f,0x3f,0x3f}},
	{0xff,{0x3f,0x3f,0x3f,0x3f}},
	{0xffffffff, {0, 0, 0, 0}}
};

struct mv_ddr_subphys_reg_config a38x_data_phy_800[] = {
	{0x0,{0x6411,0x544d,0x7c17,0x6010}},
	{0x1,{0x19,0x16,0x1f,0x17}},
	{0x2,{0xc,0x51,0x57,0x1d}},
	{0x3,{0xf,0xc,0xa,0xd}},
	{0x4,{0x6010,0x544d,0x8018,0x6010}},
	{0x5,{0x18,0x15,0x1f,0x17}},
	{0x6,{0xd,0x52,0x58,0x1d}},
	{0x7,{0x10,0xb,0xb,0xe}},
	{0x8,{0x0,0x0,0x0,0x0}},
	{0x9,{0x10,0x10,0x10,0x10}},
	{0xa,{0x0,0x0,0x0,0x0}},
	{0xb,{0x10,0x10,0x10,0x10}},
	{0xc,{0x0,0x0,0x0,0x0}},
	{0xd,{0x10,0x10,0x10,0x10}},
	{0xe,{0x0,0x0,0x0,0x0}},
	{0xf,{0x10,0x10,0x10,0x10}},
	{0x10,{0x6,0x1,0x3,0x2}},
	{0x11,{0x4,0x4,0x0,0x1}},
	{0x12,{0x2,0x2,0x7,0x2}},
	{0x13,{0x3,0x0,0x5,0x2}},
	{0x14,{0x3,0x2,0x6,0x2}},
	{0x15,{0x3,0x2,0x6,0x2}},
	{0x16,{0x4,0x1,0x7,0x4}},
	{0x17,{0x4,0x3,0x5,0x3}},
	{0x18,{0x2,0x1,0xd,0x1}},
	{0x19,{0x0,0x0,0x8,0x0}},
	{0x1a,{0x0,0x0,0x0,0x0}},
	{0x1b,{0x0,0x0,0x0,0x0}},
	{0x1c,{0x0,0x0,0x0,0x0}},
	{0x1d,{0x0,0x0,0x0,0x0}},
	{0x1e,{0x0,0x0,0x0,0x0}},
	{0x1f,{0xe,0xe,0xe,0xe}},
	{0x20,{0x2,0x1,0x7,0x6}},
	{0x21,{0x3,0x3,0x0,0x2}},
	{0x22,{0x4,0x2,0x8,0x4}},
	{0x23,{0x2,0x3,0x5,0x7}},
	{0x24,{0x3,0x2,0x5,0x3}},
	{0x25,{0x3,0x2,0x5,0x3}},
	{0x26,{0x5,0x4,0x8,0x5}},
	{0x27,{0x6,0x3,0x5,0x7}},
	{0x28,{0x2,0x0,0xa,0x0}},
	{0x29,{0x0,0x3,0xa,0x5}},
	{0x2a,{0x0,0x0,0x0,0x0}},
	{0x2b,{0x0,0x0,0x0,0x0}},
	{0x2c,{0x0,0x0,0x0,0x0}},
	{0x2d,{0x0,0x0,0x0,0x0}},
	{0x2e,{0x0,0x0,0x0,0x0}},
	{0x2f,{0xf,0xf,0xf,0xf}},
	{0x30,{0x0,0x0,0x0,0x0}},
	{0x31,{0x0,0x0,0x0,0x0}},
	{0x32,{0x0,0x0,0x0,0x0}},
	{0x33,{0x0,0x0,0x0,0x0}},
	{0x34,{0x0,0x0,0x0,0x0}},
	{0x35,{0x0,0x0,0x0,0x0}},
	{0x36,{0x0,0x0,0x0,0x0}},
	{0x37,{0x0,0x0,0x0,0x0}},
	{0x38,{0x0,0x0,0x0,0x0}},
	{0x39,{0x0,0x0,0x0,0x0}},
	{0x3a,{0x0,0x0,0x0,0x0}},
	{0x3b,{0x0,0x0,0x0,0x0}},
	{0x3c,{0x0,0x0,0x0,0x0}},
	{0x3d,{0x0,0x0,0x0,0x0}},
	{0x3e,{0x0,0x0,0x0,0x0}},
	{0x3f,{0x0,0x0,0x0,0x0}},
	{0x40,{0x0,0x0,0x0,0x0}},
	{0x41,{0x0,0x0,0x0,0x0}},
	{0x42,{0x0,0x0,0x0,0x0}},
	{0x43,{0x0,0x0,0x0,0x0}},
	{0x44,{0x0,0x0,0x0,0x0}},
	{0x45,{0x0,0x0,0x0,0x0}},
	{0x46,{0x0,0x0,0x0,0x0}},
	{0x47,{0x0,0x0,0x0,0x0}},
	{0x48,{0x0,0x0,0x0,0x0}},
	{0x49,{0x0,0x0,0x0,0x0}},
	{0x4a,{0x0,0x0,0x0,0x0}},
	{0x4b,{0x0,0x0,0x0,0x0}},
	{0x4c,{0x0,0x0,0x0,0x0}},
	{0x4d,{0x0,0x0,0x0,0x0}},
	{0x4e,{0x0,0x0,0x0,0x0}},
	{0x4f,{0x0,0x0,0x0,0x0}},
	{0x50,{0xd,0xf,0xc,0xe}},
	{0x51,{0xd,0xf,0xa,0xe}},
	{0x52,{0xb,0xd,0xd,0xe}},
	{0x53,{0xc,0x11,0xc,0xe}},
	{0x54,{0x2,0x3,0x3,0x2}},
	{0x55,{0x2,0x3,0x3,0x2}},
	{0x56,{0xc,0xd,0xd,0xb}},
	{0x57,{0xd,0xf,0xb,0xf}},
	{0x58,{0xe,0xa,0x10,0xa}},
	{0x59,{0xa,0xf,0x10,0xe}},
	{0x5a,{0x0,0x0,0x0,0x0}},
	{0x5b,{0x0,0x0,0x0,0x0}},
	{0x5c,{0x0,0x0,0x0,0x0}},
	{0x5d,{0x0,0x0,0x0,0x0}},
	{0x5e,{0x0,0x0,0x0,0x0}},
	{0x5f,{0x9,0x9,0x9,0x9}},
	{0x60,{0xd,0xb,0xf,0x13}},
	{0x61,{0xe,0xb,0xa,0xf}},
	{0x62,{0xe,0xc,0xf,0x10}},
	{0x63,{0x10,0xd,0xd,0x10}},
	{0x64,{0x3,0x2,0x6,0x4}},
	{0x65,{0x3,0x2,0x6,0x4}},
	{0x66,{0x10,0xb,0xf,0xe}},
	{0x67,{0x10,0xe,0xe,0x11}},
	{0x68,{0xe,0xa,0x12,0xa}},
	{0x69,{0xa,0xb,0x17,0xe}},
	{0x6a,{0x0,0x0,0x0,0x0}},
	{0x6b,{0x0,0x0,0x0,0x0}},
	{0x6c,{0x0,0x0,0x0,0x0}},
	{0x6d,{0x0,0x0,0x0,0x0}},
	{0x6e,{0x0,0x0,0x0,0x0}},
	{0x6f,{0xe,0xe,0xe,0xe}},
	{0x70,{0x0,0x0,0x0,0x0}},
	{0x71,{0x0,0x0,0x0,0x0}},
	{0x72,{0x0,0x0,0x0,0x0}},
	{0x73,{0x0,0x0,0x0,0x0}},
	{0x74,{0x0,0x0,0x0,0x0}},
	{0x75,{0x0,0x0,0x0,0x0}},
	{0x76,{0x0,0x0,0x0,0x0}},
	{0x77,{0x0,0x0,0x0,0x0}},
	{0x78,{0x0,0x0,0x0,0x0}},
	{0x79,{0x0,0x0,0x0,0x0}},
	{0x7a,{0x0,0x0,0x0,0x0}},
	{0x7b,{0x0,0x0,0x0,0x0}},
	{0x7c,{0x0,0x0,0x0,0x0}},
	{0x7d,{0x0,0x0,0x0,0x0}},
	{0x7e,{0x0,0x0,0x0,0x0}},
	{0x7f,{0x0,0x0,0x0,0x0}},
	{0x80,{0x0,0x0,0x0,0x0}},
	{0x81,{0x0,0x0,0x0,0x0}},
	{0x82,{0x0,0x0,0x0,0x0}},
	{0x83,{0x0,0x0,0x0,0x0}},
	{0x84,{0x0,0x0,0x0,0x0}},
	{0x85,{0x0,0x0,0x0,0x0}},
	{0x86,{0x0,0x0,0x0,0x0}},
	{0x87,{0x0,0x0,0x0,0x0}},
	{0x88,{0x0,0x0,0x0,0x0}},
	{0x89,{0x0,0x0,0x0,0x0}},
	{0x8a,{0x0,0x0,0x0,0x0}},
	{0x8b,{0x0,0x0,0x0,0x0}},
	{0x8c,{0x0,0x0,0x0,0x0}},
	{0x8d,{0x0,0x0,0x0,0x0}},
	{0x8e,{0x0,0x0,0x0,0x0}},
	{0x8f,{0x0,0x0,0x0,0x0}},
	{0x90,{0x6002,0x6002,0x6002,0x6002}},
	{0x91,{0x0,0x0,0x0,0x0}},
	{0x92,{0x1503,0x1503,0x1503,0x1503}},
	{0x93,{0x50,0x50,0x50,0x50}},
	{0x94,{0x12,0x12,0x12,0x12}},
	{0x95,{0xf,0xf,0xf,0xf}},
	{0x96,{0x0,0x0,0x0,0x0}},
	{0x97,{0x0,0x0,0x0,0x0}},
	{0x98,{0x0,0x0,0x0,0x0}},
	{0x99,{0x0,0x0,0x0,0x0}},
	{0x9a,{0x1,0x1,0x1,0x1}},
	{0x9b,{0x1fff,0x1fff,0x1fff,0x1fff}},
	{0x9c,{0x1,0x1,0x1,0x1}},
	{0x9d,{0x0,0x0,0x0,0x0}},
	{0x9e,{0x0,0x0,0x0,0x0}},
	{0x9f,{0x0,0x0,0x0,0x0}},
	{0xa0,{0x0,0x0,0x0,0x0}},
	{0xa1,{0x7ff,0x7ff,0x7ff,0x7ff}},
	{0xa2,{0x0,0x0,0x0,0x0}},
	{0xa3,{0x7ff,0x7ff,0x7ff,0x7ff}},
	{0xa4,{0x3dfb,0x3dfb,0x3dfb,0x3dfb}},
	{0xa5,{0x34e9,0x34e9,0x34e9,0x34e9}},
	{0xa6,{0xb6d,0xb6d,0xb6d,0xb6d}},
	{0xa7,{0x5d1,0x5d1,0x5d1,0x5d1}},
	{0xa8,{0x434,0x434,0x434,0x434}},
	{0xa9,{0x0,0x0,0x0,0x0}},
	{0xaa,{0x0,0x0,0x0,0x0}},
	{0xab,{0x0,0x0,0x0,0x0}},
	{0xac,{0x0,0x0,0x0,0x0}},
	{0xad,{0x0,0x0,0x0,0x0}},
	{0xae,{0x0,0x0,0x0,0x0}},
	{0xaf,{0x0,0x0,0x0,0x0}},
	{0xb0,{0x0,0x0,0x0,0x0}},
	{0xb1,{0x0,0x0,0x0,0x0}},
	{0xb2,{0x1,0x1,0x1,0x1}},
	{0xb3,{0x0,0x0,0x0,0x0}},
	{0xb4,{0x0,0x0,0x0,0x0}},
	{0xb5,{0x0,0x0,0x0,0x0}},
	{0xb6,{0x0,0x0,0x0,0x0}},
	{0xb7,{0x0,0x0,0x0,0x0}},
	{0xb8,{0x0,0x0,0x0,0x0}},
	{0xb9,{0x0,0x0,0x0,0x0}},
	{0xba,{0x0,0x0,0x0,0x0}},
	{0xbb,{0x0,0x0,0x0,0x0}},
	{0xbc,{0x0,0x0,0x0,0x0}},
	{0xbd,{0x0,0x0,0x0,0x0}},
	{0xbe,{0x1,0x1,0x1,0x1}},
	{0xbf,{0x0,0x0,0x0,0x0}},
	{0xc0,{0x33a,0x2ba,0x2ba,0x339}},
	{0xc1,{0x2f8,0x2bb,0x2db,0x339}},
	{0xc2,{0x0,0x0,0x0,0x0}},
	{0xc3,{0x0,0x0,0x0,0x0}},
	{0xc4,{0x0,0x0,0x0,0x0}},
	{0xc5,{0x0,0x0,0x0,0x0}},
	{0xc6,{0x0,0x0,0x0,0x0}},
	{0xc7,{0x0,0x0,0x0,0x0}},
	{0xc8,{0x0,0x0,0x0,0x0}},
	{0xc9,{0x0,0x0,0x0,0x0}},
	{0xca,{0x0,0x0,0x0,0x0}},
	{0xcb,{0x0,0x0,0x0,0x0}},
	{0xcc,{0x0,0x0,0x0,0x0}},
	{0xcd,{0x0,0x0,0x0,0x0}},
	{0xce,{0x0,0x0,0x0,0x0}},
	{0xcf,{0x0,0x0,0x0,0x0}},
	{0xd0,{0x3f,0x3f,0x3f,0x3f}},
	{0xd1,{0x3f,0x3f,0x3f,0x3f}},
	{0xd2,{0x3f,0x3f,0x3f,0x3f}},
	{0xd3,{0x3f,0x3f,0x3f,0x3f}},
	{0xd4,{0x1f,0x1f,0x1f,0x1f}},
	{0xd5,{0x1f,0x1f,0x1f,0x1f}},
	{0xd6,{0x3f,0x3f,0x3f,0x3f}},
	{0xd7,{0x3f,0x3f,0x3f,0x3f}},
	{0xd8,{0x3f,0x3f,0x3f,0x3f}},
	{0xd9,{0x3f,0x3f,0x3f,0x3f}},
	{0xda,{0x3f,0x3f,0x3f,0x3f}},
	{0xdb,{0x3f,0x3f,0x3f,0x3f}},
	{0xdc,{0x3f,0x3f,0x3f,0x3f}},
	{0xdd,{0x3f,0x3f,0x3f,0x3f}},
	{0xde,{0x3f,0x3f,0x3f,0x3f}},
	{0xdf,{0x3f,0x3f,0x3f,0x3f}},
	{0xe0,{0x1f,0x1f,0x1f,0x1f}},
	{0xe1,{0x1f,0x1f,0x1f,0x1f}},
	{0xe2,{0x3f,0x3f,0x3f,0x3f}},
	{0xe3,{0x3f,0x3f,0x3f,0x3f}},
	{0xe4,{0x3f,0x3f,0x3f,0x3f}},
	{0xe5,{0x3f,0x3f,0x3f,0x3f}},
	{0xe6,{0x3f,0x3f,0x3f,0x3f}},
	{0xe7,{0x3f,0x3f,0x3f,0x3f}},
	{0xe8,{0x3f,0x3f,0x3f,0x3f}},
	{0xe9,{0x3f,0x3f,0x3f,0x3f}},
	{0xea,{0x3f,0x3f,0x3f,0x3f}},
	{0xeb,{0x3f,0x3f,0x3f,0x3f}},
	{0xec,{0x1f,0x1f,0x1f,0x1f}},
	{0xed,{0x1f,0x1f,0x1f,0x1f}},
	{0xee,{0x3f,0x3f,0x3f,0x3f}},
	{0xef,{0x3f,0x3f,0x3f,0x3f}},
	{0xf0,{0x3f,0x3f,0x3f,0x3f}},
	{0xf1,{0x3f,0x3f,0x3f,0x3f}},
	{0xf2,{0x3f,0x3f,0x3f,0x3f}},
	{0xf3,{0x3f,0x3f,0x3f,0x3f}},
	{0xf4,{0x3f,0x3f,0x3f,0x3f}},
	{0xf5,{0x3f,0x3f,0x3f,0x3f}},
	{0xf6,{0x3f,0x3f,0x3f,0x3f}},
	{0xf7,{0x3f,0x3f,0x3f,0x3f}},
	{0xf8,{0x1f,0x1f,0x1f,0x1f}},
	{0xf9,{0x1f,0x1f,0x1f,0x1f}},
	{0xfa,{0x3f,0x3f,0x3f,0x3f}},
	{0xfb,{0x3f,0x3f,0x3f,0x3f}},
	{0xfc,{0x3f,0x3f,0x3f,0x3f}},
	{0xfd,{0x3f,0x3f,0x3f,0x3f}},
	{0xfe,{0x3f,0x3f,0x3f,0x3f}},
	{0xff,{0x3f,0x3f,0x3f,0x3f}},
	{0xffffffff, {0, 0, 0, 0}}
};
#endif /* SUPPORT_STATIC_PHY_CONFIG */

#endif /* _MV_DDR_A38X_PHY_STATIC_H */
