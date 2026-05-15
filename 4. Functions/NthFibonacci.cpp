#include <iostream>
using namespace std;

void fibonacci(int n) {
    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
        return;
    } else if (n == 0) {
        cout << n << "th Fibonacci number is 0" << endl;
        return;
    } else if (n == 1) {
        cout << n << "th Fibonacci number is 1" << endl;
        return;
    }
    int a = 0, b = 1;
    int temp;
    for(int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    cout << n << "th Fibonacci number is " << b << endl;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    fibonacci(n);
    return 0;
}