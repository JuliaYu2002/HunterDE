// Author: Julia Yu
// Date: February 10, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 3C

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
    double eastSt, eastEl, westSt, westEl;
    string junk, date, startDate, endDate;
    getline(level, junk); // read one line from the file
    cout << "Enter start date: ";
    cin >> startDate;
    cout << "Enter end date: ";
    cin >> endDate;

    while (level >> date >> eastSt >> eastEl >> westSt >> westEl){
        level.ignore(INT_MAX, '\n');
        if (date >= startDate && date <= endDate){ //Checks if the current date is in range
            if (eastEl < westEl){ //Sees which elevation is greater
                cout << date << " West" << endl;
            } else if (eastEl > westEl){
                cout << date << " East" << endl;
            }
        }
    }
    level.close();
}