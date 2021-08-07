// Author: Julia Yu
// Date: February 23, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 4B

#include <iostream>
using namespace std;

int main(){
    int width, height;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    cout << endl << "Shape:" << endl;
    for (int i = 0; i < height; i++){ //Loop for the rows
        for (int j = 0; j < width; j++){ //Loop for the columns
            if ((j + i) % 2 == 0){ //Since the pattern depends on the positioning, it needs i and j to know what to print
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}