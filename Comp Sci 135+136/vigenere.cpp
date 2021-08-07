// Author: Julia Yu
// Date: March 6, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 6C

#include <iostream>
#include <cctype>
using namespace std;

//This function takes 2 strings in, the statement and the word key
//It changes and returns a new string translated accordingly to the ascii of the key
string encryptVigenere(string plaintext, string keyword){
    string encrypt = "";
    int keywordLoop = 0, letterShift;
    char currentLetterKey, currentLetter, newLetter;
    for (int x = 0; x < plaintext.length(); x++){
        if (keywordLoop == keyword.length()){ //Will loop the keyword so it will be constant
            keywordLoop = 0;
        }
        currentLetterKey = keyword[keywordLoop];
        currentLetter = plaintext[x];
        if (!isalpha(currentLetter)){ //If the current letter in the statement isn't a letter, if automatically adds the character on
            encrypt = encrypt + currentLetter;
        } else { //Else, there will be a letter shift and a new character will be added
            letterShift = currentLetterKey - 97;
            if (isupper(currentLetter)){
                newLetter = (currentLetter - 'A' + letterShift) % 26 + 'A';
                // cout << newLetter;
            } else if (islower(currentLetter)){
                newLetter = (currentLetter - 'a' + letterShift) % 26 + 'a';
                // cout << newLetter;
            }
            // newLetter = currentLetter + letterShift;
            // cout << newLetter;
            encrypt = encrypt + newLetter;
            if (keyword.length() > 1){
                keywordLoop++;
            }
        }
    }
    return encrypt;
}

int main(){
    string plaintext, key;
    cout << "Enter plaintext: ";
    getline(cin, plaintext);
    cout << "Enter keyword: ";
    cin >> key;
    cout << "Ciphertext: " << encryptVigenere(plaintext, key);
    return 0;
}