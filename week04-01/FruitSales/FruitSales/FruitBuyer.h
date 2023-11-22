#ifndef _FRUITBUYER_H_
#define _FRUITBUYER_H_

#include "FruitSeller.h"

class FruitBuyer {
private:
	int numOfApple;
	int money;

public:
	FruitBuyer(int money, int numOfApple = 0)
		: money(money), numOfApple(numOfApple) {}; //��ȣ ��: ��� ���� / ��ȣ ��: �Ű����� ��

	//FruitSeller ���۷���
	//�Լ� �μ��� ���Ǵ� ��ü�� �����Ǿ����� ȿ���� ��� ���ؼ��� �Ű������� reference/address ���
	void BuyApple(FruitSeller& seller, int money);
	void ShowResult();

};

#endif //_FRUITBUYER_H_


