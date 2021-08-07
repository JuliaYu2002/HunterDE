// Author: Julia Yu
// Date: February 10, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Hw 4.8

#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    cout << "Enter a word: ";
    cin >> word;
    for (int i = 0; i < word.length(); i++){
        cout << word.substr(i, 1) << endl;
    }
    return 0;
}