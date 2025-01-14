// STM32L432KC.h
// Header to include all other STM32L432KC libraries.
// Josh Brake (jbrake@hmc.edu)
// edits by Limnanthes Serafini (lserafini@hmc.edu)
// and Noah Limpert (nlimpert@hmc.edu)

#ifndef STM32L4_H
#define STM32L4_H


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stm32l432xx.h>

// Include other peripheral libraries

#include "STM32L432KC_GPIO.h"
#include "STM32L432KC_RCC.h"
#include "STM32L432KC_FLASH.h"

// From Noah and Lim
#include "STM32L432KC_I2C.h"
#include "STM32L432KC_SERVO.h"

// Global defines

#define HSI_FREQ 16000000 // HSI clock is 16 MHz
#define MSI_FREQ 4000000  // HSI clock is 4 MHz


#endif
