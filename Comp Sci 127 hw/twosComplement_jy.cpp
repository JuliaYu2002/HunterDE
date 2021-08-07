// Name: Julia Yu
// Date: November 13, 2019
// Email: julia.yu83@myhunter.cuny.edu
// This program prints the number inputed by the user in "two's complement" notation

#include <iostream>
using namespace std;

int main ()
{
  int n;
  int x;
  int b = 16;
  cout << "Enter a number: ";
  cin >> n;
  if (n < 0){
      cout << "1";
      x = n + 32;
  } else {
      cout << "0";
      x = n;
  }
  while (b > 0.5) {
      if (x >= b) {
          cout << "1";
      } else {
          cout << "0";
      }
      x = x % b;
      b = b / 2;
  }
  return 0;
}