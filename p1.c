#include <reg51.h>

void main()
{
	unsigned char mybyte; 

	P0 = 0X09;
	P1 = 0X00;
	P2 = 0X00;

	while(1)
	{
		mybyte = P0;

		if(mybyte < 100)
		{
			P1 = mybyte; 
		}
		else
		{
			P2 = mybyte;
		}
	}
}
