# Introduction
Windshield wipers generally necessary for maintaining appropriate vision for the driver, especially in modern high-speed cars. Rain, snow, mud, pollen, frost, and other pollutants are swept away by wiper blades in cars. Most wipers include a low, high, and intermittent speed option, as well as an intermittent mode.The motor runs constantly when the wipers are set to low or high speed. In the intermittent mode, however, the wipers come to a halt between wipes. There are many different kinds of switches for wipers. In this project, the wiper blades' speed is varied in accordance with the rate of rainfall.
# Objective
* To detach dust, mud, rain drops, snow and other debris from the windshield
* To assure a perfect view for driving safety
# Features

# Research
# Hardware Component
* STM32F407 Microcontroller Board
# Software Used
* STM CUBE IDE
* QEMO
# Component Description
## STM#@F$407 Microcontroller
The STM32F407 associate to the family of  microcontroller with an ARM cortex-M4 core that is designed on the RISC (Reduced-instruction-set Computing) architecture. This module includes high-speed embedded memory units such as flash memory with a storage capacity of one megabyte, static random access memory with a storage space of ninety kilobytes and four-kilobyte static ram as a backup memory unit. There are 12 GP sixteen bit timers, along with two pulse width modulation timers for motor speed management. There are also 2 GP thirty-two bit timers. With the use of three AHB buses and a thirty-two-bit multi AHB bus matrix, this component can connect to a variety of external devices via the APB bus.
## Features
* Up to 17 timers: up to twelve 16-bit and two 32-bit timers up to 168 MHz, each with up to 4 IC/OC/PWM or pulse counter
* Clock, reset and supply management
* Flexible static memory controller supporting Compact Flash, SRAM, PSRAM, NOR and NAND memories
* True random number generator
# Working Procedure
In this project STM32F407G Microcontroller is used. When the switch button is pressed first and holds for 2 sec, the Red LED is ON indicating Ignition key position at ACCESSORY. While pressing the button for second time, Blue LED is ON with the frequency of 1 Hz then followed by Green LED is ON with the frequency of 4 Hz and Orange LED is ON with the frequency of 8 Hz that determines Wiper ON. When the button is pressed again, Orange LED is OFF followed by Green LED and Blue LED OFF and the wiper system is OFF. After the next press of the button and holds for 2 sec, the Red LED is OFF indicating Ignition key position at LOCK.
# SWOT Analysis
![SWOT-Analysis-Examples](https://user-images.githubusercontent.com/89585989/168295365-8f0ae206-d032-4646-becf-61d72a3a18c1.png)
## Strength
* This project is helpful for the removal of dust, rain drops, snow and other scraps quickly
* This project allows for enhanced vision
* Supportive for escaping from accidents due to the rain drops in the windscreen
## Weakness
* The wipers may not clean some areas in automobiles
* Need to renewed the wipers after a predetermined amount of time
## Opportunity
* Safe driving and provides clear view
* Avoids accident risks
## Threat
* Works with constrained speed limits
* High Cost
# 4W's and 1 H
## What
This project contains wiper blades that helps to remove dust, rain drops, snow and other scraps for enhanced vision
## Why
This project is helpful for clear view through the windscreen in order to have a safe travel
## When
This wiper control system project can be used at the time of raining for clear visibility of things in opposite side
## Who
This project benefits travellers by improving visibility during riding
## How
This project alters the speed of the wiper blades according to the rate of rainfall
# Requirement
## High Level Requirements
| ID  | Description | Status |
| --- | --- | --- |
| HLR-1 | Ignition Key Position is at ACCESSORY | Implemented |
| HLR-2 | Wiper System On | Implemented |
| HLR-3 | Wiper System Off | Implemented |
| HLR-4 | Ignition Key Position is at LOCK | Implemented |
## Low Level Requirements
| ID  | Description | Status |
| --- | --- | --- |
| LLR-1 | Switch Button when pressed for the first time and held for 2 secs the Red LED is ON  | Implemented |
| LLR-2 | Switch Button when pressed for the second time the Blue, Green and Orange LEDs are ON one at a time with the set frequency | Implemented |
| LLR-3 | Switch Button when pressed for the third time the Orange, Green and Blue LEDs are OFF  | Implemented |
| LLR-4 | Switch Button when pressed for the fourth time and held for 2 secs the Red LED is OFF | Implemented |
