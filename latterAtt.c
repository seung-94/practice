#include<stdio.h>

int main (void)
{
	unsigned char attr;
	
	attr = attr ^ attr; //attr = 0;
	attr = attr | 0x01;
	attr = attr | 0x02 + 0x04;
	//attr = attr & 0xfe;
	//attr = attr &~ 0x01;
	attr = attr ^ 0x01;
	
	printf ("attr : 0x%02x\n" , attr);
	return 0;
}
