#ifndef SEVEN_SEG_H
#define SEVEN_SEG_H

#include <avr/io.h>
///  Connections
///  PORTx:  bit-7 bit-6 bit-5 bit-4 bit-3 bit-2 bit-1 bit-0
///  7-SEG:   dot     G     F     E     D     C     B     A

#define ZERO  	0b00111111
#define ONE   	0b00000110
#define TWO   	0b01011011
#define THREE 	0b01001111
#define FOUR  	0b01100110
#define FIVE  	0b01101101
#define SIX   	0b01111101
#define SEVEN 	0b00000111
#define EIGHT 	0b01111111
#define NINE  	0b01101111
//hex digits
#define A 		0b01110111
#define b 		0b01111100
#define c 		0b01011100
#define d 		0b01011110
#define E 		0b01111001
#define F 		0b01110001

#define DOT   	0b10000000

typedef enum { COM_ANODE,COM_CATHODE } Type ;

extern const uint8_t seven_seg_digits[];


typedef struct
{
	volatile uint8_t* PORT;
	volatile uint8_t* DDR;
	Type type ;
	uint8_t current_value;
}_7seg;



void _7seg_port_init(_7seg* ,volatile uint8_t* PORT,volatile uint8_t* DDR,Type type, uint8_t current_value );
void display_num(_7seg*segment,uint8_t num); //display num where num must be a number between [0-9]
void inc_current(_7seg*segment); // increment current displayed value on the 7-seg
void dec_current(_7seg*segment); //decrement the current idsplayed value on the 7-seg
void zero(_7seg*segment); //reset count to zero


#endif
