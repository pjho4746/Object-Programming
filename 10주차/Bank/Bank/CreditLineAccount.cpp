//��ǻ�Ͱ��а� 20200769 ����ȣ
#include "CreditLineAccount.h"

CreditLineAccount::CreditLineAccount(string n, int a, int b, int c) :Account(n, a, b)
{
	creditLine = c;
}
//�ִ��ѵ� = balance + creditLine
int CreditLineAccount::withdraw()
{
	creditLine = balance + creditLine;
	return creditLine;
}