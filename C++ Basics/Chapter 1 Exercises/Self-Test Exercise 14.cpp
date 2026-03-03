#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    string firstName, lastName;
    int age;
    cout << "Enter your first and last name." << endl;
    cin >> firstName >> lastName;
    cout << "Enter your age." << endl;
    cin >> age;
    cout << "You are " << age << " years old, " << firstName << " " << lastName << endl;
    return 0;
}
