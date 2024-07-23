#include <stdio.h>

int main (void)
{
	double man, woman;
	
	printf("man = ");
	scanf("%lf", &man);
	
	printf("woman = ");
	scanf("%lf", &woman);
	
	printf("ratio of man to woman = %.2f\n" , (man / woman)*100 );
	
	return 0;
}
