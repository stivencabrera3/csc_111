#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream input_file;
  input_file.open("numbers.txt");

  int num;

  input_file >> num;
  cout << num << endl;

  input_file >> num;
  cout << num << endl;

  input_file >> num;
  cout << num << endl;


  input_file.close();

}