#include <iostream>
using namespace std;

/*
    CLASS TEMPLATE WITH MULTIPLE PARAMETERS (ONE, TWO OR MORE THAN TWO)
template<class T1, class T2,... (COMMA SEPRATED)>
class nameOfClass{
//code
};
*/
template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl
             << this->data2;
    }
};

int main()
{
    myClass<int, char> obj(1, 'c'); // Can write anything in < this > char, float, int, double, string...
    obj.display();
    return 0;
}