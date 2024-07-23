#include<stdio.h>
#define PI 3.141592

int main(void)
{
	//int radius;
	double radius;
	printf("input radius : ");
	//scanf("%d", &radius);
	scanf("%lf", &radius);
	
	double area = PI * radius * radius;
	
	printf("area : %.2f\n", area);
	return 0;
}
