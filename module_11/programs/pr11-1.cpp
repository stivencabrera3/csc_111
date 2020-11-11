#include <iostream>
#include <string>
using namespace std;

struct PayRoll
    {
        int emp_number;
        string name;
        double hours;

    };

    int main()
    {
        PayRoll employee;
        
        cout << "Enter employee's name: ";
        getline(cin, employee.name);

        cout << "Enter employee's ID number: ";
        cin >> employee.emp_number;

    

        cout << "Enter hours worked: ";
        cin >> employee.hours;

        cout << "Name: " << employee.name << endl
            << "Number: " << employee.emp_number << endl
            << "Hours: " << employee.hours << endl;
    }
