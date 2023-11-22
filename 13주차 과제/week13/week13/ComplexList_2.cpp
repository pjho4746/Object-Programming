#include <iostream>
#include <algorithm> //컨테이너 요소에 대한 각종 처리, 반복자와 연동해 사용
#include <Complex>
#include <vector> //컨테이너 vector
#include "Complex.h"

using std::vector;
using std::cout;
using std::endl;

int main() {
	//2단계
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
		delete* iter; //포인터이기 때문에 메모리 제거를 스스로 해줘야 함
	}

	co.clear();
	return 0;
}