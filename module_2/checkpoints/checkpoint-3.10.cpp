#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double volume, radius, height;
  const double PI = 3.14159;

  cout << "This program will tell you the volume of\n";
  cout << "a cylinder-shaped fuel tank.\n";

  cout << "How tall is the tank?";
  cin >> height;

  cout << "What is the radius of the tank? ";
  cin >> radius;

  volume = PI * pow(radius, 2.0) * height;

  cout << "The volume is " << volume << endl;

}