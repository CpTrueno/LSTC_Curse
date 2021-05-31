/* ***************************************************************************
 * SWITCH.h
 * ************************************************************************ */

#ifndef SWITCH_H_
#define SWITCH_H_

#define SWITCH_BIT_ACTUALSTAT	(0x00000001)
#define SWITCH_BIT_EDGEON		(0x00000010)
#define SWITCH_BIT_EDGEOFF		(0x00000020)
#define SWITCH_BIT_FLAGLONGON	(0x00000040)
#define SWITCH_BIT_FLAGREPEAT	(0x00000100)

uint32_t SWITCH_GetSW1(void);
uint32_t SWITCH_GetSW2(void);

#endif /* SWITCH__H_ */
