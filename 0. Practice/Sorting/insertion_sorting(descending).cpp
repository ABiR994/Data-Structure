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

    for(int i = 1; i < size; i++) {
        int counter = arr[i];
        int j;

        for(j = i - 1; (j >= 0) && (arr[j] < counter); j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = counter;
    }

    cout << "Array after sorting: ";
    print(arr, size);

    return 0;
}
