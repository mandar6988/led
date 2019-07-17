#include"lpc214x.h"

# define led 10


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
	
IOSET0=1<<led;
delay(2000);
IOCLR0=1<<led;
delay(2000);
}

}


