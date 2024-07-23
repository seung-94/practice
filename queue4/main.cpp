//#include <cstdio>
#include <iostream>
#include "queue.h"

int main ()
{
	Queue q1(10),q2(50);
	
	q1.push(100);
	q1.push(200);
	q1.push(300);
	q1.push(400);
	
	std::cout<<"q1 1st pop() : "<< q1.pop() << std::endl;
	std::cout<<"q1 2nd pop() : "<< q1.pop() << std::endl;
	std::cout<<"q1 3rd pop() : "<< q1.pop() << std::endl;
	std::cout<<"q1 4th pop() : "<< q1.pop() << std::endl;
	
	std::cout<< std::endl;
	
	q2.push(900);
	q2.push(800);
	q2.push(700);
	q2.push(600);
	
	std::cout<<"q2 1st pop() : "<< q2.pop() << std::endl;
	std::cout<<"q2 2nd pop() : "<< q2.pop() << std::endl;
	std::cout<<"q2 3rd pop() : "<< q2.pop() << std::endl;
	std::cout<<"q2 4th pop() : "<< q2.pop() << std::endl;

	return 0;
}
