// Author: Julia Yu
// Date: March 6, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 6B

#include <iostream>
#include <cctype>
using namespace std;

char shiftChar(char c, int rshift){ //this function takes the character and the shift number and returns a new character that was shifted
    char newChar;
    if (isupper(c)){
        newChar = (c - 'A' + rshift) % 26 + 'A';
    } else if (islower(c)){
        newChar = (c - 'a' + rshift) % 26 + 'a';
    } else {
        newChar = c;
    }
    return newChar;
}

string encryptCaesar(string plaintext, int rshift){ //this function takes in the string from the user and the shift number to loop through and encodes the message
    string encoded;
    for (int x = 0; x < plaintext.length(); x++){
        // cout << (int)plaintext[x] << endl;
        encoded = encoded + shiftChar(plaintext[x], rshift); //adds the changed character to the string
    }
    return encoded;
}

int main(){
    string plaintext;
    int shift;
    cout << "Enter plaintext: ";
    getline(cin, plaintext); //takes in the entire message, includes spaces
    cout << "Enter shift: ";
    cin >> shift;
    cout << "Ciphertext: " << encryptCaesar(plaintext, shift); //prints the encoded message
    return 0;
}