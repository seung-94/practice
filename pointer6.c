#include <stdio.h>

int main(void)
{
	void *p;
	
	int a = 100;
	p = &a;
	//*p = 200; (X)
	*(int*)p = 200;
	
	double d = 3.1415;
	p = &d;
	//*p = 2.718  (X)
	*(double*)p = 2.718;
	
	printf("a : %d\t d : %f\n",a,d);
	return 0;
}
