#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 integer values: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Array values: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}