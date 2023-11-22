#include "Complex.h"

Complex::Complex(double r, double i) : real(r), image(i)
{
	cout << "Complex ��ü ����" << endl;
}
//���������
Complex::Complex(const Complex& c) : real(c.real), image(c.image)
{
	cout << "Complex ��ü ���� ����" << endl;
}
Complex::~Complex() {
	cout << "Complex ��ü �Ҹ�: ";
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
	cout << "���Ҽ����� ���" << endl;
	cout << real << " �� " << image << "i" << endl;
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