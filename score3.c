#include<stdio.h>

/*int main (void)
{
	int score;
	printf ("input score : ");
	scanf ("%d", &score);
	
	switch (score/10){
		case 10:
			printf("score :  %d --- grade : A\n", score);
			break;
		case 9:
			printf("score :  %d --- grade : A\n", score);
			break;
		case 8:
			printf("score :  %d --- grade : B\n", score);
			break;
		case 7:
			printf("score :  %d --- grade : C\n", score);
			break;
		case 6:
			printf("score :  %d --- grade : D\n", score);
			break;
		default:
			printf("score :  %d --- grade : F\n", score);
	}
	
	return 0;
}*/

//type 2

int main (void)
{
	int score;
	printf ("input score : ");
	scanf ("%d", &score);
	
	char grade;
	
	switch (score/10){
		case 10:
		case 9:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default:
			grade = 'F';
	}
	
	printf("score :  %d --- grade : %c\n", score, grade);
	return 0;
}
