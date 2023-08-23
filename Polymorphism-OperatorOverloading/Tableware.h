#pragma once
#include <iostream>
#include "Product.h"
#include "Foodstuff.h"

using namespace std;

namespace classTableware {
	class Tableware : private classProduct::Product {
	private:
		static int tablewareVersion;								// Static data member
		float tablewarePrice;
		int tablewareId;
	public:
		Tableware();
		void setId(int tablewareId);
		int getId();
		~Tableware();

		// Overridden functions
		void setPrice(float price);
		float getPrice();

		// Virtual function
		void display();

		// Methods for accessing static integer
		void setTablewareVersion(int version);
		int getTablewareVersion();
	};
}
