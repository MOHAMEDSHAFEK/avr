/*
 * avr_blinky.c
 *
 * Created: 16-07-2019 11:29:37 PM
 * Author : Maz-inger
 */
#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 8000000UL //8MHz crystal




int main(void)
{
	DDRB |= (1<<DDB1) ;
	DDRB |= (1<<DDB2) ;

    while (1)
    {
		_delay_ms(1000);
		PORTB |= (1<<PORTB1) ;
		PORTB |= (1<<PORTB2) ;
		_delay_ms(2000);
		PORTB &= ~(1<<PORTB1) ;
		PORTB &= ~(1<<PORTB2) ;
		_delay_ms(100);
		PORTB |= (1<<PORTB1) ;
		PORTB |= (1<<PORTB2) ;
		_delay_ms(500);
		PORTB &= ~(1<<PORTB1) ;
		PORTB &= ~(1<<PORTB2) ;

    }
}