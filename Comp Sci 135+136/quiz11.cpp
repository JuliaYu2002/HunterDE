// Author: Julia Yu
// Date: April 29, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Quiz 11

#include <iostream>
using namespace std;

class Money{
public:
    int dollars;
    int cents;
};

Money add_money(Money x, Money y){
    Money newAmount;
    newAmount.dollars = x.dollars + y.dollars;
    newAmount.cents = x.cents + y.cents;
    if (newAmount.cents >= 100){
        int count = 0;
        while(newAmount.cents >= 100){
            newAmount.cents -= 100;
            count++;
        }
        newAmount.dollars += count;
    }
    return newAmount;
}

int main(){
    Money m1 = {4, 80};
    Money m2 = {3, 90};
    Money m3 = add_money(m1, m2);
    cout << m3.dollars << " " << m3.cents;
    return 0;
}