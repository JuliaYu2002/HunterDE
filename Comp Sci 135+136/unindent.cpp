// Author: Julia Yu
// Date: March 21, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 7A
//This program has a function to remove leading spaces in another program

#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

//checks for spaces preceeding the string 'line' and returns a line that has natural spaces after the spaces preceeding the string
string removeLeadingSpaces(string line){
    string newString;
    bool spaceCheck = false;
    for (int i = 0; i < line.length(); i++){
        if (!isspace(line[0])){
            spaceCheck = true;
        }
        if (isspace(line[i]) && spaceCheck == false){
            if (!isspace(line[i + 1])){
                spaceCheck = true;
            }
        } else {
            newString += line[i];
        }
    }
    return newString;
}

int main(){
    string inText;
    while (getline(cin, inText)){ //reads in input into inText, regardless of spaces and new lines
        cout << removeLeadingSpaces(inText) << endl; //prints lines of the text without spaces preceeding text
    }
    return 0;
}