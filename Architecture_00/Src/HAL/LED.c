/*
 * LED.c
 *
 *  Created on: May 7, 2021
 *      Author: j.cespedes
 */


// -- Drivers
#include "LED_.h"
//#include "LED.h"

// -- System
//#include "SYSTEM_.h"
//#include "SYSTEM.h"	//Tengo dudas de si va en esta capa - CREO que NO le TOCA

#include "CORTEXM_TYPES.h"
#include "STM32F042_REGS_.h"
#include "CORTEX_M0_.h"

/* ****************************************************************************
 * DEFINICIONES Y CONSTANTES
 *************************************************************************** */

#define LED_PCB 0x00000008				// Dirección fisica
#define LED_ON	*GPIOB_ODR |= (1<<3)	// Cambiamos el Bit del registro a 1
#define LED_OFF	*GPIOB_ODR &= (0<<3)	// Cambiamos el Bit del registro a 0

/* ***************************************************************************
 * VARIABLES
 ************************************************************************** */
static uint32_t ImageLED;

struct GPIO LED;

/* ############################################################################
 * ########        SISTEMA        #############################################
 * ######################################################################### */

/* ****************************************************************************
 * INICIALIZACIONES HARDWARE
 * ************************************************************************* */

void LED_Ini(){

	LED.Mode = (*GPIOB_MODER &= ~(RESET_REG<<6));            /* PB3 como ... */
	LED.Mode = (*GPIOB_MODER |= (OUTPUT<<6));                /* ... salida */

}


void LED_per()
{
static uint32_t phase;
    /* --- EXTRACCIÓN DE MÁSCARA ----------------------------------------- */
    uint32_t mask = 1 << ((phase/125) % 32);

    /* --- APLICACIÓN DEL ESTADO ACTUAL AL LED --------------------------- */
    if ((mask & ImageLED) == 0)
    {
    	LED_OFF;					/* PB3 a nivel bajo */
    }
	else
    {
		LED_ON;						/* PB3 a nivel alto */
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
}

void LED_Set_On(){
	LED_ON;
}

void LED_Set_Off(){
	LED_OFF;
}
