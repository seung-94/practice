#include<stdio.h>

int main(void)
{
	//int num = 10;
	int nums[10] = {50, 30, 100, 10, 40, 20, 60, 80, 90, 70};
	
	int sum = 0;
	for (int i = 0; i < 10; ++i){
		sum = sum + nums[i];
	}
	
	printf("sum : %d\n", sum);
	return 0;
}
