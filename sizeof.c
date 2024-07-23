#include<stdio.h>

int main (void)
{
	printf("size of (char) : %ld\n" , sizeof(char));
	printf("size of (short) : %ld\n" , sizeof(short));
	printf("size of (int) : %ld\n" , sizeof(int));
	printf("size of (long) : %ld\n" , sizeof(long));
	printf("size of (long long) : %ld\n" , sizeof(long long));
	
	printf("size of (float) : %ld\n" , sizeof(float));
	printf("size of (double) : %ld\n" , sizeof(double));
	printf("size of (long double) : %ld\n" , sizeof(long double));
	
	printf("size of (void) : %ld\n" , sizeof(void));
	
	int i;
	printf("size of (i) : %ld\n" , sizeof(i));
	
	printf("size of (3.141592) : %ld\n" , sizeof(3.141592));
	printf("size of ('A') : %ld\n" , sizeof('A'));
	printf("size of (\"A\") : %ld\n" , sizeof("A"));
	
	return 0;
}
