// Second derived class (public)
#include <iostream>
#include "Product.h"
#include "Foodstuff.h"
#include "Tableware.h"

using namespace std;
using namespace classFoodstuff;

// Default constructor
Foodstuff::Foodstuff() {
	foodstuffVersion = 0;
	foodPrice = 0;
	foodId = 1;
}

// Functions for accessing the private variable
void Foodstuff::setId(int foodId) {
	this->foodId = foodId;
}
int Foodstuff::getId() {
	return foodId;
}

// Destructor
Foodstuff::~Foodstuff() {}

// Overridden functions
void Foodstuff::setPrice(float price) {
	foodPrice = price;
}
float Foodstuff::getPrice() {
	return foodPrice;
}

// Virtual function
void Foodstuff::display() {
	cout << "Foodstuff: id = " << foodId << ", price = " << foodPrice << ", version = " << foodstuffVersion << endl;
}

// Methods for accessing static integer
void classFoodstuff::Foodstuff::setFoodstuffVersion(int version) {
	foodstuffVersion = version;
}
int classFoodstuff::Foodstuff::getFoodstuffVersion() {
	return foodstuffVersion;
}
