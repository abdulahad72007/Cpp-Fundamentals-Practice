#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "Your Roll Number is: " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float Maths;
    float Physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is: " << (Maths + Physics) / 2 << "%" << endl;
    }
};
void Exam ::set_marks(float m1, float m2)
{
    Maths = m1;
    Physics = m2;
}

void Exam ::get_marks()
{
    cout << "Marks obtained in Maths are: " << Maths << endl;
    cout << "Marks obtained in Physics are: " << Physics << endl;
}
int main()
{
    /*
        If we are inheriting B from A and C from B: [A ---> B ---> C ]
            1. A is base class for B and B is the base class for C.
            2. A ---> B ---> C is called inheritance path.

    */
    Result Ahad;
    Ahad.set_roll_number(804);
    Ahad.set_marks(99, 97);
    Ahad.display_result();

    return 0;
}