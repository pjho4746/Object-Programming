#include <iostream>
#include <algorithm> //�����̳� ��ҿ� ���� ���� ó��, �ݺ��ڿ� ������ ���
#include <Complex>
#include <vector> //�����̳� vector
#include "Complex.h"

using std::vector;
using std::cout;
using std::endl;

int main() {
	//2�ܰ�
	vector<Complex*>co(3);

	co.push_back(new Complex(1, 2));
	co.push_back(new Complex(3, 4));
	co.push_back(new Complex(5, 6));

	vector<Complex*>::iterator iter;

	cout << *co[0] << endl;
	cout << *co[1] << endl;
	cout << *co[2] << endl;

	for (iter = co.begin(); iter != co.end(); iter++) {
		cout << *iter << endl;
	}

	for (iter = co.begin(); iter != co.end(); iter++) {
		delete* iter; //�������̱� ������ �޸� ���Ÿ� ������ ����� ��
	}

	co.clear();
	return 0;
}