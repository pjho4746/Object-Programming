//��ǻ�Ͱ��а� 20200769 ����ȣ
#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(string n, int a, int b, string c):Account(n, a, b)
{
	cardNo = c;
}
//���ź�� ���� �� ī���ȣ �´��� Ȯ�� 
int CheckingAccount::pay(string cardNo, int amount)
{
	if (this->cardNo == cardNo) return true;
	else return false;
}