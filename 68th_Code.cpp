#include <iostream>
using namespace std;

template <class A>
class Ahad{
    public:
    A data;
    Ahad ( A a){
        data = a;        
    }
    void display();
};

template <class A>
void Ahad<A> :: display(){
    cout<<data;
}

void func(int a){
    cout<<"I am first Function (): " <<a<<endl;
}

template <class A>
void func(A a){
    cout << "I am templatised Function (): "<<a<<endl;
}

template <class A>
void func1(A a){
    cout << "I am templatised Function (): "<<a<<endl;
}


int main(){
    // Ahad<int> d(7);
    // cout<<d.data<<endl;
    // d.display();  
    
    func(6); // Exact match takes the higher priority.
    func1(9);
    return 0;
}