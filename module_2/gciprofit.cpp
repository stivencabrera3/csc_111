#include <iostream>
#include <iomanip>

using namespace std;
// Stiven Cabrera - CSC 111-0900

int main()
{
  const double COST_PER_CUBIC_FOOT = 0.23;
  const double CHARGE_PER_CUBIC_FOOT = 0.50;

  double length, width, height,volume,cost,charge, profit;

  cout << "Enter the length, width, and height of desired crate (in feet): " << endl;

  cin >> length >> width >> height;

  volume = length * width * height;
  cost = volume * COST_PER_CUBIC_FOOT;
  charge = volume * CHARGE_PER_CUBIC_FOOT;
  profit = charge - cost;

  cout << setprecision(2) << fixed;
  cout << "Volume of the crate: " << volume << " cubic feet" <<  endl;
  cout << "Crate will cost: $" << cost << endl;
  cout << "Customer's charge: $" << charge << endl;
  cout << "Profit made: $" << profit << endl;


  


}
