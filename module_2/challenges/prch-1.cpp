#include <iostream>
using namespace std;

int main() 
{
  int num1, num2;

  cout << "Enter two integers, seperated by space: ";
  cin >> num1 >> num2;

  (num1>num2) ? cout << num1 << " is greater\n." : cout << num2 << " is greater.\n";
}