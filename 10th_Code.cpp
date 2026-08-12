#include <iostream>
using namespace std;

int main(){
/*There are three types of loops in C++
1. For Loop         2. While Loop         3. Do-While Loop

For loop in C++
//int i=1;
cout<<i;
i++;*/

//Syntax for For Loop
// for (initialization; condition; updation)
//{
//cout<<i<<endl; 
//}

/*for (int i=0; i<=20; i++)
{
    cout<<i<<endl;
}*/

//Example of Infinite for loop
/*int i=1;
for (int i=0; 10<20; i++){
cout<<i<<endl;
}*/

//Syntax of While loop in C++
//while(condition)
//{
//C++ Statements;
// updation;
//}

/*int i=1;
while(i<=20){
    cout<<i<<endl;
    i++;
}*/

    //Example of Infinite While Loop
    
    /*int i=1;
    while (true){
    cout<<i<<endl;
    }*/

    //Do-While loop in C++

/*int i=1;
syntax;
do{
c++ Statements;
}while (condition)
*/

int i=1;
do{
    cout<<i<<endl;  // Display current value of i in each iteration
    i++;            // Increment i after each loop
} while (i<=20);    // Condition checked after loop body (guarantees at least one execution)

return 0;
}
