#include <iostream>
#include <vector>
using namespace std;


int linear_search(const int arr[], int size, int search_value)
    {
        int index = 0; // subscript to search array
        int position = -1; // position of search value
        bool found = false; // flag for if found or not

        while (index < size && !found)
        {
            if (arr[index] == search_value)
            {
                found = true;
                position = index;
            }
            index++;
            
        }

        return position;
        
    }



int main()
{
    const int SIZE = 5;
    int nums[SIZE] = {1,2,3,4,5};
    int result, search_value;

    cout << "Enter search value: ";
    cin >> search_value;

    result = linear_search(nums, SIZE, search_value);

    if (result != -1)
    {
        cout << "Search value is at index: " << result << endl;
    }
    else
    {
        cout << "Not found.\n";
    }
    

}