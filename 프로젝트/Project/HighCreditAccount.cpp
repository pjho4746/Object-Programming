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
	// ���ݰ� �⺻�����߰�
	NormalAccount::Deposit(amount); 
	//Ư�� ���� �߰�(�Ҽ��� �Ʒ� ����)
	Account::Deposit((int)amount * special / 100.0);
}
void HighCreditAccount::Check(void) const {
	NormalAccount::Check();
	cout << "Ư�� ����: " << special << "%" << endl;
}
int HighCreditAccount::Withdraw(int amount) {
	if (amount < 0)
		cout << "����: �߸��� �ݾ��Դϴ�." << endl;
	else if (balance < amount) {
		cout << "�������: �ܾ��� �ʰ��߽��ϴ�." << endl;
	}
	balance -= amount;
	return amount;
}