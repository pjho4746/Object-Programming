//��ǻ�Ͱ��а� 20200769 ����ȣ
#ifndef _ACCOUNTMANAGER_H
#define _ACCOUNTMANAGER_H
#include "Account.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"
const int NAME_LEN = 20;
enum { LEVEL_A = 7, LEVEL_B = 4, LEVEL_C = 2 };  // ������-�ſ��� (A: 7%, B: 4%, C: 2%)
class AccountManager {
	static const int MAX_ACCUNTS = 100;

	Account* accounts[MAX_ACCUNTS]; //Account ������ ���� ������ �迭
	int size;

	int Search(int accountNo) const;

public:
	AccountManager(int size = 0);
	~AccountManager(void);

	void CreateAccount(void);
	void MakeNormalAccount(void);
	void MakeCreditAccount(void);
	void Deposit(void); //Ư�����¿� ���� �����
	void Withdraw(void);
	void DisplayAll(void) const; //��ü/���� ���¿� ���� ����(�⺻ ����+����) ���
	void DisplayOne(void) const;
	void CloseAccount(void);

	int GetSize(void) const { return size; }
};
#endif //_ACCOUNTMANAGER_H