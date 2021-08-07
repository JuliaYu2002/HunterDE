// Author: Julia Yu
// Date: May 13, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Quiz 13

#include <iostream>
#include <vector>
using namespace std;

vector <int> makeVector(int n){
    vector <int> numberVector;
    for (int i = 0; i < n; i++){
        numberVector.push_back(i);
    }
    return numberVector;
}

int main(){
    return 0;
}