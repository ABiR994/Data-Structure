#include <iostream>
using namespace std;

void printOdd(int s, int e) {
    for(int i = s; i <= e; i++) {
        if(i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    cout << "Starting value: ";
    int s;
    cin >> s;
    cout << "Ending value: ";
    int e;
    cin >> e;

    printOdd(s, e);

    return 0;
}