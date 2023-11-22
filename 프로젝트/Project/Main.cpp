#include "AccountManager.h"
#include "Menu.h"

int main(void)
{
	AccountManager accMgr;
	int choice;
	do {
		Menu* menu = 0; //인스턴스 생성
		menu->ShowMenu();
		choice = menu->InputMenu();

		switch (choice){
		case 1:
			accMgr.CreateAccount();
			break;

		case 2:
			accMgr.Deposit();
			break;

		case 3:
			accMgr.Withdraw();
			break;

		case 4:
			accMgr.DisplayAll();
			break;

		case 5:
			accMgr.DisplayOne();
			break;

		case 6:
			accMgr.CloseAccount();
			break;
		}
	} while (choice != 7);
	return 0;
}