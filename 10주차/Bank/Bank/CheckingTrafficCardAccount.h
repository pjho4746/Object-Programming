//��ǻ�Ͱ��а� 20200769 ����ȣ
#ifndef _CHECKINGACCOUNT_H
#define _CHECKINGACCOUNT_H

#include "CheckingAccount.h"

//����ī��
class CheckingTrafficCardAccount : public CheckingAccount {
public:
	bool hasTrafficCard;

public:
	CheckingTrafficCardAccount(string name, int accountNo, int balance, string cardNo);
	int payTrafficCard(string cardNo, int amount);
};

#endif

