/*There are Two types of header files.
1. System header files. It comes with the compiler.*/
#include <iostream>           // System header file: comes with compiler
/*2. User defined header files. It defines by the Programmer.*/
#include "My_File"             // User-defined header file: will cause error if not present
using namespace std;

int main (){
    int a = 3, b = 2;         // Declaring and initializing two integer variables

    cout << "\nAbout Header Files" << endl;          // Display text
    cout << "Also about Operators in C++" << endl; // Display text
    cout << endl;

    // Arithmetic operators
    cout << "Following are the types of Arithmetic Operators" << endl;
    cout << "\nThe value of a+b is:" << a+b;  // Addition
    cout << "\nThe value of a-b is:" << a-b;  // Subtraction
    cout << "\nThe value of a*b is:" << a*b;  // Multiplication
    cout << "\nThe value of a%b is:" << a%b;  // Modulus
    cout << "\nThe value of a++ is:" << a++;  // Post-increment
    cout << "\nThe value of a-- is:" << a--;  // Post-decrement
    cout << "\nThe value of ++a is:" << ++a;  // Pre-increment
    cout << "\nThe value of --a is:" << --a;  // Pre-decrement
    cout << endl << endl;

    // Comparison Operators
    cout << "Following are the types of Comparison Operators" << endl;
    cout << "\nThe value of a==b is:" << (a==b) << endl; // Equal to
    cout << "The value of a!=b is:" << (a!=b) << endl;   // Not equal to
    cout << "The value of a>=b is:" << (a>=b) << endl;   // Greater than or equal
    cout << "The value of a<=b is:" << (a<=b) << endl;   // Less than or equal
    cout << "The value of a>b is:" << (a>b) << endl;     // Greater than
    cout << "The value of a<b is:" << (a<b) << endl;     // Less than
    cout << endl;

    // Logical Operators
    cout << "Following are the types of Logical Operators" << endl;
    cout << "\nThe value of Logical AND Operator ((a==b) && (a<b)) is:" << ((a==b) && (a<b)) << endl; // AND
    cout << "The value of Logical OR Operator ((a==b) || (a<b)) is:" << ((a==b) || (a<b)) << endl;    // OR
    cout << "The value of Logical NOT Operator (!(a==b)) is:" << (!(a==b)) << endl;                 // NOT
}
