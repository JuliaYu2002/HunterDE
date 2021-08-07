// Author: Julia Yu
// Date: March 9, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Hw 5.14

#include <iostream>
using namespace std;

//This function doesn't return anything
//but it swaps the 2 numbers' values if a is greater than b
void sort2(int& a, int& b){
    int swapVar = b;
    if (a > b){
        b = a;
        a = swapVar;
    }
}

int main(){
    int x, y;
    cout << "Enter nums: ";
    cin >> x >> y;
    // sort2(x, y);
    return 0;
}