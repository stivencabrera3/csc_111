#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums;

    for (size_t i = 1; i <= 5; i++)
    {
        nums.push_back(i); // pushing elements to back of vector
    }

    //printing elements of vector
    for (auto &&i : nums)
    {
        cout << i << endl;
    }

    cout << endl;



    cout << "Length of vectr: "<< nums.size() << endl; //length of vector - 5

    nums.pop_back(); // removes last element

    for (auto &&i : nums)
    {
        cout << i << endl;
    }

    //.clear() - clears all element
    //.empty() - checks if vector is empty, true if empty
    
}
