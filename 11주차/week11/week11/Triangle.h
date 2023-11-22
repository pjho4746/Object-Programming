#include <iostream>
using std::cout;
using std::endl;

#ifndef _TRIANGLE_H
#define _TRIANGLE_H
#include "Polygon.h"
class Triangle : public Polygon{

public:
	Triangle(double width, double height, char* type);
	bool isSquare();
	//부모한테 물려받은 GetArea() 함수를 오버라이드하여 삼각형 면적을 구하는 기능으로 개조
	double GetArea() const { return (width * height / 2); }
};
#endif
