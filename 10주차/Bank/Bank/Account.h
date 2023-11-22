//컴퓨터공학과 20200769 박지호
#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <iostream>
//c++에서 문자열 - <cstring>(문자열 배열), <string>
#include <string>

using namespace std;

class Account {
public:
	int accountNo; //계좌번호
	string name; //예금주 이름
	int balance; //잔액

public:
	Account();
	Account(string name, int accountNo, int balance);
	void deposit(int amount); //예금
	int withdraw(int amount); //인출
	void check(); //잔액조회
};

#endif
