#include<stdio.h>

int main (void)
{
	int score;
	printf ("input score : ");
	scanf ("%d", &score);
	
	//A,B,C,D,E
	if (score >= 90) {
		printf("score : %d --- grade : A\n", score);
	}else if (score >= 80 /*&& score < 90*/){
		printf("score : %d --- grade : B\n", score);
	}else if (score >= 70){
		printf("score : %d --- grade : C\n", score);
	}else if (score >= 60){
		printf("score : %d --- grade : D\n", score);
	}else {
		printf("score : %d --- grade : E\n", score);
	}
	
	return 0;
}
