//컴퓨터공학과 20200769 박지호
//레퍼런스에 의한 반환(강의 자료 예시 참고)
#include <iostream>

using namespace std; //std 네임스페이스에 포함된 모든 식별자 사용시 생략

int& Increment(int& n) //1번만 복사(효율적)
{
    n++;
    return n;
}

int main(void)
{
    int x = 1;
    int y = Increment(x);

    cout << "num: " << y << endl;

    return 0;
}