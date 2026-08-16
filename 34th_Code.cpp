#include <iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a = 0;
        }

        Number(int num){
            a = num;
        }
            // When there is no copy constructor is found, compiler supplies its own copy constructor.
        Number(Number & obj){
            cout<<"Copy Constructor Called!"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The Number for this object is "<< a <<endl;
        }
};

int main(){
    Number x, y, z(68), z2;
    x.display();
    y.display();
    z.display();
    Number z1(x);            // Copy Constructor invoked
    z1.display();

    z2 = z;                  // Copy constructor not called...
    z2.display();

    Number z3 = z;           // Copy Constructor invoked
    z3.display();
                            // z1 should exactly resemble z or x or y.
    return 0;
}