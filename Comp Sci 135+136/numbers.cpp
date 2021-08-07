// Author: Julia Yu
// Date: February 28, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 5

#include <iostream>
using namespace std;

//Lab A
//Function that takes in 2 integers (n and d) and checks if n is divisible by d
//If it is, it returns true, else returns false
bool isDivisibleBy(int n, int d){
    while (d != 0){
        if (n % d == 0){
            return true;
        } else {
            return false;
        }
    }
    return false;
}

//Lab B
//Function that takes an integer and divides it by numbers ranging from 2 to the int - 1
//It returns true if it is prime, and false if its not
bool isPrime(int n){
    bool prime = false;
    for (int tracker = 2; tracker < n - 1; tracker++){
        if (n % tracker != 0){
            prime = true;
        } else {
            prime = false;
            break;
        }
    }
    if (n == 2 || n == 3){
        prime = true;
    }
    return prime;
}

//Lab C
//Takes an integer and calculates the next largest number that is prime
int nextPrime(int n){
    int original = n;
    while (isPrime(n) == false || (isPrime(n) == true && n == original)){
        n++;
    }
    return n;
}

//Lab D
//Takes an interval and returns the number of prime numbers are in that interval
int countPrimes(int a, int b){
    int primeCounter = 0;
    for (int start = a; start <= b; start++){
        if(isPrime(start) == true){
            primeCounter++;
        }
    }
    return primeCounter;
}

//Lab E
//Takes an integer and determines if it is a twin prime
bool isTwinPrime(int n){
    bool prime = false;
    if (isPrime(n) == true){
        n += 2;
        if (isPrime(n) == true){
            prime = true;
        } else {
            n -= 4;
            if (isPrime(n) == true){
                prime = true;
            }
        }
    }
    return prime;
}

//Lab F
//Takes in an integer and calculates the next biggest twin prime
int nextTwinPrime(int n){
    int original = n;
    while (isTwinPrime(n) == false || (isTwinPrime(n) == true && n == original)){
        n++;
    }
    return n;
}

//Lab G
//Takes in a ramge and returns the highest twin prime in that range
int largestTwinPrime(int a, int b){
    for (int end = b; end >= a; end--){
        if (isTwinPrime(end) == true){
            return end;
            break;
        }
    }
    return -1;
}

int main(){
    int a, b;
    cout << "Enter integer(s): ";
    cin >> a >> b;
    cout << largestTwinPrime(a, b);
    return 0;
}