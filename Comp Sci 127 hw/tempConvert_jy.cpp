// Name: Julia Yu
// Date: November 8, 2019
// Email: julia.yu83@myhunter.cuny.edu
// This program takes in a temperature in farenheit and converts it to celsius

#include <iostream>
using namespace std;

int main()
{
    float temp;
    cout << "Enter temperature in farenheit: ";
    cin >> temp;
    temp = (temp - 32);
    temp = temp * 5 / 9;
    if (temp == 0)
        cout << "Temp in Celsius: 0.00";
    else
        cout << "Temp in Celsius: " << temp;
    return 0;
}