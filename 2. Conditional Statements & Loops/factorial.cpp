#include <iostream>
using namespace std;

int main() {
    cout << "Enter a positive integer n: ";
    int n;
    cin >> n;

    if(n == 0) {
        cout << "Factorial of 0 is: 1" << endl;
        return 0;
    }

    while(n < 0) {
        cout << "Invalid input. Please enter a positive integer: ";
        cin >> n;
    }

    double factorial = 1.0;
    for(int i = n; i >= 1; i--) {
        factorial *= i;
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;
    return 0;
}