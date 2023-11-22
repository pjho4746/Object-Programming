//컴퓨터공학과 20200769 박지호
#ifndef _CREDITLINEACCOUNT_H
#define _CREDITLINEACCOUNT_H
#include <iostream>
#include <string>
#include "String.h"
#include "Account.h"
using namespace std;

class CreditLineAccount : public Account {
public:
	int creditLine; //마이너스 한도

public:
	CreditLineAccount(string name, int accountNo, int balance, int creditLine);
	int withdraw(); 
};
#endif