//��ǻ�Ͱ��а� 20200769 ����ȣ
#include "BonusPointAccount.h"

BonusPointAccount::BonusPointAccount(string n, int a, int b, int b) :Account(n, a, b)
{
	bonusPoint = b;
}
//���ݾ��� 0.1% ����Ʈ ����
void BonusPointAccount::deposit()
{
	bonusPoint = balance * 0.1;
}
void BonusPointAccount::check()
{
	cout << "bonusPoint: " << bonusPoint << endl;
}