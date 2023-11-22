#ifndef _FRUITESELLER_H_
#define _FRUITESELLER_H_

class FruitSeller {
private:
	const int APPLE_UNICOST;
	int numOfApple;
	int money;
	//객체 외부에는 노출되지 않고 클래스의 멤버함수에서만 사용 가능
	void Init(int money, int numOfApple);

public:
	//2개의 생성자 오버로딩
	FruitSeller(int money, int numOfApple);
	FruitSeller(int numOfApple);

	int SaleApple(int);
	void ShowResult() const;
};

//Inline 함수는 정의 또한 header 파일 내에 작성되어야 함
inline FruitSeller::FruitSeller(int money, int numOfApple) : APPLE_UNICOST(1000)
{
	Init(money, numOfApple);
}

inline FruitSeller::FruitSeller(int numOfApple) : FruitSeller(0, numOfApple) //현재 존재하는 생성자 이용(위임 생성자)
{
}

#endif //_FRUITESELLER_H_
