#include<stdio.h>
/*
int main(void)
{
	for (int i = 2; i <= 9; ++i){
		for (int j = 1; j <= 9; ++j){
			printf("%d X %d = %d\n", i, j, i*j);
		}
	}
	
	return 0;
}*/

// 2x1 	3x1 ...
int main(void)
{
	for (int j = 1; j <= 9; ++j){
		for (int i = 2; i <= 9; ++i){
			printf("%d X %d = %d\t", i, j, i*j);
		}	printf("\n");
	}
	
	return 0;
}
