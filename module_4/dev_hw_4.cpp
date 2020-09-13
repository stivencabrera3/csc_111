#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
// Stiven Cabrera - CSC111
using namespace std;

const double PAYRATE = 18.00, TAXRATE = 0.12;

// calculate tax, gross & net pay, prints to console
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
        << " Net Pay: $" << net_pay << endl << endl;
}

// takes filename as argument, open file, append data to vector, closes file, returns vector
vector<string> read_file(string file_name)
{
    string line;
    vector<string> file_data;
    
    ifstream in_file;
    in_file.open(file_name);

    while (getline(in_file, line))
    {
        file_data.push_back(line);
    }

    in_file.close();

    return file_data;
}

int main()
{
    string name, reference_name, string_hours;
    double double_hours;
    bool running = true;
    int index = 0;
    vector<string> file_data;

    // opening the file, getting contents of file put into a vector
    file_data = read_file("employeehours.txt");

    while (running)
    {
        
        reference_name = file_data[index].substr(0, 30);

        double_hours = 0;

        // interating through vector through index
        for (size_t i = index; i <= file_data.size(); i++)
        {
            
            name = file_data[i].substr(0,30);
            if (name == reference_name)
            {
                index++;
                string_hours = file_data[i].substr(31, 32);
                double_hours += stod(string_hours);
            }
            else
            { 
                calculate_pay(reference_name,double_hours);
                break;

            }

        }

        // breaking outer loop once index reaches end of vector
        if (index >= file_data.size())
        {
            running = false;
            break;
        }
        else
        {
            continue;
        }
        
    }

    

    return 0;
}
