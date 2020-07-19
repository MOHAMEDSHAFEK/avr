
#ifndef _BIT_CALC_H_
#define _BIT_CALC_H_
#define SET_BIT(VAR,BITNO) (VAR) |=  (1 << (BITNO))
#define CLR_BIT(VAR,BITNO) (VAR) &= ~(1 << (BITNO))
#define TOG_BIT(VAR,BITNO) (VAR) ^=  (1 << (BITNO))
#define GET_BIT(VAR,BITNO) (((VAR) >> (BITNO)) & 0x01)
#define shafir_rotat_right(var,bit_no)  ((var>>bit_no) |= (var<<8-bit_no))
#define shafir_rotat_lift(var,bit_no)   ((var<<bit_no) |= (var>>8-bit_no))




#endif