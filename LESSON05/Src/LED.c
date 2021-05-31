/* ***************************************************************************
 * LED.c
 * ===========================================================================
 * ************************************************************************ */

/**
 * \file
 * \brief	GESTIÓN DEL INDICADOR LED
 * \author	J.R.G.
 * \date   MAY,16. 2021
 *
 * # HARDWARE
 *
 * | PUERTO | DESCRIPCIÓN                            | NOTAS |
 * |--------|----------------------------------------|-------|
 * |   PB3  | Salida del LED (Activa nivel alto)     |       |
 *
 * # RECURSOS
 *
 * Puertos indicados en "HARDWARE"
 *
 * # NOTAS
 *
 */


/* **************************************************************************
 * DECLARACIONES
 * *********************************************************************** */

#include "CORTEXM_TYPES.h"
#include "STM32F042_REGS_.h"

#include "LED_.h"

/* **************************************************************************
 * DEFINICIONES Y CONSTANTES
 * *********************************************************************** */

#define LED_INITIAL_STAT	(0x55555555)
#define PREDIV				(125)		/* 10 Hz @ 1000 Hz de llamada */

/* **************************************************************************
 * VARIABLES
 * *********************************************************************** */

uint32_t imagLED;

/* ##########################################################################
 * ##########################################################################
 * ########        SISTEMA        ###########################################
 * ##########################################################################
 * ####################################################################### */

/* **************************************************************************
 * INICIALIZACIÓN DEL MÓDULO
 * --------------------------------------------------------------------------
 * *********************************************************************** */

/**
 * \brief	INICIALIZA EL MÖDULO DE LED
 * \param prmi	NO USADO. RESERVADO.
 * \return		NO USADO. RESERVADO.
 *
 *
 */

uint32_t LED_Ini(uint32_t prmi)
{

	/* --- HARDWARE ------------------------------------------------------ */

	*GPIOB_ODR &= ~0x00000008;		/* PB3 @ 0 -LED apagado- */

	*GPIOB_MODER &= ~0x00000080;	/* PB3 como ... */
	*GPIOB_MODER |=  0x00000040;	/* ... salida */

	/* --- VARIABLES ----------------------------------------------------- */

    imagLED = LED_INITIAL_STAT;

	/* --- FINAL DE INICIALIZACIONES ------------------------------------- */

    return(0);
}


/* **************************************************************************
 * RUTINA PERIÓDICA
 * --------------------------------------------------------------------------
 * *********************************************************************** */


/**
 * \brief	RUTINA PERIÓDICA DEL MÓDULO SWITCH
 *
 * Esta rutina, para que el módulo funcione correctamente, debe llamarase a
 * un ritmo de 1kHz (cada milisegundo).
 *
 * La rutina mantiene una variable local de tiempo y actualiza el estado
 * del LED en función del estado del bit que corresponde en cada instante.
 *
 */

void LED_Per()
{
static uint32_t phase;

	/* --- MÁSCARA DEL BIT PARA EXTRAER SEGÚN EL MOMENTO ----------------- */

  	uint32_t mask;
  	mask = 1 << ((phase / PREDIV) %32);

  	/* --- ACTUALIZACIÓN DEL ESTADO DEL LED ------------------------------ */

  	if( (mask & imagLED) == 0)
  	{
  	    *GPIOB_ODR &= ~0x00000008;		/* PB3 = 0 (apaga LED) */
  	}
  	else
  	{
  	    *GPIOB_ODR |=  0x00000008;		/* PB3 = 1 (enciende LED) */
  	}

  	/* --- INCREMENTO DE CONTADOR ---------------------------------------- */

  	++phase;

	/* --- FINAL DE LA RUTINA PERIÓDICA ---------------------------------- */

}


/* ##########################################################################
 * ##########################################################################
 * ########        APLICACIÓN        ########################################
 * ##########################################################################
 * ####################################################################### */

/* **************************************************************************
 * FIJAR UN ESTADO DEL LED
 * --------------------------------------------------------------------------
 * *********************************************************************** */

uint32_t LED_Set(uint32_t nstat)
{
	imagLED = nstat;
	return(imagLED);
}



/* ##########################################################################
 * ##########################################################################
 * ####################################################################### */

/**
 * \file
 *
 * # DESCRIPCIÓN
 *
 * Este módulo gestkiona un indicador LED simple.
 *
 * El módulo se encarga de mantener un estado complejo (Guardado en una
 * variable) en el que cada bit representa un estado distinto secuencial
 * en el tiempo. De este modo la aplicación puede seleccioonar un estado
 * de LED y no debe estar atendiendo para producir intermitencias u otras
 * secuencias complejas.
 *
 */

