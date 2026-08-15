#include <iostream>
using namespace std;

class complex{
    int a; // Real part of complex number (private)
    int b; // Imaginary part of complex number (private)
    
public:
    void setData(int v1, int v2){
        a = v1; // Set real part
        b = v2; // Set imaginary part
    }

    void setDataBySum(complex o1, complex o2){
        a = o1.a + o2.a; // Sum real parts of two complex numbers
        b = o1.b + o2.b; // Sum imaginary parts of two complex numbers
    }

    void printNumber(){
        cout << "Your complex number is: " << a << "+" << b << "i" << endl;
        // Display the complex number in a+bi format
    }
};

int main(){
    complex c1, c2, c3;   // Create 3 objects of complex class

    c1.setData(1, 2);     // Set c1 = 1 + 2i
    c1.printNumber();      // Display c1

    c2.setData(3, 4);     // Set c2 = 3 + 4i
    c2.printNumber();      // Display c2

    c3.setDataBySum(c1, c2); // c3 = c1 + c2 = (1+3) + (2+4)i
    c3.printNumber();        // Display c3

    return 0;
}
