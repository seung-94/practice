#include<stdio.h>

int main (void)
{
	//int code;
	//scanf("%d", &code);
	
	char code;
	scanf("%c", &code);
	
	int isBig = (code >= 'A' && code <= 'Z');
	printf("%c is odd letter : %d\n", code, isBig);
	
	return 0;
}
