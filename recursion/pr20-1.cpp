#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void message(int times){
    if (times > 0)
    {
        cout << "This is a recursive function." << endl;
        message(times-1);

    }
    
}

int main() 
{
    
    message(5);

}