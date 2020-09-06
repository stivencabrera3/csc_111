#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int days;
  double sales;

  ofstream out_file;
  out_file.open("numbers.txt");

  cout <<  "How many days of sales to input? \n";
  cin >>  days;

  for (size_t i = 1; i <= days; i++)
  {
    cout <<  "Enter sales for day " << i << endl;
    cin >> sales;
    out_file << sales << endl;
  }
  cout << "Data written to numbers.txt\n";
  out_file.close();
}