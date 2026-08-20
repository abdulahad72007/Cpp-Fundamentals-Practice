#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;

    vector(T m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    // vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 4;

    // vector v2(3);
    // v2.arr[0] = 3;
    // v2.arr[1] = 9;
    // v2.arr[2] = 4;

    // int a = v1.dotProduct(v2);
    // cout<<a<<endl;

    vector<float> v1(3);
    v1.arr[0] = 4.544;
    v1.arr[1] = 3;
    v1.arr[2] = 4.5;

    vector<float> v2(3);
    v2.arr[0] = 3.78;
    v2.arr[1] = 9.55;
    v2.arr[2] = 4;

    float a = v1.dotProduct(v2);
    cout << a << endl;

    return 0;
}