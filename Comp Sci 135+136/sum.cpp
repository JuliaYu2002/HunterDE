// Author: Julia Yu
// Date: February 1, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Project 1A
// This program adds numbers from an external file
// It then prints out the sum of those numbers

#include <iostream>
using namespace std;

int main(){
    int num;
    int total = 0;
    while(cin >> num){
        total = total + num;
    }
    cout << total;
    return 0;
}
