#include <iostream>
# include <iomanip>
using namespace std;

int main(){
  double day1, day2, day3, total;

  cout << "Enter sales for day 1: ";
  cin >> day1;

  cout << "Enter sales for day 1: ";
  cin >> day2;

  cout << "Enter sales for day 1: ";
  cin >> day3;

  total = day1 + day2 +  day3;

  cout << "Sales Amount\n";
  cout << "-------------\n";
  cout << setprecision(5);
  cout << "Day 1: " << day1 << endl;
  cout << "Day 2: " << day2 << endl;
  cout << "Day 3: " << day3 << endl;
  cout << "Total: " << total << endl;
  
}