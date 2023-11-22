#include <iostream>
#include "Complex.h"

using std::cout;
using std::endl;

Complex::Complex(double r, double i) : real(r), image(i) {}//멤버 이니셜라이저
Complex::Complex(const Complex& c) : real(c.real), image(c.image){}//복사생성자
Complex::~Complex() {
	cout << "Complex 객체 소멸: ";
	ShowComplex();
}
void Complex::SetComplex(double real, double image)
{
	//this 포인터, 매개변수와 멤버변수 이름이 같은 경우
	this->real = real; //멤버 변수 = 매개변수
	this->image = image;
}
void Complex::ShowComplex() const
{
	cout << real << " ＋ " << image << "i" << endl;
}
Complex Complex::operator+(const Complex& rh) const
{
	Complex res;
	res.real = this->real + rh.real;
	res.image = this->image + rh.image;
	return res;
}
Complex Complex::operator-(const Complex& rh) const
{
	Complex res;
	res.real = this->real - rh.real;
	res.image = this->image - rh.image;
	return res;
}
Complex& Complex::operator=(const Complex& rh)
{
	this->real = rh.real;
	this->image = rh.image;
	return *this;
}
bool Complex::operator==(const Complex& rh) const //!=
{
	if (this->real == rh.real && this->image == rh.image)
		return true; //false
	else
		return false; //true
}
Complex Complex::operator-()const
{
	Complex res;
	res.real = -real;
	res.image = -image;
	return res;
}
Complex& Complex::operator++()//선행++c1
{
	++real; ++image;
	return *this;
}
Complex Complex::operator++(int notused)//후위c1++
{
	Complex res = *this;
	++real; ++image;
	return res;
}
Complex operator+(int lh, const Complex& rh)
{
	Complex res;
	res.real = lh + rh.real;
	res.image = rh.image;
	return res;
}
ostream& operator<<(ostream& os, const Complex& rh)
{
	os << rh.real << "+" << rh.image << "i";
	return os;
}
