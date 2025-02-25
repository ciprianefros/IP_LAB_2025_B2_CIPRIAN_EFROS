#pragma once
#include "Basket.h"
#include "Customer.h"
class OnlineCustomer : public Customer
{
private:
	Basket cosDeCumparaturi;
	int age;
public:
	OnlineCustomer();
	OnlineCustomer(vector<Product> produse, int age, string name, string surname);
	string getCustomerType() override;
	void printCos();
	int getTotalCost();
	int getAge();
	~OnlineCustomer() {};
};

