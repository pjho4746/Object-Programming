#include <iostream>
#include <algorithm> //컨테이너 요소에 대한 각종 처리, 반복자와 연동해 사용
#include <Complex>
#include <vector> //컨테이너 vector
#include "Complex.h"

using std::vector;
using std::cout;
using std::endl;

int main() {
	//1단계
	vector<Complex>c; //Complex 벡터 생성

	c.push_back(Complex(2, 3));
	c.push_back(Complex(4, 5));
	c.push_back(Complex(6, 7));

	vector<Complex>::iterator it;

	for (it = c.begin(); it != c.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}