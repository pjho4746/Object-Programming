//컴퓨터공학과 20200769 박지호
#ifndef _ACCOUNT_H
#define _ACCOUNT_H

class Account {
protected:
	int accountNo;
	int balance;
	char* name;

public:
	Account(int accountNo, const char* name, int balance = 0);
	Account(const Account&);
	virtual ~Account(void); 

	int GetAccountNo(void) const { return accountNo; }
	int GetBalance(void) const { return balance; }
	char* GetName(void) const { return name; }

	virtual void Deposit(int amount); //입금
	virtual int Withdraw(int amount); //인출
	virtual void Check(void) const; //잔액조회

	bool operator==(const Account&);
	Account& operator=(const Account&);
};

#endif //_ACCOUNT_H