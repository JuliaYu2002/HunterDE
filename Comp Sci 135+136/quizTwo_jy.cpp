// Author: Julia Yu
// Date: February 10, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Quiz 2

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;

    if (a > b){
        cout << "The larger of the two is " << a;
    } else if (a < b){
        cout << "The larger of the two is " << b;
    }
    return 0;
}