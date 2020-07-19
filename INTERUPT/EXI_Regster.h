

#ifndef COTS_MCAL_EXI_EXI_REGSTER_H_
#define COTS_MCAL_EXI_EXI_REGSTER_H_

 #define falling   0
  #define rising    1
  #define io        2
  #define low_level 3 
  #define control_sens rising

#define INT0 6 
#define INT1 7
#define ISC00 0
#define ISC01 1

void __vector_2 (void)   __attribute__((signal));

#define GICR *((volatile unsigned char *)0x5B)

#define MCUCSR *((volatile unsigned char*) 0x54)

#define GIFR *((volatile unsigned char *)0x5A)

#define MCUCR *((volatile unsigned char *)0x55)




#endif /* COTS_MCAL_EXI_EXI_REGSTER_H_ */
