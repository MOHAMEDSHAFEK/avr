/*
 * EXI_Regster.h
 *
 *  Created on: Jun 17, 2020
 *      Author: shafek
 */

#ifndef COTS_MCAL_EXI_EXI_REGSTER_H_
#define COTS_MCAL_EXI_EXI_REGSTER_H_




#define MCUCSR *((volatile u8*) 0x54)


#define MCUCR *((volatile u8*)0x55)

#define GICR *((volatile u8*)0x5B)

#define GIFR *((volatile u8*)0x5A)

#endif /* COTS_MCAL_EXI_EXI_REGSTER_H_ */
