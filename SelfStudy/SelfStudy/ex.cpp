//°´Ã¼ ¹è¿­
#include "Complex.h"
#include <iostream>

using std::cout;

void ShowComplexArra(Complex* array, int size);

int main(void)
{
	Complex clist[] = {
		Complex(2,4),
		Complex(4,8),
		Complex(8,16),
		Complex(16,32)
	};

	const int NLIST = sizeof clist / sizeof clist[0];

	ShowComplexArra(clist, NLIST);
	return 0;
}

void ShowComplexArra(Complex* array, int size)
{
	for (int i = 0; i < clist.length; i++) {
		(array + i)->ShowComplex();

		cout << "\n";
	}
}