#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double num, total = 0;

  cout << "Enter num or -1 to quit: ";
  cin >> num;
  while (num != -1)
  {
    total += num;

    cout << "Enter num or -1 to quit: ";
    cin >> num;

    if (num == -1)
    {
      cout << "Sum is: " << total << endl;
      break;
    }
    
  }

}


