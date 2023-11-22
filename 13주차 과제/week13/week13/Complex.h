#include <iostream>
using std::ostream;
using std::cout;
using std::endl;
#ifndef _COMPLEX_H
#define _COMPLEX_H

class Complex
{
private:
    double image;
    double real;

public:
    //���ڰ� �ִ� ������, �Ű����� �⺻�� ����
    Complex(double real = 0, double image = 0);
    //���������
    Complex(const Complex& c);
    ~Complex();
    //setter(��� ������ ��κ� ������ type)
    void SetComplex(double real, double image);
    //���Ҽ�ó�� ���
    void ShowComplex() const;
    //getter(inline > ȿ����)
    double GetReal() const { return real; }
    double GetImage() const { return image; }
    friend ostream& operator<<(ostream& os, const Complex& rh);
    Complex& operator=(const Complex& rh);
    bool operator==(const Complex& rh) const;
};
#endif
