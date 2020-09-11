#include <iostream>
#include <iomanip>
using namespace std;


void show_intro() 
{
    cout << "This program converts cups into fluid ounces. ";
}

double get_cups() 
{
    double cups;

    cout << "Enter the number of cups: ";
    cin >> cups;
    return cups;
}

double cups_to_oz(double cups) 
{
    return cups*8;
}

int main() 
{
    
    show_intro();

    double cups, ounces;

    cups  =  get_cups();
    ounces = cups_to_oz(cups);


    cout << cups << " cups is " << ounces << " ounces." << endl;


return 0;


}