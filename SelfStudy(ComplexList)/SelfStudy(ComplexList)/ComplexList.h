#ifndef _COMPLEXLIST_H_
#define _COMPLEXLIST_H_

#include "Complex.h"

class ComplexList {
private:
	Complex* list;
	int size;

public:
	ComplexList(int size = 10);
	~ComplexList() { delete[] list; }
	//복소수 배열의 길이 반환
	int Length() const { return size; }
	Complex* pGet(int n) const;
	//배열 요소 n에 저장된 복소수 객체 반환
	Complex& Get(int n) const;
	//배열 요소 n에 저장된 복소수 객체 반환
	void Set(int n, double real = 0, double image = 0);
};
#endif
