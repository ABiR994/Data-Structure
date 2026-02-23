#include<iostream>
using namespace std;

int main(void) {

    int arr[] = {7,2,1,45,20,29,25,15};
    int a = sizeof(arr) / sizeof(arr[0]);

    for(int i=1; i<a; i++){
        int counter = arr[i];
        int j;
        for(j=i-1; j>=0 && arr[j]>counter; j--) {
            arr[j+1] = arr[j];
        }
        arr[j+1] = counter;
    }

    for(int i=0; i<a; i++) {
        cout<<arr[i]<<" ";
    }



    return 0;
}
