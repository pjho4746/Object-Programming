#include "Menu.h"
#include <iostream>
using namespace std;

void Menu::ShowMenu() const
{
    cout << "\n���� ���� �ý���<1�ܰ�>" << endl;
    cout << "======================" << endl;
    cout << "1. ���� ����" << endl;
    cout << "2. �Ա�" << endl;
    cout << "3. ���" << endl;
    cout << "4. �������� ��ü ���" << endl;
    cout << "5. Ư�� ���� ��ȸ" << endl;
    cout << "6. ���� ����" << endl;
    cout << "7. ����" << endl;
    cout << "======================" << endl;
}
int Menu::InputMenu() const{
    int sel;
    cout << "����: "; cin >> sel;
    cout << endl;
    return sel;
}