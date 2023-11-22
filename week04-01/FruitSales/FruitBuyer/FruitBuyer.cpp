#include "FruitBuyer.h"
#include <iostream>

using std::cout;
using std::endl;

void FruitBuyer::BuyApple(int m)
{
	num0fApple += m / 1000;
	money -= m;
}
void FruitBuyer::ShowResult()
{
	cout << "현재잔액: " << money << "원" << endl;
	cout << "사과개수: " << num0fApple << "개" << endl;
}