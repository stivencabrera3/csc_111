#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

const double PAYRATE = 18.00, TAXRATE = 0.12;

int main()
{

    ifstream in_file;
    in_file.open("employeehours.txt");

    string name, prev_name;
    string hours;

    
    while (getline(in_file, name))
    {
        name = name.substr(0,30);
        cout << name << endl; 


    }

    return 0;
}
