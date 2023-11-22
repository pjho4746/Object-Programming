#include "ComplexList.h"
#include "Complex.h"

ComplexList::ComplexList(int size)
{
	this->size = size;
	list = new Complex[size];
}
Complex* ComplexList::pGet(int n) const
{
	return (list + n); //ÁÖ¼Ò°ª
}
Complex& ComplexList::Get(int n) const
{
	return list[n]; //p+n == &list[n]
}
void ComplexList::Set(int n, double real, double image)
{
	(list + n)->SetComplex(real, image);
}
