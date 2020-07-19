

#ifndef COTS_MCAL_TIMER_TIMER_REGSTER_H_
#define COTS_MCAL_TIMER_TIMER_REGSTER_H_


#define INT0 7
//select mode
#define Normal_mode         						     0              //Normal_mode
#define PWM_Phasw_correct_Mode              1             //PWM_Phasw_correct_Mode
#define CTC_Mode        								      2           //CTC_Mode
#define Fast_PWM_Mode					              3          //Fast_PWM_Mode


#define type_of__mode  Normal_mode
//type of mode pin
#define WGM00 6
#define WGM01 3
//CLOCK SELECT PRESCALER
#define prescaler_0         0              //No prescaler
#define prescaler_8         8             //8 prescaler
#define prescaler_64       64           //64 prescaler
#define prescaler_256     256        //256 prescaler
#define prescaler_1024   1024      //1024 prescaler

#define prescaler_mode  prescaler_256
//PRESCALER pins
#define CS00 0
#define CS01 1
#define CS02 2


//interrupt is enabled

#define  Compare_Match   0
#define  Overflow                1
#define  enable  1
#define  disable  0
#define  interrupt_overflow_enabled                        enable
#define  interrupt_Compare_Match_enabled          disable
//pins of intrrupts

#define TOIEO  0
#define OCIE0  1


//regster
#define TCCR0 *((volatile unsigned char *)0x53)

#define TCNT0 *((volatile unsigned char *)0x52)

#define TIMSK  *((volatile unsigned char *)0x59)

#define TIFR  *((volatile unsigned char *)0x58)

#define SFIOR  *((volatile unsigned char *)0x50)



#endif /* COTS_MCAL_TIMER_TIMER_REGSTER_H_*/
