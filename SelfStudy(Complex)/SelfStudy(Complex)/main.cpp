#include <iostream>
#include "Complex.h"

using std::cout;
using std::endl;
using std::cin;

void InputComplex(Complex*);
void InputComplex(Complex&);
Complex& InPutAndRetComplex(Complex&);
Complex AddComplex(const Complex&, const Complex&);

int main()
{
	Complex c1;
	InputComplex(c1);
	c1.ShowComplex();

	cout << endl;

	Complex c2 = InPutAndRetComplex(c1);
	c1.ShowComplex();
	c2.ShowComplex();

	cout << endl;

	c1.SetComplex(0, 0);
	c1.ShowComplex();
	c2.ShowComplex();

	cout << endl;

	InPutAndRetComplex(c1).ShowComplex();

	cout << endl;

	Complex c3 = AddComplex(c1, c2);
	c3.ShowComplex();

	cout << endl;

	return 0;
}
void InputComplex(Complex * c) {
	cout << "�Է����ּ���" << endl;
	int real, image;
	cout << "�Ǽ��δ�?" << endl;
	cin >> real;
	cout << "����δ�> " << endl;
	cin >> image;
	c->SetComplex(real, image);
}
void InputComplex(Complex& c) {
	cout << "�Է����ּ���" << endl;
	int real, image;
	cout << "�Ǽ��δ�?" << endl;
	cin >> real;
	cout << "����δ�> " << endl;
	cin >> image;
	c.SetComplex(real, image);
}
Complex& InPutAndRetComplex(Complex& c) {
	cout << "�Է����ּ���" << endl;
	int real, image;
	cout << "�Ǽ��δ�?" << endl;
	cin >> real;
	cout << "����δ�> " << endl;
	cin >> image;
	c.SetComplex(real, image);
	return c;
}
Complex AddComplex(const Complex& c1, const Complex& c2) {
	cout << "���Ҽ� ����" << endl;
	Complex res;
	res.SetComplex(c1.GetReal() + c2.GetReal(), c1.GetImage() + c2.GetImage());

	return res;

}
