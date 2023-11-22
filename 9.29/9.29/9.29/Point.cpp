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

bool Point::SetX(int xPos)
{
	//��� ������ �� ���� ����
	if (xPos < 0 || xPos > 100) {
		cout << "����: ������ ��� ��; " << xPos << endl;
		return false;
	}
	
	x = xPos;
}

bool Point::SetY(int yPos)
{
	//��� ������ �� ���� ����
	if (yPos < 0 || yPos>100) {
		cout << "����: ������ ��� ��; " << yPos << endl;
		return false;
	}

	y = yPos;

	return true;
}