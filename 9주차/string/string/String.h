#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cstring>
using std::ostream;

#ifndef _STRING_H
#define _STRING_H

class String {
	char* m_pStr; // �������� ������ ���ڿ��� ����Ŵ
	int m_nLen; // ���ڿ� ����

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
