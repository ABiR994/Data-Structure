#include <iostream>
using namespace std;

void printOdd(int s, int e) {
    cout << "Odd numbers in that range: ";
    for(int i = s; i <= e; i++) {
        if(i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void printEven(int s, int e) {
    cout << "Even numbers in that range: ";
    for(int i = s; i <= e; i++) {
        if(i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    cout << "Starting range: ";
    int s;
    cin >> s;
    cout << "Ending range: ";
    int e;
    cin >> e;

    printOdd(s, e);
    printEven(s, e);

    return 0;
}