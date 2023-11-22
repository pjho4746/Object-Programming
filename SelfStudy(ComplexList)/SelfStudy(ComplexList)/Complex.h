#ifndef _COMPLEX_H
#define _COMPLEX_H

class Complex
{
private:
	double real;
	double image;

public:
	Complex(double real = 0, double image = 0);
	void SetComplex(double real, double image);
	void ShowComplex(void)const;

	double GetReal(void) const { return real; }
	double GetImage(void) const { return image; }
};


#endif _COMPLEX_H

