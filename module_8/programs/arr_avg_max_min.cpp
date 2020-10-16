#include <iostream>
using namespace std;

int main()

{
    int nums[] = {3,6,1,4,2,13};
    double sum = 0;
    double count = 0;
    double average;
    int max = 0;
    //if array had negative numbers, you could set min = 0 or null
    int min = nums[0];

    //sum
    for (auto &&i : nums)
    {
        sum += i; //sums up numbers
        count++; //getting numbers of elements in nums

    }
    cout << sum << endl; //29

    //Average
    average = sum / count;
    cout << average << endl;
    

    // max and min
    for (auto &&i : nums)
    {   
        //max
        if( i > max)
        {
            max = i;
        }
        //min
        if (i < min)
        {
            min = i;
        }
        
    }

    
    cout << "Max: " << max << " Min: " << min << endl;

}
