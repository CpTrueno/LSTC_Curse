/* **************************************************************************
 * STM32F042_REGS_.h
 * *********************************************************************** */

#ifndef STM32F042_REGS__H_
#define STM32F042_REGS__H_

/* **************************************************************************
** M0 CORE REGISTERS
************************************************************************** */

#include "CORTEX_M0_.h"

/* **************************************************************************
 * ST IP'S REGISTERS
 * --------------------------------------------------------------------------
 *
 ************************************************************************* */

/* **************************************************************************
 * PERIPHERALS TO APB
 ************************************************************************* */

/* *** TIM2 (Base:0x.4000.0000) ****************************************** */

#define TIM2_BASE       (0x40000000)
#define TIM2_CR1        ((volatile unsigned int *)(TIM2_BASE+0x00))
#define TIM2_CR2        ((volatile unsigned int *)(TIM2_BASE+0x04))
#define TIM2_SMCR       ((volatile unsigned int *)(TIM2_BASE+0x08))
#define TIM2_DIER       ((volatile unsigned int *)(TIM2_BASE+0x0C))
#define TIM2_SR         ((volatile unsigned int *)(TIM2_BASE+0x10))
#define TIM2_EGR        ((volatile unsigned int *)(TIM2_BASE+0x14))
#define TIM2_CCMR1      ((volatile unsigned int *)(TIM2_BASE+0x18))
#define TIM2_CCMR2      ((volatile unsigned int *)(TIM2_BASE+0x1C))
#define TIM2_CCER       ((volatile unsigned int *)(TIM2_BASE+0x20))
#define TIM2_CNT        ((volatile unsigned int *)(TIM2_BASE+0x24))
#define TIM2_PSC        ((volatile unsigned int *)(TIM2_BASE+0x28))
#define TIM2_ARR        ((volatile unsigned int *)(TIM2_BASE+0x2C))
#define TIM2_CCR1       ((volatile unsigned int *)(TIM2_BASE+0x34))
#define TIM2_CCR2       ((volatile unsigned int *)(TIM2_BASE+0x38))
#define TIM2_CCR3       ((volatile unsigned int *)(TIM2_BASE+0x3C))
#define TIM2_CCR4       ((volatile unsigned int *)(TIM2_BASE+0x40))
#define TIM2_DCR        ((volatile unsigned int *)(TIM2_BASE+0x48))
#define TIM2_DMAR       ((volatile unsigned int *)(TIM2_BASE+0x4C))

/* *** TIM3 (Base:0x.4000.0400) ****************************************** */

#define TIM3_BASE       (0x40000400)
#define TIM3_CR1        ((volatile unsigned int *)(TIM3_BASE+0x00))
#define TIM3_CR2        ((volatile unsigned int *)(TIM3_BASE+0x04))
#define TIM3_SMCR       ((volatile unsigned int *)(TIM3_BASE+0x08))
#define TIM3_DIER       ((volatile unsigned int *)(TIM3_BASE+0x0C))
#define TIM3_SR         ((volatile unsigned int *)(TIM3_BASE+0x10))
#define TIM3_EGR        ((volatile unsigned int *)(TIM3_BASE+0x14))
#define TIM3_CCMR1      ((volatile unsigned int *)(TIM3_BASE+0x18))
#define TIM3_CCMR2      ((volatile unsigned int *)(TIM3_BASE+0x1C))
#define TIM3_CCER       ((volatile unsigned int *)(TIM3_BASE+0x20))
#define TIM3_CNT        ((volatile unsigned int *)(TIM3_BASE+0x24))
#define TIM3_PSC        ((volatile unsigned int *)(TIM3_BASE+0x28))
#define TIM3_ARR        ((volatile unsigned int *)(TIM3_BASE+0x2C))
#define TIM3_CCR1       ((volatile unsigned int *)(TIM3_BASE+0x34))
#define TIM3_CCR2       ((volatile unsigned int *)(TIM3_BASE+0x38))
#define TIM3_CCR3       ((volatile unsigned int *)(TIM3_BASE+0x3C))
#define TIM3_CCR4       ((volatile unsigned int *)(TIM3_BASE+0x40))
#define TIM3_DCR        ((volatile unsigned int *)(TIM3_BASE+0x48))
#define TIM3_DMAR       ((volatile unsigned int *)(TIM3_BASE+0x4C))

/* *** TIM7 (Base:0x.4000.1400) ****************************************** */

#define TIM7_BASE       (0x40001400)
#define TIM7_CR1        ((volatile unsigned int *)(TIM7_BASE+0x00))
#define TIM7_CR2        ((volatile unsigned int *)(TIM7_BASE+0x04))
#define TIM7_DIER       ((volatile unsigned int *)(TIM7_BASE+0x0C))
#define TIM7_SR         ((volatile unsigned int *)(TIM7_BASE+0x10))
#define TIM7_CNT        ((volatile unsigned int *)(TIM7_BASE+0x24))
#define TIM7_PSC        ((volatile unsigned int *)(TIM7_BASE+0x28))
#define TIM7_ARR        ((volatile unsigned int *)(TIM7_BASE+0x2C))

/* *** TIM14 (Base:0x.4000.2000) ***************************************** */

#define TIM14_BASE      (0x40002000)
#define TIM14_CR1       ((volatile unsigned int *)(TIM14_BASE+0x00))
#define TIM14_DIER      ((volatile unsigned int *)(TIM14_BASE+0x0C))
#define TIM14_SR        ((volatile unsigned int *)(TIM14_BASE+0x10))
#define TIM14_EGR       ((volatile unsigned int *)(TIM14_BASE+0x14))
#define TIM14_CCMR1     ((volatile unsigned int *)(TIM14_BASE+0x18))
#define TIM14_CCER      ((volatile unsigned int *)(TIM14_BASE+0x20))
#define TIM14_CNT       ((volatile unsigned int *)(TIM14_BASE+0x24))
#define TIM14_PSC       ((volatile unsigned int *)(TIM14_BASE+0x28))
#define TIM14_ARR       ((volatile unsigned int *)(TIM14_BASE+0x2C))
#define TIM14_CCR1      ((volatile unsigned int *)(TIM14_BASE+0x34))
#define TIM14_OR        ((volatile unsigned int *)(TIM14_BASE+0x50))

/* *** RTC (Base: 0x.4000.2800) ****************************************** */

