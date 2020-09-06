// This program lets the user enter a filename and calculates the average
// from numbers read from the input file.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Stiven Cabrera - CSC 111

int main()
{
  ifstream inputFile;
  string filename;
  int number, max_num, min_num;
  int total = 0;
  int count = 0;
  double average;

   // Get the filename from the user.
  cout << "Enter the filename: ";
  cin >> filename;

  // Open the file.
  inputFile.open(filename);

  // If the file successfully opened, process it.
  if (inputFile)
  {

    // Read the numbers from the file and
    // display them.
    while (inputFile >> number)
    {
        count++;
        total = total + number;
        
        if (number > max_num)
        {
          max_num = number;
        }
        if (number < min_num)
        {
          min_num = number;
        }
    }
      average = total / count;

      cout << "There are " << count << " numbers. The total sum is " << total << endl
          << "The average value is " << average << endl
          << "The largest number is " << max_num << endl
          << "The smallest number is " << min_num << endl;
        
        
      // Close the file.
      inputFile.close();
  }
  else
  {
	// Display an error message.
	cout << "Error opening the file.\n";
  }
  
  return 0;
}