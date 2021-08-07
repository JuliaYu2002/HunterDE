// Author: Julia Yu
// Date: February 3, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 2B

#include <iostream>
using namespace std;

int main(){
    int L;
    int U;
    cout << "Enter the lower limit: ";
    cin >> L;
    cout << "Enter the upper limit: ";
    cin >> U;

    for(int i = L; i < U; i++){ //This sets up the number range to be printed
        cout << i << " "; //This prints out the current number and a space
    }
    return 0;
}