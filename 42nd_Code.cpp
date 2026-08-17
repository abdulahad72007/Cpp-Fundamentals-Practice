#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

/*
Task from Sir Harry:-

Create 2 classes:
    1. Simple Calculator - Take input of 2 numbers using a utility function and performs +, -, *, /, and displays the result using another function.
    
    2. Scientific Calculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your choice and displays the results using another function.

    Create another class Hybrid Calculator and inherit it using these 2 classes:
    Q1. What type of inheritance are you using?
    Q2. Which mode of inheritance are you using?
    Q3. Create an object of Hybrid Calculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented?
    */

class simpleCalculator {
protected:   
    double a, b;
public:
    void set_simple_values(double x, double y){
        a = x; 
        b = y;
    }
    void perform_simple_operations() {
        cout << "Simple: " << a << " + " << b << " = " << a+b << endl;
        cout << "Simple: " << a << " - " << b << " = " << a-b << endl;
        cout << "Simple: " << a << " * " << b << " = " << a*b << endl;
        cout << "Simple: " << a << " / " << b << " = " << a/b << endl;
    }
};

class scientificCalculator {
    protected:
    double sci;
    public:
   void set_sci_value(double v) {
        sci = v;
    }
    void perform_sci_operations() {
        cout << "Sin(" << sci << ") = "<< std::sin(sci) << endl;
        cout << "Cos(" << sci << ") = " << std::cos(sci) << endl;
        cout << "Square Root: " << std::sqrt(sci) << endl;
    }
};

class HybridCalculator : public simpleCalculator, public scientificCalculator{};

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");
    HybridCalculator calc;
    cout<<"Simple Calculator✅"<<endl<<endl;
    calc.set_simple_values(16, 2);
    calc.perform_simple_operations();

    cout<<"\n\nScientific Calculator🚀"<<endl<<endl;

    calc.set_sci_value(90);
    calc.perform_sci_operations();


    return 0;
}