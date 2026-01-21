#include <iostream>
using namespace std;

int main() {
    cout << "Enter a positive integer n: ";
    int n;
    cin >> n;

    // Print * pattern
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    // Print numbers pattern
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Print numbers pattern
    int count = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << count << " ";
        }
        count++;
        cout << endl;
    }

    cout << endl;

    //Print character pattern
    char ch = 'A';
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }

    cout << endl;

    // Print reverse numbers pattern
    for(int i = 1; i <= n; i++) {
        for(int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Print sequential numbers pattern (Floyd's Triangle)
    int count2 = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << count2 << " ";
            count2++;
        }
        cout << endl;
    }

    cout << endl;

    // Print right-aligned numbers pattern
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            cout << "  ";
        }
        for(int j = 0; j < n - i; j++) {
            cout << (i + 1) << " ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}