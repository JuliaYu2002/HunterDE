// Author: Julia Yu
// Date: February 26, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: HW 3.1
// This program takes in an integer and prints out if it is positive, negative, or zero
// Uses if-else statements

#include <iostream>
using namespace std;

int main(){
    double num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0){
        cout << "Number is positive";
    } else if (num < 0){
        cout << "Number is negative";
    } else {
        cout << "Number is zero";
    }
    return 0;
}