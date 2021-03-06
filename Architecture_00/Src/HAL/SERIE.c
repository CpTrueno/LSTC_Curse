/* ************************************************************************
 * SERIE.c
 * ========================================================================
 * ********************************************************************* */


/**
* \file
* \brief  PUERTO SERIE PARA DEPURACIÓN (PA2/PA15 COMO EN EL KIT NUCLEO)
*
* # HARDWARE
*
* | PUERTO | FUNCIÓN       | AF     |
* |--------|---------------|--------|
* |    PA2 | TX USART 1    | 1      |
* |   PA15 | RX USART 1    | 1      |
*
*/


/* * **********************************************************************
 * DECLARACIONES
 * ********************************************************************* */

#include "CORTEXM_TYPES.h"
#include "STM32F042_REGS_.h"
#include "STM32F042_VECT_.h"

#include "CLOCK.h"

#include "SERIE_.h"

/* * **********************************************************************
 * DEFINICIONES Y CONSTANTES
 * ********************************************************************* */

/* **************************************************************************
** DEFINICIONES Y CONSTANTES
************************************************************************** */

#define     DEFSPEED      (115200)

/* **************************************************************************
** VARIABLES
************************************************************************** */

static uint32_t errors;

/* ##########################################################################
#############################################################################
########        BUFFER        ###############################################
#############################################################################
########################################################################## */

#define POWER   (8)            /* Only touch this value !!!!!!! */
#define SIZE    (1 << POWER)    /* Size of buffers (Don't touch) */
#define MASK    (SIZE-1)        /* Mask to buffers (Don't touch) */

/* *** VARIABLES (PHYSICAL LEVEL BUFFERS) ******************************** */

static uint32_t PtrTxHd;      			/* Punteros cabecera ... */
static uint32_t PtrTxTl;				/* ... y cola del buffer TX */
static uint8_t BufferTxc[SIZE];          /* Buffer de Transmisión */

static uint32_t PtrRxHd;      			/* Punteros cabecera ...*/
static uint32_t PtrRxTl;				/* ... y cola de recepción */
static uint8_t BufferRxc[SIZE];          /* Buffer de Recepción */

/* **************************************************************************
 *  INICIALIZAR EL SUB-MÓDULO DE BUFFERS
 *  -------------------------------------------------------------------------
 * *********************************************************************** */

static void Buffer_Ini(void)
{
	PtrTxHd = 0;
	PtrTxTl = 0;
	PtrRxHd = 0;
	PtrRxTl = 0;
}

/* **************************************************************************
 * AÑADIR UN CARÁCTER AL BUFFER DE TRANSMISIÓN
 * --------------------------------------------------------------------------
 ************************************************************************* */

static uint32_t Buffer_Tx_Set(unsigned char ch)
{
  if(((PtrTxHd+1) & MASK) == PtrTxTl)
  {
    return(0xFFFFFFFF);                 /* Error */
  }
  else
  {
    BufferTxc[PtrTxHd] = ch;
    PtrTxHd = (PtrTxHd + 1)& MASK;
    return(0);
  }
}

/* **************************************************************************
 * RECOGER UN CARÁCTER DEL BUFFER DE TRANSMISIÓN
 * --------------------------------------------------------------------------
 ************************************************************************* */

static uint32_t Buffer_Tx_Get(void)
{
  uint32_t ch;

  if(PtrTxTl == PtrTxHd)
  {
    return(0xFFFFFFFF);
  }
  else
  {
    ch = BufferTxc[PtrTxTl];
    PtrTxTl = ((PtrTxTl + 1) & MASK);
    return(ch);
  }
}

/* **************************************************************************
 * AÑADIR UN CARÁCTER AL BUFFER DE RECEPCIÓN
 * --------------------------------------------------------------------------
 ************************************************************************* */

static uint32_t Buffer_Rx_Set(unsigned char ch)
{
  if(((PtrRxHd+1) & MASK) == PtrRxTl)
  {
    return(0xFFFFFFFF);                 /* Error */
  }
  else
  {
    BufferRxc[PtrRxHd] = ch;
    PtrRxHd = (PtrRxHd + 1)& MASK;
    return(0);
  }
}

/* **************************************************************************
 * RECOGER UN CARÁCTER DESDE EL BUFFER DE RECEPCIÓN
 * --------------------------------------------------------------------------
 ************************************************************************* */

static uint32_t Buffer_Rx_Get(void)
{
  uint32_t ch;

  if(PtrRxTl == PtrRxHd)
  {
    return(0xFFFFFFFF);
  }
  else
  {
    ch = BufferRxc[PtrRxTl];
    PtrRxTl = ((PtrRxTl + 1) & MASK);
    return(ch);
  }
}

/* ##########################################################################
#############################################################################
########        SISTEMA        ##############################################
#############################################################################
########################################################################## */

/* **************************************************************************
 * INICIALIZCIÓN DEL CANAL SERIE
 * --------------------------------------------------------------------------
 * ************************************************************************ */

