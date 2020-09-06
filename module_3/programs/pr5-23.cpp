#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int num;
  ifstream in_file;
  in_file.open("numbers.txt");

  if (in_file)
  {
      while (in_file >> num) //this returns bool 
    {
      cout << num << endl;
    }
  }
  else
  {
    cout << "Error opening file \n";
  }
  
  
  in_file.close();


}