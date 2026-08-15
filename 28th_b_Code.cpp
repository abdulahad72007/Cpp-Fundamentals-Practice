#include <iostream>
using namespace std;

class c2; // Forward declaration of class c2
class c1{
    int val1;
    friend void exchange (c1 &, c2 &);
    public:
    void indata (int a){
        val1 = a;
    }

    void display (){
        cout<< val1 << endl;
    }
};

class c2{
    int val2;
    friend void exchange (c1 &, c2 &);
    public:
    void indata (int a){
        val2 = a;
    }

    void display (){
        cout << val2 << endl;
    }
};
/*
Trick to swap 2 numbers:
temp = a;
a = b;
b = temp; 
*/

void exchange (c1 & x, c2 & y){
    int tmp = x.val1;
    x.val1 =  y.val2;
    y.val2 = tmp;
}

int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(77);
    oc2.indata(22);
    exchange (oc1, oc2);

    cout << "After exchanging the value of C1 is: " << endl;
    oc1.display();
    cout << "After exchanging the value of C2 is: " << endl;
    oc2.display();

    return 0;
} 