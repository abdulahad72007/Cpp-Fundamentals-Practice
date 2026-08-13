#include <iostream>
using namespace std;

// Function Prototype
// Syntax: type function_name (parameter types);
// int sum(int a, int b); --> Acceptable
// int sum(int a, b); --> Not Acceptable (must declare type of each parameter)
int sum(int, int);  // Only types, parameter names optional in prototype
void g();           // Function returning void

int main(){
    int num1, num2;
    cout<<"Enter First Number: "<<endl;
    cin>>num1;
    cout<<"Enter Second Number: "<<endl;
    cin>>num2;
    // num1 & num2 are actual parameters (values given to function)
    
    cout<<"The Sum is: "<<sum(num1, num2); // sum() returns int, printed here
    g(); // void function called
    return 0;
}

// Function Definition
int sum(int a , int b){
    // a & b are formal parameters (receive values from actual parameters)
    int c = a+b; // local variable c
    return c;    // return result to caller
}

// Function returning void
void g(){
    cout<<"\nThis is void g."<<endl; 
    // Void functions do not return anything, just perform tasks
}
