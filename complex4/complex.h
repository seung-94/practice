#ifndef COMPLEX_X
#define COMPLEX_X

#include <iostream>

class Complex{
friend std::ostream& operator<<(std::ostream &out, const Complex& rhs);

private:
	double re;
	double im;	
	
	
public:
	//Complex();
	//Complex(double re);
	Complex(double re =0.0 , double im = 0.0);		//default argument
	Complex(const Complex& rhs);							//copy const.
	~Complex();
	
	Complex& operator=(const Complex& rhs);
	
	bool operator==(const Complex& rhs);
	
	const Complex operator+(const Complex& rhs);
	
};

#endif
