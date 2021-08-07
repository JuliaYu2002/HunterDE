// Author: Julia Yu
// Date: February 24, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 4G

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int width, height;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;

    int quotient = floor(width / 3); //rounds down

    cout << "Shape: " << endl;
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){ //for width
            //checkerboard pattern based on rem of 6
            if (i % 6 < 3){
                if (j % 6 < 3){
                    cout << "*";
                } else {
                    cout << " ";
                }
            } else {
                if (j % 6 < 3){
                    cout << " ";
                } else {
                    cout << "*";
                }
            }
        }
        cout << endl; //ends line
    }
    return 0;
}