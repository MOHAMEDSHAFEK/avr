

#ifndef COTS_MCAL_TIMER_TIMER_INTERFACE_H_
#define COTS_MCAL_TIMER_TIMER_INTERFACE_H_
  #include "timer_congiration.h"

void TIMER0_VidInit(Timer0Mode_type mode, Timer0Scaler_type scaler);

void Timer0_VidOverInterrupt_Enable(void);
void Timer0_VidOverInterrupt_Disable(void);

void Tim_Count0_VidCounterReg(u8 Loc_u8TCNTvalue);

void Tim_Count0_VidCompareReg(u8 Loc_u8OCRvalue);

void TIMER0_VidSetCallBack(void (*LOC_funcptr)(void)  );
void Set_Duty_cycle(u8 Loc_u8OCRvalue);


//TIMER_1
void Tim1_Count0_ICR1(u16 Loc_u8TCNTvalue);
void Tim1_Count0_OCR1A(u16 Loc_u8OCRvalue);

#endif /* COTS_MCAL_TIMER_TIMER_INTERFACE_H_ */
