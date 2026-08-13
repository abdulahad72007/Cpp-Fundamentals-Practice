#include <iostream>
using namespace std;
// This is come from snippets

int main(){
    for (int i = 0; i < 4; i++)   // Loop runs from 0 to 3
    {
        // if (i==2){
        // break;   // 'break' completely stops the loop and control exits the loop
        // }

        if (i==2){               // Jab i ka value 2 hota hai...
            continue;            // ...continue iss iteration ko skip kar deta hai
        }                        // aur loop aglay number par chale jata hai

        cout<<i<<endl;           // Ye line sirf tab run hoti hai jab continue trigger na ho
    }
    
    return 0;
}
