#include "HighCreditAccount.h"
#include <iostream>
using std::cout;
using std::endl;

HighCreditAccount::HighCreditAccount(int accountNo, const char* name, int balance, int interRate, int special) 
	: NormalAccount(accountNo, name, balance, interRate)
{
	this->special = special;
}
void HighCreditAccount::Deposit(int amount) {
	// 원금과 기본이자추가
	NormalAccount::Deposit(amount); 
	//특별 이자 추가(소수점 아래 무시)
	Account::Deposit((int)amount * special / 100.0);
}
void HighCreditAccount::Check(void) const {
	NormalAccount::Check();
	cout << "특별 이율: " << special << "%" << endl;
}
int HighCreditAccount::Withdraw(int amount) {
	if (amount < 0)
		cout << "오류: 잘못된 금액입니다." << endl;
	else if (balance < amount) {
		cout << "인출오류: 잔액을 초과했습니다." << endl;
	}
	balance -= amount;
	return amount;
}