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

    int element;
    cout<<endl<<"Enter the element for search: ";
    cin>>element;


    int low = 0, high = a - 1;
    int found = -1;

    while(low<=high){

        int mid = low + (high-low)/2;

        if(arr[mid]==element) {
            found = mid;
            break;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }

    if(found != -1){
        cout<<"Element found at index:" <<found;
    }
    else {
        cout<<"Element not found";
    }






    return 0;
}
