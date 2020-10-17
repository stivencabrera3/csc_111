#include <iostream>
using namespace std;

void double_values(int nums[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        nums[i]*=2;
    }
    
}

void show_values(int nums[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << nums[i] << endl;
    }
    
}

int main()
{

    int nums[6] = {1,2,3,4,5,6};

    show_values(nums,6);

    double_values(nums,6);

    show_values(nums,6);

}