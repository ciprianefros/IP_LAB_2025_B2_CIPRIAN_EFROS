#pragma once
#include "Customer.h"
#include "Product.h"
#include "Basket.h"
class InStoreCustomer : public Customer
{
private:
	Basket cosDeCumparaturi;
public:
	InStoreCustomer();
	InStoreCustomer(vector<Product> produse, string name, string surname);
	string getCustomerType() override;
	void addToBasket(Product& produs);
	void removeLastFromBasket();
	int getTotalCost();
	void printCos();
	~InStoreCustomer() {};

};

