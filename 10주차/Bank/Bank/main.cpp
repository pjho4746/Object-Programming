//��ǻ�Ͱ��а� 20200769 ����ȣ
#include <iostream>
#include "String.h"
#include "Account.h"
#include "BonusPointAccount.h"
#include "CheckingAccount.h"
#include "CreditLineAccount.h"

using namespace std;

int main() {
	Account a1 ("����ȣ", 20200769, 100000);
	a1.deposit(1000);
	a1.withdraw(2000);
	a1.check();

	CheckingAccount c1 ("����ȣ", 20200769, 100000, "1234");
	c1.pay("5678", 3000);

	CheckingTrafficCardAccount c2 ("����ȣ", 20200769, 100000, "1234");
	c2.payTrafficCard("1234", 4000);

	CreditLineAccount c3("����ȣ", 20200769, 100000, 20000);
	int creditLine = c3.withdraw();
	cout <<"���̳ʽ� �ѵ�: "<< creditLine << endl;

	BonusPointAccount b1("����ȣ", 20200769, 100000, 0);
	b1.deposit();
	b1.check();
 
}