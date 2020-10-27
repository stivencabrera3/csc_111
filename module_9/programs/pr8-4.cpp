#include <iostream>
#include <vector>
using namespace std;




void swap_values(int &a, int &b) 
{
    int greater_num_temp = a;
    a = b;
    b = greater_num_temp;
}


void bubble_sort(int arr[], int size) 
{
    int greater_num, //temporarily holds greater num
        lesser_num; // temporarily holds lesser num

    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t index = 1; index < size - 1; index++)
        {
            if (arr[index - 1] > arr[index])
            {
                swap_values(arr[index - 1], arr[index]);
            }
            else
            {
                continue;
            }
        }
        
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


    bubble_sort(nums, SIZE);

    for (auto &&i : nums)
    {
        cout << i  << ", ";

    }
    

    
}