#include <iostream>
using namespace std;

void print(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {32, 3, 55, 7, 2, 99, 14, 67, 13, 59};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: ";
    print(arr, size);

    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Array after sorting: ";
    print(arr, size);

    return 0;
}