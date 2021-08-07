// Author: Julia Yu
// Date: May 11, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Hw 6.18

#include <iostream>
#include <vector>
using namespace std;

vector <int> append(vector <int> a, vector <int> b){
    for (int i = 0; i < b.size(); i++){
        a.push_back(b[i]);
    }
    return a;
}

int main(){
    return 0;
}