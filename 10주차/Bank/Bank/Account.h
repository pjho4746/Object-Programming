//��ǻ�Ͱ��а� 20200769 ����ȣ
#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <iostream>
//c++���� ���ڿ� - <cstring>(���ڿ� �迭), <string>
#include <string>

using namespace std;

class Account {
public:
	int accountNo; //���¹�ȣ
	string name; //������ �̸�
	int balance; //�ܾ�

public:
	Account();
	Account(string name, int accountNo, int balance);
	void deposit(int amount); //����
	int withdraw(int amount); //����
	void check(); //�ܾ���ȸ
};

#endif
