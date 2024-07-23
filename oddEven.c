#include<stdio.h>

int main (void)
{
	int num;
	printf("input num :");
	scanf("%d", &num);
	
	//int isodd = (num % 2 == 1);
	//int isodd = (num % 2);
	//int isodd = !(num % 2 == 0);
	int isodd = (num % 2 != 0);
	printf("%d is odd number : %d\n", num, isodd);
	
	return 0;
}
