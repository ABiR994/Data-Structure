#include<iostream>
using namespace std;

int main(void) {

    int arr[] = {7,2,1,45,20,29,25,15};
    int a = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < a - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < a; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    for(int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
