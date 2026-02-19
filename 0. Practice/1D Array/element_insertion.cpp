#include <iostream>
using namespace std;

int main() {
    int arr[10] = {32, 3, 45, 12, 5};
    int i, k;
    int n = 5;

    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr[n++] = 8;

    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    for(i = n; i > 0; i--) {
        arr[i] = arr[i-1];
    }

    arr[0] = 1;
    n++;
    k = 3;

    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(i = n; i > k; i--) {
        arr[i] = arr[i-1];
    }

    arr[k] = 4;
    n++;

    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}