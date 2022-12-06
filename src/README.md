# README

## FPGA Files
### final_proj.sv
All the FPGA code. 

## MCU Files
### main.c
The main file for the MCU side of things.
### VL53L0X.{c/h}
Driver for the ToF sensor.
### STM32L432KC.h
Main header for STM32L432KC-related code.
### STM32L432KC_FLASH.{c/h}
For flash memory configuration.
### STM32L432KC_GPIO.{c/h}
For GPIO port and pin configuration. 
### STM32L432KC_I2C.{c/h}
The I2C peripheral driver.
### STM32L432KC_RCC.{c/h}
For PLL/sysclk configuration.
### STM32L432KC_SERVO.{c/h}
Our servo driver (relies upon the STM's timers).
