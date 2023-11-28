# RC Car with HC 05
  In this repository, I will show you how I made an RC car with a Bluetooth (HC-05) module.

# What is RC car with HC-05?
The RC Car is a typical vehicle with wheels that can be operated using either a joystick or a mobile app. 
 To enable wireless connectivity, the car must be equipped with a Bluetooth module or a similar device. 
Personally, I use the HC-05 Bluetooth Module, which serves as both a master and a slave.

![](https://europe1.discourse-cdn.com/arduino/original/4X/d/6/9/d69d3dc4e0921b30bcbad567e7dd2da76d60644a.jpeg)

## Hardware used :
1. Arduino nano
2. Motor driver `l298n`
3. Small breadboard
4. Bluetooth Module `HC-05`
5. 2*Resistors (100k-200k)
6. Yellow DC motors
7. 4*Li Batteries
8. jumpers
9. switch
10. Booster

# Hardware Connections
![RC Car_bb](https://github.com/Hamaozil/RC-Car-with-HC-05/assets/115914652/12199c97-636c-42d0-9a73-93ad7f19808d)

# Code:
I have created 2 files: one for the movements function, and the other for the main program.
- In the movements file, I have created a function called `MakeMove` with 2 parameters for the left and right motor speeds. If the speed is negative, it means the motor has to move backward, and i multiplied it by -1 to make it positive; otherwise, the motor will go forward normally.
- In the main file, I have defined my pins and created an object from the `SoftwareSerial` library which I named Bluetooth and assigned Rx & Tx to it. In the setup, I defined the pins mode and initialized the baud rate for both Bluetooth and Serial monitor. In the loop, I checked for incoming signals from the Bluetooth app controller. If it receives anything, I checked it and made a move based on it, otherwise I kept it stopped.
