#pragma once
#include "Product.h"
#include <string>
using namespace std;
class Electronics : public Product
{
private:
	string type;
	unsigned int voltage;
public:
	Electronics(string name, int price, string type, unsigned int voltage);
	string getType();
	unsigned int getVoltage();
	~Electronics() {};
};

