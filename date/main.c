#include"data.h"

int main (void)
{
	struct date today;
	
	today.year = 2014;
	today.month = 8;
	today.day = 15;
	
	/*int birtday_year = 2000;
	int birtday_month = 1;
	int birtday_day = 1;*/
	struct date birthday = {2000, 1, 1};
	
	/*int tmp_year;
	int tmp_month;
	int tmp_day;*/
	struct date tmp;
	
	/*tmp_year = today_year;
	tmp_month = today_month;
	tmp_day = today_day;*/
	tmp = today;
	
	/*printDate(today_year, today_month, today_day);
	printDate(birtday_year, birtday_month, birtday_day);
	
	printDate(today);
	printDate(birthday);
	*/
	printDate(&today);
	printDate(&birthday);
	return 0;
}
