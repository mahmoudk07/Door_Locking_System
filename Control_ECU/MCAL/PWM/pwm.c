/****************************************************
* [Module]: PWM Driver
* [File Name] : pwm.c
* [Description] : Source file of PWM Driver
* [Author] : Mahmoud Khaled
* [Date] : 2/10/2022
****************************************************/
#include "pwm.h"
#include "avr/io.h"
#include "../../Utilities/common_macros.h"
/***********************************************************
*                Functions Definitions                     *
***********************************************************/

/****************************************************
* [Function Name]: PWM_Timer0_Start
* [Description]: 1- Setup the PWM mode with Non-Inverting.
*                2- Setup the pre-scaler with F_CPU/8
*                3- Setup the compare value based on the required input duty cycle
*                4- Setup the direction for OC0 as output pin through the GPIO driver.
*                5- The generated PWM signal frequency will be 500Hz to control the DC Motor speed.
* [Arguments]: duty cycle passed by DCMotor Driver
* [Returns]: No Return Type
****************************************************/
void PWM_Timer0_Start(uint8 duty_cycle){
	TCNT0 = 0; // Initialize timer with 0 //

	OCR0 = (duty_cycle * 255) / 100; // set Compare value

	SET_BIT(DDRB,PB3); // PB3 as output PIN //

	/* Set Configuration to Timer0 */
	/*
	*1- WGM01/WGM00 ----> For Fast PWM Mode of Timer0
	*2- COM01 -----> For non-inverted Mode
	*3- CS01 -----> For clock selector (FCPU / 8)
	*/
	TCCR0 = (1 << WGM00) | (1 << WGM01) | (1 << COM01) | (1 << CS01);
}