#define RTC_BASE        (0x40002800)
#define RTC_TR          ((volatile unsigned int *)(RTC_BASE+0x00))
#define RTC_DR          ((volatile unsigned int *)(RTC_BASE+0x04))
#define RTC_CR          ((volatile unsigned int *)(RTC_BASE+0x08))
#define RTC_ISR         ((volatile unsigned int *)(RTC_BASE+0x0C))
#define RTC_PRER        ((volatile unsigned int *)(RTC_BASE+0x10))
#define RTC_WUTR        ((volatile unsigned int *)(RTC_BASE+0x14))
#define RTC_ALRMAR      ((volatile unsigned int *)(RTC_BASE+0x1C))
#define RTC_WPR         ((volatile unsigned int *)(RTC_BASE+0x24))
#define RTC_SSR         ((volatile unsigned int *)(RTC_BASE+0x28))
#define RTC_SHIFTR      ((volatile unsigned int *)(RTC_BASE+0x2C))
#define RTC_TSTR        ((volatile unsigned int *)(RTC_BASE+0x30))
#define RTC_TSDR        ((volatile unsigned int *)(RTC_BASE+0x34))
#define RTC_TSSSR       ((volatile unsigned int *)(RTC_BASE+0x38))
#define RTC_CALR        ((volatile unsigned int *)(RTC_BASE+0x3C))
#define RTC_TAFCR       ((volatile unsigned int *)(RTC_BASE+0x40))
#define RTC_ALRMASSR    ((volatile unsigned int *)(RTC_BASE+0x44))
#define RTC_BKP0R       ((volatile unsigned int *)(RTC_BASE+0x50))
#define RTC_BKP1R       ((volatile unsigned int *)(RTC_BASE+0x54))
#define RTC_BKP2R       ((volatile unsigned int *)(RTC_BASE+0x58))
#define RTC_BKP3R       ((volatile unsigned int *)(RTC_BASE+0x5C))
#define RTC_BKP4R       ((volatile unsigned int *)(RTC_BASE+0x60))

/* *** WWDG (Base:0x.4000.2C00) ****************************************** */

#define WWDG_BASE       (0x40002C00)
#define WWDG_CR         ((volatile unsigned int *)(WWDG_BASE+0x00))
#define WWDG_CFR        ((volatile unsigned int *)(WWDG_BASE+0x04))
#define WWDG_SR         ((volatile unsigned int *)(WWDG_BASE+0x08))

/* *** IWDG (Base:0x.4000.3000) ****************************************** */

#define IWDG_BASE       (0x40003000)
#define IWDG_KR         ((volatile unsigned int *)(IWDG_BASE+0x00))
#define IWDG_PR         ((volatile unsigned int *)(IWDG_BASE+0x04))
#define IWDG_RLR        ((volatile unsigned int *)(IWDG_BASE+0x08))
#define IWDG_SR         ((volatile unsigned int *)(IWDG_BASE+0x0C))
#define IWDG_WINR       ((volatile unsigned int *)(IWDG_BASE+0x10))

/* *** SPI2 (Base: 0x4000.3800) ****************************************** */

#define SPI2_BASE       (0x40003800)
#define SPI2_CR1        ((volatile unsigned int *)(SPI2_BASE+0x00))
#define SPI2_CR2        ((volatile unsigned int *)(SPI2_BASE+0x04))
#define SPI2_SR         ((volatile unsigned int *)(SPI2_BASE+0x08))
#define SPI2_DR         ((volatile unsigned int *)(SPI2_BASE+0x0C))
#define SPI2_CRCPR      ((volatile unsigned int *)(SPI2_BASE+0x10))
#define SPI2_RXCRCR     ((volatile unsigned int *)(SPI2_BASE+0x14))
#define SPI2_TXCRCR     ((volatile unsigned int *)(SPI2_BASE+0x18))
#define SPI2_I2SCFGR    ((volatile unsigned int *)(SPI2_BASE+0x1C))
#define SPI2_I2SPR      ((volatile unsigned int *)(SPI2_BASE+0x20))

/* *** USART2 (Base: 0x.4000.4400) *************************************** */

#define USART2_BASE       (0x40004400)
#define USART2_CR1        ((volatile unsigned int *)(USART2_BASE+0x00))
#define USART2_CR2        ((volatile unsigned int *)(USART2_BASE+0x04))
#define USART2_CR3        ((volatile unsigned int *)(USART2_BASE+0x08))
#define USART2_BRR        ((volatile unsigned int *)(USART2_BASE+0x0C))
#define USART2_GTPR       ((volatile unsigned int *)(USART2_BASE+0x10))
#define USART2_RTOR       ((volatile unsigned int *)(USART2_BASE+0x14))
#define USART2_RQR        ((volatile unsigned int *)(USART2_BASE+0x18))
#define USART2_ISR        ((volatile unsigned int *)(USART2_BASE+0x1C))
#define USART2_ICR        ((volatile unsigned int *)(USART2_BASE+0x20))
#define USART2_RDR        ((volatile unsigned int *)(USART2_BASE+0x24))
#define USART2_TDR        ((volatile unsigned int *)(USART2_BASE+0x28))

/* *** I2C1 (Base: 0x.4000.5400) ***************************************** */

#define I2C1_BASE         (0x40005400)
#define I2C1_CR1          ((volatile unsigned int *)(I2C1_BASE+0x00))
#define I2C1_CR2          ((volatile unsigned int *)(I2C1_BASE+0x04))
#define I2C1_OAR1         ((volatile unsigned int *)(I2C1_BASE+0x08))
#define I2C1_OAR2         ((volatile unsigned int *)(I2C1_BASE+0x0C))
#define I2C1_TIMINGR      ((volatile unsigned int *)(I2C1_BASE+0x10))
#define I2C1_TIMEOUTR     ((volatile unsigned int *)(I2C1_BASE+0x14))
#define I2C1_ISR          ((volatile unsigned int *)(I2C1_BASE+0x18))
#define I2C1_ICR          ((volatile unsigned int *)(I2C1_BASE+0x1C))
#define I2C1_PECR         ((volatile unsigned int *)(I2C1_BASE+0x20))
#define I2C1_RXDR         ((volatile unsigned int *)(I2C1_BASE+0x24))
#define I2C1_TXDR         ((volatile unsigned int *)(I2C1_BASE+0x28))

/* *** USB (Base: 0x.4000.5C00) ****************************************** */

