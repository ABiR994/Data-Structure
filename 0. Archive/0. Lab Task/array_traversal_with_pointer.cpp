#include <iostream>
using namespace std;

int main() {
    int arr[5] = {32, 43, 97, 21, 56};
    int *ptr = arr;

    cout << "Array elements: ";
    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    return 0;
}