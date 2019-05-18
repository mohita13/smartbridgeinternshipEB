/*
 * pir_sensor.c
 *
 * Created: 5/18/2019 11:26:46 AM
 * Author : mohita
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif


#include <avr/io.h>
#define LED_OUTPUT		PORTB
#define PIR_Input		PINC

int main(void)
{
	DDRC = 0x00;	/* Set the PIR port as input port */
	DDRB = 0xFF;	/* Set the LED port as output port */

	while(1)
	{
		LED_OUTPUT = PIR_Input;
	}
}

