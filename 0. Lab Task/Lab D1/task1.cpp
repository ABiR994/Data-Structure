#include <iostream>
#include <climits>
using namespace std;

void input(int arr[], int n) {
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

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

float average(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    float avg = (float)sum / n;
    return avg;
}

int main() {
    int arr[5];

    input(arr, 5);

    cout << "Reverse order: ";
    for(int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Largest element: " << findMax(arr, 5) << endl;
    cout << "Smallest element: " << findMin(arr, 5) << endl;

    cout << "Average: " << average(arr, 5) << endl;

    return 0;
}