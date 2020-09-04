#include <iostream>
# include <iomanip>
using namespace std;

int main(){
  double quotient, num1 = 123.456, num2 = 26.91;

  quotient = num1/num2;

  cout << quotient << endl;
  cout << setprecision(5) << quotient << endl;
  cout << setprecision(4) << quotient << endl;
  cout << setprecision(3) << quotient << endl;
  cout << setprecision(2) << quotient << endl;
  cout << setprecision(1) << quotient << endl;
}