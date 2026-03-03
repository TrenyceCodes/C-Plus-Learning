/*
Write a program that inputs an integer that represents a length of time in seconds.
The program should then output the number of hours, minutes, and seconds that
corresponds to that number of seconds. For example, if the user inputs 50391 total
seconds then the program should output 13 hours, 59 minutes, and 51 seconds.
*/

#include <iostream>
using namespace std;

int main() {
    int userInput;
    int hours = 0; // hours is in military time so 1-12, after 12pm it becomes 13-23
    int minutes = 0; //minutes is 1-60
    int seconds = 0; // same as minutes

    cout << "The current time is " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds" << endl;
    cout << "Input the number of seconds: ";
    cin >> userInput;
    hours = userInput / 3600;
    minutes = (userInput%3600) / 60;
    seconds = userInput%60;
    cout << "The total number of time from " << userInput << " seconds is " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds";
    return 0;
}