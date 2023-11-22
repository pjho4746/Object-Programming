
#include <iostream>
#include "Polygon.h"
using std::cout;
using std::endl;

#ifndef _RECTANGLE_H
#define _RECTANGLE_H
class Rectangle : public Polygon {

public:
	Rectangle(double width, double height, char* type);
	bool isSquare();
	//부모한테 물려받은 GetArea() 함수를 오버라이드하여 직사각형 면적을 구하는 기능으로 개조
	double GetArea() const { return (width * height); }
};
#endif
