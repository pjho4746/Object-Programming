//컴퓨터공학과 20200769 박지호
#include "AccountManager.h"
#include <iostream>
#include <cstring>

using namespace std;

AccountManager::AccountManager(int size) {
	this->size = size;
	accounts[size];
}
AccountManager::~AccountManager(void) {
	for (int i = 0; i < size; i++)
		delete accounts[i]; //포인터 배열 -> 각각 할당해제
}
void AccountManager::CreateAccount(void) {
    int sel;

    cout << "[계좌개설]" << endl;
    cout << "1. 보통예금계좌   ";
    cout << "2. 신용신뢰계좌   " << endl;
    cout << "개설하고자 하는 계좌 종류는? "; cin >> sel;

    switch (sel)
    {
    case 1:
        MakeNormalAccount();
        break;
    case 2:
        MakeCreditAccount();
        break;
    }
}
void AccountManager::MakeNormalAccount()
{
    int accountNo;
    char name[NAME_LEN];
    int balance;
    int interRate; 

    cout << "[보통예금 계좌 개설]" << endl;
    cout << "계좌번호: "; cin >> accountNo;
    cout << "이름: "; cin >> name;
    cout << "입금액: "; cin >> balance;
    cout << "기본이율: "; cin >> interRate;
    cout << endl;
    cout << "[계좌 개설 완료]" << endl;
    accounts[size++] = new NormalAccount(accountNo, name, balance, interRate);
}
void  AccountManager::MakeCreditAccount()
{
    int accountNo;
    char name[NAME_LEN];
    int balance;
    int interRate;
    int creditLevel;

    cout << "[신용신뢰 계좌 개설]" << endl;
    cout << "계좌번호: "; cin >> accountNo;
    cout << "이름: "; cin >> name;
    cout << "입금액: "; cin >> balance;
    cout << "기본이율: "; cin >> interRate;
    cout << "신용등급(A는 1, B는 2, C는 3을 입력하시오): "; cin >> creditLevel;
    cout << endl;
   
    switch (creditLevel)
    {
    case 1:
        accounts[size++] = new HighCreditAccount(accountNo, name, balance, interRate, LEVEL_A);
        break;
    case 2:
        accounts[size++] = new HighCreditAccount(accountNo, name, balance, interRate, LEVEL_B);
        break;
    case 3:
        accounts[size++] = new HighCreditAccount(accountNo, name, balance, interRate, LEVEL_C);
        break;
    }
    cout << "[계좌 개설 완료]" << endl << endl;
}
void AccountManager::Deposit(void) {
    int amount;
    int accountNo;
    cout << "[입금]" << endl;
    cout << "계좌번호: "; cin >> accountNo;
    cout << "입금액: "; cin >> amount;

    for (int i = 0; i < size; i++)
    {
        if (accounts[i]->GetAccountNo() == accountNo)
        {
            accounts[i]->Deposit(amount);
            cout << "[입금완료]" << endl << endl;
            return;
        }
        else
            cout << "유효하지 않은 ID 입니다." << endl << endl;
    }

}
void AccountManager::Withdraw(void) {
    int amount;
    int accountNo;
    cout << "[출금]" << endl;
    cout << "계좌번호: "; cin >> accountNo;
    cout << "출금액: "; cin >> amount;

    try {
        for (int i = 0; i < size; i++)
        {
            if (accounts[0] == nullptr)throw 0;
            else if (accounts[i]->GetAccountNo() == accountNo)
            {
                if (accounts[i]->Withdraw(amount) == 0)
                {
                    cout << "잔액부족" << endl << endl;
                    return;
                }
                else {
                    accounts[i]->Withdraw(amount);
                   
                    return;
                }
            }
            else
                cout << "유효하지 않은 ID 입니다." << endl << endl;
        }
    }
    catch (int e) {
        for (int i = 1; i < size; i++) {
            accounts[i] -> Withdraw(amount);
            
            cout << "======================" << endl << endl;
        }
    }

}
void AccountManager::DisplayAll(void) const {

    try {
        for (int i = 0; i < size; i++) {
            if (accounts[0]==nullptr)throw 0;
            accounts[i]->Check();
            cout << "======================" << endl << endl;
        }
    }
    catch (int e) {
        for (int i = 1; i < size; i++) {
            accounts[i]->Check();
            cout << "======================" << endl << endl;
        }
    }
    
}


void AccountManager::DisplayOne(void) const {
    int accountNo;
    cout << "계좌번호: "; cin >> accountNo;

    try {
        for (int i = 0; i < size; i++)
        {
            if (accounts[0] == nullptr)throw 0;
            else if (accounts[i]->GetAccountNo() == accountNo)
            {
                accounts[i]->Check();
                cout << "======================" << endl << endl;
            }
            else
                cout << "일치하는 계좌가 존재하지 않습니다!" << endl << endl;
        }
    }
    catch (int e) {
        cout << "일치하는 계좌가 존재하지 않습니다!" << endl << endl;
    }
   
}
void AccountManager::CloseAccount(void) {
    int accountNo;
    cout << "계좌번호: "; cin >> accountNo;
    for (int i = 0; i < size; i++)
    {
        if (accounts[i]->GetAccountNo() == accountNo)
        {
            delete accounts[i];
            cout << "\n[계좌 해지 완료]" << endl << endl;
            accounts[i] = nullptr;
        }

    }  
}