#include <iostream>
using namespace std;

int main() {
    int arr[10] = {32, 4, 5, 12, 5, 54, 6, 23, 3, 5};
    int n;
    cout << "Enter the element to search: ";
    cin >> n;

    for(int i = 0; i < 10; i++) {
        if(arr[i] == n) {
            cout << n << " found at index: " << i << endl;
            return 0;
        }
    }
    cout << "Element not found in the array." << endl;
    return 0;
}