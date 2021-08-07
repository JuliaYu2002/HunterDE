// Author: Julia Yu
// Date: February 3, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 2C

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int myData[10];
    int i; //New cell index
    int v; //New value for i
    for(int i = 0; i < 10; i++){
        myData[i] = 1;
        cout << myData[i] << " ";
    }
    do {
        cout << endl << "Input index: ";
        cin >> i;
        cout << "Input value: ";
        cin >> v;

        if (i >= 0 && i < 10){
            myData[i] = v; //Updates the array if it fits the parameters
            for (int i = 0; i < 10; i++){
                cout << myData[i] << " "; //Prints updated array
            }
        }
    } while(i >= 0 && i < 10);
    return 0;
}