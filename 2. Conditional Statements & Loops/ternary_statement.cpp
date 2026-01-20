#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int number;
    cin >> number;

    string result = (number > 0) ? "The number is positive." : (number < 0) ? "The number is negative." : "The number is zero.";
    cout << result << endl;
    return 0;
}