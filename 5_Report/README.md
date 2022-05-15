# Wiper Control System
![how-to-care-for-wiper-blades](https://user-images.githubusercontent.com/89585989/168457897-14d7e952-26ed-4805-a904-d63cfb6b15ff.jpg)

# Abstract
A substantial rate of vision is essential while driving safe. Rain, snow, mud, pollen, frost, and other pollutants are swept away by wiper blades in cars. Wiper blades on the windscreen optimize clarity, effectiveness, and dependability. If debris remains on the windscreen for an extended duration of time, it is challenging to clean them. When these dirt are not cleaned, this will obstruct the driver's vision and increase the danger of a car accident. Rain-sensing wipers are indeed a comparatively new innovation in wiper technology. A rain sensor is used in many windshield systems nowadays calculate the speed during which droplets fall on the windscreen. Rain-sensing wipers become quite appealing as they attempt to reduce the amount of time the driver has take his or her hands off the wheel. In this project, the wiper blades' speed is varied in accordance with the rate of rainfall.
# Introduction
Windshield wipers generally necessary for maintaining appropriate vision for the driver, especially in modern high-speed cars. Rain, snow, mud, pollen, frost, and other pollutants are swept away by wiper blades in cars. Most wipers include a low, high, and intermittent speed option, as well as an intermittent mode.The motor runs constantly when the wipers are set to low or high speed. In the intermittent mode, however, the wipers come to a halt between wipes. There are many different kinds of switches for wipers. In this project, the wiper blades' speed is varied in accordance with the rate of rainfall.
# Objective
* To detach dust, mud, rain drops, snow and other debris from the windshield
* To assure a perfect view for driving safety
# Features
* Accordance with the amount of rain drops, the speed of the wiper blades are varied
* Wiper System is turned ON when the button is pressed twice 
* Wiper System is turned OFF when the button is pressed thrice
# Research
In 1903, American inventor Mary Anderson was credited with inventing the first working windshield wiper. By 1917, John Oeishi had established the Tri-Continental Corporation, that would subsequently become Trico, one of the world's major windshield wiper suppliers. The hand-cranked wiper had indeed been modified with a device that used engine vacuum to drive the motor by the early 1920s. Vaccuum wipers were substituted by an electric drive in the beginning of 1960s, and the intermittent wiper was designed in the mid 1960s. Later on with the development of technologies, the wiper windshields also got updated.
# Hardware Component
* STM32F407 Microcontroller Board
# Software Used
* STM CUBE IDE
* QEMU
# Component Description
## STM32F407 Microcontroller
The STM32F407 associate to the family of  microcontroller with an ARM cortex-M4 core that is designed on the RISC (Reduced-instruction-set Computing) architecture. This module includes high-speed embedded memory units such as flash memory with a storage capacity of one megabyte, static random access memory with a storage space of ninety kilobytes and four-kilobyte static ram as a backup memory unit. There are 12 GP sixteen bit timers, along with two pulse width modulation timers for motor speed management. There are also 2 GP thirty-two bit timers. With the use of three AHB buses and a thirty-two-bit multi AHB bus matrix, this component can connect to a variety of external devices via the APB bus.

![image](https://user-images.githubusercontent.com/89585989/168477295-efb0a6ea-7bbd-49cd-bfcd-486e5d2a9d74.png)
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
| LLR-1 | Switch Button when pressed first time and held for 2 secs the Red LED is ON  | Implemented |
| LLR-2 | Switch Button when pressed second time Blue, Green and Orange LEDs are ON one at a time with set frequency | Implemented |
| LLR-3 | Switch Button when pressed third time the Orange, Green and Blue LEDs are OFF  | Implemented |
| LLR-4 | Switch Button when pressed fourth time and held for 2 secs the Red LED is OFF | Implemented |
# Design
* Structural Diagram
* Behavioral Diagram
# 1. Structural Diagram
Structural diagrams are a type of visual design that depicts the stages required to solve a problem. The structural diagram depicts the hierarchy or structure of the system's many components or modules, as well as how they connect and interact with one another.
![Structural Drawing](https://user-images.githubusercontent.com/89585989/168457798-2dd23d76-ef6a-41ee-92ff-be814479560e.png)

# 2. Behavioral Diagram
Behavior diagrams depict the items in a system's dynamic behavior which can be represnted as a series of changes over time. A behavior diagram is intended to provide clarity.

![Behavioral Diagram](https://user-images.githubusercontent.com/89585989/168457838-fb5b9395-9a2f-4f95-a3cb-ea6c47063505.png)
# Block Diagram
![Block diagram](https://user-images.githubusercontent.com/89585989/168458166-325f04ec-8cb4-4e03-8388-669bb21dcfee.png)

# Test Plan
## Table no 1: High level test plan
Test ID | Description | Exp I/P | Exp O/P | Actual Output | Type of test  
--------|-------------|---------|---------|---------------|---------------
H_01  | Engine System ON | Switch button pressed one time | Engine ON | Engine ON | Requirement based
H_02  | Wiper System ON | Switch button pressed second time | Wiper ON | Wiper ON | Requirement based
H_03  | Wiper System OFF | Switch button pressed third time | Wiper OFF | Wiper OFF  | Requirement based
H_04  | Engine System OFF | Switch button pressed fourth time | Engine OFF | Engine OFF | Requirement based

## Table no 2: Low level test plan
Test ID | Description | Exp I/P | Exp O/P | Actual Output | Type of test  
--------|-------------|---------|---------|---------------|---------------
L_01  | Engine System ON condition | Button pressed once | Red LED ON | Red LED ON | Requirement based
L_02  | Wiper System ON condition | Button pressed twice | Blue, Green and Orange LEDs ON one by one | Blue, Green and Orange LEDs ON one by one | Requirement based
L_03  | Wiper System OFF condition | Button pressed thrice | Orange, Green and Blue LEDs OFF one by one | Orange, Green and Blue LEDs OFF one by one | Requirement based
L_04  | Engine System OFF condition | Button pressed four times | Red LED OFF | Red LED OFF | Requirement based

# Output
Engine is ON - Red LED is ON

![Screenshot (207)](https://user-images.githubusercontent.com/89585989/168477984-7d64dbd8-c0ec-40f6-8110-f300935fa805.png)

Wiper System is ON - Blue, Green and Orange LED are ON one after the other

![image](https://user-images.githubusercontent.com/89585989/168478127-b9b671df-8b0a-4ee8-bb43-cb3c287c8c4b.png)

![Screenshot (209)](https://user-images.githubusercontent.com/89585989/168478199-3f73822a-c3b8-4530-b8fb-69877be68c07.png)

![Screenshot (211)](https://user-images.githubusercontent.com/89585989/168478292-36816e56-fc0a-4ca1-8fe7-103cf02ac406.png)

Wiper System and Engine is OFF - All LEDs are OFF

