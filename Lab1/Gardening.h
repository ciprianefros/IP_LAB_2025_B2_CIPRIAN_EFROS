#pragma once
#include "Product.h"
class Gardening : public Product
{
private:
	string use;
	int weight;
public:
	Gardening(string name, int price, string use, int weight);
	string getUse();
	int getWeight();
	~Gardening() {};
};

