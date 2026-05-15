#include <iostream>
using namespace std;

void transpose(int mat[3][4]) {
    cout << "The transpose matrix is:" << endl;
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 3; i++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeAdd(int matA[3][4], int matB[3][4]) {
    cout << "The sum of the transpose of the two matrices is:" << endl;
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 3; i++) {
            cout << (matA[i][j] + matB[i][j]) << " ";
        }
        cout << endl;
    }
}

int main() {
    int matA[3][4] = {{1, 0, 2, 3},
                    {4, 1, 5, 2},
                    {6, 2, 1, 0}};

    int matB[3][4] = {{2, 3, 1, 1},
                    {0, 2, 4, 6},
                    {1, 1, 0, 2}};
    cout << endl;
    transpose(matA);
    cout << endl;
    transpose(matB);
    cout << endl;
    transposeAdd(matA, matB);
    return 0;
}