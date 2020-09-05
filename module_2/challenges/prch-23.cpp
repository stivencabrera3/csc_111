#include <iostream>
#include <cmath>
using namespace std;


int main()
{
  int choice;
  double area;

  // area of circle
  const double PI = M_PI;
  double radius;

  // area of rectangle
  double length, width;

  // area of triangle
  double base, height;


  cout << "Geometry Area Calculator\n"
      << "--------------------\n"
      << " 1. Calcu3late the Area of a Circle\n"
      << " 2. Calcu3late the Area of a Rectangle\n"
      << " 3. Calcu3late the Area of a Triangle\n"
      << " 4. Quit\n\n"
      <<"Enter your choice (1-4): ";
  cin >> choice;

  switch (choice)
  {
  case 1:
    cout << "Enter radius of cirle: ";
    cin >> radius;
    area = PI * pow(radius,2);

    cout << "Area of circle with radius of " << radius << " is: " << area << endl; 
    break;

  case 2:
    cout << "Enter length and width seperated by space: ";
    cin >> length >> width;
    area = length* width;

    cout << "Area of rectangle is: " << area << endl;
    break;

  case 3:
    cout << "Enter base and height seperated by space: ";
    cin >> base >> height;
    area = base * height * 0.5;

    cout << "Area of triangle is: " << area << endl;
    break;
  
  default:
    break;
  }
}