uint32_t SERIE_Ini(uint32_t prmi)
{

/* --- I/O --------------------------------------------------------------- */

  *GPIOA_OSPEEDR &= ~0xC0000030;        /* PA2, PA15 Velocidad baja */
  *GPIOA_PUPDR   &= ~0xC0000030;        /* Borra PA2, PA15  */
  *GPIOA_OTYPER  &= ~0x00000030;        /* Borra modo PA2..PA15 Push-Pull */

  *GPIOA_MODER &= ~0xC0000030;          /* PA2..PA15 como ... */
  *GPIOA_MODER |=  0x80000020;          /* ... alternate */
  *GPIOA_AFRL &=  ~0x00000F00;          /* PA2 como ... */
  *GPIOA_AFRL |=   0x00000100;          /* ... alternate 1 (USART2_TX) */
  *GPIOA_AFRH &=  ~0xF0000000;          /* PA15 como ... */
  *GPIOA_AFRH |=   0x10000000;          /* ... alternate 1 (USART2_RX) */

/* --- CLOCK ENABLE ------------------------------------------------------ */

  *RCC_APB1ENR |= 0x00020000;            /* Enable USART 2 Clock */

/* --- USART 2 ----------------------------------------------------------- */

  *USART2_BRR = CLOCK_GetFreq() / DEFSPEED;  /* Speed. when disabled*/

  *USART2_CR1  =  0x00840000;     /* Pre & post times. Over 16, 8 bits no par no stop */
  *USART2_CR1 |= 0x0000000C;     /* Enable RX and TX */
  *USART2_CR2 = 0;           /* NO swappins, levelinvert, 1 stop, no clock */
                              /* NO LIN,... */
  *USART2_CR3 = 0;              /* NO CTS, RTS, Smartcard, driver, IrDA... */

  *USART2_GTPR = 0;             /*IrDA, Smartcard !!!! */
  *USART2_RTOR = 0;           /* Timeots ... !!!!! */
  *USART2_RQR = 0;              /* NOne request !!!!!! */

  *USART2_CR1 |= 0x0000000C;     /* Enable TX & RX */
  *USART2_CR1 |= 0x00000001;     /* Enable USART */

/* --- INTERRUPCIÓN PROPIA ----------------------------------------------- */

  *NVIC_ISER |=  0x10000000;	/* INT 28 para USART_2 */
  *NVIC_IPR7  &= ~0x000000FF;	/* Clear bits... */
  *NVIC_IPR7  |=  0x00000000;	/* Priority 0 ??? */

  *USART2_CR1 |= 0x00000020;    /* RX interrupt enable */
//  *USART2_CR1 |= 0x00000080;    /* TX interrupt enable */

/* --- VARIABLES --------------------------------------------------------- */

  Buffer_Ini();		/* Sun módulo del buffer */

  errors = 0;

/* --- FINAL DE INICIALIZACIONES ---------------------------------------- */

  return(0);

}

/* **************************************************************************
** PERIÓDICA
** --------------------------------------------------------------------------
************************************************************************** */

void SERIE_Per()
{

}

/* **************************************************************************
** INTERRUPCIÓN PROPIA
** --------------------------------------------------------------------------
************************************************************************** */

void USART2_IRQHandler()
{
  uint32_t chh;

  /* --- TEST ORIGIN: ¿RX FULL? ------------------------------------------ */

  if(*USART2_ISR & 0x00000020)
  {
    if((Buffer_Rx_Set(*USART2_RDR)) > 0x000000FF) /* Read, clear & ->buffer */
    {
      errors |= 0x00000001;    /* Error de buffer saturado */
    }                           /* If !error, ok */
//    timeout = TIMEOUT;        /* Repone timeout */
  }

  /* --- TEST ORIGIN: ¿TX VOID? ------------------------------------------ */

  if(*USART2_ISR & 0x00000080 & *USART2_CR1)
  {
    if((chh=Buffer_Tx_Get()) < 0x00000100)
    {
      *USART2_TDR = chh;                /* Send and clear int flag */
    }
    else
    {
      *USART2_CR1 &= ~0x00000080;       /* Disable interrupt TX */
    }
  }

  /* --- TEST ORIGIN: ¿OTHER? ------------------------------------------- */

    *USART2_ICR |=0x0000000F; /* Clrear other possible flags */

}


/* ##########################################################################
#############################################################################
########        APLICACIÓN        ###########################################
#############################################################################
########################################################################## */

/* **************************************************************************
** ENVIAR UN CARÁCTER
** --------------------------------------------------------------------------
************************************************************************** */

uint32_t SERIE_TxChar(uint32_t ch)
{
  if((Buffer_Tx_Set(ch)) == 0xFFFFFFFF)
  {
    return(0xFFFFFFFF);
  }
  *USART2_CR1 |= 0x00000080;    /* Autoriza interrupción TX */
  return(ch);
}


/* **************************************************************************
** RECIBIR UN CARÁCTER
** --------------------------------------------------------------------------
************************************************************************** */

uint32_t SERIE_RxChar()
{
  return(Buffer_Rx_Get());
}

/* **************************************************************************
 * ACCEDER Y BORRAR ERRORES
 * --------------------------------------------------------------------------
 * *********************************************************************** */




/* ##########################################################################
#############################################################################
########################################################################## */

/**
 * \file
 *
 * # DESCRIPCIÓN
 *
 * Este módulo implementa comunicaciones serie e incluye buffers para
 * facilitar la gestión de los datos a máxima velocidad mediante
 * interrupciones.
 *
 */

