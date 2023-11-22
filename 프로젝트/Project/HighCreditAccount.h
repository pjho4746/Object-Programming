//컴퓨터공학과 20200769 박지호
#ifndef _HIGHCREDITACCOUNT_H
#define _HIGHCREDITACCOUNT_H
#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount {
    int special;

public:
    HighCreditAccount(int accountNo, const char* name, int balance, int interRate, int special);
    void Deposit(int amount);
    int Withdraw(int amount);
    void Check(void) const;
};

#endif //_HIGHCREDITACCOUNT_H