#ifndef STRING_H
#define STRING_H
#include <iostream>

class String {
friend std::ostream& operator<<(std::ostream& out, const String& rhs);

private:
	char *str_;
	int len_;
	
	
public:
	String ();
	String (const char *str);
	String (const String& rhs);
	~String();
	
	String& operator = (const String& rhs);
	
	bool operator == (const String& rhs) const;
	
	const String operator + (const String& rhs) const;
	
	const char *c_str() const;
	int size() const;
	
	//String ();
	//String(const String& rhs) {//memberwise copy}
	//~String ();
	//String& operator=(const String& rhs) {//memberwise copy, return *this}
	//String *operator&() {//return this;}
	//const String *operator& {return this;}
};

#endif
