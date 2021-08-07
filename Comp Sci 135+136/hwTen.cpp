// Author: Julia Yu
// Date: March 23, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Hw 6.8

#include <iostream>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size){
    bool sameCheck = true;
    if (a_size > b_size){
        for (int x = 0; x < a_size; x++){
            if (a[x] != b[x]){
                sameCheck = false;
            }
        }
    } else {
        for (int x = 0; x < b_size; x++){
            if (a[x] != b[x]){
                sameCheck = false;
            }
        }
    }
    return sameCheck;
}

int main(){

    return 0;
}