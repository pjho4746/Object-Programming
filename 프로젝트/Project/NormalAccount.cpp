#include "NormalAccount.h"
#include <iostream>
using std::cout;
using std::endl;

NormalAccount::NormalAccount(int accountNo, const char* name, int balance, int interRate)
	:Account(accountNo, name, balance)
{
	this->interRate = interRate;
}
void NormalAccount::Deposit(int amount) {
	//원금 추가
	Account::Deposit(amount);
	//기본 이자 추가(소수점 아래 무시)
	Account::Deposit((int)(amount * interRate / 100.0));
}
void NormalAccount::Check(void) const {
	Account::Check();
	cout << "기본 이율: " << interRate << "%" << endl;
}
int NormalAccount::Withdraw(int amount) {
	if (amount < 0)
		cout << "오류: 잘못된 금액입니다." << endl;
	else if (balance < amount) {
		cout << "인출오류: 잔액을 초과했습니다." << endl;
	}
	balance -= amount;
	return amount;
}