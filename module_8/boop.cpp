#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums {1,2,3};

    for (auto &&i : nums)
    {
        cout << i << endl;
    }
    
}
