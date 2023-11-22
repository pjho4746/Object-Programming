#include <iostream>
#include "Complex.h"

using std::cout;
using std::endl;
using std::cin;

void InputComplex(Complex*);
void InputComplex(Complex&);
Complex& InPutAndRetComplex(Complex&);
Complex AddComplex(const Complex&, const Complex&);

int main()
{
	Complex c1;
	InputComplex(c1);
	c1.ShowComplex();

	cout << endl;

	Complex c2 = InPutAndRetComplex(c1);
	c1.ShowComplex();
	c2.ShowComplex();

	cout << endl;

	c1.SetComplex(0, 0);
	c1.ShowComplex();
	c2.ShowComplex();

	cout << endl;

	InPutAndRetComplex(c1).ShowComplex();

	cout << endl;

	Complex c3 = AddComplex(c1, c2);
	c3.ShowComplex();

	cout << endl;

	return 0;
}
void InputComplex(Complex * c) {
	cout << "입력해주세요" << endl;
	int real, image;
	cout << "실수부는?" << endl;
	cin >> real;
	cout << "허수부는> " << endl;
	cin >> image;
	c->SetComplex(real, image);
}
void InputComplex(Complex& c) {
	cout << "입력해주세요" << endl;
	int real, image;
	cout << "실수부는?" << endl;
	cin >> real;
	cout << "허수부는> " << endl;
	cin >> image;
	c.SetComplex(real, image);
}
Complex& InPutAndRetComplex(Complex& c) {
	cout << "입력해주세요" << endl;
	int real, image;
	cout << "실수부는?" << endl;
	cin >> real;
	cout << "허수부는> " << endl;
	cin >> image;
	c.SetComplex(real, image);
	return c;
}
Complex AddComplex(const Complex& c1, const Complex& c2) {
	cout << "복소수 덧셈" << endl;
	Complex res;
	res.SetComplex(c1.GetReal() + c2.GetReal(), c1.GetImage() + c2.GetImage());

	return res;

}
