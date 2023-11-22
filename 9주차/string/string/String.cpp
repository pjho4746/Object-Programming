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
		exit(1); // ����Ʈ ���� ��ü�� �ǿ����ڷ� Ȱ���� �� ����.
	}

	//���(1)
	// �� ���̿� �ߺ��Ǿ� ���ԵǾ��ִ� NULL�� ���� �ڸ��� ���ڸ� ����. -1
	int m_nLen2 = m_nLen + s.m_nLen - 1;
	char* tempstr = new char[m_nLen2];
	strcpy(tempstr, m_pStr); // str1 ����
	strcat(tempstr, s.m_pStr); // str2 �̾����
	String temps(tempstr); // �ι�° ������ ȣ��(���������-���� ����)
	return temps; // ���ο� ��ü temps ��ȯ

	//���(2)
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