// Author: Julia Yu
// Date: May 11, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 12C

#include <iostream>
#include <vector>
using namespace std;

void gogeta(vector<int> &goku, vector<int> &vegeta){
    for (int i = 0; i < vegeta.size(); i++){ //Loops through the size of vegeta's array
        goku.push_back(vegeta[i]); //Sticks values from the vegeta vector to the back of the goku vector
    }
    vegeta.clear(); // Empties the second vector
}

int main(){
    vector<int> v1{1, 2, 3};
    vector<int> v2{4, 5};
    gogeta(v1, v2);
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    return 0;
}