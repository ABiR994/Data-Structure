#include <iostream>
using namespace std;

int main() {
    cout << "Enter the first number: ";
    int num1;
    cin >> num1;
    cout << "Enter the second number: ";
    int num2;
    cin >> num2;

    int sum = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << "." << endl;

    int difference = num1 - num2;
    cout << "The difference between " << num1 << " and " << num2 << " is " << difference << "." << endl;

    int product = num1 * num2;
    cout << "The product of " << num1 << " and " << num2 << " is " << product << "." << endl;

    double division = num1 / num2;
    cout << "The division of " << num1 << " by " << num2 << " is " << division << "." << endl;

    int remainder = num1 % num2;
    cout << "The remainder of " << num1 << " divided by " << num2 << " is " << remainder << "." << endl;
    return 0;
}