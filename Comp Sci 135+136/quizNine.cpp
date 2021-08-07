// Author: Julia Yu
// Date: April 7, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Quiz 9

#include <iostream>
using namespace std;

int unbalanced_brackets(string input){
    int open = 0, closed = 0, total = 0;
    for (int i = 0; i < input.length(); i++){
        if (input[i] == '{'){
            open++;
        } else if (input[i] == '}'){
            closed++;
        }
    }
    if (open > closed){
        if (open + closed % 2 != 0){
            return (open - closed);
        }
    } else if (closed > open){
        if (open + closed % 2 != 0){
            return -1 * (closed - open);
        }
    } else {
        return 0;
    }
}

int main(){
    cout << unbalanced_brackets("}}}}}{{{");
    return 0;
}