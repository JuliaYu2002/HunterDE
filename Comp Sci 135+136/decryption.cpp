// Author: Julia Yu
// Date: March 9, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 6D

#include <iostream>
#include <cctype>
using namespace std;

char shiftChar(char c, int rshift){ //this function takes the character and the shift number and returns a new character that was shifted
    char newChar;
    if (isupper(c)){
        newChar = (c - 'A' + rshift) % 26 + 'A';
    } else if (islower(c)) {
        newChar = (c - 'a' + rshift) % 26 + 'a';
    } else {
        newChar = c;
    }
    return newChar;
}

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
            } else if (islower(currentLetter)){
                newLetter = (currentLetter - 'a' + letterShift) % 26 + 'a';
            }
            encrypt = encrypt + newLetter;
            if (keyword.length() > 1){
                keywordLoop++;
            }
        }
    }
    return encrypt;
}

string encryptCaesar(string plaintext, int rshift){ //this function takes in the string from the user and the shift number to loop through and encodes the message
    string encoded;
    for (int x = 0; x < plaintext.length(); x++){
        encoded = encoded + shiftChar(plaintext[x], rshift); //adds the changed character to the string
    }
    return encoded;
}

char reverseShift(char c, int rshift){
    char reversed_c;
    if (isupper(c)){
        reversed_c = ((c - rshift + 'A') % 26 + 'A');
    } else if (islower(c)){
        reversed_c = ((c - rshift - 'z') % 26 + 'z');
    } else {
        reversed_c = c;
    }
    return reversed_c;
}

string decryptCaesar(string ciphertext, int rshift){
    string recoded;
    for (int x = 0; x < ciphertext.length(); x++){
        recoded = recoded + reverseShift(ciphertext[x], rshift); //adds the changed character to the string
    }
    return recoded;
}
//This function takes in the encrypted string and the key and decrypts it
//uses the same function to shift it back as the caesar one does
string decryptVigenere(string ciphertext, string keyword){
    string toReturn = "";
    int toAdd = 0;
    int counter = 0;
    for (int i = 0; i < ciphertext.length(); i++){
        if (isalpha(ciphertext[i])){
            int rshift = (counter % keyword.length());
            counter += 1;
            toReturn += reverseShift(ciphertext[i], int(keyword[rshift] - 97));
        } else {
            toReturn += ciphertext[i];
        }
    }
    return toReturn;
}

int main(){
    int shift;
    string plaintext, keyword;
    cout << "Enter plaintext: ";
    getline(cin, plaintext);
    cout << endl << "= Caesar =" << endl << "Enter shift: ";
    cin >> shift;
    cout << "Ciphertext: " << encryptCaesar(plaintext, shift) << endl;
    cout << "Decrypted: "<< decryptCaesar(encryptCaesar(plaintext, shift), shift) << endl;
    cout << endl << "= Vingenere =" << endl << "Enter keyword: ";
    cin >> keyword;
    cout << "Ciphertext: " << encryptVigenere(plaintext, keyword) << endl;
    cout << "Decrypted: " << decryptVigenere(encryptVigenere(plaintext, keyword), keyword);
    return 0;
}