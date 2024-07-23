#include <cassert>
#include"rational.h"
//#include"gcd.h"

std::ostream& operator<<(std::ostream &out, const Rational& rhs)
{
	//out<< "(" << rhs.num << "," << rhs.den << "i)";
	out<< rhs.num << "/" << rhs.den;
	return out;
}
/*
void Rational::abbreviate()
{
	int g = gcd(this->num, this->den);
	this->num = this->num / g;
	this->den = this->den / g;

}*/

Rational::Rational(int num, int den)
{
	assert(den != 0);
	
	this->num = num;
	this->den = den;
	
	//this->abbreviate();
}

Rational::~Rational()
{
	
}

Rational& Rational::operator=(const Rational& rhs)
{
	this->num = rhs.num;
	this->den = rhs.den;
	
	return *this;
}

bool Rational::operator == (const Rational& rhs)
{

	return this->num == rhs.num && this->den == rhs.den;
}

const Rational Rational::operator+(const Rational& rhs)
{
	Rational result(this->num * rhs.den + rhs.num * this->den, this->den * rhs.den);
	
	return result;
	
}

