// Author: Julia Yu
// Date: March 9, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Hw 8.1

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream write_hello("hello.txt");
    if (write_hello.fail()){
        return -1;
    }
    write_hello << "Hello, World!";
    write_hello.close();
    ifstream out_hello("hello.txt");
    if (out_hello.fail()){
        return -1;
    }
    string hello;
    getline(out_hello, hello);
    cout << hello;
    return 0;
}