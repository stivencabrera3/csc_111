#include <iostream>
using namespace std;

int main()
{
    const int NUM_STUDENTS = 3; //columns
    const int NUM_SCORES = 5; //rows

    double total = 0, row_total, column_total, average;
    double scores[NUM_STUDENTS][NUM_SCORES] = {{88, 97, 79, 86,94},{86, 91, 78, 79, 84}, {82, 73, 77, 82, 89}};

    //SUMMING ALL ELEMENTS

    for (size_t student = 0; student < NUM_STUDENTS; student++)
    {
        row_total = 0;
        for (size_t score = 0; score < NUM_SCORES; score++)
        {
            total += scores[student][score];
            row_total += scores[student][score];
        }
        //summing each row
        cout << "Student " << student + 1 << " total scores: " << row_total << endl;

        //averaging each row
        cout << "Student " << student + 1 << " average: " << row_total / 5 << endl;
    }

    // total sum of all elements
    cout << "Class total: " << total << endl; 

    // total sum of columns - iterate over each row, each column

    for (size_t score = 0; score < NUM_SCORES; score++)
    {   
        column_total = 0;
        for (size_t student = 0; student < NUM_STUDENTS; student++)
        {
            // cout <<  scores[score][student];
            column_total += scores[student][score];
        }
        
    }
    
    cout << "column total: " << column_total << endl;


    
}
