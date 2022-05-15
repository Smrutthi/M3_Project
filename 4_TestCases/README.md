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
L_02  | Wiper System ON condition | Button pressed twice | Blue, Green and Orange LEDs ON one by one | Blue, Green and Orange LEDs ON one after other | Requirement based
L_03  | Wiper System OFF condition | Button pressed thrice | Orange, Green and Blue LEDs OFF one by one | Orange, Green and Blue LEDs OFF one after other | Requirement based
L_04  | Engine System OFF condition | Button pressed four times | Red LED OFF | Red LED OFF | Requirement based
