
#include "Order.h"
#include <iostream>

using namespace std;

Order::Order() : Product(), order_amount(0) {}

Order::Order(string name, double price, string currency, int amount)
    : Product(name, price, currency), order_amount(amount) {
}

Order::Order(const Order& O) : Product(O), order_amount(O.order_amount) {}

Order::~Order() {}

void Order::print() const {
    cout << "Order: " << product_name
        << ", Price: " << product_price << " " << product_currency
        << ", Amount: " << order_amount << endl;
}

double Order::calculateOrder() const {
    return product_price * order_amount;
}

bool Order::operator<(const Order& O) const {
    return order_amount < O.order_amount;
}