#define USB_BASE        (0x40005C00)
#define USB_EP0R        ((volatile unsigned int *)(USB_BASE+0x00))
#define USB_EP1R        ((volatile unsigned int *)(USB_BASE+0x04))
#define USB_EP2R        ((volatile unsigned int *)(USB_BASE+0x08))
#define USB_EP3R        ((volatile unsigned int *)(USB_BASE+0x0C))
#define USB_EP4R        ((volatile unsigned int *)(USB_BASE+0x10))
#define USB_EP5R        ((volatile unsigned int *)(USB_BASE+0x14))
#define USB_EP6R        ((volatile unsigned int *)(USB_BASE+0x18))
#define USB_EP7R        ((volatile unsigned int *)(USB_BASE+0x1C))

#define USB_CNTR        ((volatile unsigned int *)(USB_BASE+0x40))
#define USB_ISTR        ((volatile unsigned int *)(USB_BASE+0x44))
#define USB_FNR         ((volatile unsigned int *)(USB_BASE+0x48))
#define USB_DADDR       ((volatile unsigned int *)(USB_BASE+0x4C))
#define USB_BTABLE      ((volatile unsigned int *)(USB_BASE+0x50))
#define USB_LPMCSR      ((volatile unsigned int *)(USB_BASE+0x54))
#define USB_BCDR        ((volatile unsigned int *)(USB_BASE+0x58))

/* *** USB/CAN SRAM (Base: 0x.4000.6000) ********************************* */

#define USBSRAM_BASE    (0x40006000)
#define USB_ADTX0       ((volatile unsigned short *)(USBSRAM_BASE+0x00))
#define USB_ADRX0       ((volatile unsigned short *)(USBSRAM_BASE+0x04))
#define USB_ADTX1       ((volatile unsigned short *)(USBSRAM_BASE+0x08))
#define USB_ADRX1       ((volatile unsigned short *)(USBSRAM_BASE+0x0C))
#define USB_ADTX2       ((volatile unsigned short *)(USBSRAM_BASE+0x10))
#define USB_ADRX2       ((volatile unsigned short *)(USBSRAM_BASE+0x14))
#define USB_ADTX3       ((volatile unsigned short *)(USBSRAM_BASE+0x18))
#define USB_ADRX3       ((volatile unsigned short *)(USBSRAM_BASE+0x1C))
#define USB_ADTX4       ((volatile unsigned short *)(USBSRAM_BASE+0x20))
#define USB_ADRX4       ((volatile unsigned short *)(USBSRAM_BASE+0x24))
#define USB_ADTX5       ((volatile unsigned short *)(USBSRAM_BASE+0x28))
#define USB_ADRX5       ((volatile unsigned short *)(USBSRAM_BASE+0x2C))
#define USB_ADTX6       ((volatile unsigned short *)(USBSRAM_BASE+0x30))
#define USB_ADRX6       ((volatile unsigned short *)(USBSRAM_BASE+0x34))
#define USB_ADTX7       ((volatile unsigned short *)(USBSRAM_BASE+0x38))
#define USB_ADRX7       ((volatile unsigned short *)(USBSRAM_BASE+0x3C))

#define USB_SZTX0       ((volatile unsigned short *)(USBSRAM_BASE+0x02))
#define USB_SZRX0       ((volatile unsigned short *)(USBSRAM_BASE+0x06))
#define USB_SZTX1       ((volatile unsigned short *)(USBSRAM_BASE+0x0A))
#define USB_SZRX1       ((volatile unsigned short *)(USBSRAM_BASE+0x0E))
#define USB_SZTX2       ((volatile unsigned short *)(USBSRAM_BASE+0x12))
#define USB_SZRX2       ((volatile unsigned short *)(USBSRAM_BASE+0x16))
#define USB_SZTX3       ((volatile unsigned short *)(USBSRAM_BASE+0x1A))
#define USB_SZRX3       ((volatile unsigned short *)(USBSRAM_BASE+0x1E))
#define USB_SZTX4       ((volatile unsigned short *)(USBSRAM_BASE+0x22))
#define USB_SZRX4       ((volatile unsigned short *)(USBSRAM_BASE+0x26))
#define USB_SZTX5       ((volatile unsigned short *)(USBSRAM_BASE+0x2A))
#define USB_SZRX5       ((volatile unsigned short *)(USBSRAM_BASE+0x2E))
#define USB_SZTX6       ((volatile unsigned short *)(USBSRAM_BASE+0x32))
#define USB_SZRX6       ((volatile unsigned short *)(USBSRAM_BASE+0x36))
#define USB_SZTX7       ((volatile unsigned short *)(USBSRAM_BASE+0x3A))
#define USB_SZRX7       ((volatile unsigned short *)(USBSRAM_BASE+0x3E))

#define USBSRAM_BEGIN   (0x40)

/* *** CAN (Base: 0x.4000.6400) ****************************************** */

#define CAN_BASE        (0x40006400)
#define CAN_MCR         ((volatile unsigned int *)(CAN_BASE+0x00))
#define CAN_MSR         ((volatile unsigned int *)(CAN_BASE+0x04))
#define CAN_TSR         ((volatile unsigned int *)(CAN_BASE+0x08))
#define CAN_RF0R        ((volatile unsigned int *)(CAN_BASE+0x0C))
#define CAN_RF1R        ((volatile unsigned int *)(CAN_BASE+0x10))
#define CAN_IER         ((volatile unsigned int *)(CAN_BASE+0x14))
#define CAN_ESR         ((volatile unsigned int *)(CAN_BASE+0x18))
#define CAN_BTR         ((volatile unsigned int *)(CAN_BASE+0x1C))

#define CAN_TI0R        ((volatile unsigned int *)(CAN_BASE+0x180))
#define CAN_TDT0R       ((volatile unsigned int *)(CAN_BASE+0x184))
#define CAN_TDL0R       ((volatile unsigned int *)(CAN_BASE+0x188))
#define CAN_TDH0R       ((volatile unsigned int *)(CAN_BASE+0x18C))
#define CAN_TI1R        ((volatile unsigned int *)(CAN_BASE+0x190))
#define CAN_TDT1R       ((volatile unsigned int *)(CAN_BASE+0x194))
#define CAN_TDL1R       ((volatile unsigned int *)(CAN_BASE+0x198))
#define CAN_TDH1R       ((volatile unsigned int *)(CAN_BASE+0x19C))
#define CAN_TI2R        ((volatile unsigned int *)(CAN_BASE+0x1A0))
#define CAN_TDT2R       ((volatile unsigned int *)(CAN_BASE+0x1A4))
#define CAN_TDL2R       ((volatile unsigned int *)(CAN_BASE+0x1A8))
#define CAN_TDH2R       ((volatile unsigned int *)(CAN_BASE+0x1AC))
#define CAN_RI0R        ((volatile unsigned int *)(CAN_BASE+0x1B0))
#define CAN_RDT0R       ((volatile unsigned int *)(CAN_BASE+0x1B4))
#define CAN_RDL0R       ((volatile unsigned int *)(CAN_BASE+0x1B8))
#define CAN_RDH0R       ((volatile unsigned int *)(CAN_BASE+0x1BC))
#define CAN_RI1R        ((volatile unsigned int *)(CAN_BASE+0x1C0))
#define CAN_RDT1R       ((volatile unsigned int *)(CAN_BASE+0x1C4))
#define CAN_RDL1R       ((volatile unsigned int *)(CAN_BASE+0x1C8))
#define CAN_RDH1R       ((volatile unsigned int *)(CAN_BASE+0x1CC))

