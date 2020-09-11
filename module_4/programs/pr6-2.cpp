#include <iostream>
using namespace std;

void display_message()
{
    cout << "Hello from display_message\n ";
}

int main()
{
    cout << "Hello from main \n";

    for (size_t i = 0; i < 5; i++)
    {
        display_message();
    }
    
}