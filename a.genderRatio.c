#include <stdio.h>

int main (void)
{
	int man, woman;
	
	printf("#man #woman : ");
	scanf("%d %d", &man, &woman);
	
	//double manRatio = 1.0*man / (man + woman)*100;
	//double womanRatio = 1.0*woman / (woman + man)*100;
	
	double manRatio = (double)man / (double)(man + woman)*(double)100;
	double womanRatio = (double)woman / (woman + man)* 100;
	
	printf("manRatio = %.2f%%\t womanRatio = %.2f%%\n" , manRatio, womanRatio);
	
	return 0;
}
