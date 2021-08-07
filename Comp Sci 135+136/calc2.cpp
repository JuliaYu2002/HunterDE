// Author: Julia Yu
// Date: February 5, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Project 1C

#include <iostream>
using namespace std;

int main(){
    char op = '+';
    int num;
    cin >> num;
    int total = num;
    while (cin >> op){
        if (op == '+'){ //Checks if the operation is addition
            cin >> num;
            total = total + num;
        } else if (op == '-'){ //Checks if the operation is subtraction
            cin >> num;
            total = total - num;
        } else if (op == ';'){ //Checks if the character is a semicolon
            cout << total << endl;
            cin >> num;
            total = num;
        }
    }
    return 0;
}