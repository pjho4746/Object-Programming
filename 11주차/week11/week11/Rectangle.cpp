#include "Rectangle.h"

Rectangle::Rectangle(double width, double height, char* type) :Polygon(width, height, type) {}
bool Rectangle::isSquare()
{
	if (width == height) {
		cout << "���簢�� �Դϴ�." << endl;
		return true; //0�� �ƴ� ��� ��
	}
	else {
		cout << "���簢���� �ƴմϴ�." << endl;
		return false; //0
	}
}
