#include<stdio.h>

void printstringArray1(char (*stringArray)[20], int size)
{
	for (int i = 0; i < size; i++)	{
		printf("%s\n", &stringArray[i][0]);			//stringArray[i]
	}
}

void printstringArray2(char **stringArray, int size)
{
	for (int i = 0; i < size; i++)	{
		printf("%s\n", stringArray[i]);				//&stringArray[i][0]
	}
}

int main (void)
{
	char cities1 [][20] = {
		"Seoul","Los Angeles","Paris","Rio de janeiro","Moscow"
	};
	
	char *cities2 [] = {
		"Seoul","Los Angeles","Paris","Rio de janeiro","Moscow"
	};
	
	printstringArray1 (cities1, 5);
	printstringArray2 (cities2, 5);
	
	return 0;
}