#define CAN_FMR         ((volatile unsigned int *)(CAN_BASE+0x200))
#define CAN_FM1R        ((volatile unsigned int *)(CAN_BASE+0x204))
#define CAN_FS1R        ((volatile unsigned int *)(CAN_BASE+0x20C))
#define CAN_FFA1R       ((volatile unsigned int *)(CAN_BASE+0x214))
#define CAN_FA1R        ((volatile unsigned int *)(CAN_BASE+0x21C))

#define CAN_F0R1        ((volatile unsigned int *)(CAN_BASE+0x240))
#define CAN_F0R2        ((volatile unsigned int *)(CAN_BASE+0x244))
#define CAN_F1R1        ((volatile unsigned int *)(CAN_BASE+0x248))
#define CAN_F1R2        ((volatile unsigned int *)(CAN_BASE+0x24C))
#define CAN_F2R1        ((volatile unsigned int *)(CAN_BASE+0x250))
#define CAN_F2R2        ((volatile unsigned int *)(CAN_BASE+0x254))
#define CAN_F3R1        ((volatile unsigned int *)(CAN_BASE+0x258))
#define CAN_F3R2        ((volatile unsigned int *)(CAN_BASE+0x25C))
#define CAN_F4R1        ((volatile unsigned int *)(CAN_BASE+0x260))
#define CAN_F4R2        ((volatile unsigned int *)(CAN_BASE+0x264))
#define CAN_F5R1        ((volatile unsigned int *)(CAN_BASE+0x268))
#define CAN_F5R2        ((volatile unsigned int *)(CAN_BASE+0x26C))
#define CAN_F6R1        ((volatile unsigned int *)(CAN_BASE+0x270))
#define CAN_F6R2        ((volatile unsigned int *)(CAN_BASE+0x274))
#define CAN_F7R1        ((volatile unsigned int *)(CAN_BASE+0x278))
#define CAN_F7R2        ((volatile unsigned int *)(CAN_BASE+0x27C))
#define CAN_F8R1        ((volatile unsigned int *)(CAN_BASE+0x280))
#define CAN_F8R2        ((volatile unsigned int *)(CAN_BASE+0x284))
#define CAN_F9R1        ((volatile unsigned int *)(CAN_BASE+0x288))
#define CAN_F9R2        ((volatile unsigned int *)(CAN_BASE+0x28C))
#define CAN_F10R1       ((volatile unsigned int *)(CAN_BASE+0x290))
#define CAN_F10R2       ((volatile unsigned int *)(CAN_BASE+0x294))
#define CAN_F11R1       ((volatile unsigned int *)(CAN_BASE+0x298))
#define CAN_F11R2       ((volatile unsigned int *)(CAN_BASE+0x29C))
#define CAN_F12R1       ((volatile unsigned int *)(CAN_BASE+0x2A0))
#define CAN_F12R2       ((volatile unsigned int *)(CAN_BASE+0x2A4))
#define CAN_F13R1       ((volatile unsigned int *)(CAN_BASE+0x2A8))
#define CAN_F13R2       ((volatile unsigned int *)(CAN_BASE+0x2AC))
#define CAN_F14R1       ((volatile unsigned int *)(CAN_BASE+0x2B0))
#define CAN_F14R2       ((volatile unsigned int *)(CAN_BASE+0x2B4))
#define CAN_F15R1       ((volatile unsigned int *)(CAN_BASE+0x2B8))
#define CAN_F15R2       ((volatile unsigned int *)(CAN_BASE+0x2BC))
#define CAN_F16R1       ((volatile unsigned int *)(CAN_BASE+0x2C0))
#define CAN_F16R2       ((volatile unsigned int *)(CAN_BASE+0x2C4))
#define CAN_F17R1       ((volatile unsigned int *)(CAN_BASE+0x2C8))
#define CAN_F17R2       ((volatile unsigned int *)(CAN_BASE+0x2CC))
#define CAN_F18R1       ((volatile unsigned int *)(CAN_BASE+0x2D0))
#define CAN_F18R2       ((volatile unsigned int *)(CAN_BASE+0x2D4))
#define CAN_F19R1       ((volatile unsigned int *)(CAN_BASE+0x2D8))
#define CAN_F19R2       ((volatile unsigned int *)(CAN_BASE+0x2DC))
#define CAN_F20R1       ((volatile unsigned int *)(CAN_BASE+0x2E0))
#define CAN_F20R2       ((volatile unsigned int *)(CAN_BASE+0x2E4))
#define CAN_F21R1       ((volatile unsigned int *)(CAN_BASE+0x2E8))
#define CAN_F21R2       ((volatile unsigned int *)(CAN_BASE+0x2EC))
#define CAN_F22R1       ((volatile unsigned int *)(CAN_BASE+0x2F0))
#define CAN_F22R2       ((volatile unsigned int *)(CAN_BASE+0x2F4))
#define CAN_F23R1       ((volatile unsigned int *)(CAN_BASE+0x2F8))
#define CAN_F23R2       ((volatile unsigned int *)(CAN_BASE+0x2FC))
#define CAN_F24R1       ((volatile unsigned int *)(CAN_BASE+0x300))
#define CAN_F24R2       ((volatile unsigned int *)(CAN_BASE+0x304))
#define CAN_F25R1       ((volatile unsigned int *)(CAN_BASE+0x308))
#define CAN_F25R2       ((volatile unsigned int *)(CAN_BASE+0x30C))
#define CAN_F26R1       ((volatile unsigned int *)(CAN_BASE+0x310))
#define CAN_F26R2       ((volatile unsigned int *)(CAN_BASE+0x314))
#define CAN_F27R1       ((volatile unsigned int *)(CAN_BASE+0x318))
#define CAN_F27R2       ((volatile unsigned int *)(CAN_BASE+0x31C))

