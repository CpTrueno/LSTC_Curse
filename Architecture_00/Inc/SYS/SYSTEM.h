/*
 * SYSTEM.h
 *
 *  Created on: May 7, 2021
 *      Author: j.cespedes
 */

#ifndef SYS_SYSTEM_H_
#define SYS_SYSTEM_H_

void SYSTEM_Ini(void);

#include "ANALOG.h"
#include "BUZZ.h"
#include "CAN.h"
#include "I2C.h"
#include "LED.h"
#include "SERIE.h"
#include "SWITCH.h"
#include "CLOCK.h"

#define SYSTEM_ID_TIMER1	(1)
#define SYSTEM_ID_TIMER2	(2)

uint32_t SYSTEM_GetTiempoON(void);
uint32_t SISTEM_SetTimer(uint32_t timer, uint32_t time);
uint32_t SISTEM_GetTimer(uint32_t timer);

#endif /* SYS_SYSTEM_H_ */
