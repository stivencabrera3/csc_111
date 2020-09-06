#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
  int days;
  
  double sales, total_sales = 0;

  cout << "How many days do you want to enter sales for? ";
  cin >> days;

  for (size_t i = 1; i <=days; i++)
  {
    cout << "Enter sales for day " << i << endl;
    cin >> sales;

    total_sales+=sales;
  }
  cout << "Total sales are: $" << total_sales << endl;
}