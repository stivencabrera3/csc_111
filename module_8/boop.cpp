#include <iostream>
using namespace std;

int main()
{
    double sum = 0;
    double arr_size = 0;
    double average;
    int numbers[] = {1,2,3,4};
    for (auto i : numbers)
    {
        sum += i;
        arr_size++;
    }
    average = sum/arr_size;

    cout << average << endl;
    
}