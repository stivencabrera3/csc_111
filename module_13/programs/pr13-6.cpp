#include <iostream>
using namespace std;

class Demo
{
    public:
        //automatically runs when object is created, just like def init in python
        Demo()
        {
            cout << "CONSTRUCTOR\n";
        };
};

int main()
{
    Demo demo_object;
}