// Author: Julia Yu
// Date: March 17, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Project 2C

#include <iostream>
#include <cctype>
#include <fstream>
using namespace std;

//changes the dna character to the corresponding base
char DNAbase_to_mRNAbase(char c){
    c = toupper(c);
    switch (c){
    case 'A':
        return 'U';
    case 'T':
        return 'A';
    case 'C':
        return 'G';
    case 'G':
        return 'C';
    default:
        return 'Z';
    }
}

//uses the function converting the characters in the string and returns a string that has converted characters
string DNA_to_RNA(string strand){
    string rna = "";
    for (int i = 0; i < strand.length(); i++){
        rna += DNAbase_to_mRNAbase(strand[i]);
    }
    return rna;
}

//checks if the key is the same as the rna and if it is, it returns that value
string RNA_to_Mutation(ifstream &codons, string rna){
    string key, value;
    codons.clear();  // reset error state
    codons.seekg(0); // return file pointer to the beginning
    while (codons >> key >> value){
        if (key == rna){
            return value;
        }
    }
    return "";
}

int aminoHammingCount(string firstStr, string secondStr){
    int counter = 0;
    if (firstStr.length() > secondStr.length()){
        for (int n = 0; n < firstStr.length(); n += 4){
            if (firstStr[n] != secondStr[n]){
                counter++;
            }
        }
    } else if (firstStr.length() < secondStr.length()) {
        for (int n = 0; n < secondStr.length(); n += 4){
            if (firstStr[n] != secondStr[n]){
                counter++;
            }
        }
    } else {
        for (int n = 0; n < secondStr.length(); n += 4){
            if (firstStr[n] != secondStr[n]){
                counter++;
            }
        }
    }
    return counter;
}

int letterHammingCount(string firstStr, string secondStr){
    int counter = 0;
    for (int n = 0; n < firstStr.length(); n += 1){
        if (firstStr[n] != secondStr[n]){
            counter++;
        }
    }
    return counter;
}

int main(){
    ifstream strands("mutations.txt");
    ifstream codons("codons.tsv");
    string dna, correct, differ, mutation, strand, rna, final, previous;
    bool scan = false;
    int x = 1;
    if (strands.fail() || codons.fail()){
        cout << "File cannot be read, opened, or does not exist.";
        exit(1);
    }
    while (getline(strands, dna)){
        for (int i = 0; i < dna.length(); i += 3){
            rna = DNA_to_RNA(dna.substr(i, 3)); //takes every multiple of 3's rna combo
            mutation = RNA_to_Mutation(codons, rna);
            if (mutation == "Stop"){ //checks if it is stop, and breaks out of the loop
                scan = false;
                break;
            } else if (mutation == "Met"){
                scan = true;
                final += mutation + "-";
            } else {
                if (scan){ //if scan is true, adds a dash to it
                    final += mutation + "-";
                }
            }
        }
        final = final.substr(0, final.length() - 1);
        // cout << x << ": " << final << endl;
        x++;
        if (x % 2 == 0){
            previous = final;
            differ = dna;
        }
        if (x % 2 != 0 && x > 1){
            // cout << previous << endl << final << endl;
            if (aminoHammingCount(previous, final) > 0){ //there are 2 different functions to calculate the differences between the amino chains and the letters themselves
                cout << letterHammingCount(dna, differ) << " yes" << endl;
            } else {
                cout << letterHammingCount(dna, differ) << " no" << endl;
            }
            // cout << hammingCount(previous, final) << endl;
        }
        final = "";
    }
    strands.close();
    return 0;
}