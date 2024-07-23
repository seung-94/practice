#include <stdio.h>
/*
int main (void)
{
	for (int i = 1; i <= 5; ++i){
		for (int j = 1; j <= 5; ++j){
			for (; j+i == 6 || i==j; ++j){					
			printf("*");
			}for (int k = 1; j+i != 6 && k <= 1; ++k){
			printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}*/


int main (void)
{
	int num;
	printf ("input num : ");
	scanf ("%d", &num);

	for (int i = 1; i <= num; ++i){
		for (int j = 1; j <= num; ++j){
			for (; j+i == (num+1) || i==j; ++j){					
			printf("*");
			}for (int k = 1; j+i != (num+1) && k <= 1; ++k){
			printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}

/*int main (void)
{
	for (int i = 1; i <= 5; ++i){
		for (int j = 1; j <= 5; ++j){
			if (j+i == 6 || i==j){
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}*/

/*
int main (void)
{
	for (int i = 1; i <= 5; ++i){
		for (int j = 1; j <= 5; ++j){
			printf ((j+i == 6 || i==j) ? "*" : " ");
		}
		printf("\n");
	}
	
	return 0;
}*/
