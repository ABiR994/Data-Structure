#include <iostream>
using namespace std;

class Stack {
    public:
        static const int size = 10;
        int top = -1;
        int arr[size];

        bool isEmpty() {
            if(top == -1) {
                return true;
            } else {
                return false;
            }
        }

        bool isFull() {
            if(top == size - 1) {
                return true;
            } else {
                return false;
            }
        }

        void push(int element) {
            if(isFull()) {
                cout << "Stack is full. Unable to push." << endl;
            } else {
                arr[++top] = element;
            }
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
    Stack s;

    s.show();

    s.push(12);
    s.push(14);
    s.push(5);
    s.push(21);
    s.push(1);
    s.push(47);

    s.show();

    s.topElement();

    s.pop();
    s.pop();

    s.show();

    return 0;
}
