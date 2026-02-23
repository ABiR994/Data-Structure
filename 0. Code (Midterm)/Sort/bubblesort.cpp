#include<iostream>
using namespace std;

int main(void) {

    int arr[] = {7,2,1,45,20,29,25,15};
    int a = sizeof(arr) / sizeof(arr[0]);
    cout<<"Array Size: "<<a<<endl;

    for(int i=0; i<a-1; i++) {

        for(int j=0; j<a-i-1; j++) {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


    for(int i=0; i<a; i++) {
        cout<<arr[i]<<" ";
    }



    return 0;
}
