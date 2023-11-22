//컴퓨터공학과 20200769 박지호
#include "BonusPointAccount.h"

BonusPointAccount::BonusPointAccount(string n, int a, int b, int b) :Account(n, a, b)
{
	bonusPoint = b;
}
//예금액의 0.1% 포인트 누적
void BonusPointAccount::deposit()
{
	bonusPoint = balance * 0.1;
}
void BonusPointAccount::check()
{
	cout << "bonusPoint: " << bonusPoint << endl;
}