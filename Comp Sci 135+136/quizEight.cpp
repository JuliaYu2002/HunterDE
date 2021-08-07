// Author: Julia Yu
// Date: April 23, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Quiz 8

#include <iostream>
using namespace std;

class Date{
public:
    int year;
    int month;
    int day;
    string day_of_week;
};

void printDate(Date *input){
    cout << input->day_of_week << ", " << input->month << "/" << input->day << "/" << input->year << endl;
}

int main(){
    Date date{2020, 10, 29, "Friday"};
    printDate(&date);
    return 0;
}