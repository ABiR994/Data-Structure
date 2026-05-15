#include <iostream>
using namespace std;

class Stack {
    private:
        int *arr;
        int top;
        int capacity;

    public:
        // Constructor
        Stack(int size) {
            capacity = size;
            top = -1;
            arr = new int[capacity];
        }

        // Destructor (important for dynamic memory)
        ~Stack() {
            delete[] arr;
        }

        bool isEmpty() {
            if(top == -1) {
                return true;
            } else {
                return false;
            }
        }

        bool isFull() {
            if(top == capacity - 1) {
                return true;
            } else {
                return false;
            }
        }

        void push(int element) {
            if(isFull()) {
                cout << "Stack is full. Resizing..." << endl;

                // Double the capacity
                int newCapacity = capacity * 2;
                int *newArr = new int[newCapacity];

                // Copy old elements
                for(int i = 0; i <= top; i++) {
                    newArr[i] = arr[i];
                }

                delete[] arr;
                arr = newArr;
                capacity = newCapacity;
            }

            arr[++top] = element;
        }

        int pop() {
            if(isEmpty()) {
                cout << "Stack is empty." << endl;
                return -1;
            } else {
                return arr[top--];
            }
        }

        void topElement() {
            if(isEmpty()) {
                cout << "Stack is empty." << endl;
            } else {
                cout << "Top element: " << arr[top] << endl;
            }
        }

        void show() {
            if(isEmpty()) {
                cout << "Stack is empty." << endl;
            } else {
                cout << "Stack: ";
                for(int i = top; i >= 0; i--) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
};

int main() {
    Stack s(3); // small size to test resizing

    s.push(10);
    s.push(20);
    s.push(30);

    s.show();

    // This will trigger resizing
    s.push(40);
    s.push(50);

    s.show();

    s.topElement();

    s.pop();
    s.show();

    return 0;
}