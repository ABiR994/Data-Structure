#include <iostream>
using namespace std;

int main() {
    cout << "Enter your name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    cout << "Enter your age: ";
    int age;
    cin >> age;
    cout << "You are " << age << " years old." << endl;

    cout << "Enter your height: ";
    double height;
    cin >> height;
    cout << "Your height is " << height << " meters." << endl;
    return 0;
}