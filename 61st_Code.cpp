#include <iostream>
#include <fstream>

using namespace std;

/*
 ---------- C++: File I/O [Reading & Writing to a File] ----------
  There are 3 useful classes
  1. fstreambas
  2. ifstream -> Derived from 1
  3. ofstream -> Derived from 1

  *Read operation
      ifstream in ("this.txt");
      string st;
      in>>st; // just like cin
  *Write operation
      ofstream out("this.txt");
      string st = "Harry";
      out<<st; // Writes to a file this.txt!
  */
int main()
{
    // connecting our file with hourt stream
    ofstream hout("sample60.txt");

    // Creating a name string and filling it with the string entered by the user
    string name;
    cout << "Enter your name: ";
    cin >> name;

    // Writing a string to the file
    hout << name + " is my name.";
    hout.close();

    ifstream hin("sample60.txt");
    string content;
    hin >> content;
    cout << "The content of this file is : " << content << endl;
    hin.close();

    return 0;
}