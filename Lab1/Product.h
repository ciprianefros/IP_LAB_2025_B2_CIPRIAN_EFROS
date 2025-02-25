#pragma once
#include <string>
using namespace std;
class Product
{
protected:
	int price;
	string name;
public:
	Product() {};
	Product(int price, string name);
	string getName();
	void updatePrice(int newPrice);
	int getPrice();
};

