

#ifndef COTS_MCAL_SPI_SPI_REGSTER_H_
#define COTS_MCAL_SPI_SPI_REGSTER_H_
//REGESTER UCSRC AND UBRRH


//REGESTER SPCR
#define SPIE   7
#define SPE   6
#define DORD  5
#define MSTR    4
#define CPOL   3
#define CPHA    2
#define SPR1   1
#define SPR0  0
//REGESTER SPSR
#define SPIF  7
#define WCOL  6
#define SPI2X   0


#define SPDR *((volatile unsigned char *)0x2F)
#define SPSR *((volatile unsigned char *)0x2E)
#define SPCR *((volatile unsigned char *)0x2D)


#endif /* COTS_MCAL_SPI_SPI_REGSTER_H_ */
