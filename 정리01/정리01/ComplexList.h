#ifndef _COMPLEXLIST_H_
#define _COMPLEXLIST_H_

#include "Complex.h"

class ComplexList {
private:
	Complex* list;
	int size;

public:
	ComplexList(int size = 10);
	//동적 할당된 배열의 해제 delete[]
	~ComplexList() { delete[] list; }
	int Length() const { return size; }
	//배열 요소 n에 저장된 객체 반환
	Complex* pGet(int n) const;
	Complex& Get(int n) const;
	void Set(int n, double real = 0, double image = 0);

	ComplexList& operator=(const ComplexList& rh);
	Complex& operator[](int i);
};
#endif
