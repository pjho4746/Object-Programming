#include "FruitBuyer.h"
#include "FruitSeller.h"
#include <iostream>

using std::cout;
using std::endl;

void  FruitBuyer::BuyApple(FruitSeller& s, int m)
{
	numOfApple += s.SaleApple(m);
	money -= m;
}

void FruitBuyer::ShowResult()
{
	cout << "�����ܾ�: " << money << "��" << endl;
	cout << "�������: " << numOfApple << "��" << endl;
}
