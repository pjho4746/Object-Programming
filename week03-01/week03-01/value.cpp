//��ǻ�Ͱ��а� 20200769 ����ȣ
//���� ���� ��ȯ(���� �ڷ� ���� ����)
#include <iostream>

using namespace std; //std ���ӽ����̽��� ���Ե� ��� �ĺ��� ���� ����

int Increment(int n)
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
