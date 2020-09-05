#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{

  double mph;

  cout << fixed << setprecision(1);
  cout << "KPH\t\tMPH\n"
      << "_____________________\n\n";

  for (size_t i = 60; i <= 130; i+=10)
  {
    mph = i * 0.6214;
    cout << i << "\t\t" << mph << endl;
    
  }
  
}