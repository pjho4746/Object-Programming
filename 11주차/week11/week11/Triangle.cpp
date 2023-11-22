#include "Triangle.h"

Triangle::Triangle(double width, double height, char* type):Polygon(width, height, type){}
bool Triangle::isSquare()
{
	if (width == height) {
		cout << "정사각형 입니다." << endl;
		return true;
	}
	else {
		cout << "정사각형이 아닙니다." << endl;
		return false;
	}
}