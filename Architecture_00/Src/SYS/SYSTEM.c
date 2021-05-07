/*
 * SYSTEM.c
 *
 *  Created on: May 7, 2021
 *      Author: j.cespedes
 */
// -- Drivers
#include "HAL\ANALOG_.h"
#include "HAL\BUZZ_.h"
#include "HAL\CAN_.h"
#include "HAL\I2C_.h"
#include "HAL\LED_.h"
#include "HAL\SERIE_.h"
#include "HAL\SWITCH_.h"

// -- System
#include "SYS\SYSTEM_.h"
#include "SYS\SYSTEM.h"

//#include "SYS\CORTEXM_TYPES.h"
#include "SYS\STM32F042_REGS_.h"
#include "SYS\CORTEX_M0_.h"
#include <STDINT.H>

/* ****************************************************************************
 * DEFINICIONES Y CONSTANTES
 *************************************************************************** */
void SYSTEM_Ini(void);
void ANALOG_Ini(void);
void I2C_Ini(void);
void SERIE_Ini(void);
void LED_Ini(void);
void SWITCH_Ini(void);
void CAN_Ini(void);
void BUZZ_Ini(void);

void CLOCK_Ini(uint32_t CLK, uint32_t P_DIV);

#define CLK		8000000		/* 8MHz Velocidad del reloj en Hz */
#define RITHM	1000		/* Periodo de interrupción */

/* ***************************************************************************
 * VARIABLES
 ************************************************************************** */


/* ############################################################################
 * ########        SISTEMA        #############################################
 * ######################################################################### */

/* ****************************************************************************
 * INICIALIZACIONES HARDWARE
 * ************************************************************************* */

void SYSTEM_Ini(){

	// Init Ports
	*RCC_AHBENR |= 0x007E0000;  /* ENABLE ALL PORTS (COMMON) */

	// Init Drivers
	CLOCK_Ini(CLK,RITHM);

	ANALOG_Ini();
	BUZZ_Ini();
	CAN_Ini();
	I2C_Ini();
	LED_Ini();
	SERIE_Ini();
	SWITCH_Ini();

}


/* ##########################################################################
 * ########        APLICACIÓN        ########################################
 * ####################################################################### */

/* ****************************************************************************
 * FIJAR EL ESTADO DE xxx
 * ************************************************************************* */
