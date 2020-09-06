#include <iostream> 
#include <fstream>
using namespace std;

int main()
{
  int num,num2,count=0,total=0;
  ifstream in_file;
  in_file.open("numbers.txt");

  // in_file >> num;

  while (in_file >> num2)
  {
    if (num2<num)
    {
      num = num2;
    }
    
  }
  cout << num << endl;
}
  

