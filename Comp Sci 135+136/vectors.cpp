// Author: Julia Yu
// Date: May 11, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 12A

#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n){
    vector <int> nums; // Creates a vector that is returned after the for loop
    for (int i = 0; i < n; i++){ // Makes the vector have numbers from 0 to n - 1
        nums.push_back(i); // Puts the index of the for loop in the vector
    }
    return nums;
}

int main(){
    vector <int> v = makeVector(12);
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}