// Name: Julia Yu
// Date: November 8, 2019
// Email: julia.yu83@myhunter.cuny.edu
// This program takes in a grade and outputs the letter that that grade would get

#include <iostream>
using namespace std;

int main ()
{
  float grade;
  cout << "Enter average grade: ";
  cin >> grade;
  if (grade < 60) cout << "Your letter grade is an F";
  else if (grade >= 60 && grade < 80) cout << "Your letter grade is a C or D";
  else if (grade >= 80 && grade < 90) cout << "Your letter grade is B";
  else cout << "Your letter grade is A";
  return 0;
}