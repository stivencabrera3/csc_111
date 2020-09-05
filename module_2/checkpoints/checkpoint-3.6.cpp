#include <iostream>
using namespace std;

int main()
{
  double pounds, kilograms;
  
  //  Write code here that prompts the user
  cout << "Enter your weight in pounds: ";
  cin >> pounds;

  kilograms = pounds / 2.2;

  cout << "Your weight in kilograms is: " << kilograms << endl;


}