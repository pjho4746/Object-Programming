//��ǻ�Ͱ��а� 20200769 ����ȣ
#ifndef _NORMALACCOUNT_H
#define _NORMALACCOUNT_H
#include "Account.h"

class NormalAccount : public Account {
	int interRate;
public:
	NormalAccount(int accountNo, const char* name, int balance, int inerRate);
	void Deposit(int amount);
	int Withdraw(int amount); 
	void Check(void) const;
};
#endif //_NORMALACCOUNT_H