//컴퓨터공학과 20200769 박지호
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

//[예외상황 1]
class MalformedData : public MyException{
public:
    MalformedData(string m) : MyException(m){}
};
//[예외상황 2]
class BalanceOutOfBoundsException : public MyException {
public:
    BalanceOutOfBoundsException(string m) : MyException(m) {}
};

#endif

