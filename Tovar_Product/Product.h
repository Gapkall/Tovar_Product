#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product
{
protected:
	double product_price;
	string product_currency;
	string product_name;

public:
	Product();
	Product(double price,string currency, string name);
	Product(const Product& P);
	virtual ~Product();

	virtual void print() const;
	void convertCurrency(double exchangeRate, string newCurrency);

	virtual void readFrom(std::istream& in);
	virtual void writeTo(std::ostream& out) const;
	Product operator+(double amount) const;

};

std::istream& operator>>(std::istream& in, Product& P);
std::ostream& operator<<(std::ostream& out, const Product& P);

