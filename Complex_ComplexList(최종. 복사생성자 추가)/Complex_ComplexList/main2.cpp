#include <iostream>
#include "ComplexList.h"
#include "Complex.h"
using namespace std;
int main()
{
	ComplexList c1;
	ComplexList c2;
	double r = 0; double m = 0;
	cout << "<<c1>>" << endl;
	for (int i = 0; i < c1.Lenth(); i++) {
		c1.Set(i, r, m);
		c1.Get(i).ShowComplex();
		c1.pGet(i)->ShowComplex();
		r += 1; m += 2;
	}
	double t = 0; double f = 0;
	cout << "\n<<c2>>" << endl;
	for (int i = 0; i < c2.Lenth(); i++) {
		c2.Set(i, t, f);
		c2.Get(i).ShowComplex();
		c2.pGet(i)->ShowComplex();
		t += 3;; f += 2;
	}
}
