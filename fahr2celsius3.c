#include <stdio.h>

int main (void)
{
	int fahr;
	fahr = 100;
	
	int celsius1000;
	celsius1000 = (fahr-32) * 1000 * 5 / 9;
	
	int cel = celsius1000 / 1000;
	//int po = (celsius1000 - (cel * 1000) + 5 )/10;
	int po = (celsius1000 % 1000 + 5 )/10;
	
	printf ("fahr : %d --> celsius : %d.%d\n", fahr, cel, po);
	
	return 0;
}
