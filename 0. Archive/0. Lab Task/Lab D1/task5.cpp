#include <iostream>
using namespace std;

void input(int mat[3][3]) {
    cout << "Enter 9 elements for the matrix:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> mat[i][j];
        }
    }
}

int main() {
    int mat1[3][3], mat2[3][3], mat3[3][3], sum[3][3];

    input(mat1);
    input(mat2);
    input(mat3);

    cout << "Sum of the three matrices is:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j] + mat3[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}