// Author: Julia Yu
// Date: January 27, 2020
// Course: CSCI-136
// Instructor: Prof. Maryash
// Assignment: Lab 1A
// This program asks for 2 numbers and compares them 
// in order to find the smaller one
// It does this through an if statement

#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;

    if (num1 < num2){
        cout << "The smaller of the two is " << num1;
    } else if (num2 < num1){
        cout << "The smaller of the two is " << num2;
    }
    return 0;
}