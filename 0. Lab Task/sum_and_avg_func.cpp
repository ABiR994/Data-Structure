#include <iostream>
using namespace std;

void sumAndAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;
    float average = (float)sum / n;
    cout << "Average: " << average << endl;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    sumAndAverage(arr, 5);
    return 0;
}