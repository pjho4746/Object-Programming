#include "FruitSeller.h"
#include <iostream>

using std::cout;
using std::endl;

int FruitSeller::SaleApple(int m)
{
	const int APPEL_UNITCOST = 1000;
	int num = m / APPEL_UNITCOST;

	num0fApple -= num;
	money += m;

	return num;
}
void FruitSeller::ShowResult()
{
	cout << "남은사과: " << num0fApple << "개" << endl;
	cout << "판매수익: " << money << "원" << endl;
}