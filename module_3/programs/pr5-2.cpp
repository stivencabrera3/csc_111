// showing how postfix and prefix increment and decrement works

#include <iostream>
using namespace std;

int main() 
{
  int num = 4;

  cout << num << endl; //displays 4
  cout << num++ << endl; //displays 4, then adds 1 to num
  cout << num << endl; //now this will display 5
  cout << ++num << endl; //displays 6 - this adds 1 first, then displays num.

  // works the same of for num-- or --num
}