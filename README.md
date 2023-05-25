# Door_Locking_System
### This project is door locker system implemented by AVR microcontroller that will provide more secure.
## The flow of Project:
### - User firstly entered a password
### - MCU ask user to re-enter a password
### - Two Passwords are send serially using UART to another MCU to check validaty of Two   passwords
### - if two passwords are matched --> MCU will save this password into EEPROM
### - two options will appeared to user on the screen 
### - open door option and Change password option
### - if user entered open door option ---> MCU will ask for password
### - when user Entered a password --> MCU cheks this password with password stored in EEPROM
### - if Password correct --> Door will open for 15 sec and will hold and will close again 
### - if Password not correct ---> MCU ask again the user to enter a password until 3 entered wrong password ---> BUZZER will ON
### - if user select change password option ---> MCU ask user for old password if Two password are correctly ---> Return user to first page
### - if user entered 3 times wrong password ---> BUZZER will turn ON

## Drivers used in Project:
### - Keypad 4x4 that will take input from user.
### - LCD 16x2 that will display password status entered by user.
### - UART Driver that will send the password entered to another MCU to check validaty of Password.
### - EEPROM Driver that used to save Passwrod entered by user.
### - I2C Driver used to interact with EEPROM Driver
### - DC Motor will rotate if user entered a Two matched passwords
### - GPIO Driver
