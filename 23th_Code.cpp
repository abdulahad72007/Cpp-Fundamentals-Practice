#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];    // Array to store IDs of items
    int itemPrice[100]; // Array to store prices corresponding to item IDs
    int counter;        // Tracks number of items entered

public:
    void initCounter(void) { counter = 0; } // Initializes counter to 0
    void setPrice(void);                     // Method to input item ID and price
    void displayPrice(void);                 // Method to display all entered items
};

// Member function to input item data
void Shop::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl; // Show item number
    cin >> itemId[counter];                                     // Store ID in array
    cout << "Enter Price of your item: " << endl;
    cin >> itemPrice[counter];                                  // Store price in array
    counter++;                                                  // Increment counter after entry
}

// Member function to display all item prices
void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "\nThe Price of item with Id " << itemId[i] << " is " << itemPrice[i];
        // Loops through all entered items and displays their ID and price
    }
}

int main()
{
    Shop Fortune;          // Object of class Shop
    Fortune.initCounter(); // Initialize counter before entering items
    Fortune.setPrice();    // Input first item
    Fortune.setPrice();    // Input second item
    Fortune.setPrice();    // Input third item
    Fortune.displayPrice(); // Display all items entered
    return 0;
}
