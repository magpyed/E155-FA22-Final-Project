// STM32L432KC_RCC.h
// Header for RCC functions
// Josh Brake (jbrake@hmc.edu)

#ifndef STM32L4_RCC_H
#define STM32L4_RCC_H

#include <stdint.h>
#include <stm32l432xx.h>

///////////////////////////////////////////////////////////////////////////////
// Function prototypes
///////////////////////////////////////////////////////////////////////////////

void configurePLL();
void configureClock();

#endif
