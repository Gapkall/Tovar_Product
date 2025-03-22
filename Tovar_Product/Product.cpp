#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

Product::Product() : product_name(""), product_price(0.0), product_currency("") {}

Product::Product(string name, double price, string currency)
    : product_name(name), product_price(price), product_currency(currency) {
}

Product::Product(const Product& P)
    : product_name(P.product_name), product_price(P.product_price), product_currency(P.product_currency) {
}

Product::~Product() {}

Product& Product::operator=(const Product& P) {
    if (this != &P) {
        product_name = P.product_name;
        product_price = P.product_price;
        product_currency = P.product_currency;
    }
    return *this;
}

void Product::convertCurrency(double exchangeRate, string newCurrency) {
    if (exchangeRate > 0) {
        product_price *= exchangeRate;
        product_currency = newCurrency;
    }
    else {
        cerr << "Error: Invalid exchange rate!" << endl;
    }
}

void Product::readFrom(istream& in) {
    in >> product_name >> product_price >> product_currency;
}

void Product::writeTo(ostream& out) const {
    out << "Product: " << product_name
        << ", Price: " << product_price << " " << product_currency;
}

Product Product::operator+(double amount) const {
    return Product(product_name, product_price + amount, product_currency);
}

Product Product::operator-(double amount) const {
    return Product(product_name, product_price - amount, product_currency);
}

istream& operator>>(istream& in, Product& P) {
    P.readFrom(in);
    return in;
}

ostream& operator<<(ostream& out, const Product& P) {
    P.writeTo(out);
    return out;
}
