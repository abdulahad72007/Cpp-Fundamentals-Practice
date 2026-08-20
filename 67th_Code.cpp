#include <iostream>
using namespace std;

// float funcAverage(int a, int b){
//     float avg = (a+b)/2;
//     return avg;
// } 

// float funcAverage2(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// } 


template <class T>
void swapp (T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}
template <class T1, class T2> 
    float funcAverage (T1 a, T2 b)
    {
        float avg = (a+b)/ 2.0;
        return avg;
    }

int main(){
    float a;
    a = funcAverage(4.8, 2.4);
    cout<<"The average of these numbers is %.3f\n: "<< a << endl;

    int x = 5, y = 7;
    swapp(x, y);
    cout<<x<<endl<<y;
    return 0;
}