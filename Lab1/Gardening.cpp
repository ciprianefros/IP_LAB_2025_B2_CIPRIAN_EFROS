#include "Gardening.h"

Gardening::Gardening(string name, int price, string use, int weight)
{
	this->price = price;
	this->name = name;
	this->use = use;
	this->weight = weight;
}

string Gardening::getUse()
{
	return this->use;
}

int Gardening::getWeight()
{
	return this->weight;
}
