#pragma once
#include "Product.h"
class Order : public Product
{
private:
	int order_amount;
	//string type;
public:
	Order();
	Order(double price);
	Order(Order& O);
	~Order();

	bool operator<(const Order& O);
};


