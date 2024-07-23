#include<stdio.h>

//type me

/*int main (void)
{
	int a, b, c;
	printf ("input 3 nums : ");
	scanf ("%d %d %d", &a, &b , &c);
	
	int Max, Mid, Min;
	
	if (a > b && a > c) {
		Max = a;
	} else if (b > c && b > a){
		Max = b;
	} else {
		Max = c;
	}
	
	if (a < b && a < c) {
		Min = a;
	} else if (b < c && b < a){
		Min = b;
	} else {
		Min = c;
	}
	
	if (a != Max && a != Min) {
		Mid = a;
	} else if (b != Max && b != Min){
		Mid = b;
	} else {
		Mid = c;
	}
			
	printf("Max: %d , Mid : %d , Min :%d\n", Max, Mid, Min);
	return 0;
}*/

// type A

/*int main (void)
{
	int a, b, c;
	printf ("input 3 nums : ");
	scanf ("%d %d %d", &a, &b , &c);
	
	if (a > b) {
		//a,b;
		if (c > a) {
			printf("Max: %d , Mid : %d , Min :%d\n", c, a, b);
		} else if (c > b){
			printf("Max: %d , Mid : %d , Min :%d\n", a, c, b);
		} else {
			printf("Max: %d , Mid : %d , Min :%d\n", a, b, c);
		}
	
	}else {
		//b,a;
		if (c > b) {
			printf("Max: %d , Mid : %d , Min :%d\n", c, b, a);
		} else if (c > a){
			printf("Max: %d , Mid : %d , Min :%d\n", b, c, a);
		} else {
			printf("Max: %d , Mid : %d , Min :%d\n", b, a, c);
		}
	}
			
	return 0;
}*/


//type B

int main (void)
{
	int a, b, c;
	printf ("input 3 nums : ");
	scanf ("%d %d %d", &a, &b , &c);
	
	int Max, Mid, Min;
	
	if (a > b) {
		Max = a;
		Min = b;	
	} else {
		Max = b;
		Min = a;
	}
		
	if (c > Max) {
		Mid = Max;
		Max = c;
	} else if (c > Min){
		Mid = c;
	} else {
		Mid = Min;
		Min = c;
	}
	
	printf("Max: %d , Mid : %d , Min :%d\n", Max, Mid, Min);
	return 0;
}
