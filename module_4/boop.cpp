#include <iostream>

#include <fstream>

#include <cmath>

#include <string>

using namespace std;

double calc(int, int, int, int);

int main()

{

    ifstream inputfile;

    string personA, personB;



    double distance;
    double calc(int xa, int ya, int xb, int yb);


    inputfile.open("coordinates.txt");

    if (inputfile)

    {
        string XA, YA, XB, YB, line;
        double distance;
        int xa=0, ya=0, xb=0, yb=0;




        while (getline(inputfile,line))

        {
            personA = line.substr(0, 10);
            personB = line.substr(10, 10);
            XA = line.substr(20, 3);
            YA = line.substr(24, 3);
            XB = line.substr(30, 3);
            YB = line.substr(34, 3);

            distance = calc(xa, ya, xb, yb);

            if (distance < 6)

                cout << personA << ", " << personB << ", distance: " << distance << endl;

            else

                cout << "Error" << endl;

        }

    }

    inputfile.close();

    return 0;

}

double calc(int xa, int ya, int xb, int yb)

{

    double distance;

    distance = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2) * 1.0);




    return distance;
}