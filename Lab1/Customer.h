#pragma once
#include <string>
using namespace std;
class Customer
{
private:
	string name;
	string surname;
public:
	Customer();
	Customer(string name, string surname);
	string getName();
	void setName(string name);
	void setSurname(string surname);
	string getSurname();
	virtual string getCustomerType() = 0;
	~Customer() {};

};

