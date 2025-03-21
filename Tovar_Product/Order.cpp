#include "Order.h"

Order::Order()
{
}

Order::Order(double price)
{
}

Order::Order(Order& O)
{
}

Order::~Order()
{
}

bool Order::operator<(const Order& O)
{
	return calculateOrder() < O.calculateOrder();
}
