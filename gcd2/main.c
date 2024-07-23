#include<stdio.h>
#include"gcd.h"

int gcd(int a, int b) 
{
	int remain = a % b;
		while (remain != 0) { 
			a = b;
			b = remain;
		}
    return b;
}

int main(void)
{
	int a,b;
	printf ("input 2 nums : ");
	scanf("%d %d", &a, &b);
	
	int result = gcd(a, b);
	
	printf("%d and %d gcd : %d\n", a, b, result);
	return 0;
}
