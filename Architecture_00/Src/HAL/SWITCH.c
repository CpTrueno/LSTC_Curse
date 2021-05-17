/*
 * SWITCH.c
 *
 *  Created on: May 7, 2021
 *      Author: j.cespedes
 */


// -- Drivers
#include "SWITCH_.h"
#include "SWITCH.h"

// -- System
#include "SYSTEM_.h"
#include "SYSTEM.h"	//Tengo dudas de si va en esta capa - CREO que NO le TOCA

#include "CORTEXM_TYPES.h"
#include "STM32F042_REGS_.h"
#include "CORTEX_M0_.h"
#include <STDINT.H>

/* ****************************************************************************
 * DEFINICIONES Y CONSTANTES
 *************************************************************************** */

/** Construcción &(1<<1) ==> El primer número indica el valor en bits que va a tomar
 * la posición del segundo número. En los ejemplos de BTN_D6 y BTN_D3 en el primer caso
 * se carga un "1" en el registro IDR del puerto B en la posición "1", para acceder al estado
 * del Pin D6//PB1.
 * En el segudno caso se carga el "1" en la posición "0" para ver el estado del Pin D3//PB0
 * move to upper 16 bits
 */

#define READ_D6 (*GPIOB_IDR &(1<<1))	// Acceso al registro de lectura del pin PB1
#define READ_D3 (*GPIOB_IDR &(1<<0))	// Acceso al registro de lectura del pin PB0

static int32_t reg_btn_0 [4] = {0};
static int32_t reg_btn_1 [4] = {0};

/* ***************************************************************************
 * VARIABLES
 ************************************************************************** */


/* ############################################################################
 * ########        SISTEMA        #############################################
 * ######################################################################### */

/* ****************************************************************************
 * INICIALIZACIONES HARDWARE
 * ************************************************************************* */

void SWITCH_Ini(){
    *GPIOB_MODER &= ~0x0000000F;	/* PB0 y PB1 como ... PINES D6 y D3 */
    *GPIOB_MODER |=  0x00000000;	/* ... entrada */

    *GPIOB_PUPDR &= ~0x0000000F;	/* PB0 y PB1 con ...*/
    *GPIOB_PUPDR |=  0x00000005;	/* ... pull-up */

}

void SWITCH_per(){

	static uint32_t i;

	if(READ_D6){
		reg_btn_0[i] = 1;
	}
	else{
		reg_btn_0[i] = 0;
	}

	if(READ_D3){
		reg_btn_1[i] = 1;
	}
	else{
		reg_btn_1[i] = 0;
	}

	if(i>=3){
		i=0;
	}
	else{
		i++;
	}

}

/* ##########################################################################
 * ########        APLICACIÓN        ########################################
 * ####################################################################### */

/* ****************************************************************************
 * DEVOLVER EL ESTADO DE LOS BOTONES
 * ************************************************************************* */

void SWITCH_Set(){

}

int SWITCH_Get_BTN_0(){
	if(!(reg_btn_0[0]==1 && reg_btn_0[1]==1 && reg_btn_0[2]==1 && reg_btn_0[3]==1)){		//reg_btn_0[0]==1 && reg_btn_0[1]==1 && reg_btn_0[2]==1 && reg_btn_0[3]==1
		return 1;
	}
	else if (!(reg_btn_0[0]==0 && reg_btn_0[1]==0 && reg_btn_0[2]==01 && reg_btn_0[3]==0)){
		return 0;
	}
	else{
		return 'E';
	}
}

int SWITCH_Get_BTN_1(){
	if(!(reg_btn_1[0]==1 && reg_btn_1[1]==1 && reg_btn_1[2]==1 && reg_btn_1[3]==1)){
		return 1;
	}
	else if(!(reg_btn_1[0]==0 && reg_btn_1[1]==0 && reg_btn_1[2]==0 && reg_btn_1[3]==0)){
		return 0;
	}
	else
		return 'E';
}
