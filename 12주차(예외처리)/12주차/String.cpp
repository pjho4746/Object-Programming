//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include "String.h"
#include <cstring>

String::String()
{
    len = 0;
    str = NULL;
}
String::String(const char* s)
{
    len = strlen(s) + 1;
    str = new char[len];
    strcpy(str, s);
}
String::String(const String& s)
{
    len = s.len;
    str = new char[len];
    strcpy(str, s.str);
}
String::~String()
{
    if (str != NULL)
        delete[]str;
}
String& String::operator=(const String& s)
{
    if (str != NULL)
        delete[]str;
    len = s.len;
    str = new char[len];
    strcpy(str, s.str);
    return *this;
}
String& String::operator+=(const String& s)
{
    len += (s.len - 1);
    char* tempstr = new char[len];
    strcpy(tempstr, str);
    strcat(tempstr, s.str);
    if (str != NULL)
        delete[]str;
    str = tempstr;
    return *this;
}
bool String::operator==(const String& s)
{
    return strcmp(str, s.str) ? false : true;
}
String String::operator+(const String& s)
{
    char* tempstr = new char[len + s.len - 1];
    strcpy(tempstr, str);
    strcat(tempstr, s.str);
    String temp(tempstr);
    delete[]tempstr;
    return temp;
}
ostream& operator<<(ostream& os, const String& s)
{
    os << s.str;
    return os;
}
char& String::operator[] (int i)
{
	if (i < 0 || i >= len)
	{
		exit(1);
	}
	return str[i];
}