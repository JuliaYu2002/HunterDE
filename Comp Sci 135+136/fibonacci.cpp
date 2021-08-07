// Author: Julia Yu
// Date: February 3, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 2D

#include <iostream>
using namespace std;

int main(){
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i < 58; i++){
        fib[i] = fib[i - 1] + fib[i - 2]; //Changes the array at position i to a certain number
    }
    for (int i = 0; i < 60; i++){
        cout << fib[i] << endl; //When numbers start becoming extremely high, they start becoming negative
    }
    return 0;
}