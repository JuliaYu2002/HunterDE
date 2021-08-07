// Author: Julia Yu
// Date: March 26, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Project 2D

#include <iostream>
#include <fstream>
using namespace std;

//DNAbase_to_mRNAbase -> takes in a letter and returns the corresponding RNA base
char DNAbase_to_mRNAbase(char letter){
    letter = toupper(letter);
    switch (letter){
    case 'A':
        return 'U';
    case 'T':
        return 'A';
    case 'C':
        return 'G';
    case 'G':
        return 'C';
    default:
        return -1;
    }
}

//mRNA_to_acid -> takes in the codon file and the converted dna string
//reads in the key and the values and checks if it matches the converted dna string
string mRNA_to_acid(fstream &codons, string mrnastrand){
    string key, value;
    codons.clear();  // reset error state
    codons.seekg(0); // return file pointer to the beginning
    while (codons >> key >> value){
        if (key == mrnastrand){
            return value;
        }
    }
    return "";
}

int main(){
    fstream inFile("frameshift_mutations.txt");
    fstream codons("codons.tsv");
    if (inFile.fail() || codons.fail()){
        cout << "File cannot be read!" << endl;
        return -1;
    }

    string strand, final;
    string mRNA = "";
    bool scan = false;
    while (getline(inFile, strand)){
        for (int i = 0; i < strand.length(); i++){
            if (mRNA.length() != 2){ //checks if the translation is 2
                mRNA += DNAbase_to_mRNAbase(strand[i]);
            } else {
                mRNA += DNAbase_to_mRNAbase(strand[i]);
                string acid = mRNA_to_acid(codons, mRNA); //converts the rna to the correstponding pattern
                if (acid == "Stop" and scan == true){
                    scan = false;
                    mRNA = "";
                    break;
                } else if (acid == "Met"){
                    scan = true;
                    final += acid + "-";
                    mRNA = "";
                } else {
                    if (scan){
                        final += acid + '-';
                        mRNA = "";
                    }
                }
                if (mRNA.length() == 3){
                    mRNA = mRNA.substr(1, 2);
                }
            }
        }
        final = final.substr(0, final.length() - 1);
        cout << final << endl; //prints out the finished line; without the dash at the end
        final = "";
    }
    inFile.close();
    codons.close();
    return 0;
}