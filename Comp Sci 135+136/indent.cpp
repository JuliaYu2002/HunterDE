// Author: Julia Yu
// Date: March 22, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 7B
//This program has a function to add indentation to code snippets

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

//counts the number of times the character 'c' appears in the string 'line'
int countChar(string line, char c){
    int count = 0;
    for (int i = 0; i < line.length(); i++){
        if (c == line[i]){
            count++;
        }
    }
    return count;
}

void indent(string text){
    string newText;
    int open_block = 0, open_brace = 0, close_brace = 0, indentation_lvl;
    while (getline(cin, text)){
        newText = removeLeadingSpaces(text);
        indentation_lvl = open_block;
        if (newText[0] == '}'){ //checks the first char
            indentation_lvl = open_block - 1;
        }
        for (int i = 0; i < indentation_lvl; i++){
            cout << "\t"; //prints tab spaces according to the indentation lvl
        }
        open_brace = countChar(text, '{');
        close_brace = countChar(text, '}');
        open_block = open_block + (open_brace - close_brace); //number of tabs
        cout << newText << endl;
    }
}

int main(){
    string inText;
    indent(inText);
    return 0;
}