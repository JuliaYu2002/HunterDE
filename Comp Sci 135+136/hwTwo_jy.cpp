// Author: Julia Yu
// Date: January 27, 2020
// Course: CSCI-136
// Instructor: Prof. Maryash
// Assignment: Hw 2.10
// This program asks for the number of gallons of gas, its efficiency, and the price
// It outputs the price for 100 gallons and the distance that can be travelled using the gas rate and the amount

#include <iostream>
using namespace std;

int main(){
    double gallons, efficiency, price;
    cout << "Number of gallons in the tank: ";
    cin >> gallons;
    cout << "Fuel efficiency in miles per gallon: ";
    cin >> efficiency;
    cout << "Price per gallon: ";
    cin >> price;

    double cost = (100 / efficiency) * price; //cost per 100 miles
    int distance = gallons * efficiency;

    cout << "Cost per 100 miles: " << cost << endl;
    cout << "Distance travelable: " << distance;

    return 0;
}
