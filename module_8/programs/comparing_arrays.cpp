#include <iostream>
using namespace std;

int main()
{
    //in C++, you can not compare the contents of an array like a=b. You have you iterate over their elements and complare each of them individually

    const int ARR_SIZE = 5;
    int first_array[ARR_SIZE] = {1,2,3,4,5};
    int second_array[ARR_SIZE] = {1,2,2,4,5};
    bool is_equal = true;

    for (size_t i = 0; i < ARR_SIZE; i++)
    {
        if(first_array[i] != second_array[i])
        {
            is_equal = false;
            break;
        }
    }

    if (is_equal)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }


}