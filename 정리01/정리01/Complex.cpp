#include <iostream>
#include "Complex.h"

using std::cout;
using std::endl;

Complex::Complex(double r, double i) : real(r), image(i) {}//��� �̴ϼȶ�����
Complex::Complex(const Complex& c) : real(c.real), image(c.image){}//���������
Complex::~Complex() {
	cout << "Complex ��ü �Ҹ�: ";
	ShowComplex();
}
void Complex::SetComplex(double real, double image)
{
	//this ������, �Ű������� ������� �̸��� ���� ���
	this->real = real; //��� ���� = �Ű�����
	this->image = image;
}
void Complex::ShowComplex() const
{
	cout << real << " �� " << image << "i" << endl;
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
Complex& Complex::operator++()//����++c1
{
	++real; ++image;
	return *this;
}
Complex Complex::operator++(int notused)//����c1++
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
