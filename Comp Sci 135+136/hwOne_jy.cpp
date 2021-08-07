// Author: Julia Yu
// Date: January 27, 2020
// Course: CSCI-136
// Instructor: Prof. Maryash
// Assignment: Hw 1.7
// This program asks for 3 things and then prints them on different lines

#include <iostream>
using namespace std;

int main()
{
    string thing1;
    string thing2;
    string thing3;
    
    cout << "Enter a thing: ";
    cin >> thing1;
    cout << "Enter a thing: ";
    cin >> thing2;
    cout << "Enter a thing: ";
    cin >> thing3;
    
    cout << thing1 << endl << thing2 << endl << thing3;
    
    return 0;
}
