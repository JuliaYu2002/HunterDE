// Author: Julia Yu
// Date: February 23, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 4C

#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter size: ";
    cin >> size;
    cout << endl << "Shape: " << endl;
    int right = size - 1, left = 0;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (j == left || j == right){ //Checks if the position is right for a star
                cout << "*";
            } else {
                cout << " ";
            }
        }
        left++; //Tracks the left side's position
        right--; //Tracks the right side's position
        cout << endl;
    }

    return 0;
}