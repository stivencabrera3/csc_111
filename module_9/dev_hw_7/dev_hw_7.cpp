#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

//Stiven Cabrera - CSC111

// transforms whole string to lowercase
void to_lowercase(string &str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
}

// capitalizes first letter of every word in string
void capitalize(string &str)
{
    for (size_t i = 0; i <= str.length(); i++)
    {
        if (i == 0)
        {
            str[i] = toupper(str[i]);
        }
        if (isspace(str[i - 1]))
        {
            str[i] = toupper(str[i]);
        }
    }
}

// appends lines of file into vector
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

int main()
{
    vector<string> teams = read_file_into_vector("teams.txt");
    vector<string> world_series_winners = read_file_into_vector("worldserieswinners.txt");
    string team_choice, world_series_winner;
    int wins;
    bool running = true;

    //displaying contents of teams.txt
    for (auto &&i : teams)
    {
        cout << i << endl;
    }

    cout << endl;
    cout << "Enter a team to view their World Series wins from 1993-2020: ";
    getline(cin, team_choice);
    to_lowercase(team_choice);

    while (running)
    {
        wins = 0;

        for (size_t i = 0; i <= world_series_winners.size(); i++)
        {
            world_series_winner = world_series_winners[i];
            to_lowercase(world_series_winner);

            if (team_choice == world_series_winner)
            {
                wins++;
            }
        }
        
        if(wins == 0)
        {
            cout << "Please make sure the team name is spelled correctly.\n";
            cout << "Try again: "; 
            getline(cin, team_choice);
            to_lowercase(team_choice);
            continue;
            
        }
        else
        {
            capitalize(team_choice);
            cout << team_choice << " # of World Series wins: " << wins << endl;
        }
        

        cout << "Enter another team or enter -1 to quit: ";
        getline(cin, team_choice);

        if (team_choice == "-1")
        {
            running = false;
        }
        else
        {
            to_lowercase(team_choice);
            continue;
        }
        
    }


    return 0;
}