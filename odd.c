/*
 * odd.c
 *
 * Created: 5/18/2019 11:25:35 AM
 * Author : mohita
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB= 0xAA;
	while (1)
	{
		PORTB = 0xFF;
		_delay_ms(100);
	}
}


