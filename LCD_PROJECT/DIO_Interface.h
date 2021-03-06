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


#define HIGH 1
#define LOW 0

//--------------------
/* Set Direction of Pin in Port*/
void DIO_VidSetPinDircection (u8 LOC_u8Port, u8 LOC_u8Pin, u8 LOC_u8State );

void DIO_VidSetPinValue (u8 LOC_u8Port, u8 LOC_u8Pin, u8 LOC_u8Value);

void DIO_VidSetPortDircection (u8 LOC_u8Port, u8 LOC_u8value );

void DIO_VidSetPortValue (u8 LOC_u8Port, u8 LOC_u8value);

u8   DIO_u8GitPinValue (u8 LOC_u8Port, u8 LOC_u8Pin);




#endif
