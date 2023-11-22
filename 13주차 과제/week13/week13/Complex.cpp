#include "Complex.h"

Complex::Complex(double r, double i) : real(r), image(i)
{
	cout << "Complex 객체 생성" << endl;
}
//복사생성자
Complex::Complex(const Complex& c) : real(c.real), image(c.image)
{
	cout << "Complex 객체 복사 생성" << endl;
}
Complex::~Complex() {
	cout << "Complex 객체 소멸: ";
	ShowComplex();
	cout << "\n";
}
void Complex::SetComplex(double real, double image)
{
	this->real = real;
	this->image = image;
}
void Complex::ShowComplex() const
{
	cout << "복소수값을 출력" << endl;
	cout << real << " ＋ " << image << "i" << endl;
}
ostream& operator<<(ostream& os, const Complex& rh)
{
	os << rh.real << "+" << rh.image << "i";
	return os;
}
bool Complex::operator==(const Complex& rh) const //!=
{
	if (this->real == rh.real && this->image == rh.image)
		return true; //false
	else
		return false; //true
}