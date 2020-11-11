#include <iostream>
#include <string>
using namespace std;

struct Person
    {
        int age;
        string profession;
        bool is_sexy;

    };

void show_person(Person p)
{
    cout << p.age << endl;
    cout << p.profession << endl;
    cout << p.is_sexy << endl;
    
}

int main()
{
    

    Person stiven = {24, "computer scientist", true};

    show_person(stiven);



    
}