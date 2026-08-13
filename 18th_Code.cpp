#include <iostream>
using namespace std;

// Fibonacci Series: each term = sum of previous two terms.
// First two terms are fixed: 0 and 1
int fib(int n){
    if (n<=2){  // Base case: first two terms
        return 1; // Returns 1 for n=0 and n=1
    }
    return fib(n-1) + fib(n-2); // Recursive call: calculates nth term
}

// Factorial of a number using recursion
int factorial (int n){
    if(n<=1){   // Base case: 0! = 1! = 1
        return 1;
    }
    return n * factorial(n-1); // Recursive call: n! = n * (n-1)!
}

int main(){
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;

    // Uncomment below line to calculate factorial
    // cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;

    // Fibonacci term at position 'a'
    cout<<"The term in Fibonacci sequence at position "<<a<<" is: "<<fib(a)<<endl;

    return 0;
}
