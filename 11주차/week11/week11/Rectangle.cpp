#include "Rectangle.h"

Rectangle::Rectangle(double width, double height, char* type) :Polygon(width, height, type) {}
bool Rectangle::isSquare()
{
	if (width == height) {
		cout << "정사각형 입니다." << endl;
		return true; //0이 아닌 모든 값
	}
	else {
		cout << "정사각형이 아닙니다." << endl;
		return false; //0
	}
}
