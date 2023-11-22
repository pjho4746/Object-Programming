#ifndef _COMPLEX_H
#define _COMPLEX_H

class Complex
{
private:
    double image;
    double real;

public:
    //인자가 있는 생성자, 매개변수 기본값 설정
    Complex(double real = 0, double image = 0);

    //setter(멤버 변수와 대부분 동일한 type)
    void SetComplex(double real, double image);

    //복소수처럼 출력
    void ShowComplex() const;

    //getter(inline > 효율적)
    double GetReal() const { return real; }
    double GetImage() const { return image; }
};
#endif