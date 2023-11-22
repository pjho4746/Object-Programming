//컴퓨터공학과 20200769 박지호
#include <iostream>
#include "String.h"
#include "Account.h"
#include "BonusPointAccount.h"
#include "CheckingAccount.h"
#include "CreditLineAccount.h"

using namespace std;

int main() {
	Account a1 ("박지호", 20200769, 100000);
	a1.deposit(1000);
	a1.withdraw(2000);
	a1.check();

	CheckingAccount c1 ("박지호", 20200769, 100000, "1234");
	c1.pay("5678", 3000);

	CheckingTrafficCardAccount c2 ("박지호", 20200769, 100000, "1234");
	c2.payTrafficCard("1234", 4000);

	CreditLineAccount c3("박지호", 20200769, 100000, 20000);
	int creditLine = c3.withdraw();
	cout <<"마이너스 한도: "<< creditLine << endl;

	BonusPointAccount b1("박지호", 20200769, 100000, 0);
	b1.deposit();
	b1.check();
 
}