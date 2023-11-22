#ifndef _FRUITBUYER_H_
#define _FRUITBUYER_H_

#include "FruitSeller.h"

class FruitBuyer {
private:
	int numOfApple;
	int money;

public:
	FruitBuyer(int money, int numOfApple = 0)
		: money(money), numOfApple(numOfApple) {}; //괄호 밖: 멤버 변수 / 괄호 안: 매개변수 값

	//FruitSeller 레퍼런스
	//함수 인수로 사용되는 객체가 수정되어지는 효과를 얻기 위해서는 매개변수로 reference/address 사용
	void BuyApple(FruitSeller& seller, int money);
	void ShowResult();

};

#endif //_FRUITBUYER_H_


