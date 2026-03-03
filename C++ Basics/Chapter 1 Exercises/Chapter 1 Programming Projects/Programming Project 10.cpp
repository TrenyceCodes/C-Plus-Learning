/*Write a program that allows the user to enter a time in seconds and then outputs
how far an object would drop if it is in freefall for that length of time. Assume no
friction or resistance from air and a constant acceleration of 32 feet per second due
to gravity. Use the equation
Distance = 1/2 * acceleration * time^2*/

/* 32 feet per second is about 9.8 meters per second*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int seconds; //seconds is 1-60 seconds
    float distance;

    cout << "Enter your time: ";
    cin >> seconds;
    
    cout << "You have " << seconds << endl;
    distance = (0.5) * 32 * pow(double(seconds), double(2));

    cout << "The total distance is " << distance << endl;
}