#include <iostream>
#include <climits>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "The largest element in the array is: " << largest << endl;

    int secondLargest = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }
    cout << "The second largest element in the array is: " << secondLargest << endl;
    return 0;
}