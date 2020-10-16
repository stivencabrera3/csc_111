#include <iostream>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];

    //Get the hours worked by each employee
    cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees: ";

    for (size_t i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << "Enter the hours worked by employee " << i + 1 << ": ";
        cin >> hours[i];
    }


    cout << "Hours entered: ";
    for (size_t i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << " " << hours[i];
    }
    cout << endl;
    
    
}