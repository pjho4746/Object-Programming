#include <iostream>
#include <algorithm> //�����̳� ��ҿ� ���� ���� ó��, �ݺ��ڿ� ������ ���
#include <Complex>
#include <vector> //�����̳� vector
#include "Complex.h"

using std::vector;
using std::cout;
using std::endl;

int main() {
	//1�ܰ�
	vector<Complex>c; //Complex ���� ����

	c.push_back(Complex(2, 3));
	c.push_back(Complex(4, 5));
	c.push_back(Complex(6, 7));

	vector<Complex>::iterator it;

	for (it = c.begin(); it != c.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}