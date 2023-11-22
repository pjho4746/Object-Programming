#include <iostream>

using std::cout;
using std::endl;

void swap(int n1, int n2);
void swap(int* p1, int* p2);
void swap_cr(int& r1, int& r2);

int main(void)
{
	int a = 11, b = 22;

	swap(a, b);
	cout << a << ", " << b << endl;
	
	swap(&a, &b);
	cout << a << ", " << b << endl;

	swap_cr(a, b);
	cout << a << ", " << b << endl;

	return 0;
}

void swap(int n1, int n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

void swap(int* p1, int* p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}


void swap_cr(int& r1, int& r2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}