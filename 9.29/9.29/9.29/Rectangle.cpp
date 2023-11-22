#include "Rectangle.h"
#include <iostream>

using std::cout;
using std::endl;

bool Rectangle::Init(Point& leftTop, Point& rightBottom)
{
	//좌상단점과 우하단점이 바뀌는 것을 방지
	if (leftTop.GetX() > rightBottom.GetX() || leftTop.GetY() > rightBottom.GetY()) {
		cout << "오류: 잘못된 설정값!" << endl;
		return false;
	}

	lt = leftTop;
	rb = rightBottom;
}

int Rectangle::getArea(void) const //둘레구하기
{
	int dx = rb.GetX() - lt.GetX(); //가로
	int dy = rb.GetY() - lt.GetY(); //세로
	return 2 * (dx + dy);
}

int Rectangle::getPerimeter(void) const //넓이 구하기
{
	int dx = rb.GetX() - lt.GetX();
	int dy = rb.GetY() - lt.GetY();
	return dx * dy;
}