#include <iostream>
using namespace std;

int main() {
    int arr[10] = {32, 23, 12, 3, 56, 58, 94, 7, 13, 67};
    int n = 10;

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int position;
    cout << "Enter the position of the element to delete: ";
    cin >> position;

    for(int i = position; i < n; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
