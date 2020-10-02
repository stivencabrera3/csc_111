#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

double calculate_distance(double x1, double y1, double x2, double y2)
{
    double distance = sqrt((pow((x2-x1),2) + pow((y2-y1),2)));

    return distance;

}


int main()
{
    string line, person1_name, person2_name, x1, y1,x2,y2;
    double d_x1,d_x2,d_y1,d_y2, distance;
    ifstream in_file;
    in_file.open("dev_hw_5_data.txt");
    getline(in_file,line);

    person1_name = line.substr(0,9);
    person2_name = line.substr(11,9);
    x1 = line.substr(22,2);
    y1 = line.substr(26,2);
    x2 = line.substr(30,2);
    y2 = line.substr(34,2);
    

    d_x1 = stod(x1);
    d_x2 = stod(x2);
    d_y1 = stod(y1);
    d_y2 = stod(y2);

    distance = calculate_distance(d_x1,d_y1,d_x2,d_y2);

    cout << fixed << showpoint << setprecision(3);

    cout << distance << endl;

    if (distance <= 6.0)
    {
        cout << "***CAUTION: SOCIAL DISTANCE VIOLATION***\n"
            << "VIOLATERS: " << person1_name << ", " <<  person2_name << endl
            <<  "DISTANCE: " << distance << "ft" << endl;
    }
    else  
    {
        cout << "Proper social distancing observed. Carry on, citizens." << endl;
    }

    
    



















    return 0;
}