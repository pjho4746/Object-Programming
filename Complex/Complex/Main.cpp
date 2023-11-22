#include <iostream>
#include "Complex.h"

using std::cout;
using std::cin;
using std::endl;

//두개의 복소수를 전달받고 결과를 반환
Complex AddComplex(const Complex&, const Complex&); //const로 참조만 가능, 변경 불가능
void InputComplex(Complex&); //레퍼런스 사용으로 변경 가능

//객체의 레퍼런스 반환
Complex& InputAndReturnComplex(Complex&);
void InputComplex(Complex*);

int main()
{
	Complex c1;
	//레퍼런스 매개변수
	InputComplex(c1);
	c1.ShowComplex();

	cout << endl;

	//레퍼런스 반환값
	Complex c2 = InputAndReturnComplex(c1);
	c1.ShowComplex();
	c2.ShowComplex();

	cout << endl;

	c1.SetComplex(0, 0);

	c1.ShowComplex();
	c2.ShowComplex();

	cout << endl;

	InputAndReturnComplex(c1).ShowComplex();

	cout << endl;

	//복소수 덧셈
	Complex c3 = AddComplex(c1, c2);
	c3.ShowComplex();

	cout << endl;

	return 0;
}

void InputComplex(Complex& c)
{
	cout << "입력해주세요" << endl;

	int real, image;

	cout << "실수부는? ";
	cin >> real;

	cout << "허수부는? ";
	cin >> image;

	c.SetComplex(real, image);

}

Complex& InputAndReturnComplex(Complex& c)
{
	cout << "입력해주세요" << endl;
	int real, image;

	cout << "실수부는? ";
	cin >> real;

	cout << "허수부는? ";
	cin >> image;

	c.SetComplex(real, image);

	return c;
}

Complex AddComplex(const Complex& c1, const Complex& c2)
{
	cout << "복소수 덧셈" << endl;
	Complex res;
	res.SetComplex(c1.GetReal() + c2.GetReal(), c1.GetImage() + c2.GetImage());

	return res;
}

void InputComplex(Complex* c)
{
	int real, image;
	cout << "실수부는? ";
	cin >> real;

	cout << "허수부는? ";
	cin >> image;

	c->SetComplex(real, image);
}