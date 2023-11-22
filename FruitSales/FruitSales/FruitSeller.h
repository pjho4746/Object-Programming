#ifndef _FRUITESELLER_H_
#define _FRUITESELLER_H_

class FruitSeller {
private:
	const int APPLE_UNICOST;
	int numOfApple;
	int money;
	//��ü �ܺο��� ������� �ʰ� Ŭ������ ����Լ������� ��� ����
	void Init(int money, int numOfApple);

public:
	//2���� ������ �����ε�
	FruitSeller(int money, int numOfApple);
	FruitSeller(int numOfApple);

	int SaleApple(int);
	void ShowResult() const;
};

//Inline �Լ��� ���� ���� header ���� ���� �ۼ��Ǿ�� ��
inline FruitSeller::FruitSeller(int money, int numOfApple) : APPLE_UNICOST(1000)
{
	Init(money, numOfApple);
}

inline FruitSeller::FruitSeller(int numOfApple) : FruitSeller(0, numOfApple) //���� �����ϴ� ������ �̿�(���� ������)
{
}

#endif //_FRUITESELLER_H_
