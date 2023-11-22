
#include "Point.h"
#include <iostream>

using std::cout;
using std::endl;

int Point::GetX(void) const
{
	return x;
}

int Point::GetY(void) const
{
	return y;
}
//벗어난 범위의 값 저장 방지
bool Point::SetX(int xPos)
{
	if (xPos < 0 || xPos>100) {
		cout << "오류: 범위가 벗어난 값; " << xPos << endl;
		return false;
	}

	x = xPos;

	return true;
}
//벗어난 범위의 값 저장 방지
bool Point::SetY(int yPos)
{
	if (yPos < 0 || yPos>100) {
		cout << "오류: 범위가 벗어난 값; " << yPos << endl;
		return false;
	}

	y = yPos;

	return true;
}

//명시적으로 확인하기 위해서
Point::~Point()
{
	cout << "(" << x << ", " << y << ") 소멸" << endl;
}