// Author: Julia Yu
// Date: May 11, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 12D

#include <iostream>
#include <vector>
using namespace std;

vector<int> sumPairWise(vector<int>& v1, vector<int>& v2){
    vector <int> result;
    int bigger_size;
    if (v1.size() < v2.size()){ //Checks if the first vector is smaller than the second
        bigger_size = v2.size(); //sets this variable to the larger size
        for (int i = v1.size(); i < v2.size(); i++){
            v1.push_back(0); //sticks 0s to the end of the smaller vector as placeholders
        }
    } else {
        bigger_size = v1.size();
        for (int i = v2.size(); i < v1.size(); i++){
            v2.push_back(0);
        }
    }
    for (int i = 0; i < bigger_size; i++){
        int sum;
        sum = v1[i] + v2[i]; //adds the respective numbers together and sticks them to the returnable vector
        result.push_back(sum);
    }
    return result;
}

int main(){
    vector<int> v1{1, 2, 3};
    vector<int> v2{4, 5};
    vector <int> nums = sumPairWise(v2, v1);
    for (int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;
}