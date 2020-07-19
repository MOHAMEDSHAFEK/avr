

#ifndef COTS_MCAL_TIMER_TIMER_INTERFACE_H_
#define COTS_MCAL_TIMER_TIMER_INTERFACE_H_
  

void TIMER_VidEnable(void);

void Tim_Count0_VidCounterReg(u8 Loc_u8TCNTvalue);

void Tim_Count0_VidCompareReg(u8 Loc_u8OCRvalue);

void TIMER_VidSetCallBack(void (*LOC_funcptr)(void)  );

#endif /* COTS_MCAL_TIMER_TIMER_INTERFACE_H_ */
