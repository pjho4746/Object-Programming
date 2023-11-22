#ifndef _POINT_H_
#define _POINT_H_

class Point {
private:
	int x, y;

public:
	//직간접적인 변경 가능성을 차단하기 위해 const 멤버 함수 사용
	//다른 객체의 멤버 함수를 호출할 때에도 const 멤버 함수만 호출 가능

	//보통 getter에서 사용
	int GetX(void) const;
	int GetY(void) const;
	
	bool SetX(int xPos);
	bool SetY(int yPos);
};
#endif
