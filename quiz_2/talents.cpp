#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Stiven Cabrera - CSC111

vector<string> read_file_into_vector(string file_name)
{
    string line;
    vector<string> file_data;

    ifstream in_file;
    in_file.open(file_name);

    while (getline(in_file, line))
    {
        line.pop_back();
        file_data.push_back(line);
    }

    in_file.close();

    return file_data;
}

void swap_values(string&a, string&b)
{
    string temp = a;
    a = b;
    b = temp;
}

void selection_sort(vector<string>&v) 
{
    int min_index;
    string min_val;

    for (size_t i = 0; i < v.size() - 1; i++)
    {
        min_index = i;
        min_val = v[i];

        for (size_t index = i + 1; index < v.size(); index++)
        {
            if (v[index] < min_val)
            {
                min_index = index;
                min_val = v[index];

            }

        }
        
        swap_values(v[min_index],v[i]);

    }
    
}




int main()
{
    vector <string>names = read_file_into_vector("exam2names.txt");

    selection_sort(names);

    for (size_t i = 0; i < names.size(); i++)
    {
        if(i < 9)
        {
            cout << "ren dsc00" << i + 1 << ".jpg " << names[i] + ".jpg" << endl;
        }
        else
        {
            cout << "ren dsc0" << i + 1 << ".jpg " << names[i] + ".jpg" << endl;
        }
        
    }    

    return 0;
}