//��ǻ�Ͱ��а� 20200769 ����ȣ
#ifndef _CREDITLINEACCOUNT_H
#define _CREDITLINEACCOUNT_H
#include <iostream>
#include <string>
#include "String.h"
#include "Account.h"
using namespace std;

class CreditLineAccount : public Account {
public:
	int creditLine; //���̳ʽ� �ѵ�

public:
	CreditLineAccount(string name, int accountNo, int balance, int creditLine);
	int withdraw(); 
};
#endif