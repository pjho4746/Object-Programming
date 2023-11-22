#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	//부모 클래스형의 객체 포인터 배열은 다양한 종류의 상속 클래스의 객체를 가르킬 수 있음
	Polygon* list[3];
	list[0] = new Rectangle(4, 5, "Rectangle");
	list[1] = new Square(10, "Square");
	list[2] = new Triangle(5, 6, "Triangle");

	//상속받은 멤버에만 직접 접근이 가능 -> 다운캐스팅 ((UnivStudent*)pPserson)->WhoAreYou();
	//오버라이딩 된 멤버에 직접 접근 불가 -> 가상함수 사용

	Rectangle* re;
	Square* sq;
	Triangle* tr;
	for (int i = 0; i < 3; i++) {
		list[i]->ShowInfo();
		cout << endl;

		//dynamic_cast : 부모 클래스에 가상 함수가 포함되어 있어야 함
		//다운 캐스팅이 가능한지 확인
		re = dynamic_cast<Rectangle*>(list[i]);
		if (re != NULL) {
			cout << "넓이: " << re->GetArea() << endl;
			cout << re->isSquare() << endl;
			cout << endl;
		}

		sq = dynamic_cast<Square*>(list[i]);
		if (sq != NULL) {
			cout << "넓이: " << sq->GetArea() << endl;
			cout << endl;
		}

		tr = dynamic_cast<Triangle*>(list[i]);
		if (tr != NULL) {
			cout << "넓이: " << tr->GetArea() << endl;
			cout << tr->isSquare() << endl;
			cout << endl;
		}
		
	}

	return 0;
}