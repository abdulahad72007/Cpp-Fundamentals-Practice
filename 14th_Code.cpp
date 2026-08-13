#include <iostream>
using namespace std;

typedef struct employee
{
    int eID;            // Structure stores multiple different data types separately
    char favChar;       // Every variable inside struct gets its own memory
    float salary;
}ep;                    // 'ep' is now an alias of struct employee (typedef shortcut)

union money
{
int food;              // In union, ALL members share the SAME memory location
char car;              // Only the last written value remains valid
float dollars;         // This saves memory but overwrites previous values
};

int main(){

    // About Enums in C++
    enum Meal {breakfast, lunch, dinner}; 
    // Enum assigns index numbers automatically → breakfast=0, lunch=1, dinner=2
cout<<breakfast<<endl;  // Prints 0
cout<<lunch<<endl;       // Prints 1
cout<<dinner<<endl;      // Prints 2

    // About Unions in C++
    // union money m1;
    // m1.food=50;      // Only last assigned value is stored (shared memory)
    // m1.car='F';      // This overwrites 'food' because union shares memory
    // cout<<m1.car<<endl;

    // About Structure in C++
    // ep harry;        // Using typedef alias 'ep'
    // struct employee robert;
    // struct employee tom;
    // struct employee john;

    // john.eID=001;    // Leading 0 means octal (base 8), not decimal (interview trick!)
    // john.favChar='J';
    // john.salary=2000000;

    // cout<<"The value is "<<john.eID<<endl;
    // cout<<"The value is "<<john.favChar<<endl;
    // cout<<"The value is "<<john.salary<<endl;

    return 0;
}
