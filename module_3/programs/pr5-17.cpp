#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
  int num1, num2, num3;

  cout << "Enter three numbers ";
  cin >> num1 >> num2 >> num3;

  ofstream output_file;
  output_file.open("numbers.txt");

  output_file << num1 << endl << num2 << endl << num3 << endl;

  output_file.close();
}