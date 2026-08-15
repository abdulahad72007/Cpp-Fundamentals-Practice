#include <iostream>
#include <string>
using namespace std;

// OOPs Concepts: Classes and objects
// Class: user-defined data type containing properties (variables) and methods (functions)

class binary
{
   // private:
   string s; // Stores binary number; private by default, ensures data encapsulation

   public:
   void read(void);          // Method to input binary string
   void ones_compliment(void);// Method to flip 0s to 1s and 1s to 0s
   void chk_bin(void);       // Method to check whether input is valid binary
   void display(void);       // Method to display binary string
};

// Define member function outside class using scope resolution operator (::)
void binary::read(void)
{
    cout << "Enter a binary number: " << endl;
    cin >> s; // Taking input string
}

void binary::chk_bin(void)
{
    // Validates binary string: only 0s and 1s allowed
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1') // .at() gives character at position i
        {
            cout << "Incorrect binary format" << endl;
            exit (0); // Stops program if invalid input
        }
    }
}

void binary::ones_compliment(void)
{
    chk_bin(); // Validate first (demonstrates function nesting)
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0') s.at(i) = '1'; // Flip 0->1
        else s.at(i) = '0';                // Flip 1->0
    }
}

void binary::display(void)
{
    cout << "\nDisplaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i); // Display each character in string
    }
}

int main()
{
    binary b;       // Object 'b' of class binary
    b.read();       // Input binary number
    // b.chk_bin(); // Optional, called inside ones_compliment already
    b.display();    // Display original binary
    b.ones_compliment(); // Change to 1’s complement
    b.display();    // Display complemented binary

    return 0;
}
