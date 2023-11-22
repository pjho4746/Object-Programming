#ifndef _POINT_H
#define _POINT_H

class Point {
private:
	int x, y;

public:
	//�Ű����� �⺻��, �ƹ����� �������� ������ 0,0����
	Point(int xPos = 0, int yPos = 0);

	//�Ҹ���
	~Point();

	//����Լ� ������ ��� ��� ������ ���� ������� ���ϵ��� ��
	int GetX(void) const;
	int GetY(void) const;

	bool SetX(int xPos);
	bool SetY(int yPos);
};

inline Point::Point(int xPos, int yPos)
{
	x = xPos;
	y = yPos;
}

#endif