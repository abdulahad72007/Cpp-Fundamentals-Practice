#include <iostream>
#include <string>

using namespace std;
/*
        Inheritance
Student --> Mids     [Done]
Student --> Final    [Done]
Mids --> Result      [Done]
Final  --> Result    [Done]
*/

class Student {
    protected:
    string roll_no;
    public:
    void set_number(string a){
        roll_no = a;
    }
    void print_number(void) {
        cout<<"Your Roll Number is: " << roll_no << endl;
    }
};

class Mids : virtual public Student {
    protected:
    float maths, physics;
    public:
    void set_marks(float m1, float m2) {
        maths = m1;
        physics = m2;
    }

    void print_marks(void){
        cout << "Your Mid-Term Result is here: " << endl
            << "Maths: "<<maths << endl
            << "Physics: "<<physics << endl;
    }
};

class Final : public virtual Student {
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }

    void print_score(void){
        cout<<"Your Final Marks are: "<<score<<endl;
    }
};

class Result : public Mids, public Final{
    private:
    float total;
    public:
    void display(void){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();

        cout<< "Your Final Result is: "<<total<<endl;
    }
};

int main(){
    Result Ahad;
   Ahad.set_number("F25-KUM-BSE-1675");
    Ahad.set_marks(97, 99);
    Ahad.set_score(98);
    Ahad.display();
    return 0;
}