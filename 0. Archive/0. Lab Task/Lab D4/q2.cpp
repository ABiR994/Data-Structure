#include <iostream>
#include <climits>
using namespace std;

void input(int arr[3][3]) {
    cout << "Enter elements (3x3):" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
}

int main() {
    int arr1[3][3], arr2[3][3];
    cout << "Array 1:" << endl;
    input(arr1);
    cout << "Array 2:" << endl;
    input(arr2);

    int sub[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sub[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    int smallest = INT_MAX;
    cout << "Subtraction of the two arrays:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << sub[i][j] << " ";
            if(sub[i][j] < smallest) {
                smallest = sub[i][j];
            }
        }
        cout << endl;
    }

    cout << "The smallest element in the subtracted matrix is: " << smallest << endl;
    return 0;
}