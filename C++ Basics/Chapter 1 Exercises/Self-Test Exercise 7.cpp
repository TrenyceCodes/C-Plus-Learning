#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int x, y;
    cout << "Enter your first number: ";
    cin >> x;
    cout << "Enter your second number: ";
    cin >> y;
    cout << "x / y is " << x/y << "\n"; 
    cout << "The remainder of x%y is " << x%y;
    return 0;
}
