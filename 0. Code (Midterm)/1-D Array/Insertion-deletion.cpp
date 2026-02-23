#include <iostream>
using namespace std;

int main() {

    // ==================== Insertion in an Array ====================
    int insertArray[10] = {1, 2, 4, 5, 6};  // Array with space for insertion
    int size = 5;  // Current size of array
    int insertPos = 2;  // Position where we want to insert (0-based index)
    int insertValue = 3; // Value to insert

    // Shift elements right to make space for new element
    for (int i = size; i > insertPos; i--) {
        insertArray[i] = insertArray[i - 1];
    }
    insertArray[insertPos] = insertValue;
    size++; // Increase the array size

    // Display array after insertion
    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) cout << insertArray[i] << " ";
    cout << endl;

    // ==================== Deletion from an Array ====================
    int deletePos = 3;  // Position to delete (0-based index)

    // Shift elements left to remove the element
    for (int i = deletePos; i < size - 1; i++) {
        insertArray[i] = insertArray[i + 1];
    }
    size--; // Decrease the array size

    // Display array after deletion
    cout << "Array after deletion: ";
    for (int i = 0; i < size; i++) cout << insertArray[i] << " ";
    cout << endl;

    return 0;
}
