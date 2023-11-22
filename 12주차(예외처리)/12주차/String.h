//��ǻ�Ͱ��а� 20200769 ����ȣ
#ifndef _STRING_H__
#define _STRING_H__
#include<iostream>
using std::ostream;

class String
{
    int len;
    char* str;

public:
    String();
    String(const char* s);
    String(const String& s);
    ~String();
    String& operator=(const String& s);
    String& operator+=(const String& s);
    bool operator==(const String& s);
    String operator+(const String& s);
    friend ostream& operator<<(ostream& os, const String& s);
	char& operator[] (int i);
};

#endif
