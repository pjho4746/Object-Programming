//��ǻ�Ͱ��а� 20200769 ����ȣ
#ifndef _MYEXCEPTION_H
#define _MYEXCEPTION_H
#include <iostream>
#include <string>
using namespace std;

class MyException {
    string msg;
public:
    MyException(string m) :msg(m){}
    string getMessage();
};

//[���ܻ�Ȳ 1]
class MalformedData : public MyException{
public:
    MalformedData(string m) : MyException(m){}
};
//[���ܻ�Ȳ 2]
class BalanceOutOfBoundsException : public MyException {
public:
    BalanceOutOfBoundsException(string m) : MyException(m) {}
};

#endif

