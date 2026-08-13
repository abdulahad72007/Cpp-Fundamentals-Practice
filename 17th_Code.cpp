#include <iostream>
using namespace std;

// Inline function: suggests compiler to replace function call with function code (reduces function call overhead)
inline int product(int a, int b){
    // static variables are not recommended inside inline functions
    // static int c=0;  // executes only once and retains value
    // c = c + 1;
    return a*b;         // returns product of a and b
}

// Function with default argument
float moneyReceived(int currentMoney, float factor=1.05){
     return currentMoney * factor; // If factor not passed, uses 1.05
}

int main(){
    int money=100000;

    // Using default argument
    cout<<"If you have "<<money<<" RS in your account, you will receive "<<moneyReceived(money)<<" after 1 month"<<endl;
    // Passing custom factor
    cout<<"For VIP: If you have "<<money<<" RS in your account, you will receive "<<moneyReceived(money, 1.1)<<" after 1 month"<<endl;

    return 0;
}
