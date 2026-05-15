#include <iostream>
using namespace std;

bool primeNum(int n) {
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

void printPrime(int n) {
    if(n <= 1) {
        cout << "No prime numbers less than or equal to " << n << "." << endl;
        return;
    }

    cout << "Prime numbers: ";
    for(int i = 2; i <= n; i++) {
        if(primeNum(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    printPrime(n);
    return 0;
}