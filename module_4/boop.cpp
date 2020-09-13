#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <iterator>
#include <vector>

using namespace std;

const double PAYRATE = 18.00, TAXRATE = 0.12;

void calculate_pay(string name, double hours)
{
    double gross_pay, tax, net_pay;

    cout << fixed << showpoint << setprecision(2);

    gross_pay = hours * PAYRATE;
    tax = gross_pay * TAXRATE;
    net_pay = gross_pay - tax;

    cout << "Employee: " << name 
        << " Total Hours: " << hours 
        << " Gross Pay: $" << gross_pay 
        << " Tax: $" << tax 
        << " Net Pay: $" << net_pay << endl;
}


int main()
{

    vector<int> hi = {1,2,3,4,5};
    
    for (size_t i = 3; i < hi.size(); i++)
    {
        cout << hi[i] << endl;
    }
    

    
}