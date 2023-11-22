//��ǻ�Ͱ��а� 20200769 ����ȣ
#include "Account.h"
#include "MyException.h"

Account::Account() {
	name = " "; accountNo = 0; balance = 0;
}
Account::Account(string n, int a, int b) {
	name = n; accountNo = a; balance = b;
}
void Account::deposit(int amount) {
	//�Աݿ��ܻ�Ȳ[���ܻ�Ȳ 1]
	if (amount < 0) {
		throw MalformedData("����: �߸��� �ݾ��Դϴ�");
	}
	balance += amount;
}
int Account::withdraw(int amount) {
	//��ݿ��ܻ�Ȳ[���ܻ�Ȳ1]
	if (amount < 0) {
		throw MalformedData("����: �߸��� �ݾ��Դϴ�");
	}
	//�ܰ� ������ ��Ȳ[���ܻ�Ȳ2]
	if (balance < amount) {
		throw BalanceOutOfBoundsException("�������: �ܾ��� �ʰ��߽��ϴ�");
	}
	balance -= amount;
	return amount;
}
void Account::check() {
	cout << "�ܾ���ȸ(���): " << balance << endl;
}
