#include <iostream>
using namespace std;

int c = 10;                         // Global variable 'c', accessible anywhere using ::c

int main (){
    float a, b, c;                  // Local float variables (local 'c' shadows global 'c')
    cout << "\n\n Built in Data Types" << endl << endl;
    cout << "Enter the Value of A:" << endl;
    cin >> a;                        // Input float value
    cout << "Enter the Value of B:" << endl;
    cin >> b;                        // Input float value
    c = a + b;                       // Local 'c' used here
    cout << "\nThe value of C is:" << c;
    cout << "\nThe Global C is:" << ::c << endl;  // Access global 'c' using scope resolution operator
    cout << endl;

    cout << "Float, Double & Long Double Literals" << endl;

    float d = 3.14F;                 // Float literal with suffix F
    long double e = 6.67430L;        // Long double literal with suffix L
    cout << "\nThe size of 3.14 is " << sizeof(3.14) << endl;      // Default double literal
    cout << "The size of 3.14F is " << sizeof(3.14F) << endl;      // Float literal
    cout << "The size of 3.14l is " << sizeof(3.14l) << endl;      // Long double literal (small l)
    cout << "The size of 3.14L is " << sizeof(3.14L) << endl;      // Long double literal (capital L)
    cout << "The size of 3.14f is " << sizeof(3.14f) << endl;      // Float literal (small f)

    cout << "\nThe Value of D is:" << d << endl;
    cout << "The Value of E is:" << e << endl; 
    cout << endl;

    cout << "Reference Variables" << endl;
    float x = 100;
    float &y = x;                     // Reference variable 'y' refers to 'x'
    cout << x << endl;                // Displays value of x
    cout << y << endl;                // Displays value of y (same as x)

    cout << "\nTypecasting" << endl;
    cout << "\nThe value of A is:" << (float)a << endl;  // Explicit typecasting to float
    cout << "The value of B is:" << int(b) << endl;      // Explicit typecasting to int

    cout << "The expression is " << a + b << endl;       // Normal addition (float + float)
    cout << "The expression is " << a + int(b) << endl;  // Float + int (b casted to int)
    cout << "The expression is " << a + (int)b << endl;  // Same as above with parentheses

    return 0;
}
