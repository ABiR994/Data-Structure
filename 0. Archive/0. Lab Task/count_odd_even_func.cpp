#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int n) {
    int oddCount = 0;
    int evenCount = 0;

    for (int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Number of odd numbers: " << oddCount << endl;
    cout << "Number of even numbers: " << evenCount << endl;
}

int main() {
    int arr[10] = {12, 39, 13, 59, 37, 49, 56, 79, 90, 11};
    countEvenOdd(arr, 10);
    return 0;
}