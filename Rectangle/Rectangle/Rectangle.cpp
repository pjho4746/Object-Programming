
#include "Rectangle.h"
#include <iostream>

using std::cout;
using std::endl;

bool Rectangle::Init(Point& leftTop, Point& rightBottom)
{
	if (leftTop.GetX() > rightBottom.GetX() || leftTop.GetY() > rightBottom.GetY()) {
		cout << "����: �߸��� ������!" << endl;
		return false;
	}

	lt = leftTop;
	rb = rightBottom;
}

int Rectangle::getArea(void) const
{
	int dx = rb.GetX() - lt.GetX();
	int dy = rb.GetY() - lt.GetY();

	return dx * dy;
}

int Rectangle::getPerimeter(void) const
{
	int dx = rb.GetX() - lt.GetX();
	int dy = rb.GetY() - lt.GetY();

	return 2 * (dx + dy);
}

Rectangle::~Rectangle()
{
	cout << "Rectangle �Ҹ�" << endl;
}