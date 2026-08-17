#include <iostream>
using namespace std;

            // Syntax for inheriring in multiple inheritance
// class DerivedC: visibility-mode base1, visiblility-mode base2
// {
//     Class body of class "DerivedC"
// };

class Base1{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Base3{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

// Can add more and more classes...

class Derived : public Base1, public Base2, public Base3
{
    public: 
        void show (){
            cout <<"The value of Base 1 is: " << base1int << endl;
            cout <<"The value of Base 2  is: " << base2int << endl;
            cout <<"The value of Base 3 is: " << base3int << endl;
            cout <<"The sum of these values is: " << base1int + base2int + base3int << endl;
        }
};

/* The inherited derived class will look something like this:
    Data members:
        base1int --> protected
        base2int --> protected
        base2int --> protected

Member functions:
        set_base1int () --> public
        set_base2int () --> public
        set_base2int () --> public
        set_show () --> public    
*/

int main()
{
    Derived Ahad;
    Ahad.set_base1int(007);
    Ahad.set_base2int(001);
    Ahad.set_base3int(002);
    Ahad.show();
    return 0;
}