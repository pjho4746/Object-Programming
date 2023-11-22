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
	//���Ҽ� �迭�� ���� ��ȯ
	int Length() const { return size; }
	Complex* pGet(int n) const;
	//�迭 ��� n�� ����� ���Ҽ� ��ü ��ȯ
	Complex& Get(int n) const;
	//�迭 ��� n�� ����� ���Ҽ� ��ü ��ȯ
	void Set(int n, double real = 0, double image = 0);
};
#endif
