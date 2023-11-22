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
	//�θ����� �������� GetArea() �Լ��� �������̵��Ͽ� �ﰢ�� ������ ���ϴ� ������� ����
	double GetArea() const { return (width * height / 2); }
};
#endif
