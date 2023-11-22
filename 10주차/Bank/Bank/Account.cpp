//컴퓨터공학과 20200769 박지호
#include "Account.h"

Account::Account() {
	name = " "; accountNo = 0; balance = 0;
}
Account::Account(string n, int a, int b) {
	name = n; accountNo = a; balance = b;
}
void Account::deposit(int amount) {
	if (amount < 0) {
		cout << "오류: 잘못된 금액입니다." << endl; exit(-1);
	}
	balance += amount;
}
int Account::withdraw(int amount) {
	balance -= amount;
	return amount;
}
void Account::check() {
	cout << "잔액조회(출력): " << balance << endl;
}
