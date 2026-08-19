#include <iostream>
using namespace std;

/*
Case1:
class B: public A{
    Order of execution of constructor -> First A(), then B()
};

Case2:
class A: public B, public C{
Order of execution of Constructor -> First B(), then C() and A()
};

Case 3:
class A: public B, virtual public C{
    order of Execution of constructor -> Frist C(), then B(), and A()
};
*/

class Base1{
 int data1; 
public:
    Base1(int i) {
        data1 = i;
        cout<<"Base1 class Constructor called "<<endl;
    }
    void printDataB1(void){
        cout<<"The value of data 1 is: "<<data1<<endl;
    }
};

class Base2{
    int data2;
public:
    Base2(int i) {
        data2 = i;
        cout<<"Base2 class Constructor called "<<endl;
    }
    void printDataB2(void){
        cout<<"The value of data 2 is: "<<data2<<endl;
    }
};

class Derived : public Base1, public Base2{
    int derived1, derived2;
    public:
    Derived(int a, int b, int c, int d): Base1(a), Base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"Derived class Constuctor called"<<endl;
    }
    void printDataDerived(void){
        cout<<"The value of derived1 is: "<< derived1 <<endl;
        cout<<"The value of derived2 is: "<< derived2 <<endl;
    }
};

int main(){
    Derived Ahad(1, 2, 3, 4);
    Ahad.printDataB1();
    Ahad.printDataB2();
    Ahad.printDataDerived();
    return 0;
}