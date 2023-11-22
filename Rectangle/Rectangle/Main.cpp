#include <iostream>
#include "Rectangle.h"

using std::cout;
using std::endl;
//���۷��� ���, ��³��� �پ��
void show(Rectangle&);

int main(void)
{
	Point lt(5, 9);
	Point rb(12, 14);

	Rectangle rect(lt, rb);

	cout << "show() ȣ�� ��" << endl;
	show(rect);

	cout << "show() ȣ�� ��" << endl;

	return 0;
}

void show(Rectangle& r)
{
	cout << "����: " << r.getArea() << endl;
	cout << "����: " << r.getPerimeter() << endl;
}