// Author: Julia Yu
// Date: April 30, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 11D

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
    static const int MAX_POSTS = 100;
    int numPosts;
    Post posts[MAX_POSTS];
public:
    Network();
    bool writePost(string usrn, string msg);
    bool printTimeline(string usrn);
    bool addUser(string usrn, string dspn); //adds a new user if it fulfills the conditions
    bool follow(string usrn1, string usrn2); //makes it so that if the username is in the user pool, if has the first user follow the second
    void printDot(); //prints usernames and connections in a digraph format
};

struct Post{
    string username;
    string messge;
};

Network::Network(){
    numUsers = 0;
    numPosts = 0;
    for (int i = 0; i < MAX_USERS; i++){
        for (int j = 0; j < MAX_USERS; j++){
            following[i][j] = 0;
        }
    }
}

bool Network::writePost(string usrn, string msg){
    if (numPosts == MAX_POSTS){
        return false;
    } else if (findID(usrn) != 1){
        posts[numPosts] = {usrn, msg};
        numPosts++;
        return true;
    }
    return false;
}

bool Network::printTimeline(string usrn){
    int userID = findID(usrn);
    int currentUserID;
    for (int i = numPosts; i >= 0; i--){
        currentUserID = findID(posts[i].username);
        if (currentUserID == userID || following[userID][currentUserID]){
            cout << profiles[currentUserID].getFullName() << ": " << posts[i].messge << endl;
        }
    }
    return true;
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

    nw.follow("mario", "luigi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");

    // write some posts
    nw.writePost("mario", "It's a-me, Mario!");
    nw.writePost("luigi", "Hey hey!");
    nw.writePost("mario", "Hi Luigi!");
    nw.writePost("yoshi", "Test 1");
    nw.writePost("yoshi", "Test 2");
    nw.writePost("luigi", "I just hope this crazy plan of yours works!");
    nw.writePost("mario", "My crazy plans always work!");
    nw.writePost("yoshi", "Test 3");
    nw.writePost("yoshi", "Test 4");
    nw.writePost("yoshi", "Test 5");

    cout << endl;
    cout << "======= Mario's timeline =======" << endl;
    nw.printTimeline("mario");
    cout << endl;

    cout << "======= Yoshi's timeline =======" << endl;
    nw.printTimeline("yoshi");
    cout << endl;
}