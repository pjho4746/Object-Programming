#ifndef _COMPLEXLIST_H_
#define _COMPLEXLIST_H_

#include "Complex.h"

class ComplexList {
private:
	Complex* list;
	int size;

public:
	ComplexList(int size = 10);
	//���� �Ҵ�� �迭�� ���� delete[]
	~ComplexList() { delete[] list; }
	int Length() const { return size; }
	//�迭 ��� n�� ����� ��ü ��ȯ
	Complex* pGet(int n) const;
	Complex& Get(int n) const;
	void Set(int n, double real = 0, double image = 0);

	ComplexList& operator=(const ComplexList& rh);
	Complex& operator[](int i);
};
#endif
