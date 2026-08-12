#include <iostream> 
using namespace std;

int main (){
    int num1, num2;                     // Declaring two integer variables
    cout << "Enter the value of Num 1:";   // Display prompt for first number
    //  '<<' this is called the Insertion Operator, used to send data to output

    cin >> num1;                            // Take input from user and store in num1
    // '>>' this is called the Extraction Operator, used to get data from input

    cout << "Enter the value of Num 2:";   // Display prompt for second number
    cin >> num2;                            // Take input from user and store in num2

    cout << "The Sum is:" << num1 + num2;  // Calculate sum and display result

    return 0;
}
