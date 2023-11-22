#include "ComplexList.h"
#include "Complex.h"

ComplexList::ComplexList(int size)
{
	this->size = size;
	list = new Complex[size];

	//�����Ҵ�� �迭
	//Complex* list = new Complex[2];
	//(list+1)->ShowComplex();
}
Complex* ComplexList::pGet(int n) const
{
	return (list + n); //�ּҰ�
}
Complex& ComplexList::Get(int n) const
{
	return list[n]; //p+n == &list[n]
}
void ComplexList::Set(int n, double real, double image)
{
	(list + n)->SetComplex(real, image);
}
ComplexList& ComplexList::operator=(const ComplexList& rh)
{
	this->size = rh.size;
	delete[] this->list;
	this->list = new Complex(size);
	for (int i = 0; i < this->size; i++)
		this->list[i] = rh.list[i];
	return *this;
}
Complex& ComplexList::operator[](int i)//�迭 ���(Complex)��ü
{
	if (i<0 || i>size - 1) {
		exit(-1);//���� ���� ������ ������ ����
	}
	return list[i];
}