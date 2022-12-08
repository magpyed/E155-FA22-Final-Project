---
layout: page
title: Documentation
permalink: /doc/
---

# Schematics
<!-- Include images of the schematics for your system. They should follow best practices for schematic drawings with all parts and pins clearly labeled. You may draw your schematics either with a software tool or neatly by hand. -->


<div style="text-align: left">
  <img src="./assets/schematics/Schematic_final.png" alt="Schematic" width="800" />
</div>

| Signal | SDA | SCL | Aiming PWM | Firing PWM | Gate PWM | done | crct pwd | incrct pwd | rows\[3:0\] | cols\[3:0\] | LEDs\[3:0\] | FSM reset |
| ------ | --- | --- | -------- | ------ | -------- | ---- | -------- | -------- | ------- | ----------- | -------- | --- |
| FPGA Pin | | | | | | P26 | P27 | P20 | P47, P10, P21, P11 | P19, P6, P4, P48 | P9, P18, P13, P12 | P43 |
| MCU Pin | PA10 | PA9 | PA8 | PA2 (jumped to PB3) | PA6 | PA5 | PB5 | PA11 | | | | |

# Source Code Overview
<!-- This section should include information to describe the organization of the code base and highlight how the code connects. -->

The source code for the project is located in a Github repository [here](https://github.com/magpyed/E155-FA22-Final-Project/tree/main/src).

### FPGA
Our sole FPGA file is final_proj.sv. This file contains our main FSM. It waits for a key to be pressed, then updates the stored user input and increments a counter. Once that counter hits four, we update our LED display to reflect the accuracy of the password, and send either the crct_pwd or incrct_pwd signals to the MCU. We’ve incorporated both synchronisers and wait states to eliminate key bounce from the system. Until the MCU has finished the routine, no new key presses are registered. The keypad is reenabled once the MCU sends a signal over to the FPGA. This signal almost acts like a reset - clearing all state except for the LED outputs. This allows the user to see what numbers were incorrect while they try again.

### MCU
The main routines are contained in main.c. First, we set up the system - setting the system clock, initializing peripherals and GPIO, and performing the VL53L0X calibration. Then we move on to our main routine, in a while loop. We receive a new distance measurement from the VL53L0X, and update the angle of our water gun with an arctan. Then, we poll our GPIO pins to see if the user has successfully input a password. If a correct password has been input, we run our gate routine. If an incorrect password has been input, we run a firing routine instead. Both routines actuate their respective servos, and finish by pulsing a done output to the FPGA, allowing a new password to be entered. 

The rest of the C files are support for main.c. The STM32L432KC_I2C.{c/h} files allow the user to initialize and send messages over I2C. The STM32L432KC_SERVO.{c/h} files contain a simple three-servo driver using the MCU’s timer peripherals. The VL53L0X.{c/h} files contain the driver for the time-of-flight sensor. Other files were provided to us by Prof. Brake.
 

# Bill of Materials
<!-- The bill of materials should include all the parts used in your project along with the prices and links.  -->

| Item | Part Number | Quantity | Unit Price | Link |
| ---- | ----------- | ----- | ---- | ---- |
| Adafruit VL53L0X Time of Flight Distance Sensor |  3317 | 1 | $14.95 |  [link](https://www.adafruit.com/product/3317) |
| Adafruit Standard Servo TowerPro SG-5010 | 155 | 1 | $12.00 | [link](https://www.adafruit.com/product/155) |
| Adafruit Micro Servo | 169 | 2 | $5.95 | [link](https://www.adafruit.com/product/169) |

**Total cost: $38.85**
