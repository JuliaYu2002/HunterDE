// Author: Julia Yu
// Date: February 27, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: HW 5.6
// This program takes a string and returns the middle letter(s)

#include <iostream>
using namespace std;

string middle(string str){
    if (str.length() % 2 != 0){
        return str.substr((str.length() / 2), 1);
    } else if (str.length() % 2 == 0){
        return str.substr(((str.length() - 1) / 2), 2);
    }
}

int main(){
    string mid = middle("Henlo");
    cout << mid;
    return 0;
}