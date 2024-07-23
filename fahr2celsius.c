#include <stdio.h>

int main (void)
{
	int fahr;
	int celsius;
	
	fahr = 100;
	
	//celsius = (fahr-32) * 5 / 9;
	celsius = (int)( 5.0 / 9.0 * (double)(fahr-32));
	
	printf ("fahr:%d ---> celsius:%d\n  ", fahr, celsius);
	return 0;
}
