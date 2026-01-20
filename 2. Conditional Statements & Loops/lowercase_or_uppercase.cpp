#include <iostream>
using namespace std;

int main() {
    cout << "Enter your character: ";
    char ch;
    cin >> ch;

    if(ch >= 'a' && ch <= 'z') {
        cout << "The character is lowercase." << endl;
    } else if(ch >= 'A' && ch <= 'Z') {
        cout << "The character is uppercase." << endl;
    } else {
        cout << "The character is neither lowercase nor uppercase." << endl;
    }
    return 0;
}