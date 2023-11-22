#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

#ifndef _POLYGON_H
#define _POLYGON_H
class Polygon {
public:
	double width;
	double height;
	char* type; //문자열 상수(배열 사용->cstring)

public:
	//모든 속성을 넘겨받아 객체 생성
	Polygon(double width, double height, char* type);
	//(현재 코드에는 없지만) 자식 클래스에 동적할당된 멤버를 추가하면,
	//동적 할당 해제 시, 부모 클래스로 인식 -> virtual 소멸자
	virtual ~Polygon();
	void ShowInfo();
	//순수 가상 함수 -> 상속 클래스에서 반드시 재정의!!
	virtual double GetArea() const = 0;
};
#endif
