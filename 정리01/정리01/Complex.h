#include <iostream>
using std::ostream;

#ifndef _COMPLEX_H
#define _COMPLEX_H

class Complex
{
private:
    double image;
    double real;

public:
    Complex(double real = 0, double image = 0);
    Complex(const Complex& c);//복사생성자
    ~Complex(); //소멸자
    void SetComplex(double real, double image);
    void ShowComplex() const;
    double GetReal() const { return real; }
    double GetImage() const { return image; }

    Complex operator+ (const Complex& rh) const;
    Complex operator-(const Complex& rh) const;
    Complex& operator=(const Complex& rh);
    bool operator==(const Complex& rh) const;
    Complex operator-()const;
    Complex& operator++();
    Complex operator++(int notused);
    friend Complex operator+(int lh, const Complex& rh);
    friend ostream& operator<<(ostream& os, const Complex& rh);
};
#endif