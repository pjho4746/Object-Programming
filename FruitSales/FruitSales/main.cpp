#include "FruitSeller.h"
#include "FruitBuyer.h"
#include <iostream>

using std::cout;

int main(void)
{
	//��ü ����
	FruitSeller seller;
	seller.Init(20);

	//��ü ����
	FruitBuyer buyer;
	buyer.Init(5000);

	//��� �����ڴ� � �Ǹ������� ��ġ ����� ����
	buyer.BuyApple(seller, 2000);

	cout << "Seller:\n";
	seller.ShowResult();

	cout << "Buyer:\n";
	buyer.ShowResult();

	return 0;
}
