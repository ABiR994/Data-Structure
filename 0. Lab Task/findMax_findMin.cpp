#include <iostream>
#include <climits>
using namespace std;

int findMax(int arr[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int n) {
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[5] = {52, 43, 89, 94, 67};

    cout << "Max value: " << findMax(arr, 5) << endl;
    cout << "Min value: " << findMin(arr, 5) << endl;

    return 0;
}