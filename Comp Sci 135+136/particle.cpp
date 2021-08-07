// Author: Julia Yu
// Date: April 14, 2020
// Course: CSCI-135
// Instructor: Prof. Maryash
// Lab 9F

#include <iostream>
#include <cmath>
using namespace std;

class Coord3D {
public:
    double x;
    double y;
    double z;
};

class Particle{
    public:
        Coord3D position, velocity;
};

double length(Coord3D *p){
    return sqrt(pow(p->x, 2) + pow(p-> y, 2) + pow(p->z, 2));
}

Coord3D *fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if (length(p1) > length(p2)){
        return p1;
    } else {
        return p2;
    }
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
    ppos -> x = ppos -> x + (pvel -> x * dt);
    ppos -> y = ppos -> y + (pvel -> y * dt);
    ppos -> z = ppos -> z + (pvel -> z * dt);
}

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

//makes a new particle with specified positioning and velocity
Particle* createParticle(double x, double y, double z, double vx, double vy, double vz){
    Particle *newParticle = new Particle;
    (newParticle -> position).x = x;
    (newParticle -> position).y = y;
    (newParticle -> position).z = z;

    (newParticle -> velocity).x = vx;
    (newParticle -> velocity).y = vy;
    (newParticle -> velocity).z = vz;
    return newParticle;
}

//sets velocity
void setVelocity(Particle *p, double vx, double vy, double vz){
    (p -> velocity).x = vx;
    (p -> velocity).y = vy;
    (p -> velocity).z = vz;
}

//fetches the particle's position
Coord3D getPosition(Particle *p){
    return (p -> position);
}

//moves the position by adding the velocity
void move(Particle *p, double dt){
    (p -> position).x += (p -> velocity).x * dt;
    (p -> position).y += (p -> velocity).y * dt;
    (p -> position).z += (p -> velocity).z * dt;
}

//deletes the particle in order to not overload the system
void deleteParticle(Particle *p){
    delete p;
}

int main(){
    // make new particle
    Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
    double time = 0.0;
    double dt = 0.1; //increments the time by .1 and uses it to calculate where the particle is
    while(time < 3.0) {
        // update its velocity
        setVelocity(p, 10.0 * time, 0.3, 0.1);
        // move the particle
        move(p, dt);
        time += dt;
        // reporting its coordinates
        cout << "Time: " << time << " \t";
        cout << "Position: " << getPosition(p).x << ", " << getPosition(p).y << ", " << getPosition(p).z << endl;
    }
    return 0;
}