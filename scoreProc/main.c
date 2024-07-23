#include<stdio.h>

typedef struct student{
	char name[21];
	int kor;
	int eng;
	int mat;
	int sum;
	double average;
	int rank;
} student;

int main (void)
{
	FILE *fin, *fout;
	fin = fopen("score.dat", "r");
	fout = fopen("score.out", "w");
	
	student students[10];
	for (int i = 0; i < 10; ++i){
		fscanf(fin, "%s %d %d %d", 
		students[i].name, &students[i].kor, &students[i].eng, &students[i].mat);
		
	students[i].sum = students[i].kor + students[i].eng + students[i].mat;
	students[i].average = (double)students[i].sum / 3.0;
	students[i].rank = 1;
	}
		for (int i = 0; i < 10; ++i){
			for (int j = 0; j < 10; ++j){
				if (/*i != j &&*/students[i].sum < students[j].sum) {
					++students[i].rank;
				}
			} 
		}
		
	fprintf (fout,"----------------------------------------------------\n");
	fprintf (fout,"    name             kor eng mat sum   avg   Rank\n");
	fprintf (fout,"----------------------------------------------------\n");
	for (int i = 0; i < 10; ++i){
		fprintf (fout,"%-20s %3d %3d %3d %d %6.2f %3d\n", 
		students[i].name, students[i].kor, students[i].eng, students[i].mat, 
		students[i].sum, students[i].average, students[i].rank);
	}
	fprintf (fout,"----------------------------------------------------\n");
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}
