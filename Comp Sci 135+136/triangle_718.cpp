// Author: Julia Yu
// Date: April 15, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Hw 7.18

#include <iostream>
#include <cmath>
using namespace std;

class Point{
public:
    double x;
    double y;
};

class Triangle{
public:
    Point a;
    Point b;
    Point c;
};

double distance(Point a, Point b){
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

double perimeter(Triangle a){
    return distance(a.a, a.b) + distance(a.b, a.c) + distance(a.a, a.c);
}

int main(){
    
    return 0;
}