// Author: Julia Yu
// Date: February 23, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 4D

#include <iostream>
using namespace std;

int main(){
    int side, counter = 0;
    cout << "Enter side length: ";
    cin >> side;
    cout << endl << "Shape: " << endl;
    for (int i = 0; i < side; i++){ //Loop to go through each row
        for (int j = 0; j < side; j++){ //Loop to go through each colomn
            if (j <= counter){ //Checks the position and prints a space or an asterisk
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
        counter++;
    }

    return 0;
}