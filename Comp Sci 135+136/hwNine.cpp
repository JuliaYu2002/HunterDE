// Author: Julia Yu
// Date: March 9, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Hw 5.14

#include <iostream>
using namespace std;

//This function doesn't return anything
//but it swaps the 2 numbers' values if a is greater than b
void sort2(int &a, int &b){
    int swapVar = b;
    if (a > b){
        b = a;
        a = swapVar;
    }
}

void sort3(int& a, int& b, int& c){
    if (a > b){
        sort2(a, b);
        if (b > c){
            sort2(b, c);
            if (a > b){
                sort2(a, b);
            }
        }
    } else if (b > c){
        sort2(b, c);
        if (a > b){
            sort2(a, b);
        }
    } else if (a > c){
        sort2(a, c);
        if (a > b){
            sort2(a, b);
        }
    }
}

int main(){
    int x, y, z;
    cout << "Enter nums: ";
    cin >> x >> y >> z;
    return 0;
}