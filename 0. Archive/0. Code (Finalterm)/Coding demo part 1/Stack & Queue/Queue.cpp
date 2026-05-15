#include <iostream>
using namespace std;

struct Queue {
    int* arr;
    int front, rear, capacity;

    Queue(int size) {
        arr = new int[size];
        capacity = size;
        front = 0;
        rear = -1;
    }

    ~Queue() {
        delete[] arr;
    }

    void enqueue(int x) {
        if (rear == capacity - 1) {
            cout << "Queue Overflow\n";
            return;
        }
        arr[++rear] = x;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return -1;
        }
        return arr[front++];
    }

    bool isEmpty() {
        return front > rear;
    }

    int peek() {
        return isEmpty() ? -1 : arr[front];
    }

    int size() {
        return isEmpty() ? 0 : (rear - front + 1);
    }
};

int main() {
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.peek() << endl;

    cout << "Queue contents: ";
    while (!q.isEmpty()) {
        cout << q.dequeue() << " ";
    }
    cout << endl;

    return 0;
}

