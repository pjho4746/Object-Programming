#include "String.h"

String::String()
{
	m_nLen = 0;
	m_pStr = new char[1];
	m_pStr[0] = '\0';
}

String::String(const char* s)
{
	m_nLen = strlen(s) + 1;
	m_pStr = new char[m_nLen];

	strcpy(m_pStr, s);
}

String::String(const String& s)
{
	m_nLen = s.m_nLen;
	m_pStr = new char[m_nLen + 1];

	strcpy(m_pStr, s.m_pStr);
}

String::~String()
{
	delete[]m_pStr;

}
int String::length()
{
	return m_nLen;
}

String String::operator+(const String& s)
{
	if (m_pStr == NULL)
	{
		exit(1); // 디폴트 생성 객체를 피연산자로 활용할 수 없음.
	}

	//방법(1)
	// 각 길이에 중복되어 포함되어있는 NULL을 위한 자리를 한자리 뺀다. -1
	int m_nLen2 = m_nLen + s.m_nLen - 1;
	char* tempstr = new char[m_nLen2];
	strcpy(tempstr, m_pStr); // str1 복사
	strcat(tempstr, s.m_pStr); // str2 이어붙임
	String temps(tempstr); // 두번째 생성자 호출(복사생성자-깊은 복사)
	return temps; // 새로운 객체 temps 반환

	//방법(2)
	/*
	char* c = new char[this->m_nLen + s.m_nLen - 1];
	strcpy(c, this->m_pStr);
	strcat(c, s.m_pStr);
	String temp(c);
	delete[]c;
	return temp;
	*/
}
String& String::operator= (const String& s)
{
	if (this->m_pStr != NULL)
		delete[]this->m_pStr;
	this->m_nLen = s.m_nLen;
	this->m_pStr = new char[this->m_nLen];
	strcpy(this->m_pStr, s.m_pStr);
	return *this;
}
bool String::operator== (const String& s)
{
	int result = strcmp(this->m_pStr, s.m_pStr);
	if (result == 0) return true;
	else return false;
}
ostream& operator<< (ostream& os, String& s)
{
	return os << s.m_pStr;
}
char& String::operator[] (int i)
{
	if (i < 0 || i >= m_nLen)
	{
		exit(1);
	}
	return m_pStr[i];
}