/* *** CRS (Base: 0x.4000.6C00) ****************************************** */

#define CRS_BASE        (0x40006C00)
#define CRS_CR          ((volatile unsigned int *)(CRS_BASE+0x00))
#define CRS_CFGR        ((volatile unsigned int *)(CRS_BASE+0x04))
#define CRS_ISR         ((volatile unsigned int *)(CRS_BASE+0x08))
#define CRS_ICR         ((volatile unsigned int *)(CRS_BASE+0x0C))

/* *** PWR (Base: 0x.4000.7000) ****************************************** */

#define PWR_BASE       (0x40007000)
#define PWR_CR         ((volatile unsigned int *)(PWR_BASE+0x00))
#define PWR_CSR        ((volatile unsigned int *)(PWR_BASE+0x04))

/* *** HDMI-CEC (Base: 0x.4000.7800) ************************************* */

#define CEC_BASE       (0x40007800)
#define CEC_CR         ((volatile unsigned int *)(CEC_BASE+0x00))
#define CEC_CFGR       ((volatile unsigned int *)(CEC_BASE+0x04))
#define CEC_TXDR       ((volatile unsigned int *)(CEC_BASE+0x08))
#define CEC_RXDR       ((volatile unsigned int *)(CEC_BASE+0x0C))
#define CEC_ISR         ((volatile unsigned int *)(CEC_BASE+0x10))
#define CEC_IER         ((volatile unsigned int *)(CEC_BASE+0x14))

/* ACERCA DLE MODO SLEEP (MODOS Y TRATATMIENTO) ************************** */

#define SYSCFG_BASE	(0x40010000)
#define SYSCFG_CFGR1    ((volatile unsigned int *)(SYSCFG_BASE+0x00))
#define SYSCFG_EXTICR1  ((volatile unsigned int *)(SYSCFG_BASE+0x08))
#define SYSCFG_EXTICR2  ((volatile unsigned int *)(SYSCFG_BASE+0x0C))
#define SYSCFG_EXTICR3  ((volatile unsigned int *)(SYSCFG_BASE+0x10))
#define SYSCFG_EXTICR4  ((volatile unsigned int *)(SYSCFG_BASE+0x14))
#define SYSCFG_CFGR2    ((volatile unsigned int *)(SYSCFG_BASE+0x18))

/* *** EXTI (0x.4000.0400) ************************************************ */

#define EXTI_BASE       (0x40010400)
#define EXTI_IMR        ((volatile unsigned int *)(EXTI_BASE+0x00))
#define EXTI_EMR        ((volatile unsigned int *)(EXTI_BASE+0x04))
#define EXTI_RTSR       ((volatile unsigned int *)(EXTI_BASE+0x08))
#define EXTI_FTSR       ((volatile unsigned int *)(EXTI_BASE+0x0C))
#define EXTI_SWIER      ((volatile unsigned int *)(EXTI_BASE+0x10))
#define EXTI_PR         ((volatile unsigned int *)(EXTI_BASE+0x14))

/* *** ADC (base 0x.4001.2400) ******************************************* */

#define ADC_BASE        (0x40012400)
#define ADC_ISR         ((volatile unsigned int *)(ADC_BASE+0x00))
#define ADC_IER         ((volatile unsigned int *)(ADC_BASE+0x04))
#define ADC_CR          ((volatile unsigned int *)(ADC_BASE+0x08))
#define ADC_CFGR1       ((volatile unsigned int *)(ADC_BASE+0x0C))
#define ADC_CFGR2       ((volatile unsigned int *)(ADC_BASE+0x10))
#define ADC_SMPR        ((volatile unsigned int *)(ADC_BASE+0x14))
#define ADC_TR          ((volatile unsigned int *)(ADC_BASE+0x20))
#define ADC_CHSELR      ((volatile unsigned int *)(ADC_BASE+0x28))
#define ADC_DR          ((volatile unsigned int *)(ADC_BASE+0x40))
#define ADC_CCR         ((volatile unsigned int *)(ADC_BASE+0x308))

/* **** TIM1 (Base:0x.4001.2C00) ***************************************** */

#define TIM1_BASE        (0x40012C00)
#define TIM1_CR1        ((volatile unsigned int *)(TIM1_BASE+0x00))
#define TIM1_CR2        ((volatile unsigned int *)(TIM1_BASE+0x04))
#define TIM1_SMCR       ((volatile unsigned int *)(TIM1_BASE+0x08))
#define TIM1_DIER       ((volatile unsigned int *)(TIM1_BASE+0x0C))
#define TIM1_SR         ((volatile unsigned int *)(TIM1_BASE+0x10))
#define TIM1_EGR        ((volatile unsigned int *)(TIM1_BASE+0x14))
#define TIM1_CCMR1      ((volatile unsigned int *)(TIM1_BASE+0x18))
#define TIM1_CCMR2      ((volatile unsigned int *)(TIM1_BASE+0x1C))
#define TIM1_CCER       ((volatile unsigned int *)(TIM1_BASE+0x20))
#define TIM1_CNT        ((volatile unsigned int *)(TIM1_BASE+0x24))
#define TIM1_PSC        ((volatile unsigned int *)(TIM1_BASE+0x28))
#define TIM1_ARR        ((volatile unsigned int *)(TIM1_BASE+0x2C))
#define TIM1_RCR        ((volatile unsigned int *)(TIM1_BASE+0x30))
#define TIM1_CCR1       ((volatile unsigned int *)(TIM1_BASE+0x34))
#define TIM1_CCR2       ((volatile unsigned int *)(TIM1_BASE+0x38))
#define TIM1_CCR3       ((volatile unsigned int *)(TIM1_BASE+0x3C))
#define TIM1_CCR4       ((volatile unsigned int *)(TIM1_BASE+0x40))
#define TIM1_BDTR       ((volatile unsigned int *)(TIM1_BASE+0x44))
#define TIM1_DCR        ((volatile unsigned int *)(TIM1_BASE+0x48))
#define TIM1_DMAR       ((volatile unsigned int *)(TIM1_BASE+0x4C))

/* *** SPI1/I2S1 (Base: 0x.4001.3000) ************************************ */

