#include<iostream>
using namespace std;

int main() {
    int array1 [5] = {1,2,3,4,5};
    int arr [3][4] = {
                        {10,20,30,35},
                        {40,50,60,65},
                        {70,80,90,95}
                     };
    for(int i=0; i<5; i++) {
        cout<<array1[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<3 ; i++){
        for(int j=0; j<4 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Insert Array with 2 row, 3 col"<<endl;
    int dsu [2][3];

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin>>dsu[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Print array"<<endl;
    for(int i=0; i<2 ; i++){
        for(int j=0; j<3 ; j++){
            cout<<dsu[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
