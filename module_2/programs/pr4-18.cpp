#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int choice, months;
  double charge;

  const double ADULT = 40.0,
            SENIOR = 30.0,
            CHILD = 20.0;

  cout << "Health Club Membership Menu\n\n"
      << "-----------------------------------\n\n"
      << "1. Standard Adult Membership \n"
      << "2. Child Membership \n"
      << "3. Senior Citizen Membership \n"
      << "4. Quit \n"
      << "Enter your choice: \n";
  cin >> choice;

  

  cout << setprecision(2) << fixed;

  if (choice == 1)
  {

    cout << "Enter how many months: ";
    cin >> months;

    charge = months * ADULT;
    cout << "The total charges are: $" << charge << endl;
  }

  else if (choice == 2)
  {

    cout << "Enter how many months: ";
    cin >> months;

    charge = months * CHILD;
    cout << "The total charges are: $" << charge << endl;
  }
  else if (choice == 3)
  {

    cout << "Enter how many months: ";
    cin >> months;
    
    charge = months * SENIOR;
    cout << "The total charges are: $" << charge << endl;
  }

  else if (choice == 4)
  {
    cout << "Program ending\n";
  }
  else
    cout << "Invalid input\n";
  
  
  


  
}