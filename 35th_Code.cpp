#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any vlaue.
int mycount=0;
class num{
    public:
    num(){
        mycount++;
        cout<<"This is the time when constructor is called. "<< mycount<<endl;
    }

    ~num(){
        cout<<"This is the tiime when my destructor is called for object number. "<< mycount <<endl;
        mycount--;
    }
};

int main(){
    cout<<"We are inside our main function."<<endl;
    cout<<"Creating 1st object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}