#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n < 2) {
        cout << "Error! Not a prime number." << endl;
        return false;
    }
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            cout << "Error! Not a prime number." << endl;
            return false;
        }
    }
    return true;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

void calcAns(int n) {
    if(isPrime(n)) {
        cout << "Factorial of " << n << " is " << factorial(n) << endl;
    }
}

int main() {
    int n;
    cout << "Enter a positive prime integer: ";
    cin >> n;
    calcAns(n);
    return 0;
}