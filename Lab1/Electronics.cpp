#include "Electronics.h"

Electronics::Electronics(string name, int price, string type, unsigned int voltage)
{
	this->price = price;
	this->name = name;
	this->type = type;
	this->voltage = voltage;
}

string Electronics::getType()
{
	return type;
}

unsigned int Electronics::getVoltage()
{
	return voltage;
}
