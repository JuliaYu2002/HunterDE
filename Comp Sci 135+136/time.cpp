// Author: Julia Yu
// Date: April 22, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Assignment: Lab 10

#include <iostream>
using namespace std;

class Time{
public:
    int h;
    int m;
};

//A
int minutesSinceMidnight(Time time){
    int mins = 0;
    mins = (time.h * 60) + time.m;
    return mins;
}

int minutesUntil(Time earlier, Time later){
    int mins = 0;
    mins = (later.h - earlier.h) * 60 + (later.m - earlier.m);
    return mins;
}

//B
Time addMinutes(Time time0, int min){
    Time newTime;
    newTime.h = time0.h + (time0.m + min) / 60;
    newTime.m = (time0.m + min) % 60;
    return newTime;
}

//C
enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie { 
public: 
    string title;
    Genre genre;
    int duration;
};

class TimeSlot { 
public: 
    Movie movie;
    Time startTime;
};

void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts){
    Time endingTime = addMinutes(ts.startTime, ts.movie.duration);
    printMovie(ts.movie);
    cout << "[starts at " << ts.startTime.h << ":" << ts.startTime.m << ", ends by " <<endingTime.h << ":" << endingTime.m << "]" << endl;
}

//D
TimeSlot scheduleAfter(TimeSlot ts, Movie NextMovie){
    TimeSlot nextTimeSlot;
    nextTimeSlot.movie = NextMovie;
    nextTimeSlot.startTime = addMinutes(ts.startTime, ts.movie.duration);
    return nextTimeSlot;
}

//E
bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    if (minutesSinceMidnight(ts1.startTime) < minutesSinceMidnight(ts2.startTime)){
        return ts1.movie.duration > (minutesSinceMidnight(ts2.startTime) - minutesSinceMidnight(ts1.startTime));
    } else {
        return ts2.movie.duration > (minutesSinceMidnight(ts1.startTime) - minutesSinceMidnight(ts2.startTime));
    }
}

int main(){
    //A
    // cout << minutesUntil({10, 30}, {13, 40});
    //B
    // addMinutes({8, 10}, 75);
    //C
    // Movie movie1{"Hell", COMEDY, 75};
    // TimeSlot num1{movie1, {10, 30}};
    // printTimeSlot(num1);
    return 0;
}