// Author: Julia Yu
// Date: March 26, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Quiz 7

#include <iostream>
using namespace std;

void remove_e(string &sentence){
    string newStr;
    for (int i = 0; i < sentence.length(); i++){
        if (sentence[i] != 'e'){
            newStr += sentence.substr(i, 1);
        }
    }
    sentence = newStr;
}

int main(){
    return 0;
}