#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    double number = (6/5.0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    cout << "The total of number is " << number; 
    return 0;
}
