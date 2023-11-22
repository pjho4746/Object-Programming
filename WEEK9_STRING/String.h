#ifndef _STRING_H
#define _STRING_H
#include <iostream>
#include <cstring> //c에서 string.h c++에서 cstring

using std::ostream;
class String {
private:
	char* m_pStr; //동적으로 생성된 문자열을 가르킴
	int m_nLen; //문자열 길이

public:
	String();
	String(const char*); //문자열 상수(배열)
	String(const String&);
	~String();

	int length();
	int length();
	String operator+(const String&);
	String& operator= (const String& s);
	bool operator== (const String& s);
	friend ostream& operator<< (ostream& os, String& s);
	char& operator[] (int i); //배열 요소(문자열)
};
#endif
