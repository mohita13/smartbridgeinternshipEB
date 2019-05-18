/*
 * evenodd_led.c
 *
 * Created: 5/18/2019 11:15:08 AM
 * Author : mohita
 */ 

#ifndef  F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB= 0xFF;
	while (1)
	{
		PORTB = 0X55;
		_delay_ms(1000);
		PORTB = 0XAA;
		_delay_ms(1000);
	}
}

