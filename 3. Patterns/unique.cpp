#include <iostream>
using namespace std;

int main() {
    cout << "Enter a positive integer n: ";
    int n;
    cin >> n;

    // Print pyramid pattern
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }
        for(int j = 0; j < i + 1 ; j++) {
            cout << j + 1 << " ";
        }
        for(int j = i; j > 0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Print hollow diamond pattern
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }
        for(int j = 0; j < i + 1 ; j++) {
            if(j == 0) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        for(int j = i; j > 0; j--) {
            if(j == 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << "  ";
        }
        cout << "* ";
        if(i != n - 2) {
            for(int j = 0; j < 2 * (n - i) - 5; j++) {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}