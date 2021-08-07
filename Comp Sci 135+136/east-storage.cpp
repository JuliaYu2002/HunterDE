// Author: Julia Yu
// Date: February 10, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 3A

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
    string junk, date, eastSt, eastEl, westSt, westEl, enterDate;
    getline(level, junk); // read one line from the file
    cout << "Enter date: ";
    cin >> enterDate;

    while (level >> date >> eastSt >> eastEl >> westSt >> westEl){
        level.ignore(INT_MAX, '\n');
        if (date == enterDate){ //This checks if the date in the file matches the date entered
            cout << "East basin storage: " << eastSt << " billion gallons";
            level.close();
        }
    }
    level.close();
}