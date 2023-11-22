#include <iostream>
#include "Complex.h"
using std::cout;
using std::cin;
using std::endl;
Complex AddComplex(const Complex&, const Complex&);
void InputComplex(Complex&); 
Complex& InputAndReturnComplex(Complex&);
void InputComplex(Complex*);

int main()
{
	Complex c1;
	InputComplex(c1);
	c1.ShowComplex();
	cout << endl;
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
	Complex c3 = AddComplex(c1, c2);
	c3.ShowComplex();
	cout << endl;
	return 0;
}
void InputComplex(Complex& c)
{
	int real, image;
	cout << "실수부는? ";
	cin >> real;
	cout << "허수부는? ";
	cin >> image;
	c.SetComplex(real, image);
}
Complex& InputAndReturnComplex(Complex& c)
{
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
