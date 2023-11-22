//컴퓨터공학과 20200769 박지호
#include <iostream>
#include "Account.h"
#include "MyException.h"
#include "String.h"

int main()
{
	//예외상황1 출력
	cout << "[예외상황 1 출력]" << endl;
	try {
		Account hong("hong, gil-dong", 1234, -10000);

		hong.deposit(-1000);
		hong.check();
		hong.withdraw(20000);
		hong.check();
	}
	catch (MalformedData& e) {
		cout << "[치명적]: " << e.getMessage() << endl;
	}
	catch (BalanceOutOfBoundsException& e) {
		cout << "[확인]: " << e.getMessage() << endl;
	}

	cout << endl;

	//예외상황2 출력
	cout << "[예외상황 2 출력]" << endl;
	try {
		Account hong("Park, ji-ho", 5678, 10000);

		hong.deposit(1000);
		hong.check();
		hong.withdraw(60000);
		hong.check();
	}
	catch (MalformedData& e) {
		cout << "[치명적]: " << e.getMessage() << endl;
	}
	catch (BalanceOutOfBoundsException& e) {
		cout << "[확인]: " << e.getMessage() << endl;
	}
	return 0;
}