#define SPI1_BASE       (0x40013000)
#define SPI1_CR1        ((volatile unsigned int *)(SPI1_BASE+0x00))
#define SPI1_CR2        ((volatile unsigned int *)(SPI1_BASE+0x04))
#define SPI1_SR         ((volatile unsigned int *)(SPI1_BASE+0x08))
#define SPI1_DR         ((volatile unsigned int *)(SPI1_BASE+0x0C))
#define SPI1_CRCPR      ((volatile unsigned int *)(SPI1_BASE+0x10))
#define SPI1_RXCRCR     ((volatile unsigned int *)(SPI1_BASE+0x14))
#define SPI1_TXCRCR     ((volatile unsigned int *)(SPI1_BASE+0x18))
#define SPI1_I2SCFGR    ((volatile unsigned int *)(SPI1_BASE+0x1C))
#define SPI1_I2SPR      ((volatile unsigned int *)(SPI1_BASE+0x20))

/* *** USART1 (Base: 0x.4001.3800) *************************************** */

#define USART1_BASE       (0x40013800)
#define USART1_CR1        ((volatile unsigned int *)(USART1_BASE+0x00))
#define USART1_CR2        ((volatile unsigned int *)(USART1_BASE+0x04))
#define USART1_CR3        ((volatile unsigned int *)(USART1_BASE+0x08))
#define USART1_BRR        ((volatile unsigned int *)(USART1_BASE+0x0C))
#define USART1_GTPR       ((volatile unsigned int *)(USART1_BASE+0x10))
#define USART1_RTOR       ((volatile unsigned int *)(USART1_BASE+0x14))
#define USART1_RQR        ((volatile unsigned int *)(USART1_BASE+0x18))
#define USART1_ISR        ((volatile unsigned int *)(USART1_BASE+0x1C))
#define USART1_ICR        ((volatile unsigned int *)(USART1_BASE+0x20))
#define USART1_RDR        ((volatile unsigned int *)(USART1_BASE+0x24))
#define USART1_TDR        ((volatile unsigned int *)(USART1_BASE+0x28))

/* *** TIM16 (Base: 0x.4001.4400) **************************************** */

#define TIM16_BASE        (0x40014400)
#define TIM16_CR1         ((volatile unsigned int *)(TIM16_BASE+0x00))
#define TIM16_CR2         ((volatile unsigned int *)(TIM16_BASE+0x04))
#define TIM16_DIER        ((volatile unsigned int *)(TIM16_BASE+0x0C))
#define TIM16_SR          ((volatile unsigned int *)(TIM16_BASE+0x10))
#define TIM16_EGR         ((volatile unsigned int *)(TIM16_BASE+0x14))
#define TIM16_CCMR1       ((volatile unsigned int *)(TIM16_BASE+0x18))
#define TIM16_CCER        ((volatile unsigned int *)(TIM16_BASE+0x20))
#define TIM16_CNT         ((volatile unsigned int *)(TIM16_BASE+0x24))
#define TIM16_PSC         ((volatile unsigned int *)(TIM16_BASE+0x28))
#define TIM16_ARR         ((volatile unsigned int *)(TIM16_BASE+0x2C))
#define TIM16_RCR         ((volatile unsigned int *)(TIM16_BASE+0x30))
#define TIM16_CCR1        ((volatile unsigned int *)(TIM16_BASE+0x34))
#define TIM16_BDTR        ((volatile unsigned int *)(TIM16_BASE+0x44))
#define TIM16_DCR         ((volatile unsigned int *)(TIM16_BASE+0x48))
#define TIM16_DMAR        ((volatile unsigned int *)(TIM16_BASE+0x4C))

/* *** TIM17 (Base: 0x.4001.4800) **************************************** */

#define TIM17_BASE        (0x40014800)
#define TIM17_CR1         ((volatile unsigned int *)(TIM17_BASE+0x00))
#define TIM17_CR2         ((volatile unsigned int *)(TIM17_BASE+0x04))
#define TIM17_DIER        ((volatile unsigned int *)(TIM17_BASE+0x0C))
#define TIM17_SR          ((volatile unsigned int *)(TIM17_BASE+0x10))
#define TIM17_EGR         ((volatile unsigned int *)(TIM17_BASE+0x14))
#define TIM17_CCMR1       ((volatile unsigned int *)(TIM17_BASE+0x18))
#define TIM17_CCER        ((volatile unsigned int *)(TIM17_BASE+0x20))
#define TIM17_CNT         ((volatile unsigned int *)(TIM17_BASE+0x24))
#define TIM17_PSC         ((volatile unsigned int *)(TIM17_BASE+0x28))
#define TIM17_ARR         ((volatile unsigned int *)(TIM17_BASE+0x2C))
#define TIM17_RCR         ((volatile unsigned int *)(TIM17_BASE+0x30))
#define TIM17_CCR1        ((volatile unsigned int *)(TIM17_BASE+0x34))
#define TIM17_BDTR        ((volatile unsigned int *)(TIM17_BASE+0x44))
#define TIM17_DCR         ((volatile unsigned int *)(TIM17_BASE+0x48))
#define TIM17_DMAR        ((volatile unsigned int *)(TIM17_BASE+0x4C))

/* *** DBGMCU (Base: 0x.4001.5800) *************************************** */

#define DBGMCU_BASE        (0x40015800)
#define DBGMCU_IDCODE      ((volatile unsigned int *)(DBGMCU_BASE+0x00))
#define DBGMCU_CR          ((volatile unsigned int *)(DBGMCU_BASE+0x04))
#define DBGMCU_APB1_FZ     ((volatile unsigned int *)(DBGMCU_BASE+0x08))
#define DBGMCU_APB2_FZ     ((volatile unsigned int *)(DBGMCU_BASE+0x0C))

/* **************************************************************************
** PERIPHERALS TO AHB1
************************************************************************** */

/* *** DMA1 (Base: 0x.4002.0000) ***************************************** */

#define DMA_BASE        (0x40020000)

#define DMA_ISR        ((volatile uint32_t *)(DMA_BASE+0x00))
#define DMA_IFCR       ((volatile uint32_t *)(DMA_BASE+0x04))

