#include <iostream>
using namespace std;

int calculateSum(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    cout << "Enter a positive integer: ";
    int n;
    cin >> n;

    cout << "Sum of numbers from 1 to " << n << " is " << calculateSum(n) << endl;
    return 0;
}