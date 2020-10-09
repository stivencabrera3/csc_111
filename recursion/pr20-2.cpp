#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void message(int times){
    int count = 0;
    cout << "message called with " << times << " in times\n";

    if (times > 0)
    {
        cout << "This is a recursive function." << endl;
        message(times-1);

    }

    count++;
    cout << times << endl;
    cout << "count: " << count << endl;
}

int main() 
{
    
    message(5);

}