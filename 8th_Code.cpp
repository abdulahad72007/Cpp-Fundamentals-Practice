#include <iostream>
#include <iomanip>     // For manipulators like setw
using namespace std;

int main (){

    // Example of constant variables
    /*const int a = 3;                // 'const' makes variable value unchangeable
    cout << "Constant values can never be changed." << endl;
    cout << "The value of a is : " << a << endl;*/

    // Example of manipulators
    /*cout << "Manipulators in C++" << endl;
    int a = 1, b = 22, c = 333;
    cout << "The value of a is: " << setw(3) << a << endl;  // setw sets width for output
    cout << "The value of b is: " << setw(3) << b << endl;
    cout << "The value of c is: " << setw(3) << c << endl;

    // Now without setw
    cout << "\nThe value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The value of c is: " << c << endl;*/

    // Operator Precedence Example
    int a = 5, b = 7;
    int c = ((((a / 5) * b) + 8) - 3);   // Operators evaluated based on precedence and parentheses
    cout << "Result of expression: " << c << endl;

    return 0;
}
