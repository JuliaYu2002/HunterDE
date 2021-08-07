// Author: Julia Yu
// Date: March 2, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Quiz 5

#include <iostream>
using namespace std;

int main(){
    for (int row = 0; row < 6; row++){
        for (int col = 0; col < 5; col++){
            cout << "*";
            if (col < 4){
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}