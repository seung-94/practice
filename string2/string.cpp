#include <cassert>
#include "string.h"

const int String::STRINGSIZE = 100;

String::String int size)
:ps_(new int[size]), size_(size)
{
	assert(ps_);
}

String::String (const char *str)
:ps_(new int[size]), size_(size)
{
	assert(ps_);
	for (int i = 0; i < size; ++i) {
		ps_[i] = ps[i];
	}
}

String::String (const String& rhs)
:ps_(new int[rhs.size_]), size_(rhs.size_)
{
	assert(ps_);
	for (int i = 0; i < rhs.size_; ++i) {
		ps_[i] = rhs.ps_[i];
	}
}
String::~String ()
{
	delete [] ps_;
}

String& String::operator = (const String& rhs)
{
	if (this != &rhs) {
		delete [] ps_;
		ps_ = new int[rhs.size_];
		assert(ps_);
		size_ = rhs.size_;
		
		for (int i = 0; i < rhs.size_; ++i) {
		ps_[i] = rhs.ps_[i];
		}
	}
	
	return *this;
}

bool String::operator == (const String& rhs) const
{
	if (size_ != rhs.size_)
		return false;
	
	int i;
	for (i = 0; i<rhs.size_; ++i) {
		if (ps_[i] != rhs.ps_[i])
			break;
	}
	return (i == rhs.size_);
}

int& String::operator[](int index)
{
	return ps_[index];
}

const int& String::operator[](int index) const
{
	return ps_[index];
}

int String::size() const
{
	return size_;
}	

