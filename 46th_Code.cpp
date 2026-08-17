#include <iostream>
using namespace std;

int main(){
    /* 1. BASIC CONCEPT:
   - When we use Inheritance, the Base class constructor is executed 
     before the Derived class constructor.
   - The Parent (Base) is created first, then the Child (Derived) is created.

2. EXECUTION ORDER RULES:
   A. Simple Inheritance:
      - Base Class Constructor -> Derived Class Constructor.

   B. Multiple Inheritance:
      - Constructors are executed in the same order in which the classes 
        are inherited.
      - Example: class C : public A, public B {} 
        (First A will run, then B, and finally C).

   C. Virtual Base Class:
      - The Virtual Base Class is given the highest "Priority."
      - Its constructor runs first of all, regardless of its position 
        in the inheritance order.

3. DESTRUCTOR ORDER:
   - This is always in the reverse order.
   - The Derived class destructor runs first, followed by the Base class destructor.
*/
    return 0;
}