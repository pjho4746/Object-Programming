//컴퓨터공학과 20200769 박지호
#ifndef _CHECKINGACCOUNT_H
#define _CHECKINGACCOUNT_H
#include "Account.h"

//직불카드
class CheckingAccount : public Account {
public:
	string cardNo; //카드번호

public:
	CheckingAccount(string name, int accountNo, int balance, string cardNo);
	int pay(string cardNo, int amount);
};

#endif
