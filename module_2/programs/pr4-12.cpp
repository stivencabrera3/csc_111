#include <iostream>
using namespace std;

int main () 
{
  double score;

  cout << "Enter test score: \n";
  cin >> score;
  
  if (score >=0 )
  {
      if (score >= 90)
    {
      cout << "Grade: A\n";
    }

    else if (score >= 80)
    {
      cout << "Grade: B\n";
    }

    else if (score >= 70)
    {
      cout << "Grade: C\n";
    }
    
    else if (score >= 60)
    {
      cout << "Grade: D \n";
    }

    else
      cout << "Grade: F \n";
  }

  else
  {
    cout << "Invalid test score\n";
  }
  
  
  
  
}