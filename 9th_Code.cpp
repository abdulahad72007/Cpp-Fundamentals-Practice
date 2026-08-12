#include <iostream>
using namespace std;

// Control structures in C++

int main(){
    int age;
    cout << "Tell me your age: " << age << endl; // Display prompt (age is uninitialized here, will input next)
    cin >> age;                                  // Take input from user

    // Selection Control Structure: if-else-if-else ladder
    if(age < 18){
        cout << "You are Underage." << endl;
    } else if(age == 18){
        cout << "Need to confirm your age from ID" << endl;
    } else {
        cout << "Welcome" << endl;
    }

    // Selection Control Structure: Switch Case Statements
    /*switch(age) {
        case 17:
            cout << "You are not Eligible!" << endl; // Executes if age == 17
            break;                                  // Break ends this case
        case 18:
            cout << "You are 18! Welcome." << endl; // Executes if age == 18
            break;
        case 19:
            cout << "You are Eligible" << endl;    // Executes if age == 19
            break;
        default:
            cout << "Sorry! No Special Characters." << endl; // Executes if none of the above match
            break;
    }*/
return 0;
}
