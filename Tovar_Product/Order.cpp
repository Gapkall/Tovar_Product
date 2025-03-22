#include "Order.h"

Order::Order() : order_amount(0)
{
}

Order::Order(double price) : order_amount(order)
{
}

Order::Order(Order& O) : order_amount(O.order_amount)
{
}

Order::~Order()
{
}

bool Order::operator<(const Order& O)
{
	return calculateOrder() < O.calculateOrder();
}
