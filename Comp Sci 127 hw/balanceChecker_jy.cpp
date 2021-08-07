// Name: Julia Yu
// Date: November 13, 2019
// Email: julia.yu83@myhunter.cuny.edu
// This program takes in a balance of money and keeps subtracting the amount the user puts in until it reaches either 0 or anything less than 0

#include <iostream>
#include <string>
using namespace std;

int main ()
{
  float balance;
  float spend;
  cout << "Enter your initial dollar amount: ";
  cin >> balance;
  while (balance > 0) {
      cout << "Enter amount spent: ";
      cin >> spend;
      balance = balance - spend;
      std::string newBal = "You have $" + std::to_string(balance) + " remaining\n";
      cout << newBal;
  }
  cout << "Your initial amount has been spent";
  return 0;
}