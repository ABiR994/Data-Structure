#include <iostream>
using namespace std;

int main() {
    cout << "Enter the value of n: ";
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            sum += i;
        }
    }
    cout << "The sum of odd numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}