#pragma once
#include <vector>
#include "Product.h"
class Basket
{
private:
	vector<Product> produse;
public:
	Basket();
	Basket(vector<Product> produse);
	void add(Product& produs);
	void removeLast();
	void printProducts();
	int computeTotalCost();
	~Basket();
};

