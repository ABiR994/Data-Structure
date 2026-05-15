#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter 10 numbers: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array elements in order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Array elements in reverse order: ";
    for(int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}