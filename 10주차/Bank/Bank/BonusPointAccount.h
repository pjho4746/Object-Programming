//��ǻ�Ͱ��а� 20200769 ����ȣ
#ifndef _BONUSPOINTACCOUNT_H
#define _BONUSPOINTACCOUNT_H
#include <iostream>
#include <string>
#include "Account.h"
#include "String.h"
using namespace std;

//����ī��
class BonusPointAccount : public Account {
public:
	int bonusPoint; //���� ����Ʈ

public:
	BonusPointAccount(string name, int accountNo, int balance, int bonusPoint);
	void deposit();
	void check();
};

#endif
#pragma once
