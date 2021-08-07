// Author: Julia Yu
// Date: April 2, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Hw 7.16

#include <iostream>
#include <cmath>
using namespace std;

class Point{
public:
    double x;
    double y;
};

double distance(Point a, Point b){
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main(){
    Point val;
    double xVal, yVal;
    cout << "Enter x and y: ";
    cin >> xVal >> yVal;
    val.x = xVal;
    val.y = yVal;
    cout << distance(val, val);
    return 0;
}