#include <iostream>
#include "Rectangle.h"
using namespace std;

void print_rec_info(Rectangle r)
{
    cout << "Length: " << r.get_length() << endl 
        << "Width: " << r.get_width() << endl 
        << "Area: " << r.get_area() << endl;
}

int main()
{
    Rectangle square(12,10);

    print_rec_info(square);

    square.change_length(14);

    print_rec_info(square);


    
}

