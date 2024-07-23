#include <iostream>
#include "string.h"

int main()
{
	String s1;
	String s2(10);
	
	int nums[] = {1, 2, 3, 4, 5};
	String s3(nums, 5);
	const String s4 = s3;
	
	s1 = s3;
	
	if (s1 == s3) {
		std::cout<<"equal"<<std::endl;
	} else {
		std::cout<<"not equal"<<std::endl;
	}
	
	for (int i = 0; i < s1.size(); ++i) {
		s[i] = i + 1;
	}
	
	for (int i = 0; i < s4.size(); ++i) {
		std::cout<<s4[i]<<", ";
	}
	std::cout<<std::endl;
	
	return 0;
}
