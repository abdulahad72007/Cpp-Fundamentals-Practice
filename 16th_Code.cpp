#include <iostream>
using namespace std;

// Simple function returning sum of two numbers
int sum(int a, int b){
    int c = a+b;       // local variable c stores sum
    return c;          // returns c to caller
}

// Call by reference using pointers
void swapPointer(int *a, int *b){ 
    // a & b store addresses of actual variables
    int temp = *a;     // temp stores value pointed by a
    *a = *b;           // value at address a is replaced by value at address b
    *b = temp;         // value at address b is replaced by temp
}

// Call by reference using reference variables
void swapReferenceVar(int &a, int &b){ 
    // a & b are aliases to original variables (no need for pointers)
    int temp = a;      // temp stores current value of a
    a = b;             // a gets value of b
    b = temp;          // b gets original value of a
}

int main(){
    int a = 4, b = 5;
    cout<<"The value of a is: "<<a<<"       The value of b is: "<<b<<endl;
    // Before swapping: a=4, b=5
    
    //swapPointer(&a, &b);       // Swap using pointers (commented)
    swapReferenceVar(a, b);      // Swap using references
    
    cout<<"The value of a is: "<<a<<"       The value of b is: "<<b<<endl;
    // After swapping: a=5, b=4
    return 0;
}
