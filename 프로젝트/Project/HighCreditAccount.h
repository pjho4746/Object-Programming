//��ǻ�Ͱ��а� 20200769 ����ȣ
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