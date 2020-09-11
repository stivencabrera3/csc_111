#include <iostream>
#include <string>
using namespace std;

void display_name(string input) 
{
    cout << input << endl;
}

int main() 
{
    string name;

    cout << "enter name: \n";
    getline(cin, name);

    display_name(name);
}