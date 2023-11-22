//컴퓨터공학과 20200769 박지호
#ifndef _CHECKINGACCOUNT_H
#define _CHECKINGACCOUNT_H

#include "CheckingAccount.h"

//직불카드
class CheckingTrafficCardAccount : public CheckingAccount {
public:
	bool hasTrafficCard;

public:
	CheckingTrafficCardAccount(string name, int accountNo, int balance, string cardNo);
	int payTrafficCard(string cardNo, int amount);
};

#endif

