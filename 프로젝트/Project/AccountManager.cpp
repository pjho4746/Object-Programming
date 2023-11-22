//��ǻ�Ͱ��а� 20200769 ����ȣ
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
		delete accounts[i]; //������ �迭 -> ���� �Ҵ�����
}
void AccountManager::CreateAccount(void) {
    int sel;

    cout << "[���°���]" << endl;
    cout << "1. ���뿹�ݰ���   ";
    cout << "2. �ſ�ŷڰ���   " << endl;
    cout << "�����ϰ��� �ϴ� ���� ������? "; cin >> sel;

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

    cout << "[���뿹�� ���� ����]" << endl;
    cout << "���¹�ȣ: "; cin >> accountNo;
    cout << "�̸�: "; cin >> name;
    cout << "�Աݾ�: "; cin >> balance;
    cout << "�⺻����: "; cin >> interRate;
    cout << endl;
    cout << "[���� ���� �Ϸ�]" << endl;
    accounts[size++] = new NormalAccount(accountNo, name, balance, interRate);
}
void  AccountManager::MakeCreditAccount()
{
    int accountNo;
    char name[NAME_LEN];
    int balance;
    int interRate;
    int creditLevel;

    cout << "[�ſ�ŷ� ���� ����]" << endl;
    cout << "���¹�ȣ: "; cin >> accountNo;
    cout << "�̸�: "; cin >> name;
    cout << "�Աݾ�: "; cin >> balance;
    cout << "�⺻����: "; cin >> interRate;
    cout << "�ſ���(A�� 1, B�� 2, C�� 3�� �Է��Ͻÿ�): "; cin >> creditLevel;
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
    cout << "[���� ���� �Ϸ�]" << endl << endl;
}
void AccountManager::Deposit(void) {
    int amount;
    int accountNo;
    cout << "[�Ա�]" << endl;
    cout << "���¹�ȣ: "; cin >> accountNo;
    cout << "�Աݾ�: "; cin >> amount;

    for (int i = 0; i < size; i++)
    {
        if (accounts[i]->GetAccountNo() == accountNo)
        {
            accounts[i]->Deposit(amount);
            cout << "[�ԱݿϷ�]" << endl << endl;
            return;
        }
        else
            cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
    }

}
void AccountManager::Withdraw(void) {
    int amount;
    int accountNo;
    cout << "[���]" << endl;
    cout << "���¹�ȣ: "; cin >> accountNo;
    cout << "��ݾ�: "; cin >> amount;

    try {
        for (int i = 0; i < size; i++)
        {
            if (accounts[0] == nullptr)throw 0;
            else if (accounts[i]->GetAccountNo() == accountNo)
            {
                if (accounts[i]->Withdraw(amount) == 0)
                {
                    cout << "�ܾ׺���" << endl << endl;
                    return;
                }
                else {
                    accounts[i]->Withdraw(amount);
                   
                    return;
                }
            }
            else
                cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
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
    cout << "���¹�ȣ: "; cin >> accountNo;

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
                cout << "��ġ�ϴ� ���°� �������� �ʽ��ϴ�!" << endl << endl;
        }
    }
    catch (int e) {
        cout << "��ġ�ϴ� ���°� �������� �ʽ��ϴ�!" << endl << endl;
    }
   
}
void AccountManager::CloseAccount(void) {
    int accountNo;
    cout << "���¹�ȣ: "; cin >> accountNo;
    for (int i = 0; i < size; i++)
    {
        if (accounts[i]->GetAccountNo() == accountNo)
        {
            delete accounts[i];
            cout << "\n[���� ���� �Ϸ�]" << endl << endl;
            accounts[i] = nullptr;
        }

    }  
}