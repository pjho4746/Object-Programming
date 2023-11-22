#ifndef _POINT_H
#define _POINT_H

class Point {
private:
	int x, y;

public:
	//매개변수 기본값, 아무값도 설정되지 않으면 0,0으로
	Point(int xPos = 0, int yPos = 0);

	//소멸자
	~Point();

	//멤버함수 내에서 어떠한 멤버 변수의 값도 변경되지 못하도록 함
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