#include <iostream>
#include "String.h"

using namespace std;

int main() {
    //1�ܰ�
    String s1;
    String s2("hello");

    //2�ܰ�
    cout << "s1: " << s1 << endl;
    cout << "s1's len: " << s1.length() << endl;

    cout << "s2: " << s2 << endl;

    //3�ܰ�
    s1 = s2;
    cout << "s1: " << s1 << endl;

    //4�ܰ�
    String s3 = s2;
    cout << "s3: " << s3 << endl;

    //5�ܰ�
    String s4 = s1 + s2;
    cout << "s4: " << s4 << endl;

    //6�ܰ�
    if (s1 == s2)
        cout << "�� ���ڿ��� �����ϴ�" << endl;
    else
        cout << "�� ���ڿ��� �ٸ��ϴ�" << endl;

    if (s1 == "hello")
        cout << "�� ���ڿ��� �����ϴ�" << endl;
    else
        cout << "�� ���ڿ��� �ٸ��ϴ�" << endl;

    //7�ܰ�
    cout << s4[1] << endl;
    s4[0] = 'H';
    cout << s4 << endl;
}
