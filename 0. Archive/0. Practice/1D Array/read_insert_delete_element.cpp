#include <iostream>
using namespace std;

void print(int arr[], int n) {
    cout << "Array Elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void menu() {
    cout << "Menu:" << endl;
    cout << "1. Insert Element" << endl;
    cout << "2. Delete Element" << endl;
    cout << "3. Find Element" << endl;
    cout << "4. Exit" << endl;
}

void insert(int *arr, int *n) {
    int element, position;
    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position to insert (0-" << *n - 1 << "): ";
    cin >> position;

    if(position < 0 || position > 9) {
        cout << "Invalid position." << endl;
        return;
    }

    if(position > *n) {
        cout << "Position is greater than the number of elements. Inserting at the end." << endl;
        position = *n;
        arr[position] = element;
        (*n)++;
        cout << "Element inserted successfully." << endl;
        return;
    }

    for(int i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    (*n)++;
    cout << "Element inserted successfully." << endl;
}

void deleteElement(int *arr, int *n) {
    int position;
    cout << "Enter the position to delete (0-" << *n - 1 << "): ";
    cin >> position;

    if(position < 0 || position >= *n) {
        cout << "Invalid position." << endl;
        return;
    }

    for(int i = position; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;
    cout << "Element deleted successfully." << endl;
}

void findElement(int *arr, int *n) {
    int element;
    cout << "Enter the element to find: ";
    cin >> element;

    for(int i = 0; i < *n; i++) {
        if(arr[i] == element) {
            cout << "Element found at position: " << i << endl;
            return;
        }
    }
    cout << "Element not found in the array." << endl;
}

int main() {
    int arr[10] = {12, 34, 56, 78, 90};
    int n = 5;
    int choice;
    do {
        print(arr, n);
        cout << endl;
        menu();
        cout << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        cout << endl;
        switch(choice) {
            case 1:
                insert(arr, &n);
                cout << endl;
                break;
            case 2:
                deleteElement(arr, &n);
                cout << endl;
                break;
            case 3:
                findElement(arr, &n);
                cout << endl;
                break;
            case 4:
                cout << "Exiting...." << endl;
                return 0;
        }
    } while(choice != 5);

    return 0;
}
