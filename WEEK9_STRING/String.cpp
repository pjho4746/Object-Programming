#include "String.h"

String::String()
{
	m_nLen = 0;
	//동적 할당 포인터 변수 m_pStr에 문자 배열 할당
	m_pStr = new char[1];
	m_pStr[0] = '\0';
}
String::String(const char* s) //문자열 상수(배열)
{
	m_nLen = strlen(s) + 1; //문자열 길이 strlen
	m_pStr = new char(m_nLen);
	
	strcpy(m_pStr, s);//문자열 복사 strcpy

}
String::String(const String& s)
{
	m_nLen = s.m_nLen;
	m_pStr = new char[m_nLen + 1];

	strcpy(m_pStr, s.m_pStr);
}
String::~String()
{
	//동적할당된 배열 해제
	delete[]m_pStr;
	//동적할당된 메모리 해제(단일 변수, 단일 객체)의 경우
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
		exit(-1); //피연산자로 활용할 수 없음.
	}
	//각각의 문자열은 '\0'을 하나씩 포함하고 있기 때문에 1개 빼줌
	char* c = new char[this->m_nLen + s.m_nLen - 1];
	strcpy(c, this->m_pStr); //cdp 현재 문자열 복사
	strcat(c, s.m_pStr); //문자열을 뒤쪽에 이어 붙이는 함수 입니다.
	String temp(c); //String 생성자(인자 전달)
	
	delete[] c; //동적할당 해제
	return temp;
}
String& String::operator=(const String& s)
{
	if (this->m_pStr != NULL) 
		delete[]this->m_pStr; //동적할당 해제(깊은 복사)

	this->m_nLen = s.m_nLen;
	this->m_pStr = new char[this->m_nLen]; //동적할당
	strcpy(this->m_pStr, s.m_pStr);
	return *this;
}
bool String::operator==(const String& s)
{
	int result = strcmp(this->m_pStr, s.m_pStr); //문자열 비교
	//(비교1)<(비교2) : 음수 반환 [아스키 코드 문자 기준]
	//(비교1)>(비교2) : 양수 반환
	//(비교1)==(비교2) : 0 반환
	if (result == 0) return true;
	else return false;
}
ostream& operator<<(ostream& os, String& s)
{
	return os << s.m_pStr;
}
char& String::operator[] (int i) //배열 요소(문자열)
{
	if (i < 0 || i >= m_nLen)
	{
		exit(-1);
	}
	return m_pStr[i];
}