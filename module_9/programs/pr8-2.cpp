#include <iostream>
#include <vector>
using namespace std;

int binary_search(const int arr[], int size, int search_value)
{
    int first_index = 0,        //  first array element
        last_index = size - 1,  // last array element (length - 1)
        middle_index,           // middle array element
        position = -1;          // position of value being searched
    bool found = false;

    while (!found && first_index <= last_index)
    {
        middle_index = (first_index + last_index) / 2;

        if (arr[middle_index] == search_value)
        {
            found = true;
            position = middle_index;
        } 
        else if (search_value > arr[middle_index])
        {
            first_index = middle_index + 1;
        }
        else 
        {
            last_index = middle_index - 1;
        }
    }

    return position;
    
}




int main()
{
    const int SIZE = 10;
    int nums[SIZE] = {2,5,9,10,22,26,33};
    int result, 
        search_value;

    cout << "Enter search value: ";
    cin >> search_value;

    result = binary_search(nums, SIZE, search_value);

    if (result != -1)
    {
        cout << "Search value is at index: " << result << endl;
    }
    else
    {
        cout << "Not found.\n";
    }


}