//��ǻ�Ͱ��а� 20200769 ����ȣ
#ifndef _CHECKINGACCOUNT_H
#define _CHECKINGACCOUNT_H
#include "Account.h"

//����ī��
class CheckingAccount : public Account {
public:
	string cardNo; //ī���ȣ

public:
	CheckingAccount(string name, int accountNo, int balance, string cardNo);
	int pay(string cardNo, int amount);
};

#endif
