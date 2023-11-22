//컴퓨터공학과 20200769 박지호
#include "Account.h"
#include "MyException.h"

Account::Account() {
	name = " "; accountNo = 0; balance = 0;
}
Account::Account(string n, int a, int b) {
	name = n; accountNo = a; balance = b;
}
void Account::deposit(int amount) {
	//입금예외상황[예외상황 1]
	if (amount < 0) {
		throw MalformedData("오류: 잘못된 금액입니다");
	}
	balance += amount;
}
int Account::withdraw(int amount) {
	//출금예외상황[예외상황1]
	if (amount < 0) {
		throw MalformedData("오류: 잘못된 금액입니다");
	}
	//잔고가 부족한 상황[예외상황2]
	if (balance < amount) {
		throw BalanceOutOfBoundsException("인출오류: 잔액을 초과했습니다");
	}
	balance -= amount;
	return amount;
}
void Account::check() {
	cout << "잔액조회(출력): " << balance << endl;
}
