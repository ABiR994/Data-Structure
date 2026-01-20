#include <iostream>
using namespace std;

int main() {
    cout << "Enter a positive integer n: ";
    int n;
    cin >> n;

    // Print numbers pattern
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Print * pattern
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    // Print A pattern
    for(int i = 1; i <= n; i++) {
        char ch = 'A';
        for(int j = 1; j <= n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    cout << endl;

    // Print sequential numbers pattern
    int count = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    cout << endl;

    char ch = 'A';
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    cout << endl;

    // Print * pattern repeated n times
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = 1; k <= n; k++) {
                for(int l = 1; l <= n; l++) {
                    cout << "* ";
                }
                cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}