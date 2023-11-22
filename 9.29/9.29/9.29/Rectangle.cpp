#include "Rectangle.h"
#include <iostream>

using std::cout;
using std::endl;

bool Rectangle::Init(Point& leftTop, Point& rightBottom)
{
	//�»������ ���ϴ����� �ٲ�� ���� ����
	if (leftTop.GetX() > rightBottom.GetX() || leftTop.GetY() > rightBottom.GetY()) {
		cout << "����: �߸��� ������!" << endl;
		return false;
	}

	lt = leftTop;
	rb = rightBottom;
}

int Rectangle::getArea(void) const //�ѷ����ϱ�
{
	int dx = rb.GetX() - lt.GetX(); //����
	int dy = rb.GetY() - lt.GetY(); //����
	return 2 * (dx + dy);
}

int Rectangle::getPerimeter(void) const //���� ���ϱ�
{
	int dx = rb.GetX() - lt.GetX();
	int dy = rb.GetY() - lt.GetY();
	return dx * dy;
}