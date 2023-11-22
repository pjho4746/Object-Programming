#include "String.h"

String::String()
{
	m_nLen = 0;
	//���� �Ҵ� ������ ���� m_pStr�� ���� �迭 �Ҵ�
	m_pStr = new char[1];
	m_pStr[0] = '\0';
}
String::String(const char* s) //���ڿ� ���(�迭)
{
	m_nLen = strlen(s) + 1; //���ڿ� ���� strlen
	m_pStr = new char(m_nLen);
	
	strcpy(m_pStr, s);//���ڿ� ���� strcpy

}
String::String(const String& s)
{
	m_nLen = s.m_nLen;
	m_pStr = new char[m_nLen + 1];

	strcpy(m_pStr, s.m_pStr);
}
String::~String()
{
	//�����Ҵ�� �迭 ����
	delete[]m_pStr;
	//�����Ҵ�� �޸� ����(���� ����, ���� ��ü)�� ���
	//delete p_var;
}
int String::length()
{
	return m_nLen;
}
String String::operator+(const String& s)
{
	if (m_pStr == NULL)
	{
		exit(-1); //�ǿ����ڷ� Ȱ���� �� ����.
	}
	//������ ���ڿ��� '\0'�� �ϳ��� �����ϰ� �ֱ� ������ 1�� ����
	char* c = new char[this->m_nLen + s.m_nLen - 1];
	strcpy(c, this->m_pStr); //cdp ���� ���ڿ� ����
	strcat(c, s.m_pStr); //���ڿ��� ���ʿ� �̾� ���̴� �Լ� �Դϴ�.
	String temp(c); //String ������(���� ����)
	
	delete[] c; //�����Ҵ� ����
	return temp;
}
String& String::operator=(const String& s)
{
	if (this->m_pStr != NULL) 
		delete[]this->m_pStr; //�����Ҵ� ����(���� ����)

	this->m_nLen = s.m_nLen;
	this->m_pStr = new char[this->m_nLen]; //�����Ҵ�
	strcpy(this->m_pStr, s.m_pStr);
	return *this;
}
bool String::operator==(const String& s)
{
	int result = strcmp(this->m_pStr, s.m_pStr); //���ڿ� ��
	//(��1)<(��2) : ���� ��ȯ [�ƽ�Ű �ڵ� ���� ����]
	//(��1)>(��2) : ��� ��ȯ
	//(��1)==(��2) : 0 ��ȯ
	if (result == 0) return true;
	else return false;
}
ostream& operator<<(ostream& os, String& s)
{
	return os << s.m_pStr;
}
char& String::operator[] (int i) //�迭 ���(���ڿ�)
{
	if (i < 0 || i >= m_nLen)
	{
		exit(-1);
	}
	return m_pStr[i];
}