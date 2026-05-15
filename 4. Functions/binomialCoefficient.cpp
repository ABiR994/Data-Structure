#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

double nCr(int n, int r) {
    if(r > n) {
        return 0;
    } else {
        return (factorial(n) / ((factorial(r) * factorial(n - r))));
    }
}

int main() {
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;
    cout << "Binomial Coefficient C(" << n << ", " << r << ") is " << nCr(n, r) << endl;
    return 0;
}