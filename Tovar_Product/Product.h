#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product
{
protected:
	string product_name;
	double product_price;
	string product_currency;

public:
	Product();
	Product(string name,double price,string currency);
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

