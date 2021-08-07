// Author: Julia Yu
// Date: February 23, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 4A

#include <iostream>
using namespace std;

int main(){
    int width, height;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    cout << endl << "Shape: " << endl;
    for (int i = 0; i < height; i++){ //Loop for the height of the box
        for (int j = 0; j < width; j++){ //Loop for the width of the box
            cout << "*"; //Prints * for each row
        }
        cout << endl; //When it reaches the end of the row, it starts a new line
    }
    return 0;
}