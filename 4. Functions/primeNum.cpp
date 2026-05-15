#include <iostream>
using namespace std;

void primeNum(int n) {
    if(n <= 1) {
        cout << n << " is not a prime number." << endl;
        return;
    }

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            cout << n << " is not a prime number." << endl;
            return;
        }
    }

    cout << n << " is a prime number." << endl;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    primeNum(n);
    return 0;
}