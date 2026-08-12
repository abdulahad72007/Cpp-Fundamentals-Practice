#include <iostream>
using namespace std;

int main(){
    /* int a=1;
       int b=2; */                  // Old way: separate declaration of variables
    int a = 1, b = 2;               // Multiple variable declaration + initialization in one line
    float pi = 3.14;                 // Float: decimal number with less precision
    double G = 6.67430e-11;          // Double: high precision decimal, scientific notation
    char A = 'B';                     // Character variable: single character
    bool B = true;                    // Boolean variable: true or false

    cout << "The value of a is:" << a << "\n The value of b is:" << b << endl;  
    // \n adds a new line, endl also adds a new line and flushes output buffer
    cout << "The value of pi is:" << pi;  
    cout << "\n The value of Gravitational constant is: " << G << endl;  
    cout << "The value of A is:" << A;  
    cout << "\n The Boolean value is: " << B;  

    return 0;                      
}