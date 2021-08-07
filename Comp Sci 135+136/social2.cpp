// Author: Julia Yu
// Date: April 29, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 11B

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

class Network {
private:
    static const int MAX_USERS = 20;
    int numUsers;
    Profile profiles[MAX_USERS];
    int findID (string usrn);
public:
    Network();
    bool addUser(string usrn, string dspn);
};

Network::Network(){
    numUsers = 0;
}

int Network::findID(string usrn){
    for (int i = 0; i < MAX_USERS; i++){
        if (profiles[i].getUsername() == usrn){
            return 1;
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
  cout << nw.addUser("mario", "Mario") << endl;     // true (1)
  cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

  cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
  cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
  cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)

  for(int i = 2; i < 20; i++)
      cout << nw.addUser("mario" + to_string(i), 
                 "Mario" + to_string(i)) << endl;   // true (1)

  cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)
}