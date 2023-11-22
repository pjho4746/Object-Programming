#include <iostream>
#include "Complex.h"
using namespace std;
void Fn1(Complex);
Complex Fn2(Complex&);
int main(void)
{
	Complex c1(1, 2);//일반생성자
	//복사생성자(생성과 동시에 초기화)
	Complex c2 = c1;
	Complex c3(c1);
	c2.ShowComplex();
	cout << endl;
	c3.ShowComplex();
	cout << endl;
	//복사생성자(함수호출)
	Fn1(c1);
	//복사생성자(함수 반환)
	Complex res = Fn2(c1);
	return 0;
}
void Fn1(Complex c)
{
	c.ShowComplex();
	cout << endl;
}
Complex Fn2(Complex& c)
{
	cout << "함수에서 return ";
	return c;
}