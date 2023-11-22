
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
	//�θ����� �������� GetArea() �Լ��� �������̵��Ͽ� ���簢�� ������ ���ϴ� ������� ����
	double GetArea() const { return (width * height); }
};
#endif
