#pragma once
#include <iostream>

using namespace std;

namespace classProduct {
	class Product {
	private:
		static int version;								// Static data member
		int id;
		bool presence;
		float price;
	public:
		Product();
		void setId(int id);
		int getId();
		void setPresence(bool presence);
		bool getPresence();
		void setPrice(float price);
		float getPrice();
		~Product();

		// Virtual function
		virtual void display();
		
		// Methods for accessing static integer 
		void setVersion(int version);
		int getVersion();
	};
}
