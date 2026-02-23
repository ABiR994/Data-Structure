#include<iostream>
using namespace std;

int main(void) {
    int size=20;
    int arr[size];
    int sum = 0;
    for(int i=0; i<size; i++) {
        arr[i] = i+1;
    }
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
        sum = sum + arr[i];
    }

    cout<<endl<<"Sum is: "<<sum;
    return 0;
}
