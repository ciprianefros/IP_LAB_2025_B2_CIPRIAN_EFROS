#pragma once
#include "Product.h"
class Groceries : public Product
{
private:
	string type;
	unsigned int weight;
public:
	Groceries(string name, int price, string type, unsigned int weight);
	string getType();
	unsigned int getWeight();
	~Groceries() {};
};

