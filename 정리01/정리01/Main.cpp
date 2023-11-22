#include <iostream>
#include "Complex.h"
#include "ComplexList.h"

using std::cout;
using std::endl;

void Fn1(Complex);
Complex Fn2(Complex&);

int main(void)
{	
	//��ü ������ �迭
	Complex* list[5];
	list[0] = new Complex;
	list[1] = new Complex(1, 1);
	list[0]->ShowComplex();
	//���� �Ҵ� ����
	delete list[0]; delete list[1];
	Complex c1(1, 2);//�Ϲݻ�����
	//���������1(������ ���ÿ� �ʱ�ȭ)
	Complex c2 = c1;
	Complex c3(c1);
	c2.ShowComplex();
	c3.ShowComplex();
	//���������2(�Լ�ȣ��)
	Fn1(c1);
	//���������3(�Լ� ��ȯ)
	Complex res = Fn2(c1);

	ComplexList co;
	double r = 0; double m = 0;
	for (int i = 0; i < co.Length(); i++) {
		co.Set(i, r, m);
		co.Get(i).ShowComplex();
		co.pGet(i)->ShowComplex();
		r += 1; m += 2;
	}

	//�����ε�
	Complex cl1(1, 2), cl2(2, 3), cl3;
	cl3 = cl1 + cl2;
	cl3.ShowComplex();
	cl3 = 1 + cl1;
	cl3.ShowComplex();

	return 0;
}
void Fn1(Complex c)
{
	c.ShowComplex();
	cout << endl;
}
Complex Fn2(Complex& c)
{
	return c;
}