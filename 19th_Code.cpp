#include <iostream>
using namespace std;

// Function Overloading: same function name, different parameters

int sum(float a, int b){          // Function with 2 arguments: float + int
    cout<<"Using Function with 2 arguments."<<endl;
    return a+b;
}

int sum(int a, int b, int c){     // Function with 3 arguments: all int
    cout<<"Using Function with 3 arguments."<<endl;
    return a+b+c;
}

// Volume calculations using overloading

int volume(double r, int h){      // Volume of cylinder: πr²h
    return(3.14 * r * r * h);
}

int volume(int a){                 // Volume of cube: a³
    return a*a*a;
}

int volume(int l, int b, int h){   // Volume of cuboid: l*b*h
    return (l*b*h);
}

int main(){
    // Calls appropriate sum function depending on arguments
    cout<<"The sum of 3 and 6 is: "<<sum(3,6)<<endl;          // int,int → float,int version called
    cout<<"The sum of 3, 6 and 7 is:"<<sum(3,6,7)<<endl;      // 3 ints → 3-arg sum

    // Calls correct volume function based on parameters
    cout<<"The Volume of cuboid of 3,7 and 6 is "<<volume(3, 7, 6)<<endl;
    cout<<"The Volume of a cylinder of radius 3 and height 6 is "<<volume(3, 6)<<endl;
    cout<<"The Volume of cube of side 3 is "<<volume(3)<<endl;

    return 0;
}
