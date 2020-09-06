#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
  int num;

  ifstream in_file;
  in_file.open("numbers.txt");

  while (in_file >> num) //this returns bool 
  {
    cout << num << endl;
  }
  
  in_file.close();

}