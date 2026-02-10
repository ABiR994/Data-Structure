#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    cout << "Array in reverse order: ";
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {31, 23, 45, 67, 89};
    cout << "Original array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseArray(arr, 5);
    return 0;
}