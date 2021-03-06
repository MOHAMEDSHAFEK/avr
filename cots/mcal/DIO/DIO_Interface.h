#ifndef _DIO_INTERFACE_H_
#define _DIO_INTERFACE_H_
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

#define HIGH 1
#define LOW   0

#define OUTPUT 1
#define INPUT  0



void DIO_VidSetPinDirection(u8 LOC_u8port, u8 LOC_u8pin,u8 LOC_u8stat);
void DIO_VidSetPinValue(u8 LOC_u8port, u8 LOC_u8pin, u8 LOC_u8value);
void DIO_VidSetPortDirection(u8 LOC_u8port, u8 LOC_u8value);
void DIO_VidSetPortValue(u8 LOC_u8port, u8 LOC_u8value);
u8 DIO_U8GitPinValue(u8 LOC_u8port, u8 LOC_u8pin);


#endif