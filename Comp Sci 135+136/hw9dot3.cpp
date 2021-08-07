// Author: Julia Yu
// Date: April 29, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Hw 9.3

#include <iostream>
using namespace std;

class Circuit{
public:
    int get_first_switch_state();
    int get_second_switch_state();
    int get_lamp_state();
    void toggle_first_switch();
    void toggle_second_switch();
private:
    int firstSwitchVal = 0;
    int secondSwitchVal = 0;
    int lamp_state = 0;
};

int Circuit::get_first_switch_state(){
    return firstSwitchVal;
}

int Circuit::get_second_switch_state(){
    return secondSwitchVal;
}

int Circuit::get_lamp_state(){
    return lamp_state;
}

void Circuit::toggle_first_switch(){
    if (firstSwitchVal == 1){
        firstSwitchVal = 0;
    } else if (firstSwitchVal == 0){
        firstSwitchVal = 1;
    }
    if (lamp_state == 0){
        lamp_state = 1;
    } else if (lamp_state == 1){
        lamp_state = 0;
    }
}

void Circuit::toggle_second_switch(){
    if (secondSwitchVal == 1){
        secondSwitchVal = 0;
    } else if (secondSwitchVal == 0){
        secondSwitchVal = 1;
    }
    if (lamp_state == 0){
        lamp_state = 1;
    } else if (lamp_state == 1){
        lamp_state = 0;
    }
}

int main(){
    return 0;
}