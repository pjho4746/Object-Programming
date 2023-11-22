#include "ComplexList.h"
#include "Complex.h"

ComplexList::ComplexList(int size)
{
	this->size = size;
	list = new Complex[size];

	//동적할당된 배열
	//Complex* list = new Complex[2];
	//(list+1)->ShowComplex();
}
Complex* ComplexList::pGet(int n) const
{
	return (list + n); //주소값
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
Complex& ComplexList::operator[](int i)//배열 요소(Complex)객체
{
	if (i<0 || i>size - 1) {
		exit(-1);//범위 내에 속하지 않으면 종료
	}
	return list[i];
}