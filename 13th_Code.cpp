#include <iostream>
using namespace std;

int main(){
    int marks[4]= {98, 62, 77, 92};   // Fixed-size static array (values stored in continuous memory)
    int mathmarks[2];
    
    mathmarks [0] = 87;
    mathmarks [1] = 93;
    cout<<"These are Math Marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;

    cout<<"These are Marks"<<endl;
    // cout<<marks[0]<<endl;
    // //We can change the value of an array 
    // marks[1]=73;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    //Array using for loop
// for (int i = 0; i < 4; i++)
// {
//     cout<<"The value of marks "<<i<<" is: "<<marks[i]<<endl;
// }

    //Array using while loop
// int i=0;
// while (i < 4)
// {
//   cout<<i++<<endl;
//   i++;  
// }

    //Array using do while loop
// int i=0;
// do
// {
//     cout<<i<<endl;
//     i++;
// } while(i<4);

    //Pointers and arrays
    int *p = marks;   // Array name itself gives the base address → 'p' now points to marks[0]

cout<<*(p++)<<endl;   // Print p’s current value (marks[0]) THEN move pointer to next element
cout<<*(++p)<<endl;   // First move pointer to next element THEN print its value

    // cout<<"The value of marks [0] is:"<<*p<<endl;
    // cout<<"The value of marks [1] is:"<<*(p+1)<<endl;
    // cout<<"The value of marks [2] is:"<<*(p+2)<<endl;
    // cout<<"The value of marks [3] is:"<<*(p+3)<<endl;

    return 0;
}
