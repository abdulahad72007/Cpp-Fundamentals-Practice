#include <iostream>
#include <cmath>

using namespace std;

class SimpleCalculator {
    int a, b;
    public:
    void getDataSimple(){
        cout<<"Enter the value of a: "<< endl;
        cin >> a;
        cout<<"Enter the value of b: "<< endl;
        cin >> b;
    }
     void performOperationsSimple(){
        cout<<"The vaue of a + b is: "<<a + b<<endl;
        cout<<"The vaue of a - b is: "<<a - b<<endl;
        cout<<"The vaue of a * b is: "<<a * b<<endl;
        cout<<"The vaue of a / b is: "<<a / b<<endl;
     }
};

class ScientificCalculator {
    int a, b;
    public:
    void getDataScientific(){
        cout<<"Enter the value of a: "<< endl;
        cin >> a;
        cout<<"Enter the value of b: "<< endl;
        cin >> b;
    }
     void performOperationsScientific(){
        cout<<"The vaue of cos(a) is: "<< cos(a) <<endl;
        cout<<"The vaue of sin(a) is: "<< sin(a) <<endl;
        cout<<"The vaue of exp(a) is: "<< exp(a) <<endl;
        cout<<"The vaue of tan(a) is: "<< tan(a) <<endl;
     }
};

class HybridCalculator : public SimpleCalculator,  public ScientificCalculator{

};
int main(){
    // SimpleCalculator calc;
    // calc.getData();
    // calc.performOperations();
    // ScientificCalculator cal;
    // cal.getData();
    // cal.performOperations();
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();

    return 0;
}