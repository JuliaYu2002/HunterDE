// Name: Julia Yu
// Date: November 13, 2019
// Email: julia.yu83@myhunter.cuny.edu
// This program takes in a number, and while it's negative, makes the user enter a new number

#include <iostream>
#include <string>
using namespace std;

int main ()
{
  float money;
  cout << "Enter your salary: ";
  cin >> money;
  while (money <= 0) {
      cout << "Entered a negative number\n";
      cout << "Enter your salary: ";
      cin >> money;
  }
  std::string salary = "Your weekly salary is $" + std::to_string(money);
  cout << salary;
  return 0;
}