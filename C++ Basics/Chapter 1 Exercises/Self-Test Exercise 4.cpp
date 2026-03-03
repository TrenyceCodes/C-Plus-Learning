#include <iostream>
using namespace std;

int main() {
    int x{1};
    int y{1};
    int z{1};
    //3x
    3*x;
    //3x+y
    3*x+y;
    int total = x+y;
    cout << "x+y/7 is: " << total/7.0 << "\n";
    //(3x+y)/z+2
    cout << "(3x+y)/z+2 is: " << ((3.0*x)+y)/(z+2.0);
    return 0;
}
