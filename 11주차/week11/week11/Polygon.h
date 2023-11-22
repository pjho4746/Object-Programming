#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

#ifndef _POLYGON_H
#define _POLYGON_H
class Polygon {
public:
	double width;
	double height;
	char* type; //���ڿ� ���(�迭 ���->cstring)

public:
	//��� �Ӽ��� �Ѱܹ޾� ��ü ����
	Polygon(double width, double height, char* type);
	//(���� �ڵ忡�� ������) �ڽ� Ŭ������ �����Ҵ�� ����� �߰��ϸ�,
	//���� �Ҵ� ���� ��, �θ� Ŭ������ �ν� -> virtual �Ҹ���
	virtual ~Polygon();
	void ShowInfo();
	//���� ���� �Լ� -> ��� Ŭ�������� �ݵ�� ������!!
	virtual double GetArea() const = 0;
};
#endif
