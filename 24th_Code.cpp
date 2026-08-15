#include <iostream>
using namespace std;

class Employee{
    int id;            // Private member: stores individual Employee ID
    static int count;  // Static member: shared among all objects of class

    public:
    void setData(void){
        cout << "Enter the ID "<<endl;
        cin >> id;     // Set the ID for this object
        count++;       // Increment shared count for every new Employee
    }
    void getData(void){
        cout<<"The ID of this Employee is "<< id<< " and  this employee number is: "<<count<<endl;
        // Displays object's own ID and total number of employees so far
    }

    static void getCount(void){
        // Cannot access non-static member like id here
        cout<<"The value of count is "<<count<<endl;
        // Displays total number of Employee objects created
    }
};

// Static data members need to be defined outside class
int Employee::count = 0; // Default value for static member count

int main()
{
    Employee Ahad, Ahsan, Ahmar; // Create three Employee objects
    // Ahad.id = 1; --> Not allowed: id is private
    // Ahad.count = 1; --> Not allowed: count is private

    Ahad.setData();          // Input ID for Ahad
    Ahad.getData();          // Display Ahad's ID and total count
    Employee::getCount();    // Display static count via class

    Ahsan.setData();         // Input ID for Ahsan
    Ahsan.getData();         // Display Ahsan's ID and total count
    Employee::getCount();    // Display static count via class

    Ahmar.setData();         // Input ID for Ahmar
    Ahmar.getData();         // Display Ahmar's ID and total count
    Employee::getCount();    // Display static count via class

    return 0;
}
