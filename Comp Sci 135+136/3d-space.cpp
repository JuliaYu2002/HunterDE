// Author: Julia Yu
// Date: April 13, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash

#include <iostream>
#include <cmath>
using namespace std;

class Coord3D {
public:
    double x;
    double y;
    double z;
};

//Lab A
//Calculates the length of the vector with specified dimensions
double length(Coord3D *p){
    return sqrt(pow(p->x, 2) + pow(p-> y, 2) + pow(p->z, 2)); //Length of vector equation
}

//Lab B
Coord3D *fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if (length(p1) > length(p2)){
        return p1;
    } else {
        return p2;
    }
}

//Lab C
void move(Coord3D *ppos, Coord3D *pvel, double dt){
    //updates new position ppos in x, y, z
    ppos -> x = ppos -> x + (pvel -> x * dt);
    ppos -> y = ppos -> y + (pvel -> y * dt);
    ppos -> z = ppos -> z + (pvel -> z * dt);
}

//Lab E
Coord3D* createCoord3D(double x, double y, double z){
    Coord3D *p = new Coord3D;
    p -> x = x;
    p -> y = y;
    p -> z = z;
    return p;
}

void deleteCoord3D(Coord3D *p){
    delete p;
}

int main(){
    //A
    // Coord3D pointP = {10, 20, 30};
    // cout << length(&pointP) << endl; // would print 37.4166
    // //B
    // Coord3D pointQ = {-20, 21, -22};
    // cout << "Address of P: " << &pointP << endl;
    // cout << "Address of Q: " << &pointQ << endl << endl;
    // Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
    // cout << "ans = " << ans << endl; // So which point is farther?
    // //C
    // Coord3D pos = {0, 0, 100.0};
    // Coord3D vel = {1, -5, 0.2};
    // move(&pos, &vel, 2.0); // object pos gets changed
    // cout << pos.x << " " << pos.y << " " << pos.z << endl; //prints: 2 -10 100.4
    //E
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x, y, z);
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x, y, z);
    move(ppos, pvel, 10.0);
    cout << "Coordinates after 10 seconds: " << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;
    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);

    return 0;
}