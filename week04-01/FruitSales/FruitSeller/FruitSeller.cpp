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
	cout << "�������: " << num0fApple << "��" << endl;
	cout << "�Ǹż���: " << money << "��" << endl;
}