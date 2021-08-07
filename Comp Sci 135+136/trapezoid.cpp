// Author: Julia Yu
// Date: February 24, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 4F

#include <iostream>
using namespace std;

int main(){
    int width, height;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;

    cout << "Shape: " << endl;
    int asterisk_num = width;
    int space_num = 0;

    if (height > ((width + 1) / 2)){ //adding 1 to width for more fair (?) rounding
        cout << "Impossible shape!";
    } else {
        for (int i = 0; i < height; i++){ // for number of lines
            for (int j = 0; j < space_num; j++){ //spaces on left side
                cout << " ";
            }
            for (int j = 0; j < asterisk_num; j++){ //asterisks in the middle
                cout << "*";
            }
            for (int j = 0; j < space_num; j++){ //spaces on right side
                cout << " ";
            }
            asterisk_num -= 2; //decreases for next line
            space_num += 1;    //changes accordingly
            cout << endl; //new line
        }
    }
    return 0;
}