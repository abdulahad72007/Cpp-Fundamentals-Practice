#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with same name as of the class.
    // It is used to initialize the objects of its class.
    //  It is automatically invoked.

    Complex(void); // Constructor declaration
    void printNumber()
    {
        cout << "Your Number is: " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // ------> This is a default Constructor as it takes no parameter
{
    a = 0;
    b = 1;
    cout << "We can also write text in constructor. \n";
}

int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

// Characteristics of Constructor

/*
1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return types.
4. It can have default arguments.
5. We cannot refer to their address.
 */