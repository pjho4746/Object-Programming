#ifndef _POINT_H_
#define _POINT_H_

class Point {
private:
	int x, y;

public:
	//���������� ���� ���ɼ��� �����ϱ� ���� const ��� �Լ� ���
	//�ٸ� ��ü�� ��� �Լ��� ȣ���� ������ const ��� �Լ��� ȣ�� ����

	//���� getter���� ���
	int GetX(void) const;
	int GetY(void) const;
	
	bool SetX(int xPos);
	bool SetY(int yPos);
};
#endif
