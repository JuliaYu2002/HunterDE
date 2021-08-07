// Author: Julia Yu
// Date: February 3, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Project 1B
// A calculator to add or subtract numbers

#include <iostream>
using namespace std;

int main(){
    char op = '+';
    int num;
    int total = 0;
    while (cin >> num){
        if (op == '+'){
            total = total + num; //Adds the number to the total
        }
        if (op == '-'){
            total = total - num; //Subtracts the number from the total
        }
        cin >> op; //Makes it take in the next character as either + or -
    }
    cout << total;
    return 0;
}
