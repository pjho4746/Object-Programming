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
	cout << "�����ܾ�: " << money << "��" << endl;
	cout << "�������: " << num0fApple << "��" << endl;
}