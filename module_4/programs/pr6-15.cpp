#include <iostream>
using namespace std;

bool is_even(int num)
{ 
    bool status = true;

    (num % 2 == 0) ? status = true : status = false;

    return status;
}

int main() 
{

    int num;
    
    cout << "Enter number: \n";
    cin >> num;

    if (is_even(num))
    {
        cout << num << " is even.\n";
    }

    else
    {
        cout << num << " is not even.\n";

    }
    
    
}