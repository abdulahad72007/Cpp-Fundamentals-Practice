#include<iostream>
using namespace std;

int main (){
//What is Pointer?--> It is a variable that stores the *address* of another variable.

int a = 3;
int* b = &a;   // 'b' is a pointer that stores the address of variable 'a'

cout<<"The adress of a is: "<<&a<<endl;  
cout<<"The adress of a is: "<<b<<endl;   // Pointer always prints stored address

cout<<"The value at adress b is: "<<*b<<endl;
// & --> Address-of Operator (gives memory location)
// * --> Dereference Operator (gives value stored at that memory)

//Pointer to pointer
int** c = &b;  // 'c' stores the address of pointer 'b' (Double Pointer)

cout<<"The address of b is: "<<&b<<endl;
cout<<"The address of b is: "<<c<<endl;     // c holds address of b

cout<<"The value at address c is: "<<*c<<endl;  
// *c gives the value stored in pointer b (which is address of a)

cout<<"The value at address value_at(value_at(c)) is: "<<**c<<endl;  
// **c means: go to c → go to b → reach a → print value of a

return 0;
}
