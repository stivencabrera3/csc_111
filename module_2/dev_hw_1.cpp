#include <iostream>

using namespace std;

// Stiven Cabera - CSC 111

int main()
{
  string lastname;
  cout << "Enter your last name: \n";
  cin >> lastname;

  cout << "Your last name is: " << lastname << endl;

  int hour, minutes;
  cout << "Enter the current hour and minutes seperated by a space: ";
  cin >> hour >> minutes;

  cout << "It is now " << hour << ":" << minutes << endl;

  double miles;

  cout << "Enter the shortest distance between Mars and Earth that occurred between 2018 and 2020 in millions of miles: " << endl;

  cin >> miles;
  
 cout << "The shortest distance was " << miles << " million miles or " << miles * 1.609 << " million kilometers." << endl;

  
  

}