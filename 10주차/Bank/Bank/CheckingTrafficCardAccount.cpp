#include "CheckingTrafficCardAccount.h"

CheckingTrafficCardAccount::CheckingTrafficCardAccount(string n, int a, int b, string c)
	:CheckingAccount(n, a, b, c){}

//������ ������ ����ī�� ��Ͽ��� Ȯ��
int CheckingTrafficCardAccount::payTrafficCard(string cardNo, int amount)
{
	if (this->cardNo == cardNo) {
		hasTrafficCard = true;
		cout << "����ī�� ��ϵǾ� �ֽ��ϴ�." << endl; 
		return amount;
	}
	else {
		hasTrafficCard = false;
		cout << "����ī�� ��ϵǾ� ���� �ʽ��ϴ�." << endl;
		return -1;
	}
}