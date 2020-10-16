#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {10,20,30,40,50};

    // for i in numbers:
        //print i
    
    // numbers.each{|i| puts i}
    
    for (auto i : numbers)
    {
        cout << i << endl;
    }
    
}