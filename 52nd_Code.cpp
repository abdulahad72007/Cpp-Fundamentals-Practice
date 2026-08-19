#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is: " << id << endl;
        cout << "Price of this item is: " << price << endl;
    }
};

int main()
{
    int size = 2;
    // int *ptr = &size;
    // int *ptr = new int [77];

    /*
    1. General Store
    2. Fruits Shop
    3. Hardware Shop
    */

    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int x;
    float y;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter ID and Price of item " << i + 1 << ": ";
        cin >> x >> y;
        ptr->setData(x, y);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Item Number: " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}