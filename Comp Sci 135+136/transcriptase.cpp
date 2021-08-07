// Author: Julia Yu
// Date: March 5, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Project 2A

#include <iostream>
#include <cctype>
#include <fstream>
using namespace std;

//This function takes in a letter and depending on what letter that is
//it returns the corresponding letter pairing
char DNAbase_to_mRNAbase(char letter){
    char newLetter;
    if (letter == 'a' || letter == 'A'){
        newLetter = 'U';
    } else if (letter == 't' || letter == 'T'){
        newLetter = 'A';
    } else if (letter == 'c' || letter == 'C'){
        newLetter = 'G';
    } else if (letter == 'g' || letter == 'G'){
        newLetter = 'C';
    }
    return newLetter;
}

//This function takes in the dna string, translates it letter by letter using the other function
//and then adds the letter to a new string to be returned
string convert_DNA_to_mRNA(string newDna){
    string DNAstring;
    for (int x = 0; x < newDna.length(); x++){
        DNAstring = DNAstring + DNAbase_to_mRNAbase(newDna[x]);
    }
    return DNAstring;
}

int main(){
    ifstream dna("dna.txt");
    string strand;
    // getline(dna, strand);
    if (dna.fail()){
        cout << "File cannot be read, opened, or does not exist.\n";
        exit(1);
    }

    while (getline(dna, strand)){
        cout << convert_DNA_to_mRNA(strand) << endl;
    }
    dna.close();
    return 0;
}