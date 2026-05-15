#include <iostream>
using namespace std;

void input(int mat[3][4]) {
    cout << "Enter 12 elements for the matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> mat[i][j];
        }
    }
}

void compute(int mat[3][4]) {
    cout << "The computed matrix is:" << endl;
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 3; i++) {
            cout << ((2 * mat[i][j]) + mat[i][j]) << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat[3][4];
    input(mat);
    cout << endl;
    compute(mat);
    return 0;
}