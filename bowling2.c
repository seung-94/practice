#include<stdio.h>

int main(void)
{
	int frameScores[11];
	
	int scores[11][3];
	int bonus_cast;
	
	for (int i = 1; i <= 10; ++i){
		printf ("%d frame 1st cast: ", i);
		scanf("%d", &scores[i][1]);
	
		if (!strike || i ==10){
			printf ("%d frame 2st cast: ", i);
			scanf("%d", &scores[i][2]);
		}
		if (i == 10 && 10frame 1 cast + 10frame 2 cast >= 10){
			printf ("%d frame 3st cast: ", 10);
			scanf("%d", &scores10[3]);
		}
	}
	
	
	printf("Total frame score : %d\n", frameScores[11]);	
	return 0;
}
