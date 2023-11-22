#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include "Point.h"

class Rectangle {
private:
	Point lt, rb;

public:
	//Point 타입의 레퍼런스
	bool Init(Point& leftTop, Point& rightBottom);

	int getArea(void) const;
	int getPerimeter(void) const;

};

#endif