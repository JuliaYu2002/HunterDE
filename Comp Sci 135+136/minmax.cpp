// Author: Julia Yu
// Date: February 10, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 3B

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main(){
    ifstream level("Current_Reservoir_Levels.tsv");
    if (level.fail()){
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }
    string junk, date;
    double eastSt, eastEl, westSt, westEl;
    getline(level, junk); // read one line from the file
    double max = 0, min = 1000;
    while (level >> date >> eastSt >> eastEl >> westSt >> westEl){
        level.ignore(INT_MAX, '\n');
        if (eastSt > max){ //Loops through to see if the value is the largest
            max = eastSt;
        }
        if (eastSt < min){ //Loops through to see if the value is the smallest
            min = eastSt;
        }
    }
    cout << "Max storage in east basin: " << max << " billion gallons" << endl;
    cout << "Min storage in east basin: " << min << " billion gallons";
    level.close();
}