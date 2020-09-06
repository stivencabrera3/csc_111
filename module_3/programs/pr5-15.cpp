#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream output_file;
  output_file.open("demotext.txt");

  output_file << "Hello\n"
              << "Bach\n"
              << "Mozart\n"
              << "Schubart\n";
  
  output_file.close();


}