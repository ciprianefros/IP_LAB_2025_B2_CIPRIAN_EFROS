#include "Groceries.h"

Groceries::Groceries(string name, int price, string type, unsigned int weight)
{
	this->price = price;
	this->name = name;
	this->type = type;
	this->weight = weight;

}

string Groceries::getType()
{
	return string();
}
