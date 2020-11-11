#include <iostream>
#include <string>
using namespace std;

struct PayInfo
{
    int hours;
    double pay_rate;
};

int main()
{
    PayInfo workers[3]; // defining an array of three instances of the PayInfo struct

    for (size_t i = 0; i < 3; i++)
    {
        cout << "Enter hours worked by employee " << i + 1 << ": ";
        cin >> workers[i].hours;

        cout << "Enter payrate for employee " << i + 1 << ": ";
        cin >> workers[i].pay_rate;

        cout << "Employee " << i + 1 << " grosspay: " << workers[i].pay_rate * workers[i].hours << endl;
    }
    

}