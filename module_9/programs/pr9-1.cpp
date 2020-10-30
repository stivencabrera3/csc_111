#include <iostream>

using namespace std;

int main()
{
    int x = 25;

    cout << "Address: " << &x << endl;      // address of variable in memory &variable
    cout << "Size: " << sizeof(x) << endl; // size of variable in memory (bytes)
    cout << "Value: " << x << endl;


}
