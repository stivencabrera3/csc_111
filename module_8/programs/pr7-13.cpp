#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5;
    int hours[NUM_EMPLOYEES];
    double payrate = 16.50;
    double gross_pay ;

    for (size_t i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << "Enter hours worked by employee " << i + 1 << ": ";
        cin >> hours[i];
    }
    
    cout << fixed << showpoint << setprecision(2);

    for (size_t i = 0; i < NUM_EMPLOYEES; i++)
    {
        gross_pay = hours[i] * payrate;

        cout << "Employee " << i+1 << ": $" << gross_pay << endl;
    }
    
    
    
}