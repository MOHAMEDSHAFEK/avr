

#ifndef COTS_MCAL_TIMER_TIMER_REGSTER_H_
#define COTS_MCAL_TIMER_TIMER_REGSTER_H_

//timer_1
#define COM1A1 7
#define COM1A0 6

#define WGM10 0
#define WGM11 1
#define WGM12 3
#define WGM13 4

//prescaler
#define CS10 0
#define CS11 1
#define CS12 2


//timer_0
#define INT0 7
//select mode

//type of mode pin
#define WGM00 6
#define WGM01 3


//PRESCALER pins
#define CS00 0
#define CS01 1
#define CS02 2

//pins of intrrupts

#define TOIE0  0
#define OCIE0  1


//regster TIMER 0
#define TCCR0 *((volatile unsigned char *)0x53)

#define TCNT0 *((volatile unsigned char *)0x52)

#define TIMSK  *((volatile unsigned char *)0x59)

#define TIFR  *((volatile unsigned char *)0x58)

#define SFIOR  *((volatile unsigned char *)0x50)

#define OCR0  *((volatile unsigned char *)0x5C)
//regster TIMER 1
#define TCCR1A *((volatile unsigned char *)0x4F)

#define TCCR1B *((volatile unsigned char *)0x4E)

#define ICR1L  *((volatile unsigned char *)0x46)

#define ICR1H  *((volatile unsigned char *)0x47)

#define ICR1  *((volatile u16 *)0x46)

#define OCR1AL  *((volatile unsigned char *)0x4A)

#define OCR1AH  *((volatile unsigned char *)0x4B)

#define OCR1A  *((volatile u16 *)0x4A)

#define OCR1BL  *((volatile unsigned char *)0x48)

#define OCR1BH  *((volatile unsigned char *)0x49)

#define OCR1B  *((volatile u16 *)0x48)


#endif /* COTS_MCAL_TIMER_TIMER_REGSTER_H_*/
