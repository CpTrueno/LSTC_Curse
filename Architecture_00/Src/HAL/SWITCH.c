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
//#define BTN_0 ((volatile unsigned int *)(GPIOB_BASE+0x10))
#define BTN_1 ((volatile unsigned int *)(GPIOB_BASE+0x11))

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
    *GPIOB_MODER &= ~0x0000000F;	/* PB0 y PB1 como ... */
    *GPIOB_MODER |=  0x00000000;	/* ... entrada */

    *GPIOB_PUPDR &= ~0x0000000F;	/* PB0 y PB1 con ...*/
    *GPIOB_PUPDR |=  0x00000005;	/* ... pull-up */


}

void SWITCH_per(){

	static uint32_t i;

/*	if(*BTN_1 == 1){
		reg_btn_0[i] = 1;
	}
	else{
		reg_btn_0[i] = 0;
	}	*/

	if((*GPIOB_IDR &(1<<1))){
		reg_btn_0[i] = 1;
	}
	else{
		reg_btn_0[i] = 0;
	}

	if((*GPIOB_IDR &(2<<2))){
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
	if(!(reg_btn_0[0]==1 && reg_btn_0[1]==1 && reg_btn_0[2]==1 && reg_btn_0[3]==1)){
		return 1;
	}
	else if (!(reg_btn_0[0]==0 && reg_btn_0[1]==0 && reg_btn_0[2]==01 && reg_btn_0[3]==0)){
		return 0;
	}
	else
		return 2;
}

int SWITCH_Get_BTN_1(){
	if(!(reg_btn_1[0]==1 && reg_btn_1[1]==1 && reg_btn_1[2]==1 && reg_btn_1[3]==1)){
		return 1;
	}
	else if(!(reg_btn_1[0]==0 && reg_btn_1[1]==0 && reg_btn_1[2]==0 && reg_btn_1[3]==0)){
		return 0;
	}
	else
		return 2;
}
