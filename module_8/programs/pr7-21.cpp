#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_DIVS = 3;
    const int NUM_QTRS = 4;
    double sales[NUM_DIVS][NUM_QTRS]; //array with 3 rows, 4 columns, 12 elements
    double total = 0;   
    
    //iterting over div and for each div, inputting each qtr sale
    //1: 1 2 3 4
    //2: 1 2 3 4
    //3: 1 2 3 4

    for (size_t div = 0; div < NUM_DIVS; div++)
    {
        for (size_t qtr = 0; qtr < NUM_QTRS; qtr++)
        {
            cout << "Division " << div + 1 << ", Quarter " << qtr + 1 << ": $";

            cin >> sales[div][qtr];
        }
        cout << endl;
    }

    // adding up each qtr in each div
    for (size_t div = 0; div < NUM_DIVS; div++)
    {
        for (size_t qtr = 0; qtr < NUM_QTRS; qtr++)
        {
            total += sales[div][qtr];
        }
    
    }

    cout << fixed << showpoint << setprecision(1);
    cout << "Total sales: $" << total << endl;
    
    
}