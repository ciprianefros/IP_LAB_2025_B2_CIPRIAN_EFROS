#include "InStoreCustomer.h"

InStoreCustomer::InStoreCustomer()
{
}

InStoreCustomer::InStoreCustomer(vector<Product> produse, string name, string surname)
{
	this->setName(name);
	this->setSurname(surname);
	this->cosDeCumparaturi = Basket(produse);
}

string InStoreCustomer::getCustomerType()
{
	return "InStore";
}

void InStoreCustomer::addToBasket(Product& produs)
{
	this->cosDeCumparaturi.add(produs);
}

void InStoreCustomer::removeLastFromBasket()
{
	this->cosDeCumparaturi.removeLast();
}

int InStoreCustomer::getTotalCost()
{
	return cosDeCumparaturi.computeTotalCost();
}

void InStoreCustomer::printCos()
{
	cosDeCumparaturi.printProducts();
}


