#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

//Stiven Cabrera - CSC111

void my_name()
{
    string name;
    
    cout << "Enter your name: \n";
    cin.ignore();
    getline(cin, name);
    cout << "Student Name: " << name << endl;


}


int main()
{
    string file_name, line;
    double average_savings, total = 0;
    int count = 0;

    ifstream in_file;
    cout << "Enter file-name: ";
    cin >> file_name;

    in_file.open(file_name);

    while (in_file >> line)
    {
        count+=1;
        total+=stod(line);

        if (total >= 500.00 && total < 600)
        {
            cout << "Your savings has reached $" << total << " in " << count << " days.\n\n";
        }
    }
    cout << fixed << showpoint << setprecision(2);
    average_savings = total/count;

    cout << "You average $" << average_savings 
        << " savings per day and reached a total of $" << total 
        << " saved in " << count << " days." << endl << endl;

    my_name();
    in_file.close();


    return 0;
}