// Author: Julia Yu
// Date: February 3, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 2A

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int userNum;
    cout << "Enter an integer: ";
    cin >> userNum;
    while (userNum <= 0 || userNum >= 100){ //Prompts user for another number if it's less than 0 or greater than 100
        cout << "Enter enter another integer: ";
        cin >> userNum;
    }
    cout << "Number squared: " << pow(userNum, 2); //Prints out the number squared
    return 0;
}