#include <iostream>
#include <string>

using namespace std;
//Stiven Cabrera - CSC111

int main()
{
    const int ARR_SIZE = 12;

    string MONTHS[ARR_SIZE] = {"January", "February","March","April","May","June","July","August","September","October","November","December"}, max_month, min_month; 

    double monthly_rainfall[ARR_SIZE], sum=0, average, max, min;
    
    //inputting rainfall
    for (size_t i = 0; i < ARR_SIZE; i++)
    {
        cout << "Enter rainfall for " << MONTHS[i] << ": ";
        
        cin >> monthly_rainfall[i];
        while(monthly_rainfall[i] < 0)
        {
            cout << "Invalid input. Input can not be negative - try again. " << endl; 

            cout << "Enter rainfall for " << MONTHS[i] << ": ";
            cin >> monthly_rainfall[i];
        }
    }

    min = monthly_rainfall[0];

    // getting total sum, max and min
    for (auto &&i : monthly_rainfall)
    {
        sum+=i;

        if (i > max)
        {
            max = i;
        } 

        if (i < min)
        {
            min = i;
        }
        
    }

    // getting corresponding month for max and min
    for (size_t i = 0; i < ARR_SIZE; i++)
    {
        if (monthly_rainfall[i] == max)
        {
            max_month = MONTHS[i];
        }
        else if(monthly_rainfall[i] == min)
        {
            min_month = MONTHS[i];
        }
    }
    

    // calculating average
    average = sum / ARR_SIZE;


    cout << "Total rainfall: " << sum << endl
        << "Average rainfall: " << average << endl
        << "Least rainfall in: " << min_month << endl
        << "Most rainfall in: " << max_month << endl;

    return 0;
}