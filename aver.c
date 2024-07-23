#include <stdio.h>

int main(void)
{
	int k;
	int e;
	int m;
	
	scanf("%d", &k);
	scanf("%d", &e);
	scanf("%d", &m);
	//scanf("%d %d %d", &k, &e, &m);
	
	int sum = k+e+m;
	//double average = sum/3.0;
	double average = (double)sum/3.0;
	
	printf("average = %.2f\n", average);
	
	return 0;
}
