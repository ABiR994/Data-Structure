#include <iostream>
using namespace std;

int main()
{
    int row = 2;
    int col = 3;

    int matrix[row][col] = {{1, 2, 3}, {4, 5, 6}};
    int transpose[col][row];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    //Transpose matrix
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
}
