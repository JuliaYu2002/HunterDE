// Author: Julia Yu
// Date: May 11, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 12B

#include <iostream>
#include <vector>
using namespace std;

vector<int> goodVibes(vector<int> v){ //Takes in the address of a vector
    vector <int> result; //A new vector to store results in/return
    for (int i = 0; i < v.size(); i++){
        if (v[i] > 0){
            result.push_back(v[i]); //sticks the numbers into the returnable vector
        }
    }
    return result;
}

int main(){
    vector <int> numbers{1, 2, -1, 3, 4, -1, 6};
    vector <int> positives = goodVibes(numbers);
    for (int i = 0; i < positives.size(); i++){
        cout << positives[i] << " ";
    }
    return 0;
}