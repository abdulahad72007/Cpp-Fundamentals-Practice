#include <iostream>
#include <cstring>
using namespace std;

class Ahad
{
protected:
    string title;
    float rating;

public:
    Ahad(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {} // virtual void display() = 0; Do-nothing function, Pure Virtual Function.
};

class Ahad1 : public Ahad
{
    int netWorth;

public:
    Ahad1(string s, float r, float n) : Ahad(s, r)
    {
        netWorth = n;
    }
    void display()
    {
        cout << "This is Ahad class 1." << endl;
        cout << "Ratings: " << rating << " out of 5 stars." << endl;
        cout << "NetWorth of this class is " << netWorth << "$ dollars." << endl;
    }
};

class Ahad2 : public Ahad
{
    int netWorth;

public:
    Ahad2(string s, float r, float n) : Ahad(s, r)
    {
        netWorth = n;
    }
    void display()
    {
        cout << "This is Ahad class 2." << endl;
        cout << "Ratings of this Class 2: " << rating << " out of 5 stars." << endl;
        cout << "NetWorth of this class 2 is " << netWorth << "$ dollars." << endl;
    }
};

int main()
{
    string title = new char[10];
    float rating, n;
    int words;

    // For this class 1
    title = "Fortune Industries";
    n = 7200000;
    rating = 4.9;
    Ahad1 Ahad3(title, rating, n);
    Ahad3.display();

    // For this class
    title = "Fortune Industries 2";
    double n2 = 2450000;
    rating = 4.9;
    Ahad1 Ahad4(title, rating, n2);
    Ahad4.display();

    Ahad *tuts[2];
    tuts[0] = &Ahad3;
    tuts[1] = &Ahad4;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
// Rules of Virtual functions:-
/*
1. They cannot be static.
2. they are accessed by object pointers;
3. Virtual functions can be a friend of another class.
4. A virtual function in base class might not be used.
5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class.
*/