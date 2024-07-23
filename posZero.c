#include<stdio.h>

int main (void)
{
	int num;
	printf ("input num : ");
	scanf ("%d", &num);
	
	/*if (num > 0){
		printf ("%d is positive number\n", num);
	} else if (num == 0){
		printf ("%d is zero number\n", num);
	} else {
		printf ("%d is nagative number\n", num);
	}*/
	
	//type 2
	
	printf ("%d is %s number\n", num, (num > 0) ? "positive" : (num == 0) ? "zero" : "nagative" );
	
	return 0;
}
