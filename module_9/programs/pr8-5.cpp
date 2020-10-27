#include <iostream>
#include <vector>
using namespace std;


void swap_values(int &a, int&b)
{
    int temp = a;
    a = b;
    b = temp;
}


void selection_sort(int arr[], int size)
{
    int min_index, min_val;

    // outer loop is the max amount of iterations to sort arr
    // also resets min_index and val to the next element in arr
    for (size_t i = 0; i < size - 1; i++)       
    {
        min_index = i;
        min_val = arr[i];

        for (size_t index = i + 1; index < size; index++)
        {
            if (arr[index] < min_val)
            {
                min_index = index;
                min_val = arr[index];
            }
            
        }

        swap_values(arr[min_index], arr[i]);
        
    }
    
}


int main()
{
    const int SIZE = 10;
    int nums[SIZE] = {3,10,1,22,11,25,6,38,0,67};

    for (auto &&i : nums)
    {
        cout << i  << ", ";

    }

    cout << endl;


    selection_sort(nums, SIZE);

    for (auto &&i : nums)
    {
        cout << i  << ", ";

    }




}