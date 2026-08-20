#include <iostream>
using namespace std;

template <class A1=int, class A2=float, class A3 = char>
class Ahad{
    public:
        A1 a;
        A2 b;
        A3 c;
        Ahad(A1 x, A2 y, A3 z){
            a = x;
            b = y;
            c = z;
        }

        void display(){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
        }
};

int main(){
    Ahad<> a(2, 3.4, 'A');
    a.display();
    cout<<endl;
    Ahad<float, char, char> b(1.4, 'h', 'd');
    b.display();
    return 0;
}