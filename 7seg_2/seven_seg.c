/*
 * seven_segg.c
 *
 *  Created on: May 28, 2020
 *      Author: shafek
 */
/*
 * seven_seg.c
 *
 *  Created on: May 16, 2020
 *      Author: mazen
 */
#include "seven_seg.h"

const uint8_t seven_seg_digits[16]={ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,A,b,c,d,E,F};

void _7seg_port_init(_7seg*segment ,volatile uint8_t* PORTx,volatile uint8_t* DDRx,Type type, uint8_t init_current_value )
{
	segment->PORT = PORTx;
	segment->DDR = DDRx;
	*(segment->DDR) = 0xff ;
	segment->type = type;
	segment->current_value = init_current_value;
}

void display_num( _7seg* segment,uint8_t num) //display num where num must be a number between [0-9]
{
	if(num > 15)
	{
		num = 15 ;
	}
	else if (num < 0)
	{
		num = 0;
	}
	if(segment->type == COM_ANODE)
	{
		*(segment->PORT) = ~(seven_seg_digits[num]);
	}
	else
	{
		*(segment->PORT) = seven_seg_digits[num];
	}
	segment->current_value = num ;
}

void inc_current(_7seg *segment) // increment current displayed value on the 7-seg
{
	display_num(segment,segment->current_value++);
}
void dec_current(_7seg *segment) //decrement the current idsplayed value on the 7-seg
{
	display_num(segment,segment->current_value--);
}
void zero(_7seg *segment) //reset count to zero
{
	segment->current_value = 0;
	display_num(segment,segment->current_value);
}




