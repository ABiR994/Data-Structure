#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if(n < 0) {
        cout << "Sum of digits is not defined for negative numbers." << endl;
    } else {
        cout << "Sum of digits of " << n << " is " << sumOfDigits(n) << endl;
    }
    return 0;
}