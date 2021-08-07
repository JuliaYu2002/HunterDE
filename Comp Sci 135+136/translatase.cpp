// Author: Julia Yu
// Date: March 11, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Project 2B

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

int main(){
    ifstream fin("dna2b.txt");
    ifstream codons("codons.tsv");
    if (fin.fail() || codons.fail()){
        cout << "File cannot be read, opened, or does not exist.";
        exit(1);
    }
    string strand, rna, mutation, final;
    bool scan = false;
    while (getline(fin, strand)){
        for (int i = 0; i < strand.length(); i += 3){
            rna = DNA_to_RNA(strand.substr(i, 3)); //takes every multiple of 3's rna combo
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
        cout << final << endl;
        final = "";
    }
    fin.close();
    return 0;
}