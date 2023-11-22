#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	//�θ� Ŭ�������� ��ü ������ �迭�� �پ��� ������ ��� Ŭ������ ��ü�� ����ų �� ����
	Polygon* list[3];
	list[0] = new Rectangle(4, 5, "Rectangle");
	list[1] = new Square(10, "Square");
	list[2] = new Triangle(5, 6, "Triangle");

	//��ӹ��� ������� ���� ������ ���� -> �ٿ�ĳ���� ((UnivStudent*)pPserson)->WhoAreYou();
	//�������̵� �� ����� ���� ���� �Ұ� -> �����Լ� ���

	Rectangle* re;
	Square* sq;
	Triangle* tr;
	for (int i = 0; i < 3; i++) {
		list[i]->ShowInfo();
		cout << endl;

		//dynamic_cast : �θ� Ŭ������ ���� �Լ��� ���ԵǾ� �־�� ��
		//�ٿ� ĳ������ �������� Ȯ��
		re = dynamic_cast<Rectangle*>(list[i]);
		if (re != NULL) {
			cout << "����: " << re->GetArea() << endl;
			cout << re->isSquare() << endl;
			cout << endl;
		}

		sq = dynamic_cast<Square*>(list[i]);
		if (sq != NULL) {
			cout << "����: " << sq->GetArea() << endl;
			cout << endl;
		}

		tr = dynamic_cast<Triangle*>(list[i]);
		if (tr != NULL) {
			cout << "����: " << tr->GetArea() << endl;
			cout << tr->isSquare() << endl;
			cout << endl;
		}
		
	}

	return 0;
}