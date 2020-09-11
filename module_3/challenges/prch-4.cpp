#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{

  int workout_length;

  cout << "Enter workout length in minutes: ";
  cin >> workout_length;


  for (size_t i = 5; i <= workout_length; i+=5)
  {
    cout << i << " minutes \t\t" << "Calories burned: " << i * 3.6 << endl;
  }
  
}


