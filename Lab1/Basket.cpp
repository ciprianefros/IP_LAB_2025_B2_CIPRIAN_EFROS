#include "Basket.h"
using namespace std;
#include <iostream>
Basket::Basket()
{
}

Basket::Basket(vector<Product> produse)
{
	for (auto product : produse) {
		this->produse.push_back(product);
	}
}

void Basket::add(Product& produs)
{
	this->produse.push_back(produs);
}

void Basket::removeLast()
{
	this->produse.pop_back();
}

void Basket::printProducts() {
	for (auto& produs : produse) {
		cout << "Nume: " << produs.getName() << ", Pret: " << produs.getPrice() << " RON" << endl;
	}
}

int Basket::computeTotalCost()
{
	int sum = 0;

	for (auto product : produse) {
		sum += product.getPrice();
	}
	return sum;

}

Basket::~Basket()
{
}
