#include <iostream>
using namespace std;


void showsum(int num1, int num2, int num3) 
{
    int sum = num1 + num2 + num3;

    cout << sum << endl;
}

int main() 
{
    int value1, value2, value3;
    
    cout << "Enter three numbers and the sum will be displayed: ";
    cin >> value1 >> value2 >> value3;

    showsum(value1,value2,value3);


}