//컴퓨터공학과 20200769 박지호
#ifndef _BONUSPOINTACCOUNT_H
#define _BONUSPOINTACCOUNT_H
#include <iostream>
#include <string>
#include "Account.h"
#include "String.h"
using namespace std;

//직불카드
class BonusPointAccount : public Account {
public:
	int bonusPoint; //누적 포인트

public:
	BonusPointAccount(string name, int accountNo, int balance, int bonusPoint);
	void deposit();
	void check();
};

#endif
#pragma once
