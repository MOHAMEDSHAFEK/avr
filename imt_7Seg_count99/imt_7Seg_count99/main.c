/*
 * main.c
 *
 *  Created on: May 19, 2020
 *      Author: mazen
 */



#include <avr/io.h>
#include <util/delay.h>

#include "seven_seg.h"

int main(void)
{
	//init...
	_7seg segments[2];

	_7seg_port_init(&segments[0],&PORTC,&DDRC,COM_ANODE,0);
	_7seg_port_init(&segments[1],&PORTA,&DDRA,COM_ANODE,0);

	//superloop
	while(1)
	{
	for(int j=0; j<10 ; j++)
	{
		for(int i=0; i<10 ; i++)
				{
					display_num(&segments[0],i);
					_delay_ms(250);
				}
		display_num(&segments[1],j);

	}
}
}
