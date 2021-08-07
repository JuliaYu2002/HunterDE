// Author: Julia Yu
// Date: February 24, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Quiz 4

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream colors("data.txt");
    string data;
    while (getline(colors, data)){
        cout << data << endl;
    }
    colors.close();
    return 0;
}