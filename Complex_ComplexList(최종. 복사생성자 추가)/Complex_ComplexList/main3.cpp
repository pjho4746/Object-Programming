#include <iostream>
#include "Complex.h"
using namespace std;
void Fn1(Complex);
Complex Fn2(Complex&);
int main(void)
{
	Complex c1(1, 2);//�Ϲݻ�����
	//���������(������ ���ÿ� �ʱ�ȭ)
	Complex c2 = c1;
	Complex c3(c1);
	c2.ShowComplex();
	cout << endl;
	c3.ShowComplex();
	cout << endl;
	//���������(�Լ�ȣ��)
	Fn1(c1);
	//���������(�Լ� ��ȯ)
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
	cout << "�Լ����� return ";
	return c;
}