#include"lpc214x.h"



void delay(unsigned int count)
{
unsigned int i,j;
for(i=0;i<3000;i++)
	{
		for(j=0;j<count;j++)
		{
		}
	}
}


int main()
{

IODIR0=0xFFFFFFFF;

while(1)
{
	
IOSET0=0xFFFFFFFF;
delay(2000);
IOCLR0=0xFFFFFFFF;
delay(2000);
}

}


