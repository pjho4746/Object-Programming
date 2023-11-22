//��ǻ�Ͱ��а� 20200769 ����ȣ
#include <iostream>
#include "Account.h"
#include "MyException.h"
#include "String.h"

int main()
{
	//���ܻ�Ȳ1 ���
	cout << "[���ܻ�Ȳ 1 ���]" << endl;
	try {
		Account hong("hong, gil-dong", 1234, -10000);

		hong.deposit(-1000);
		hong.check();
		hong.withdraw(20000);
		hong.check();
	}
	catch (MalformedData& e) {
		cout << "[ġ����]: " << e.getMessage() << endl;
	}
	catch (BalanceOutOfBoundsException& e) {
		cout << "[Ȯ��]: " << e.getMessage() << endl;
	}

	cout << endl;

	//���ܻ�Ȳ2 ���
	cout << "[���ܻ�Ȳ 2 ���]" << endl;
	try {
		Account hong("Park, ji-ho", 5678, 10000);

		hong.deposit(1000);
		hong.check();
		hong.withdraw(60000);
		hong.check();
	}
	catch (MalformedData& e) {
		cout << "[ġ����]: " << e.getMessage() << endl;
	}
	catch (BalanceOutOfBoundsException& e) {
		cout << "[Ȯ��]: " << e.getMessage() << endl;
	}
	return 0;
}
