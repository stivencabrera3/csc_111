#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums;

    for (size_t i = 1; i <= 5; i++)
    {
        nums.push_back(i);
    }
    
    for (auto &&i : nums)
    {
        cout << i << endl;
    }
    cout << nums.size() << endl;;
    
    
}
