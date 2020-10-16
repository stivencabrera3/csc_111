#include <iostream>
using namespace std;

int main()
{
    double sum = 0;
    double arr_size = 0;
    double average;
    int max,min;
    int numbers[] = {2,1,3,4};
    for (size_t i = 0; i < 4; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    
    
    cout << max << endl;
    // cout << min << endl;

    
}