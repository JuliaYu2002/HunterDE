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
    const int SIZE = 1000;
    int count = 0;
    string date_array[SIZE];
    double elev_array[SIZE];
    getline(level, junk); // read one line from the file

    cout << "Enter earlier date: ";
    cin >> startDate;
    cout << "Enter later date: ";
    cin >> endDate;

    while (level >> date >> eastSt >> eastEl >> westSt >> westEl){
        level.ignore(INT_MAX, '\n');
        if (date >= startDate && date <= endDate){ //Checks if the current date is in range
            date_array[count] = date; //Adds the current date to the date array
            elev_array[count] = westEl; //Adds the current elevation to the elevation array
            count += 1;
            }
        }
        for (int i = SIZE - 1; i >= 0; i--){
            if (date_array[i] != ""){
                cout << date_array[i] << " " << elev_array[i] << endl;
            }
    }
    level.close();
}