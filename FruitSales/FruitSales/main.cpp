#include "FruitSeller.h"
#include "FruitBuyer.h"
#include <iostream>

using std::cout;

int main(void)
{
	//객체 생성
	FruitSeller seller;
	seller.Init(20);

	//객체 생성
	FruitBuyer buyer;
	buyer.Init(5000);

	//사과 구매자는 어떤 판매자한테 얼마치 사과를 구매
	buyer.BuyApple(seller, 2000);

	cout << "Seller:\n";
	seller.ShowResult();

	cout << "Buyer:\n";
	buyer.ShowResult();

	return 0;
}
