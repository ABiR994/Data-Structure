#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number: ";
    int number;
    cin >> number;

    if(number <= 1) {
        cout << "The number is not prime." << endl;
        return 0;
    }

    bool isPrime = true;

    for(int i = 2; i < number; i++) {
        if(number % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime) {
        cout << "The number is prime." << endl;
    } else {
        cout << "The number is not prime." << endl;
    }
    return 0;
}