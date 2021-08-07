// Author: Julia Yu
// Date: February 5, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Project 1D

#include <iostream>
using namespace std;

int main(){
    char op;
    char lastOp = '+';
    int num;
    cin >> num;
    int total = 0;
    while (cin >> op){
        if (op == '^'){ //Checks if the operator is exponential
            num = num * num;
            cin >> op;
        }
        if (lastOp == '+'){ //Checks if the operation is addition
            total = total + num;
        } else if (lastOp == '-'){ //Checks if the operation is subtraction
            total = total - num;
        }
        lastOp = op;
        cin >> num;
        if (op == ';'){ //Checks if the character is a semicolon
            cout << total << endl;
            total = 0;
            lastOp = '+';
        }
    }
    return 0;
}