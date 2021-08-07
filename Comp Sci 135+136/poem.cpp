// Author: Julia Yu
// Date: April 13, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Lab 9D

#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();
        // assume that the poem p is not needed at this point
        delete p; //clears the string so it doesn't overload the system
    }
}