#define DMA_CCR1       ((volatile uint32_t *)(DMA_BASE+0x08))
#define DMA_CNDTR1     ((volatile uint32_t *)(DMA_BASE+0x0C))
#define DMA_CPAR1      ((volatile uint32_t *)(DMA_BASE+0x10))
#define DMA_CMAR1      ((volatile uint32_t *)(DMA_BASE+0x14))
#define DMA_CCR2       ((volatile uint32_t *)(DMA_BASE+0x1C))
#define DMA_CNDTR2     ((volatile uint32_t *)(DMA_BASE+0x20))
#define DMA_CPAR2      ((volatile uint32_t *)(DMA_BASE+0x24))
#define DMA_CMAR2      ((volatile uint32_t *)(DMA_BASE+0x28))
#define DMA_CCR3       ((volatile uint32_t *)(DMA_BASE+0x30))
#define DMA_CNDTR3     ((volatile uint32_t *)(DMA_BASE+0x34))
#define DMA_CPAR3      ((volatile uint32_t *)(DMA_BASE+0x38))
#define DMA_CMAR3      ((volatile uint32_t *)(DMA_BASE+0x3C))
#define DMA_CCR4       ((volatile uint32_t *)(DMA_BASE+0x44))
#define DMA_CNDTR4     ((volatile uint32_t *)(DMA_BASE+0x48))
#define DMA_CPAR4      ((volatile uint32_t *)(DMA_BASE+0x4C))
#define DMA_CMAR4      ((volatile uint32_t *)(DMA_BASE+0x50))
#define DMA_CCR5       ((volatile uint32_t *)(DMA_BASE+0x58))
#define DMA_CNDTR5     ((volatile uint32_t *)(DMA_BASE+0x5C))
#define DMA_CPAR5      ((volatile uint32_t *)(DMA_BASE+0x60))
#define DMA_CMAR5      ((volatile uint32_t *)(DMA_BASE+0x64))
#define DMA_CCR6       ((volatile uint32_t *)(DMA_BASE+0x6C))
#define DMA_CNDTR6     ((volatile uint32_t *)(DMA_BASE+0x70))
#define DMA_CPAR6      ((volatile uint32_t *)(DMA_BASE+0x74))
#define DMA_CMAR6      ((volatile uint32_t *)(DMA_BASE+0x78))
#define DMA_CCR7       ((volatile uint32_t *)(DMA_BASE+0x80))
#define DMA_CNDTR7     ((volatile uint32_t *)(DMA_BASE+0x84))
#define DMA_CPAR7      ((volatile uint32_t *)(DMA_BASE+0x88))
#define DMA_CMAR7      ((volatile uint32_t *)(DMA_BASE+0x8C))

#define DMA_CSELR     ((volatile uint32_t *)(DMA_BASE+0xA8))


/* *** RCC RESET & POWER CONTROL (Base: 0x.4002.3800) ******************** */

#define RCC_BASE        (0x40021000)
#define RCC_CR          ((volatile unsigned int *)(RCC_BASE+0x00))
#define RCC_CFGR        ((volatile unsigned int *)(RCC_BASE+0x04))
#define RCC_CIR         ((volatile unsigned int *)(RCC_BASE+0x08))
#define RCC_APB2RSTR    ((volatile unsigned int *)(RCC_BASE+0x0C))
#define RCC_APB1RSTR    ((volatile unsigned int *)(RCC_BASE+0x10))
#define RCC_AHBENR      ((volatile unsigned int *)(RCC_BASE+0x14))
#define RCC_APB2ENR     ((volatile unsigned int *)(RCC_BASE+0x18))
#define RCC_APB1ENR     ((volatile unsigned int *)(RCC_BASE+0x1C))
#define RCC_BDCR        ((volatile unsigned int *)(RCC_BASE+0x20))
#define RCC_CSR         ((volatile unsigned int *)(RCC_BASE+0x24))
#define RCC_AHBRSTR     ((volatile unsigned int *)(RCC_BASE+0x28))
#define RCC_CFGR2       ((volatile unsigned int *)(RCC_BASE+0x2C))
#define RCC_CFGR3       ((volatile unsigned int *)(RCC_BASE+0x30))
#define RCC_CR2         ((volatile unsigned int *)(RCC_BASE+0x34))

/* *** FLASH INTERFACE (Base 0x.4002.2000) ******************************* */

#define FLASH_BASE      (0x40022000)
#define FLASH_ACR       ((volatile unsigned int *)(FLASH_BASE+0x00))
#define FLASH_KEYR      ((volatile unsigned int *)(FLASH_BASE+0x04))
#define FLASH_OPTKEYR   ((volatile unsigned int *)(FLASH_BASE+0x08))
#define FLASH_SR        ((volatile unsigned int *)(FLASH_BASE+0x0C))
#define FLASH_CR        ((volatile unsigned int *)(FLASH_BASE+0x10))
#define FLASH_AR        ((volatile unsigned int *)(FLASH_BASE+0x14))
#define FLASH_OBR       ((volatile unsigned int *)(FLASH_BASE+0x1C))
#define FLASH_WRPR      ((volatile unsigned int *)(FLASH_BASE+0x20))

/* *** CRC (Base: 0x.4002.3000) ****************************************** */

#define CRC_BASE        (0x40023000)
#define CRC_DR          ((volatile unsigned int *)(CRC_BASE+0x00))
#define CRC_IDR         ((volatile unsigned int *)(CRC_BASE+0x04))
#define CRC_CR          ((volatile unsigned int *)(CRC_BASE+0x08))
#define CRC_INIT        ((volatile unsigned int *)(CRC_BASE+0x0C))
#define CRC_POL         ((volatile unsigned int *)(CRC_BASE+0x10))

/* *** TSC (Base: 0x.4002.4000) ****************************************** */

#define TSC_BASE        (0x40024000)
#define TSC_CR          ((volatile unsigned int *)(TSC_BASE+0x00))
#define TSC_IER         ((volatile unsigned int *)(TSC_BASE+0x04))
#define TSC_ICR         ((volatile unsigned int *)(TSC_BASE+0x08))
#define TSC_ISR         ((volatile unsigned int *)(TSC_BASE+0x0C))
#define TSC_IOHCR       ((volatile unsigned int *)(TSC_BASE+0x10))
#define TSC_IOASCR      ((volatile unsigned int *)(TSC_BASE+0x18))
#define TSC_IOSCR       ((volatile unsigned int *)(TSC_BASE+0x20))
#define TSC_IOCCR       ((volatile unsigned int *)(TSC_BASE+0x28))
#define TSC_IOGCSR      ((volatile unsigned int *)(TSC_BASE+0x30))
#define TSC_IOG1CR      ((volatile unsigned int *)(TSC_BASE+0x34))
#define TSC_IOG2CR      ((volatile unsigned int *)(TSC_BASE+0x38))
#define TSC_IOG3CR      ((volatile unsigned int *)(TSC_BASE+0x3C))
#define TSC_IOG4CR      ((volatile unsigned int *)(TSC_BASE+0x40))
#define TSC_IOG5CR      ((volatile unsigned int *)(TSC_BASE+0x44))
#define TSC_IOG6CR      ((volatile unsigned int *)(TSC_BASE+0x48))
#define TSC_IOG7CR      ((volatile unsigned int *)(TSC_BASE+0x4C))
#define TSC_IOG8CR      ((volatile unsigned int *)(TSC_BASE+0x50))

