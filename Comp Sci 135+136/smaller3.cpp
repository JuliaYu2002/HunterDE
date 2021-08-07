// Author: Julia Yu
// Date: January 27, 2020
// Course: CSCI-136
// Instructor: Prof. Maryash
// Assignment: Lab 1B
// This program asks for 3 numbers and compares them
// in order to find the smaller one
// It does this through a nested if statement
// and else statements

#include <iostream>
using namespace std;

int main(){
    int x;
    int y;
    int z;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter a number: ";
    cin >> y;
    cout << "Enter a number: ";
    cin >> z;

    if (x < y){
        if (x < z){
            cout << "The smaller of the three is " << x;
        } else {
            cout << "The smaller of the three is " << z;
        }
    } else {
        if (y < z){
            cout << "The smaller of the three is " << y;
        }
        else{
            cout << "The smaller of the three is " << z;
        }
    }
    return 0;
}