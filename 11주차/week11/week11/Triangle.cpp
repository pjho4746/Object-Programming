#include "Triangle.h"

Triangle::Triangle(double width, double height, char* type):Polygon(width, height, type){}
bool Triangle::isSquare()
{
	if (width == height) {
		cout << "���簢�� �Դϴ�." << endl;
		return true;
	}
	else {
		cout << "���簢���� �ƴմϴ�." << endl;
		return false;
	}
}