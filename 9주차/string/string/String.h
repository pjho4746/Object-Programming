#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cstring>
using std::ostream;

#ifndef _STRING_H
#define _STRING_H

class String {
	char* m_pStr; // 동적으로 생성된 문자열을 가르킴
	int m_nLen; // 문자열 길이

public:
	String();
	String(const char*);
	String(const String&);
	~String();
	int length();
	String operator+(const String&);
	String& operator= (const String& s);
	bool operator== (const String& s);
	friend ostream& operator<< (ostream& os, String& s);
	char& operator[] (int i);
};
#endif _STRING_H
