#include <iostream>
using namespace std;

void input(int arr[], int n) {
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void evenOdd(int arr[], int n) {
    int oddCount = 0;
    int evenCount = 0;

    int oddSum = 0;
    int evenSum = 0;

    for (int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenSum += arr[i];
            evenCount++;
        } else {
            oddSum += arr[i];
            oddCount++;
        }
    }

    cout << "Total odd numbers: " << oddCount << endl;
    cout << "Total even numbers: " << evenCount << endl;
    cout << "Sum of odd numbers: " << oddSum << endl;
    cout << "Sum of even numbers: " << evenSum << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    input(arr, n);

    evenOdd(arr, n);

    return 0;
}