
#include <iostream>
using std::cout;
using std::endl;

#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"
class Square : public Rectangle {

public:
	Square(double width, char* type):Rectangle(width, 0, type){}
	double GetArea() const;
};
#endif
