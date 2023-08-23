// Base class
#include <iostream>
#include "Product.h"

using namespace std;
using namespace classProduct;

// Default constructor
Product::Product() {
	version = 0;
	id = 0;
	presence = true;
	price = 0;
}

// Functions for accessing variables
void Product::setId(int id) {
	this->id = id;
}
int Product::getId() {
	return id;
}
void Product::setPresence(bool presence) {
	this->presence = presence;
}
bool Product::getPresence() {
	return presence;
}
void Product::setPrice(float price) {
	this->price = price;
}
float Product::getPrice() {
	return price;
}

// Destructor
Product::~Product() {}

void classProduct::Product::display()
{

	cout << "Product: id = " << id << ", price = " << price << ", version = " << version << endl;
}

// Methods for accessing static integer
void Product::setVersion(int version) {
	this->version = version;
}
int Product::getVersion() {
	return version;
}
