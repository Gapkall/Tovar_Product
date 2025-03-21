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

	virtual void print() const abstract;
	virtual double calculateOrder() const abstract;
	void convertCurrency(double exchangeRate, string newCurrency);

	virtual void readFrom(istream& in);
	virtual void writeTo(ostream& out) const;
	Product operator+(double amount) const;

};

istream& operator>>(istream& in, Product& P);
ostream& operator<<(ostream& out, const Product& P);

