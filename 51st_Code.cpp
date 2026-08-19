#include <iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
    void getData(){
        cout<<"The Real Part is: "<< real <<endl;
        cout<<"The Imaginary Part is: "<< imaginary << endl;
    }

    void setData(int a, int b){
        real = a;
        imaginary = b;
    }
};
int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    // c1.setData(54, 78);

    // (*ptr).setData(54, 78); --> is exactly same as
    ptr->setData(54, 78);
    // (*ptr).getData(); is as same as 
    ptr->getData();

    // Array of Objects
    Complex *ptr2 = new Complex[4];
    ptr2->setData(5, 8);
    ptr2->getData();
    return 0;
}