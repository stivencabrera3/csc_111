#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
  int speed;

  cout << "enter speed: \n";
  cin >> speed;

  if (speed >= 0 && speed <= 200)
  {
    cout << "Number is valid \n";
  }
  else if (speed < 0 || speed > 200)
  {
    cout << "Number is not valid \n";

  }


  
  
}