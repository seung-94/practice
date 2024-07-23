#ifndef STRING_H
#define STRING_H

class String {
private:
	static const int STRINGSIZE;
	
	int *ps_;
	int size_;
	
public:
	explicit String (int size = STRINGSIZE);
	String (const int *ps, int size);
	String (const String& rhs);
	~String();
	
	String& operator = (const String& rhs);
	
	bool operator == (const String& rhs) const;
	
	int& operator[] (int index);
	const int& operator[] (int index) const;
	int size() const;
};

#endif
