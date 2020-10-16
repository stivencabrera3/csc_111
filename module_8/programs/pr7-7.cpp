#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];
    int count = 0;
    ifstream input_file;

    input_file.open("program7-7.txt");

    while (count < ARRAY_SIZE && input_file >> numbers[count])
    {
        count++;
    }
    
    input_file.close();

    cout << "The numbers are: ";
    for (size_t i = 0; i < ARRAY_SIZE; i++)
    {
        cout << numbers[i] << " " << endl;
        
    }
    
}