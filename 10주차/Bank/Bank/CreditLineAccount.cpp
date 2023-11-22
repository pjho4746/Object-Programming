//컴퓨터공학과 20200769 박지호
#include "CreditLineAccount.h"

CreditLineAccount::CreditLineAccount(string n, int a, int b, int c) :Account(n, a, b)
{
	creditLine = c;
}
//최대한도 = balance + creditLine
int CreditLineAccount::withdraw()
{
	creditLine = balance + creditLine;
	return creditLine;
}