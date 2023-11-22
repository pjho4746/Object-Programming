//컴퓨터공학과 20200769 박지호
#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(string n, int a, int b, string c):Account(n, a, b)
{
	cardNo = c;
}
//구매비용 지불 전 카드번호 맞는지 확인 
int CheckingAccount::pay(string cardNo, int amount)
{
	if (this->cardNo == cardNo) return true;
	else return false;
}