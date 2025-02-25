#include "Customer.h"

Customer::Customer()
{
	this->name = "Vasile";
	this->surname = "Popescu";
}

Customer::Customer(string name, string surname)
{
	this->name = name;
	this->surname = surname;
}

string Customer::getName()
{
	return this->name;
}

void Customer::setName(string name)
{
	this->name = name;
}

void Customer::setSurname(string surname)
{
	this->surname = surname;
}

string Customer::getSurname()
{
	return this->surname;
}
