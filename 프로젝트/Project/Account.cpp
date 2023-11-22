//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include "Account.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

Account::Account(int accountNo, const char* name, int balance) {
	this->accountNo = accountNo;
	this->balance = balance;

	int len = strlen(name) + 1; //���ڿ� ���� strlen
	this->name = new char[len];
	strcpy(this->name, name); //���ڿ� ���� strcpy
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
		cout << "����: �߸��� �ݾ��Դϴ�." << endl; exit(-1);
	}
	balance += amount;
}
int Account::Withdraw(int amount) {
	if (amount < 0)
		cout << "����: �߸��� �ݾ��Դϴ�." << endl; 
	else if (balance < amount) {
		cout << "�������: �ܾ��� �ʰ��߽��ϴ�." << endl; 
	}
	else {
		balance -= amount;
		cout << "[��ݿϷ�]" << endl;
	}
	return amount;
}
void Account::Check(void) const {
	cout << "���¹�ȣ: " << accountNo << endl;
	cout << "�̸�: " << name << endl;
	cout << "�ܾ�: " << balance << endl;
}
bool Account::operator==(const Account& a) {
	int result = strcmp(this->name, a.name); //���ڿ� �� strcmp
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