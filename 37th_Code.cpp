#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 6000;
    }
    Employee() {}
};

/* Derived class syntax

class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methode/etc...
}
                NOTE
1. Default visibilty mode is private.
2. Public Visibility Mode: Public members of the base class become Public members of the derived class.
3. Private Visibility Mode: Public members of the base class become Private members of the derived class.
4. Private members are never inherited.
*/

// Creating a Programmer class derived from Employee Class
class Programmer : Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
    languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee Hashim(1), Ahmar(2);
    cout << Hashim.salary << endl;
    cout << Ahmar.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    skillF.getData();
    return 0;
}