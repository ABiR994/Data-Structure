#include <iostream>
using namespace std;

int main() {
    int mat[3][3];
    cout << "Enter 9 elements for the matrix:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "The 3x3 matrix is:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}