// Author: Julia Yu
// Date: February 26, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: HW 3.5
// This program takes in three numbers and prints if they are in increasing order, decreasing order, or neither
// Uses if-else statements

#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    if ((num1 < num2) && (num2 < num3)){
        cout << "Increasing";
    } else if ((num3 < num2) && (num2 < num1)){
        cout << "Decreasing";
    } else {
        cout << "Neither";
    }

    return 0;
}