// Author: Julia Yu
// Date: March 5, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 6A

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string statement;
    cout << "Enter a sentence: ";
    getline(cin, statement); //takes in the sentence and stores it in "statement"
    for (int i = 0; i < statement.length(); i++){
            cout << statement[i] << " " << (int)statement[i] << endl; //prints the current index's ASCII representation
    }
    return 0;
}