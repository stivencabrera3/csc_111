#include <iostream>
#include <iomanip>
using namespace std;


void show_dollars(double wage) 
{
    cout << fixed << setprecision(2) << showpoint;
    cout << "Your wages are: $" << wage << endl;
}


int main() 
{
    double pay_rate, hours_worked, wages;

    cout << "Enter hours worked: ";
    cin >> hours_worked;

    cout << "Enter pay rate: ";
    cin >> pay_rate;

    wages = pay_rate * hours_worked;

    show_dollars(wages);

    return 0;
}