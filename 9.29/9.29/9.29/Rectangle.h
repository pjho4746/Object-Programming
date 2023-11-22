#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include "Point.h"

class Rectangle {
private:
	Point lt, rb;

public:
	//Point Ÿ���� ���۷���
	bool Init(Point& leftTop, Point& rightBottom);

	int getArea(void) const;
	int getPerimeter(void) const;

};

#endif