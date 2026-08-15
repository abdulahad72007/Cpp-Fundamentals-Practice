#include <iostream>
using namespace std;

class Employee
{
    private:
    int a,b,c; 
    // 'private' members can only be accessed inside the class
    // They provide encapsulation: hide internal data from outside access

    public:
    int d, e; 
    // 'public' members can be accessed from anywhere, including main()
    // Public interface allows controlled access to private data via methods

    void setData(int a, int b, int c); 
    // Public method to set values of private members
    // Demonstrates encapsulation and data hiding

    void getData()
    {
        // Public method to display values of both private and public members
        // Shows the concept of abstraction: user doesn't need to know storage, just how to access
        cout<<"The Value of a is: "<<a<<endl;
        cout<<"The Value of b is: "<<b<<endl;
        cout<<"The Value of c is: "<<c<<endl;
        cout<<"The Value of d is: "<<d<<endl;
        cout<<"The Value of e is: "<<e<<endl;
    }
};

// Defining member function outside the class using scope resolution operator
void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
    // Private members are assigned using a public member function
    // This is safe and maintains encapsulation
}

int main(){
    Employee Ahad;
    // Ahad.a = 123; --> Error: private member cannot be accessed directly
    Ahad.d = 456; // OK: 'd' is public
    Ahad.e = 789; // OK: 'e' is public
    Ahad.setData(1,2,3); // Setting private members via public function
    Ahad.getData();      // Display all values
    // Demonstrates object-oriented programming concepts: encapsulation, abstraction
    
    return 0;
}
