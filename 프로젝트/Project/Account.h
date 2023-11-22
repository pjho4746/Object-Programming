//��ǻ�Ͱ��а� 20200769 ����ȣ
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

	virtual void Deposit(int amount); //�Ա�
	virtual int Withdraw(int amount); //����
	virtual void Check(void) const; //�ܾ���ȸ

	bool operator==(const Account&);
	Account& operator=(const Account&);
};

#endif //_ACCOUNT_H