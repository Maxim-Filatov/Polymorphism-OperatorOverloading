#pragma once
#include <iostream>
#include "Product.h"
#include "Tableware.h"

using namespace std;

namespace classFoodstuff {
	class Foodstuff : public classProduct::Product {
	private:
		static int foodstuffVersion;									// Static data member
		int foodId;
		float foodPrice;
	public:
		Foodstuff();
		void setId(int foodId);
		int getId();
		~Foodstuff();

		// Overridden functions
		void setPrice(float price);
		float getPrice();

		// Virtual function
		void display();

		// Methods for accessing static integer
		void setFoodstuffVersion(int version);
		int getFoodstuffVersion();
	};
}
