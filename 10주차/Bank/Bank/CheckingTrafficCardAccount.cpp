#include "CheckingTrafficCardAccount.h"

CheckingTrafficCardAccount::CheckingTrafficCardAccount(string n, int a, int b, string c)
	:CheckingAccount(n, a, b, c){}

//교통비용 지불전 교통카드 등록여부 확인
int CheckingTrafficCardAccount::payTrafficCard(string cardNo, int amount)
{
	if (this->cardNo == cardNo) {
		hasTrafficCard = true;
		cout << "교통카드 등록되어 있습니다." << endl; 
		return amount;
	}
	else {
		hasTrafficCard = false;
		cout << "교통카드 등록되어 있지 않습니다." << endl;
		return -1;
	}
}