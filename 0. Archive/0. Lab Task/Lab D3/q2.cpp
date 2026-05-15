#include <iostream>
using namespace std;

void inputArray(int arr[], int size) {
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void bubbleSort(int arr[], int size, int *pass, int *swaps) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                (*swaps)++;
            }
        }
        (*pass)++;
    }
}

void displayArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size1;
    cout << "Enter size of first array: ";
    cin >> size1;
    int arr1[size1];
    cout << "Array 1:" << endl;
    inputArray(arr1, size1);
    cout << endl;

    int size2;
    cout << "Enter size of second array: ";
    cin >> size2;
    int arr2[size2];
    cout << "Array 2:" << endl;
    inputArray(arr2, size2);
    cout << endl;

    cout << "Array 1 before sorting: ";
    displayArray(arr1, size1);
    cout << endl;

    cout << "Array 2 before sorting: ";
    displayArray(arr2, size2);
    cout << endl;

    int pass1 = 0, pass2 = 0, swap1 = 0, swap2 = 0;

    bubbleSort(arr1, size1, &pass1, &swap1);
    bubbleSort(arr2, size2, &pass2, &swap2);


    cout << "Array 1 after sorting: ";
    displayArray(arr1, size1);
    cout << "Pass: " << pass1 << ", Swap: " << swap1 << endl;
    cout << endl;

    cout << "Array 2 after sorting: ";
    displayArray(arr2, size2);
    cout << "Pass: " << pass2 << ", Swap: " << swap2 << endl;
    cout << endl;

    cout << "Difference in passes: " << (pass1 - pass2) << endl;
    cout << "Difference in swaps: "  << (swap1 - swap2) << endl;
    return 0;
}