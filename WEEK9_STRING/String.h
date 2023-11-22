#ifndef _STRING_H
#define _STRING_H
#include <iostream>
#include <cstring> //c���� string.h c++���� cstring

using std::ostream;
class String {
private:
	char* m_pStr; //�������� ������ ���ڿ��� ����Ŵ
	int m_nLen; //���ڿ� ����

public:
	String();
	String(const char*); //���ڿ� ���(�迭)
	String(const String&);
	~String();

	int length();
	int length();
	String operator+(const String&);
	String& operator= (const String& s);
	bool operator== (const String& s);
	friend ostream& operator<< (ostream& os, String& s);
	char& operator[] (int i); //�迭 ���(���ڿ�)
};
#endif
