#include "FruitBuyer.h"

int main(void)
{
	FruitBuyer buyer;
	buyer.money = 5000;
	buyer.num0fApple = 0;

	buyer.BuyApple(2000);
	//buyer.BuyApple(2);
	buyer.ShowResult();

	return 0;
}