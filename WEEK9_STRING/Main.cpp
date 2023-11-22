#include <iostream>
#include "String.h"

using namespace std;

int main() {
    //1단계
    String s1;
    String s2("hello");

    //2단계
    cout << "s1: " << s1 << endl;
    cout << "s1's len: " << s1.length() << endl;

    cout << "s2: " << s2 << endl;

    //3단계
    s1 = s2;
    cout << "s1: " << s1 << endl;

    //4단계
    String s3 = s2;
    cout << "s3: " << s3 << endl;

    //5단계
    String s4 = s1 + s2;
    cout << "s4: " << s4 << endl;

    //6단계
    if (s1 == s2)
        cout << "두 문자열은 같습니다" << endl;
    else
        cout << "두 문자열은 다릅니다" << endl;

    if (s1 == "hello")
        cout << "두 문자열은 같습니다" << endl;
    else
        cout << "두 문자열은 다릅니다" << endl;

    //7단계
    cout << s4[1] << endl;
    s4[0] = 'H';
    cout << s4 << endl;
}
