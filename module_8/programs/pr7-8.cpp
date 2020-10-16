#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];
    ofstream output_file;

    output_file.open("program7-8.txt");

    //inputting numbers 0-9 into array
    for (size_t i = 0; i < ARRAY_SIZE; i++)
    {
        numbers[i] = i;
    }
    
    for (size_t i = 0; i < ARRAY_SIZE; i++)
    {
        output_file << numbers[i] << endl;
    }

    output_file.close();


    
}
