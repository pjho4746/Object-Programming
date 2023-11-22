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
	cout << "현재잔액: " << money << "원" << endl;
	cout << "사과개수: " << numOfApple << "개" << endl;
}
