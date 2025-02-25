#include "Product.h"

Product::Product(int price, string name)
{
	this->price = price;
	this->name = name;
}

string Product::getName()
{
	return this->name;
}

void Product::updatePrice(int newPrice)
{
	if (price > 0) {
		this->price = newPrice;
	}
}

int Product::getPrice()
{
	return this->price;
}
