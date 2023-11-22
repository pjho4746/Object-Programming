//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include "Account.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

Account::Account(int accountNo, const char* name, int balance) {
	this->accountNo = accountNo;
	this->balance = balance;

	int len = strlen(name) + 1; //문자열 길이 strlen
	this->name = new char[len];
	strcpy(this->name, name); //문자열 복사 strcpy
}
Account::Account(const Account& a) {
	this->accountNo = a.accountNo;
	this->balance = a.balance;

	int len = strlen(a.name) + 1; 
	this->name = new char[len];
	strcpy(this->name, a.name); 
}
Account::~Account(void) {
	delete[] this->name;
}
void Account::Deposit(int amount) {
	if (amount < 0) {
		cout << "오류: 잘못된 금액입니다." << endl; exit(-1);
	}
	balance += amount;
}
int Account::Withdraw(int amount) {
	if (amount < 0)
		cout << "오류: 잘못된 금액입니다." << endl; 
	else if (balance < amount) {
		cout << "인출오류: 잔액을 초과했습니다." << endl; 
	}
	else {
		balance -= amount;
		cout << "[출금완료]" << endl;
	}
	return amount;
}
void Account::Check(void) const {
	cout << "계좌번호: " << accountNo << endl;
	cout << "이름: " << name << endl;
	cout << "잔액: " << balance << endl;
}
bool Account::operator==(const Account& a) {
	int result = strcmp(this->name, a.name); //문자열 비교 strcmp
	if (result == 0 && this->accountNo == a.accountNo && this->balance == a.balance) 
		return true;
	else 
		return false;
}
Account& Account::operator=(const Account& a) {
	this->accountNo = a.accountNo;
	this->balance = a.balance;

	int len = strlen(a.name);
	delete[] this->name;
	for (int i = 0; i < len; i++)
		this->name[i] = a.name[i];
	return *this;
}