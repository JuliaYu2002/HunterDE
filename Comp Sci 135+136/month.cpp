// Author: Julia Yu
// Date: January 27, 2020
// Course: CSCI-136
// Instructor: Prof. Maryash
// Assignment: Lab 1D
// This program asks for the year and month
// Then it calculates the number of days in the month based off of the year
// It does this through if statements and else statements
// It also uses or statements to make it slightly shorter

#include <iostream>
using namespace std;

int main(){
    int year;
    int month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the month: ";
    cin >> month;

    if (month == 2){
        if (year % 4 != 0){
            cout << "28 days";
        } else if (year % 100 != 0){
            cout << "29 days";
        } else if (year % 400 != 0){
            cout << "28 days";
        } else {
            cout << "29 days";
        }
    } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        cout << "31 days";
    } else if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11){
        cout << "30 days";
    }
    return 0;
}