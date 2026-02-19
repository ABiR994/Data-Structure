#include <iostream>
using namespace std;

int main() {
    int arr[10] = {5, 10, 15, 20, 25};
    int n = 5; // Current number of elements in the array
    int element, position;

    cout << "Enter the element to insert: ";
    cin >> element;

    cout << "Enter the position to insert: ";
    cin >> position;

    for(int i = n; i > position; i--) {
        arr[i] = arr[i - 1]; // Shift elements to the right
    }

    arr[position] = element; // Insert the new element
    n++; // Increment the number of elements

    cout << "Updated array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}