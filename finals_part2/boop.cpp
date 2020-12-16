#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int width = 1920;
    int height = 1080;
    int ppi = 70;

    int screen_size;
    screen_size = sqrt(pow((width/ppi), 2) + pow((height/ppi), 2));

    cout << screen_size << endl;
}