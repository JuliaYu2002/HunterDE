// Author: Julia Yu
// Date: January 27, 2020
// Course: CSCI-136
// Instructor: Prof. Maryash
// Assignment: Quiz 1
// This program asks for the number of times to repeat the statement "I love C++"

#include <iostream>
using namespace std;

int main()
{
    int loops;
    cout << "How many times to repeat? ";
    cin >> loops;
    
    for (int i = 0; i < loops; i++){
        cout << "I love C++" << endl;
    }
    return 0;
}
