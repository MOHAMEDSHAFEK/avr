/*
 * timer_congiration.h
 *
 *  Created on: Jul 14, 2020
 *      Author: shafek
 */

#ifndef TIMER_CONGIRATION_H_
#define TIMER_CONGIRATION_H_

typedef enum
{
	TINER0_NORMAL_MODE,
	TIMER0_PHASECRRECT_MODE,
	TIMER0_CTC_MODE,
	TIMER0_FASTPWM_MODE
}Timer0Mode_type;

typedef enum
{
	TINER0_STOP,
	TINER0_SCALER_1,
	TINER0_SCALER_8,
	TINER0_SCALER_64,
	TINER0_SCALER_256,
	TINER0_SCALER_1024,
	EXTERNALL_FALLING,
	ETERNALL_RISING
}Timer0Scaler_type;


#define TIMER_0   0
#define TIMER_1   1

#define type_of_timer  TIMER_1

#define Normal_mode         						     0              //Normal_mode
#define PWM_Phasw_correct_Mode              1             //PWM_Phasw_correct_Mode
#define CTC_Mode        								      2           //CTC_Mode
#define Fast_PWM_Mode					              3          //Fast_PWM_Mode


#define type_of__mode  Fast_PWM_Mode


//Compare Output Mode, non-PWM Mode
#define COM00    4
#define COM01 5
#define Compare_Output_Mode_1   1
#define Compare_Output_Mode_2    2
#define Compare_Output_Mode_3    3
#define Compare_Output_Mode_4    4
#define comper_mode    Compare_Output_Mode_3

//interrupt is enabled

#define  Compare_Match   0
#define  Overflow                1
#define  enable  1
#define  disable  0
#define  interrupt_overflow_enabled                        disable      //OVER FLOW MODE
#define  interrupt_Compare_Match_enabled          disable      //OCR CTC MOD

#endif /* TIMER_CONGIRATION_H_ */
