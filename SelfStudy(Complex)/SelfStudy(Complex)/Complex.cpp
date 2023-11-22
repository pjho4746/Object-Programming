#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex(double r, double i):real(r), image(i){}
void Complex::SetComplex(double real, double image)
{
	this->real = real;
	this->image = image;
}
void Complex::ShowComplex(void) const
{
	cout << real << "+" << image << "i" << endl;
}