// First derived class (private)
#include <iostream>
#include "Product.h"
#include "Tableware.h"
#include "Foodstuff.h"

using namespace std;
using namespace classTableware;

// Default constructor
Tableware::Tableware() {
	tablewareVersion = 0;
	tablewarePrice = 0;
	tablewareId = 1;
}

// Functions for accessing the private variable
void Tableware::setId(int tablewareId) {
	this->tablewareId = tablewareId;
}
int Tableware::getId() {
	return tablewareId;
}

// Destructor
Tableware::~Tableware() {}

// Overrided functions
void Tableware::setPrice(float price) {
	tablewarePrice = price;
}

float Tableware::getPrice() {
	return tablewarePrice;
}

// Virtual function
void Tableware::display() {
	cout << "Tableware: id = " << tablewareId << ", price = " << tablewarePrice << ", version = " << tablewareVersion << endl;
}

// Methods for accessing static integer
void classTableware::Tableware::setTablewareVersion(int version) {
	tablewareVersion = version;
}
int classTableware::Tableware::getTablewareVersion() {
	return tablewareVersion;
}
