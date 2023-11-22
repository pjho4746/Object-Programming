//컴퓨터공학과 20200769 박지호
#ifndef _ACCOUNTMANAGER_H
#define _ACCOUNTMANAGER_H
#include "Account.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"
const int NAME_LEN = 20;
enum { LEVEL_A = 7, LEVEL_B = 4, LEVEL_C = 2 };  // 열거형-신용등급 (A: 7%, B: 4%, C: 2%)
class AccountManager {
	static const int MAX_ACCUNTS = 100;

	Account* accounts[MAX_ACCUNTS]; //Account 저장을 위한 포인터 배열
	int size;

	int Search(int accountNo) const;

public:
	AccountManager(int size = 0);
	~AccountManager(void);

	void CreateAccount(void);
	void MakeNormalAccount(void);
	void MakeCreditAccount(void);
	void Deposit(void); //특정계좌에 대한 입출금
	void Withdraw(void);
	void DisplayAll(void) const; //전체/개인 계좌에 대한 내역(기본 내역+이율) 출력
	void DisplayOne(void) const;
	void CloseAccount(void);

	int GetSize(void) const { return size; }
};
#endif //_ACCOUNTMANAGER_H