#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

Product::Product() : product_name(""), product_price(0.0), product_currency("") {}

Product::Product(double price, string currency, string name) : product_name(name), product_price(price), product_currency(currency) {}

Product::Product(const Product& P) : product_name(P.product_name), product_price(P.product_price), product_currency(P.product_currency) {}

Product::~Product() {}

void Product::convertCurrency(double exchangeRate, string newCurrency)
{
	product_price *= exchangeRate;
	product_currency = newCurrency;
}

void Product::readFrom(std::istream& in)
{
	in >> product_price;
}

void Product::writeTo(std::ostream& out) const
{
	out << product_price;
}

Product Product::operator+(double amount) const
{
	
}

std::istream& operator>>(std::istream& in, Product& P)
{
	// TODO: insert return statement here
}

std::ostream& operator<<(std::ostream& out, const Product& P)
{
	// TODO: insert return statement here
}
