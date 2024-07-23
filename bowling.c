#include<stdio.h>

int main(void)
{
	int frameScores[11] = {0};
		int i = 1;
		printf ("frame %d\n",i);
	
   	int scores[10][3] = {0};
   		for (int i = 1; i <= 9; ++i){
   			printf ("%d frame 1st cast: ", i);
			scanf("%d", &scores[i][1]);
			
			if (i >= 2 && scores[i-1][1] + scores[i-1][2] == 10 && scores[i-1][1] !=10){
				int bonus = scores[i][1];
				frameScores[i-1] = frameScores[i-2] + 10 + bonus;
				
				printf("%d frame score : %d\n", i-1, frameScores[i-1]);
			}
			
			if (i >= 3 && scores[i-2][1] == 10 && scores[i-1][1] ==10) {
				int bonus = scores[i-1][1] + scores[i][1];
				frameScores[i-2] = frameScores[i-3] + 10 + bonus;
				
				printf("%d frame score : %d\n", i-2, frameScores[i-2]);
			}
				
			if (scores[i][1] != 10){
				printf ("%d frame 2st cast: ", i);
				scanf("%d", &scores[i][2]);
				
				if (i >= 2 && scores[i-1][1] == 10){
					int bonus = scores[i-1][1] + scores[i-1][2];
					frameScores[i-1] = frameScores[i-2] + 10 + bonus;
	
					printf("%d frame score : %d\n", i-1, frameScores[i-1]);
				}
				if (scores[i][1] + scores[i][2] < 10){
					frameScores[i] = frameScores[i-1] + scores[i][1] + scores[i][2];
					
					printf("%d frame score : %d\n", i, frameScores[i]);
				}
			}
		}

	int scores10[4] = {0};
		printf ("%d frame 1st cast: ", 10);
		scanf("%d", &scores10[1]);
		
		if (scores[9][1] + scores[9][2] == 10 && scores[9][1] !=10){
				int bonus = scores10[1];
				frameScores[9] = frameScores[8] + 10 + bonus;
				
				printf("%d frame score : %d\n", 9, frameScores[9]);
			}
			
			if (scores[8][1] == 10 && scores[9][1] ==10) {
				int bonus = scores[9][1] + scores10[1];
				frameScores[8] = frameScores[7] + 10 + bonus;
				
				printf("%d frame score : %d\n", 8, frameScores[8]);
			}
			
			printf ("%d frame 2st cast: ", 10);
			scanf("%d", &scores10[2]);
			
			if (scores[9][1] == 10){
				int bonus = scores10[1] + scores10[2];
				frameScores[9] = frameScores[8] + 10 + bonus;
				
				printf("%d frame score : %d\n", 9, frameScores[9]);
			}
			if (scores10[1] + scores10[2] < 10){
				frameScores[10] = frameScores[9] + scores10[1] + scores10[2];
				
				printf("%d frame score : %d\n", 10, frameScores[10]);
			} else {
				printf ("%d frame 3st cast: ", 10);
				scanf("%d", &scores10[3]);
				frameScores[10] = frameScores[9] + scores10[1] + scores10[2] + scores10[3];
				
				printf("%d frame score : %d\n", 10, frameScores[10]);
			}
	
	printf("Total frame score : %d\n", frameScores[10]);	
	return 0;
}
