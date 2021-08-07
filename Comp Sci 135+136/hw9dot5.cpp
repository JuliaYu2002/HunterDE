// Author: Julia Yu
// Date: April 29, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Hw 9.5

#include <iostream>
using namespace std;

class Rectangle {
public:
    Rectangle(double input_w, double input_h);
    double get_perimeter();
    double get_area();
    void resize(double factor);
private:
    double width;
    double height;
};

Rectangle::Rectangle(double input_w, double input_h){
    width = input_w;
    height = input_h;
}

double Rectangle::get_perimeter(){
    return (height * 2) + (width * 2);
}

double Rectangle::get_area(){
    return height * width;
}

void Rectangle::resize(double factor){
    height = height * factor;
    width = width * factor;
}

int main(){
    Rectangle small(3, 4);
    cout << small.get_area() << endl << small.get_perimeter() << endl;
    return 0;
}