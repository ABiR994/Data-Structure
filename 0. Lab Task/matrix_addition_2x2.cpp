#include <iostream>
using namespace std;

void input(int mat[2][2]) {
    cout << "Enter 4 elements for the matrix:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> mat[i][j];
        }
    }
}

int main() {
    int mat1[2][2], mat2[2][2], sum[2][2];

    input(mat1);
    input(mat2);

    cout << "Sum of the two matrices is:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}