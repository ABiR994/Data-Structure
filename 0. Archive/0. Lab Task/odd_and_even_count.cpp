#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter 10 numbers: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int oddCount = 0;
    int evenCount = 0;

    for (int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Number of odd numbers: " << oddCount << endl;
    cout << "Number of even numbers: " << evenCount << endl;

    return 0;
}