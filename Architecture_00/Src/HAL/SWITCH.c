/**
 * \file
 * \brief	MÓDULO DE CONTROL DE PULSADORES
 *
 * \author	JM.Céspedes
 * \date   MAY,19. 2021
 *
 * # HARDWARE
 *
 * | PUERTO | DESCRIPCIÓN                            |  PIN  |
 * |--------|----------------------------------------|-------|
 * |   PB0  | Entrada del pulsador #1                |  D3   |
 * |   PB1  | Entrada del pulsador #2                |  D6   |
 *
 *
 * # RECURSOS
 *
 * Puertos indicados en "HARDWARE"
 *
 * # NOTAS
 *
 */

#include "CORTEXM_TYPES.h"
#include "STM32F042_REGS_.h"
#include "CORTEX_M0_.h"
#include <STDINT.H>

// -- Drivers
#include "SWITCH_.h"

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

#define READ_PB1 (*GPIOB_IDR &(1<<1))	// Acceso al registro de lectura del pin PB1
#define READ_PB0 (*GPIOB_IDR &(1<<0))	// Acceso al registro de lectura del pin PB0

#define PB0	0
#define PB1	2

#define MASK	0x00000FFF	/* Máscara de 12 bits (12 ms) */

#define TEMPOLONG	(1000)		/* Tiempo para considerar pulsación larga */
#define TEMPOAUTO	(1300)		/* Tiempo para comenzar autorepetición */
#define RITMOAUTO	(200)		/* Ritmo de flag de autorepetición */

// ---- Vectors --
#define BTN			2
#define SIZE 		(BTN)
#define MASK_V		(SIZE-1)

static uint32_t 	switchInput[SIZE];
static uint32_t 	switchStat[SIZE];
static uint32_t 	switchBeforestate[SIZE];
static uint32_t		switchCuenta[SIZE];	/* Contador de tiempo para larga y auto */


/* ***************************************************************************
 * VARIABLES
 ************************************************************************** */


// struct GPIO BTN_1, BTN_2;


/* ############################################################################
 * ########        SISTEMA        #############################################
 * ######################################################################### */

/* ****************************************************************************
 * INICIALIZACIONES HARDWARE
 * ************************************************************************* */

void SWITCH_Ini(){

	(*GPIOB_MODER |= (INPUT<<PB0)); 	/* PB0 y PB1 como ... PINES D6 y D3 */
	(*GPIOB_MODER |= (INPUT<<PB1));		/* Utilizando el desplazamiento de bit */

    (*GPIOB_PUPDR &= ~(RESET_REG<<PB0));	// Reset config in PB0
    (*GPIOB_PUPDR |= (PULL_UP<<PB0)); 		// Set pull-up in PB0

    (*GPIOB_PUPDR &= ~(RESET_REG<<PB1));	// Reset config in PB1
    (*GPIOB_PUPDR |= (PULL_UP<<PB1));		// Set pull-up in PB1

    for(int i = 0; i<SIZE; i++){		/* Inicialización de las variables */
    	switchStat[i] = 0x00000000;
    	switchBeforestate[i] = 0x00000000;
		switchInput[i] = 0x00000000;
		switchCuenta[i] = 0x00000000;
    }

}

void SWITCH_per_old(){

	static uint32_t i;

	for(i=0;i<SIZE;i++){

		if(i > SIZE){
			break;
		}

		/* --- ACTUALIZAR LAS IMÁGENES MEMORIZADAS DE LA ENTRADA ------------- */

		switchInput[i] = (switchInput[i] << 1);
		if((*GPIOB_IDR &(1<<i)) == 0){
			switchInput[i] += 1;
		}
		else{
			switchInput[i] += 0;
		}

		/* --- ACTUALIZAR EL ESTADO (SWITCH i COMPLETO) ---------------------- */

		if( (switchInput[i] & MASK) == 0)
		{
			if((switchStat[i] & SWITCH_BIT_ACTUALSTAT) == 1){
				switchStat[i] = SWITCH_BIT_EDGEOFF;
			}
			else{
				switchStat[i] = 0;
			}
		}
		else if( (switchInput[i] & MASK) == MASK)
		{
			if((switchStat[i] & SWITCH_BIT_ACTUALSTAT) == 0)
			{
				switchStat[i] = SWITCH_BIT_EDGEON;
				switchCuenta[i] = 0;
			}
			else
			{
				switchStat[i] = SWITCH_BIT_ACTUALSTAT;
			}
			++switchCuenta[i];
			if(switchCuenta[i] == TEMPOLONG)
			{
				switchStat[i] = SWITCH_BIT_FLAGLONGON;
			}
			if(switchCuenta[i] >= TEMPOAUTO)
			{
				if((switchCuenta[i] % RITMOAUTO) == 0)
				{
					switchStat[i] = SWITCH_BIT_FLAGREPEAT;
				}
			}
			switchStat[i] |= SWITCH_BIT_ACTUALSTAT;
		}
	}
}


void SWITCH_per()
{
	static uint32_t i;

	for(i=0;i<SIZE;i++)
	{
		/* --- ACTUALIZAR LAS IMÁGENES MEMORIZADAS DE LA ENTRADA ------------- */

		switchInput[i] = (switchInput[i] << 1);

		if((*GPIOB_IDR &(1<<i)) == 0)
		{
			switchInput[i] += 1;
		}
		else
		{
			switchInput[i] += 0;
		}

		if((switchInput[i] & MASK) == 0)
		{
			if((switchStat[i]) == 1)
			{
				switchStat[i] = SWITCH_BIT_EDGEOFF;
			}
			else{
				switchStat[i] = 0;
			}
		}
		else if( (switchInput[i] & MASK) == MASK)
		{
			if((switchStat[i] & SWITCH_BIT_ACTUALSTAT) == 0)
			{
				switchStat[i] = SWITCH_BIT_EDGEON;
				switchCuenta[i] = 0;
			}
			else
			{
				switchStat[i] = SWITCH_BIT_ACTUALSTAT;
			}
			++switchCuenta[i];
			if(switchCuenta[i] == TEMPOLONG)
			{
				switchStat[i] = SWITCH_BIT_FLAGLONGON;
			}
			if(switchCuenta[i] >= TEMPOAUTO)
			{
				if((switchCuenta[i] % RITMOAUTO) == 0)
				{
					switchStat[i] = SWITCH_BIT_FLAGREPEAT;
				}
			}
			switchStat[i] |= SWITCH_BIT_ACTUALSTAT;
		}
	}
}


/* ##########################################################################
 * ########        APLICACIÓN        ########################################
 * ####################################################################### */

/* ****************************************************************************
 * DEVOLVER EL ESTADO DE LOS BOTONES
 * ************************************************************************* */

uint32_t SWITCH_GetStatus(uint32_t btn){
	return switchStat[btn];
}

