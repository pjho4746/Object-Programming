//��ǻ�Ͱ��а� 20200769 ����ȣ
#include "Account.h"

Account::Account() {
	name = " "; accountNo = 0; balance = 0;
}
Account::Account(string n, int a, int b) {
	name = n; accountNo = a; balance = b;
}
void Account::deposit(int amount) {
	if (amount < 0) {
		cout << "����: �߸��� �ݾ��Դϴ�." << endl; exit(-1);
	}
	balance += amount;
}
int Account::withdraw(int amount) {
	balance -= amount;
	return amount;
}
void Account::check() {
	cout << "�ܾ���ȸ(���): " << balance << endl;
}
