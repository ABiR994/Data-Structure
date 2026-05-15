#include <iostream>
using namespace std;

int main() {
    int n;

    // Taking input for array size
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Checking for valid input
    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return 0;
    }

    int arr[100]; // Assuming max size of 100 for simplicity

    // Taking input for array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initializing variables manually instead of predefined functions
    int largest = arr[0], secondLargest = arr[0];
    int smallest = arr[0], secondSmallest = arr[0];

    // Finding largest and smallest elements first
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Finding second largest and second smallest
    // Initialize with a value that is not the largest or smallest
    secondLargest = smallest;
    secondSmallest = largest;

    for (int i = 0; i < n; i++) {
        // Finding second largest
        if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
        // Finding second smallest
        if (arr[i] < secondSmallest && arr[i] > smallest) {
            secondSmallest = arr[i];
        }
    }

    // Checking if second largest or second smallest exists
    if (secondLargest == smallest) {
        cout << "No second distinct largest element found." << endl;
    } else {
        cout << "Second Largest: " << secondLargest << endl;
    }

    if (secondSmallest == largest) {
        cout << "No second distinct smallest element found." << endl;
    } else {
        cout << "Second Smallest: " << secondSmallest << endl;
    }

    return 0;
}
