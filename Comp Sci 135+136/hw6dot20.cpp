// Author: Julia Yu
// Date: May 12, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Hw 6.20

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> merge_sorted(vector<int> a, vector<int> b){
    vector <int> organizedNums;
    int markedIndex;
    for (int i = 0; i < a.size(); i++){
        organizedNums.push_back(a[i]);
    }
    for (int i = 0; i < b.size(); i++){
        organizedNums.push_back(b[i]);
    }
    sort(organizedNums.begin(), organizedNums.end());
    return organizedNums;
}

int main(){
    vector <int> a = {1, 4, 9, 16};
    vector <int> b = {4, 7, 9, 9, 11};
    vector <int> c = merge_sorted(a, b);
    for (int i = 0; i < c.size(); i++){
        cout << c[i] << " ";
    }
    return 0;
}