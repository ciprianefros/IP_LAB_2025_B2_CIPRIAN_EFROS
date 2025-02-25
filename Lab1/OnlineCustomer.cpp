#include "OnlineCustomer.h"

OnlineCustomer::OnlineCustomer()
{
}

OnlineCustomer::OnlineCustomer(vector<Product> produse, int age, string name, string surname)
{
	this->setName(name);
	this->setSurname(surname);
	this->age = age;
	this->cosDeCumparaturi = Basket(produse);
}

string OnlineCustomer::getCustomerType()
{
	return "Online";
}

void OnlineCustomer::printCos()
{
	cosDeCumparaturi.printProducts();
}

int OnlineCustomer::getTotalCost()
{
	return cosDeCumparaturi.computeTotalCost();
}

int OnlineCustomer::getAge()
{
	return this->age;
}
