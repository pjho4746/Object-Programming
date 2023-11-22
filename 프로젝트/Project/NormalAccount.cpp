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
	//���� �߰�
	Account::Deposit(amount);
	//�⺻ ���� �߰�(�Ҽ��� �Ʒ� ����)
	Account::Deposit((int)(amount * interRate / 100.0));
}
void NormalAccount::Check(void) const {
	Account::Check();
	cout << "�⺻ ����: " << interRate << "%" << endl;
}
int NormalAccount::Withdraw(int amount) {
	if (amount < 0)
		cout << "����: �߸��� �ݾ��Դϴ�." << endl;
	else if (balance < amount) {
		cout << "�������: �ܾ��� �ʰ��߽��ϴ�." << endl;
	}
	balance -= amount;
	return amount;
}