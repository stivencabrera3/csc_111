#include <iostream>
using namespace std;

int main()
{
    int x = 25;         // integer variable
    int* ptr = nullptr; // pointer variable - asterisk means pointer.

    ptr = &x;          // stores the address of x in ptr

    cout << ptr << endl; // prints address of x

    cout << *ptr << endl; // prints the actual value of x

    *ptr = 30;           // changes actual value of x

    cout << x << endl; 
}
