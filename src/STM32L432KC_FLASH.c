// STM32L432KC_FLASH.c
// Source code for FLASH functions
// Josh Brake (jbrake@hmc.edu)

#include "STM32L432KC_FLASH.h"

void configureFlash() {
  FLASH->ACR |= FLASH_ACR_LATENCY_4WS;
  FLASH->ACR |= FLASH_ACR_PRFTEN;
}
