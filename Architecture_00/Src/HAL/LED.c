/*
 * LED.c
 *
 *  Created on: May 7, 2021
 *      Author: j.cespedes
 */


// -- Drivers
#include "HAL\LED_.h"
#include "HAL\LED.h"

// -- System
#include "SYS\SYSTEM_.h"
#include "SYS\SYSTEM.h"	//Tengo dudas de si va en esta capa - CREO que NO le TOCA

#include "SYS\CORTEXM_TYPES.h"
#include "SYS\STM32F042_REGS_.h"
#include "SYS\CORTEX_M0_.h"

/* ****************************************************************************
 * DEFINICIONES Y CONSTANTES
 *************************************************************************** */


/* ***************************************************************************
 * VARIABLES
 ************************************************************************** */
static uint32_t ImageLED;

/* ############################################################################
 * ########        SISTEMA        #############################################
 * ######################################################################### */

/* ****************************************************************************
 * INICIALIZACIONES HARDWARE
 * ************************************************************************* */

void LED_Ini(){

    *GPIOB_MODER &= ~0x000000C0;	/* PB3 como ... */
    *GPIOB_MODER |=  0x00000040;	/* ... salida */

}

void SysTick_Handler()
{
static uint32_t phase;
    /* --- EXTRACCIÓN DE MÁSCARA ----------------------------------------- */
    uint32_t mask = 1 << ((phase/125) % 32);

    /* --- APLICACIÓN DEL ESTADO ACTUAL AL LED --------------------------- */

    if ((mask & ImageLED) == 0)
    {
		*GPIOB_ODR &= ~0x00000008;		/* PB3 a nivel bajo */
    }
    else
    {
		*GPIOB_ODR |= 0x00000008;		/* PB3 a nivel bajo */
    }
    /* --- INCREMENTO DE FASE -------------------------------------------- */
    ++phase;
}


/* ##########################################################################
 * ########        APLICACIÓN        ########################################
 * ####################################################################### */

/* ****************************************************************************
 * FIJAR EL ESTADO DE xxx
 * ************************************************************************* */

void  LED_Set(uint32_t stat){
	ImageLED = stat;
//	return(stat);
}

void LED_Get(){

}
