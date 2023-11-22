
#ifndef _RECTANGLE_H
#define _RECTANGLE_H

#include "Point.h"

class Rectangle {
private:
	Point lt, rb;

public:
	bool Init(Point& leftTop, Point& rightBottom);

	Rectangle(Point& leftTop, Point& rightBottom);
	~Rectangle();

	int getArea(void) const;
	int getPerimeter(void) const;
};

inline Rectangle::Rectangle(Point& leftTop, Point& rightBottom)
	:lt(leftTop.GetX(), leftTop.GetY()), rb(rightBottom.GetX(), rightBottom.GetY())
{
}

#endif