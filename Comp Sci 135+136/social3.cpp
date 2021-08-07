// Author: Julia Yu
// Date: April 30, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 11C

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Profile{
private:
    string displayname;
    string username;
public:
    // Profile constructor for a user (initializing
    // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    string getUsername();
    // Return name in the format: "displayname (@username)"
    string getFullName();
    // Change display name
    void setDisplayName(string dspn);
};

Profile::Profile(){
    username = "";
    displayname = "";
}

Profile::Profile(string usrn, string dspn){
    username = usrn;
    displayname = dspn;
}

string Profile::getUsername(){
    return username;
}

string Profile::getFullName(){
    string name = displayname +  " (@" + username + ")";
    return name;
}

void Profile::setDisplayName(string dspn){
    displayname = dspn;
}

class Network{
private:
    static const int MAX_USERS = 20;
    int numUsers;
    Profile profiles[MAX_USERS];
    int findID (string usrn); //finds teh id of the user if it exists in the array of users
    bool following[MAX_USERS][MAX_USERS];
public:
    Network();
    bool addUser(string usrn, string dspn); //adds a new user if it fulfills the conditions
    bool follow(string usrn1, string usrn2); //makes it so that if the username is in the user pool, if has the first user follow the second
    void printDot(); //prints usernames and connections in a digraph format
};

Network::Network(){
    numUsers = 0;
    for (int i = 0; i < MAX_USERS; i++){
        for (int j = 0; j < MAX_USERS; j++){
            following[i][j] = 0;
        }
    }
}

bool Network::follow(string usrn1, string usrn2){
    if (findID(usrn1) != -1 && findID(usrn2) != -1){
        for (int i = 0; i < MAX_USERS; i++){
            for (int j = 0; j < MAX_USERS; j++){
                if (profiles[i].getUsername() == usrn1 && profiles[j].getUsername() == usrn2){
                    following[i][j] = true;
                }
            }
        }
        return true;
    } else {
        return false;
    }
}

void Network::printDot(){
    cout << "digraph {" << endl;
    for (int i = 0; i < numUsers; i++){
        cout << "   \"@" << profiles[i].getUsername() << "\"" << endl;
    }
    for (int row = 0; row < numUsers; row++){
        for (int col = 0; col < numUsers; col++){
            if (following[row][col] == true){
                cout << "   \"@" << profiles[row].getUsername() << "\"" << " -> " << "\"@" << profiles[col].getUsername() << "\"" << endl;
            }
        }
    }
    cout << "}";
}

int Network::findID(string usrn){
    for (int i = 0; i < numUsers; i++){
        if (profiles[i].getUsername() == usrn){
            return i;
        }
    }
    return -1;
}

bool Network::addUser(string usrn, string dspn){
    char c;
    for (int i = 0; i < usrn.length(); i++){
        if (!isalnum(usrn[i])){
            return false;
        }
    }
    for (int j = 0; j < MAX_USERS; j++){
        if (profiles[j].getUsername() == usrn){
            return false;
        }
    }
    if (numUsers == 20){
        return false;
    }
    profiles[numUsers] = {usrn, dspn};
    numUsers++;
    return true;
}

int main() {
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw.addUser("wario", "Wario");
    
    // add clone users who follow @mario
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw.follow("mario2", "luigi");

    nw.printDot();
}