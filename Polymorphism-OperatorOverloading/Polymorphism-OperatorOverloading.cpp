/* Menu and the entry point of the program.
   Press 1 to calculate the total purchase sum via overrided methods.
   Press 2 to to display data members.
   Press 3 to quit the program */

#include <iostream>
#include "Product.h"
#include "Tableware.h"
#include "Foodstuff.h"

// Usage of different namespaces
using namespace std;
using namespace classProduct;
using namespace classTableware;
using namespace classFoodstuff;

// Defining static data members
int Product::version;
int Tableware::tablewareVersion;
int Foodstuff::foodstuffVersion;

// Check if the entered value is appropriate
void validateInput() {
    int ignoreValue = 1024;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(ignoreValue, '\n');
    }
}

// Calculate the total purchase sum via overrided methods "setPrice()"
float computedValue(Tableware& tableware, Foodstuff& foodstuff) {
    tableware.setPrice((float)rand());
    foodstuff.setPrice((float)rand());
    return tableware.getPrice() + foodstuff.getPrice();
}

void setDataMembers(Tableware& tableware, Foodstuff& foodstuff) {
    tableware.setId(rand());
    tableware.setPrice((float)rand());

    foodstuff.setId(rand());
    foodstuff.setPrice((float)rand());
}

int main() {
    // Boolean variable to check if the user wants to quit the program or is continuing the interaction with it
    bool loop = true;
    // This is a variable to call methods or terminate the program. Variable's value is modified by the user in the loop
    int input;
    cout << "What do you want to do? Enter a number (1-3): ";
    while (loop) {
        cin >> input;
        validateInput();
        float sum = 0;
        Tableware* tableware;
        Foodstuff* foodstuff;
        switch (input) {
            // Calculate the total purchase sum via overrided methods
            case 1:
                tableware = new Tableware[3];
                foodstuff = new Foodstuff[3];
                for (int i = 0; i < 3; i++) {
                    sum = computedValue(tableware[i], foodstuff[i]);
                }
                cout << "Total purchase sum: " << sum << endl;
                cout << "\nWhat do you want to do next? Enter a number (1-3): ";
            break;
            // Display data members of objects
            case 2:
                tableware = new Tableware[3];
                foodstuff = new Foodstuff[3];
                foodstuff[0].setFoodstuffVersion(rand());
                tableware[0].setTablewareVersion(rand());
                for (int i = 0; i < 3; i++) {
                    setDataMembers(tableware[i], foodstuff[i]);
                    tableware[i].display();
                    foodstuff[i].display();
                }
                cout << "\nWhat do you want to do next? Enter a number (1-3): ";
            break;
            // Exit the program
            case 3:
                loop = false;
            break;
            default:
                 cout << "Invalid input. Enter only numbers from 1 to 3: ";
            break;
        }
    }
}
