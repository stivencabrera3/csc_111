#include <iostream>
using namespace std;

int main()
{
    int numbers[5];

    //inputting values in array

    //&i is a reference variable, so as the loop iterates over each element, &i becames an alias for the elements
    for (auto &&i : numbers)
    {
        cout << "Enter number: ";
        cin >> i;
    }
    
    for (auto &&i : numbers)
    {
        cout << i << endl;
    }
    


}
