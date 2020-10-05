#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
#include <algorithm>

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
    in_file.open("coordinates.txt");

    while(getline(in_file,line))
    {
        person1_name = line.substr(0,9);
        person2_name = line.substr(10,9);

        person1_name.erase(remove(person1_name.begin(),person1_name.end(),' '),person1_name.end());

        person2_name.erase(remove(person2_name.begin(),person2_name.end(),' '),person2_name.end());

        x1 = line.substr(20,2);
        y1 = line.substr(24,2);
        x2 = line.substr(30,2);
        y2 = line.substr(34,2);
        
        d_x1 = stod(x1);
        d_x2 = stod(x2);
        d_y1 = stod(y1);
        d_y2 = stod(y2);

        distance = calculate_distance(d_x1,d_y1,d_x2,d_y2);

        cout << fixed << showpoint << setprecision(2);

        if (distance <= 6.0)
        {
            cout << "***CAUTION: SOCIAL DISTANCE VIOLATION***\n"
                << "VIOLATORS: " << person1_name << ", " <<  person2_name << endl
                <<  "DISTANCE: " << distance << "ft" << endl << endl;
        }
    }
    
    in_file.close();


    return 0;
}