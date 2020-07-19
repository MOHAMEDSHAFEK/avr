	#include <avr/io.h>
	#include <avr/delay.h>

	#define zero  0b0111111
	#define one   0b0000110
	#define twe   0b1011011
	#define thre  0b1001111
	#define four  0b1100110
	#define five  0b1101101
	#define six   0b1111101
	#define seven 0b0000111
	#define eaght 0b1111111
	#define nune  0b1101111
	//#define set_bit(var,bit_no)   var=(1<<bit_no)|var
	void main(void)
	{
		char seg_code[10]= {zero,one,twe,thre,four,five,six,seven,eaght,nune};
		int i;
		int j;
		DDRD=0xFF;
		DDRA=0xFF;

		while (1)
		{
			for(i =0,j=10;i<10;i++,j--)
			{

				PORTD = ~seg_code[i];
				PORTA = ~seg_code[j];
				_delay_ms(500);
			}
	   }
}
