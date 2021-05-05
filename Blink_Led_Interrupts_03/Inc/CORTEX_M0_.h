/*
 * CORTEX_M0_.h
 *
 *  Created on: Apr 25, 2021
 *      Author: Usuario
 */

#ifndef CORTEX_M0__H_
#define CORTEX_M0__H_


/* *** PROGRAMMER MODEL ************************************************** */
/*
** R0-R7  GENERAL PUERPOSE LOW REGISTERS
** R8-R12 GENERAL PUERPOSE HIGH REGISTERS
** R13    (SP) STACK POINTER, (PSP), (MPP) AS BANKED VERSIONS
** R14    (LR) LINK REGISTER
** R15    (PC) PROGRAM COUNTER
** PSR    PROGRAM STATUS REGISTER (SPECIAL REGISTER)
**        COMBINE (APSR:Application) (IPSR:Interrupt) (EPSR:Execution)
** PRIMASK      EXCEPTION MASK REGISTER (SPECIAL REGISTER)
** FAULTMASK    EXCEPTION MASK REGISTER (SPECIAL REGISTER)
** BASEPRI      EXCEPTION MASK REGISTER (SPECIAL REGISTER)
** CONTROL      CONTROL REGISTER
**
**      USR MRS / MSR instructions to access this registers
**      Some are privileged and/or unreadable/unwrittable
**      Start at reset is Thread+privileged
************************************************************************** */




/* **************************************************************************
** SYSTEM CONTROL BLOCK  (0xE000E008-0xE000E00F ... 0xE000ED00-0xE000ED3F)
************************************************************************** */

#define CPUID           ((volatile uint32_t *)(0xE000ED00))
#define ICSR            ((volatile uint32_t *)(0xE000ED04))
#define AIRCR           ((volatile uint32_t *)(0xE000ED0C))
#define SCR             ((volatile uint32_t *)(0xE000ED10))
#define CCR             ((volatile uint32_t *)(0xE000ED14))
#define SHPR2           ((volatile uint32_t *)(0xE000ED1C))
#define SHPR3           ((volatile uint32_t *)(0xE000ED20))

/* *** NVIC *****************************************************************
** 0xE000E100-0xE000E4EF ... 0xE000EF00-0xE000EF03
************************************************************************** */

#define NVIC_BASE       0xE000E100

#define NVIC_ISER       ((volatile uint32_t *)(NVIC_BASE+0x00))
#define NVIC_ICER       ((volatile uint32_t *)(NVIC_BASE+0x80))
#define NVIC_ISPR       ((volatile uint32_t *)(NVIC_BASE+0x100))
#define NVIC_ICPR       ((volatile uint32_t *)(NVIC_BASE+0x180))

#define NVIC_IPR0       ((volatile uint32_t *)(NVIC_BASE+0x300))
#define NVIC_IPR1       ((volatile uint32_t *)(NVIC_BASE+0x304))
#define NVIC_IPR2       ((volatile uint32_t *)(NVIC_BASE+0x308))
#define NVIC_IPR3       ((volatile uint32_t *)(NVIC_BASE+0x30C))
#define NVIC_IPR4       ((volatile uint32_t *)(NVIC_BASE+0x310))
#define NVIC_IPR5       ((volatile uint32_t *)(NVIC_BASE+0x314))
#define NVIC_IPR6       ((volatile uint32_t *)(NVIC_BASE+0x318))
#define NVIC_IPR7       ((volatile uint32_t *)(NVIC_BASE+0x31C))

/* **************************************************************************
** SYSTEM TIMER (SYSTICK)  0xE000E010-0xE000E01F
************************************************************************** */

#define STK_CSR         ((volatile uint32_t *)(0xE000E010))
#define STK_RVR         ((volatile uint32_t *)(0xE000E014))
#define STK_CVR         ((volatile uint32_t *)(0xE000E018))
#define STK_CALIB       ((volatile uint32_t *)(0xE000E01C))


/* **************************************************************************
** EXTRA IP's
************************************************************************** */

/* *** MPU TYPE ********************************************************** */
/* 0xE000ED90-0xE000ED93 */

/* *** MEMORY PROTECTION UNIT ******************************************** */
/* 0xE000ED90-0xE000EDB8 */


#endif /* CORTEX_M0__H_ */
