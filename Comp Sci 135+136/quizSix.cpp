// Author: Julia Yu
// Date: March 9, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Quiz 6

#include <iostream>
using namespace std;

int max3(int a, int b, int c){
    if (a > b && a > c){
        return a;
    } else if (b > a && b > c){
        return b;
    } else if (c > a && c > b){
        return c;
    }
}

int main(){
    int x, y, z;
    cout << "Enter nums: ";
    cin >> x >> y >> z;
    cout << max3(x, y, z);
    return 0;
}