#include<stdio.h>

int main(void)
{
	//int num = 10;
	int nums[10] = {50, 30, 100, 10, 40, 20, 60, 80, 90, 70};
	
	int i;
	int max = nums[0];
	
	for (i = 1; i < 10; ++i){
		if (max > nums[i]){
			max = max;
		}else{
			max = nums[i];
		}
	}
	
	printf("max : %d\n", max);
	return 0;
}