/* **************************************************************************
** PERIPHERALS TO AHB2
************************************************************************** */

/* *** GPIO PortA (Base: 0x.4002.0000) *********************************** */

#define GPIOA_BASE      (0x48000000)
#define GPIOA_MODER     ((volatile unsigned int *)(GPIOA_BASE+0x00))
#define GPIOA_OTYPER    ((volatile unsigned int *)(GPIOA_BASE+0x04))
#define GPIOA_OSPEEDR   ((volatile unsigned int *)(GPIOA_BASE+0x08))
#define GPIOA_PUPDR     ((volatile unsigned int *)(GPIOA_BASE+0x0C))
#define GPIOA_IDR       ((volatile unsigned int *)(GPIOA_BASE+0x10))
#define GPIOA_ODR       ((volatile unsigned int *)(GPIOA_BASE+0x14))
#define GPIOA_BSRR      ((volatile unsigned int *)(GPIOA_BASE+0x18))
#define GPIOA_LCKR      ((volatile unsigned int *)(GPIOA_BASE+0x1C))
#define GPIOA_AFRL      ((volatile unsigned int *)(GPIOA_BASE+0x20))
#define GPIOA_AFRH      ((volatile unsigned int *)(GPIOA_BASE+0x24))
#define GPIOA_BRR       ((volatile unsigned int *)(GPIOA_BASE+0x28))

/* *** GPIO PortB (Base: 0x.4002.0400) *********************************** */

#define GPIOB_BASE      0x48000400
#define GPIOB_MODER     ((volatile unsigned int *)(GPIOB_BASE+0x00))
#define GPIOB_OTYPER    ((volatile unsigned int *)(GPIOB_BASE+0x04))
#define GPIOB_OSPEEDR   ((volatile unsigned int *)(GPIOB_BASE+0x08))
#define GPIOB_PUPDR     ((volatile unsigned int *)(GPIOB_BASE+0x0C))
#define GPIOB_IDR       ((volatile unsigned int *)(GPIOB_BASE+0x10))
#define GPIOB_ODR       ((volatile unsigned int *)(GPIOB_BASE+0x14))
#define GPIOB_BSRR      ((volatile unsigned int *)(GPIOB_BASE+0x18))
#define GPIOB_LCKR      ((volatile unsigned int *)(GPIOB_BASE+0x1C))
#define GPIOB_AFRL      ((volatile unsigned int *)(GPIOB_BASE+0x20))
#define GPIOB_AFRH      ((volatile unsigned int *)(GPIOB_BASE+0x24))
#define GPIOB_BRR       ((volatile unsigned int *)(GPIOB_BASE+0x28))

/* *** GPIO PortC (Base: 0x.4002.0800) *********************************** */

#define GPIOC_BASE      0x48000800
#define GPIOC_MODER     ((volatile unsigned int *)(GPIOC_BASE+0x00))
#define GPIOC_OTYPER    ((volatile unsigned int *)(GPIOC_BASE+0x04))
#define GPIOC_OSPEEDR   ((volatile unsigned int *)(GPIOC_BASE+0x08))
#define GPIOC_PUPDR     ((volatile unsigned int *)(GPIOC_BASE+0x0C))
#define GPIOC_IDR       ((volatile unsigned int *)(GPIOC_BASE+0x10))
#define GPIOC_ODR       ((volatile unsigned int *)(GPIOC_BASE+0x14))
#define GPIOC_BSRR      ((volatile unsigned int *)(GPIOC_BASE+0x18))
#define GPIOC_LCKR      ((volatile unsigned int *)(GPIOC_BASE+0x1C))
#define GPIOC_AFRL      ((volatile unsigned int *)(GPIOC_BASE+0x20))
#define GPIOC_AFRH      ((volatile unsigned int *)(GPIOC_BASE+0x24))
#define GPIOC_BRR       ((volatile unsigned int *)(GPIOC_BASE+0x28))

/* *** GPIO PortF (Base: 0x.4002.1400) *********************************** */

#define GPIOF_BASE      0x48001400
#define GPIOF_MODER     ((volatile unsigned int *)(GPIOF_BASE+0x00))
#define GPIOF_OTYPER    ((volatile unsigned int *)(GPIOF_BASE+0x04))
#define GPIOF_OSPEEDR   ((volatile unsigned int *)(GPIOF_BASE+0x08))
#define GPIOF_PUPDR     ((volatile unsigned int *)(GPIOF_BASE+0x0C))
#define GPIOF_IDR       ((volatile unsigned int *)(GPIOF_BASE+0x10))
#define GPIOF_ODR       ((volatile unsigned int *)(GPIOF_BASE+0x14))
#define GPIOF_BSRR      ((volatile unsigned int *)(GPIOF_BASE+0x18))
#define GPIOF_LCKR      ((volatile unsigned int *)(GPIOF_BASE+0x1C))
#define GPIOF_AFRL      ((volatile unsigned int *)(GPIOF_BASE+0x20))
#define GPIOF_AFRH      ((volatile unsigned int *)(GPIOF_BASE+0x24))
#define GPIOF_BRR       ((volatile unsigned int *)(GPIOF_BASE+0x28))

/* **************************************************************************
 * OTHER INTERNAL & CALIBRATION VALUES
 ************************************************************************* */

/* *** TEMPERATURE CALIBRATION VALUES ************************************ */

#define TS_CAL1         ((volatile unsigned short int *)(0x1FFFF7B8))
#define TS_CAL2         ((volatile unsigned short int *)(0x1FFFF7C2))

/* *** INTERNAL VOLTAGE REFERENCE CALIBRATION VALUE ********************** */

#define VREFINT_CAL     ((volatile unsigned short int *)(0x1FFFF7BA))


/* **************************************************************************
 * END OF DEFINITIONS
 ************************************************************************* */




#endif /* STM32F042_REGS__H_ */
