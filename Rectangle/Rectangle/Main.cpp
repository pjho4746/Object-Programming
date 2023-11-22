#include <iostream>
#include "Rectangle.h"

using std::cout;
using std::endl;
//레퍼런스 사용, 출력내용 줄어듬
void show(Rectangle&);

int main(void)
{
	Point lt(5, 9);
	Point rb(12, 14);

	Rectangle rect(lt, rb);

	cout << "show() 호출 전" << endl;
	show(rect);

	cout << "show() 호출 후" << endl;

	return 0;
}

void show(Rectangle& r)
{
	cout << "넓이: " << r.getArea() << endl;
	cout << "넓이: " << r.getPerimeter() << endl;
}