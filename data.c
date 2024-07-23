#include<stdio.h>

void printDate(int year, int month, int day)
{
	printf("(%d / %d / %d\n)", year, month, day);
}

int main (void)
{
	int today_year = 2014;
	int today_month = 8;
	int today_day = 15;
	
	int birtday_year = 2000;
	int birtday_month = 1;
	int birtday_day = 1;
	
	int tmp_year;
	int tmp_month;
	int tmp_day;
	
	tmp_year = today_year;
	tmp_month = today_month;
	tmp_day = today_day;
	
	printDate(today_year, today_month, today_day);
	printDate(birtday_year, birtday_month, birtday_day);
	return 0;
}
