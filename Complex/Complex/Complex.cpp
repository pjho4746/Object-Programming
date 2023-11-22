#include <iostream>
#include "Complex.h"

using std::cout;
using std::endl;

Complex::Complex(double r, double i) : real(r), image(i)
{
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