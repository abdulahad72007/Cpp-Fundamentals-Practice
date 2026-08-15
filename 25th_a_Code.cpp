#include <iostream>
using namespace std;

class Employee{
    int id;     // Private member: stores employee ID
    int salary; // Private member: stores salary for the object

public:
    void setId(void){
        salary = 100;  // Setting default salary for each employee
        cout<<"Enter the id of employee: "<<endl;
        cin>>id;       // Input ID for this specific employee object
    }

    void getId(void){
        cout<<"The ID of this employee is: "<< id <<endl;
        // Display the ID of this employee object
    }
};

int main(){
    // Array of 4 Employee objects
    Employee fb[4]; 
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId(); // Call setId() for ith Employee in array
        fb[i].getId(); // Display ith Employee's ID
    }
    
    return 0;
}
