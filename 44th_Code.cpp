#include <iostream>
using namespace std;

int main(){
    /* 1. CONCEPT:
   The Virtual Base Class is used to resolve the "Diamond Problem" in C++. 
   When data from a Grandparent class (A) reaches the Child class (D) 
   via two separate paths (through Parent classes B and C), the Child 
   class (D) gets confused about which copy of the data to use.

2. THE DIAMOND PROBLEM:
          [A]  <-- Grandparent (Contains member 'a')
         /   \
       [B]   [C] <-- Parents (Both inherit 'a' from A)
         \   /
          [D]  <-- Child (Receives two duplicate copies of 'a'! ERROR/AMBIGUITY)

3. THE SOLUTION:
   By using the 'virtual' keyword during inheritance, we instruct the 
   compiler to keep only one instance of the Grandparent class. This 
   ensures that only a single, shared copy of the data is passed down 
   to the Child class.
*/
    return 0;
}