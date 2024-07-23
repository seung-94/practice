#include<stdio.h>

int main (void)
{
	int score;
	printf("input score : ");
	scanf("%d", &score);
	
	int ispass = (score >= 60);
	
	printf("score: %d --- pass? : %d\n", score, ispass);
	
	return 0;
}
