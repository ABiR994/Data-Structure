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


void transpose(int mat[3][4]) {
    cout << "The transpose matrix is:" << endl;
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 3; i++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeMul3(int mat[3][4]) {
    cout << "The transpose matrix after multiplying 3 to each element is:" << endl;
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 3; i++) {
            cout << (mat[i][j] * 3) << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat[3][4];
    input(mat);
    cout << endl;
    transpose(mat);
    cout << endl;
    transposeMul3(mat);
    return 0;
}