// Author: Julia Yu
// Date: January 27, 2020
// Course: CSCI-136
// Instructor: Prof. Maryash
// Assignment: Lab 1C
// This program asks for the year
// Then it calculates if it is a leap year or a common year
// It does this through if statement and else statements

#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 != 0){
        cout << "Common year";
    } else if (year % 100 != 0){
        cout << "Leap year";
    } else if (year % 400 != 0){
        cout << "Common year";
    } else {
        cout << "Leap year";
    }
    return 0;
}