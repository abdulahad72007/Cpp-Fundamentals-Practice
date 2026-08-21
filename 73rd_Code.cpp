#include <iostream>
#include <map>
#include <string>
using namespace std;

// Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["Ahad"] = 98;
    marksMap["Ahmar"] = 97;
    marksMap["Hashim"] = 99;
    // marksMap["Abdullah"] = 98;

    marksMap.insert({"Abdullah", 98});

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }

    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty return value is: "<<marksMap.empty()<<endl;
    
    return 0;
}