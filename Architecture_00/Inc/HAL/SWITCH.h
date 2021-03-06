/*
 * SWITCH.h
 *
 *  Created on: May 7, 2021
 *      Author: j.cespedes
 */

#ifndef HAL_SWITCH_H_
#define HAL_SWITCH_H_

#define SWITCH_BIT_ACTUALSTAT	(0x00000001)
#define SWITCH_BIT_EDGEON		(0x00000010)
#define SWITCH_BIT_EDGEOFF		(0x00000020)
#define SWITCH_BIT_FLAGLONGON	(0x00000040)
#define SWITCH_BIT_FLAGREPEAT	(0x00000100)

#include "CORTEXM_TYPES.h"

uint32_t SWITCH_Get_BTN_0();
uint32_t SWITCH_Get_BTN_1();
uint32_t SWITCH_Get_BeforeState_1();
uint32_t SWITCH_Get_BeforeState_2();
uint32_t SWITCH_Get_AutoRepeat_1();
uint32_t SWITCH_Get_AutoRepeat_2();
uint32_t SWITCH_GetStatus(uint32_t btn);
uint32_t SWITCH_GetBefore(uint32_t btn);

#endif /* HAL_SWITCH_H_ */
