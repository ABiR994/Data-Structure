#include <iostream>
using namespace std;

struct CircularQueue {
    int* arr;
    int front;
    int rear;
    int size;
    int count;

    CircularQueue(int s) {
        size = s;
        arr = new int[size];
        front = 0;
        rear = -1;
        count = 0;
    }

    bool isEmpty() {
        if (count == 0)
            return true;

        else
            return false;

    }

    bool isFull() {
        if (count == size)
            return true;

        else
            return false;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is Full"<<endl;
            return;
        }

        rear = (rear + 1) % size;
        arr[rear] = x;
        count = count + 1;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Empty"<<endl;
            return -1;
        }

        int value = arr[front];
        front = (front + 1) % size;
        count = count - 1;
        return value;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        int i = front;
        int elements = count;

        while (elements > 0) {
            cout << arr[i] << " ";
            i = (i + 1) % size;
            elements = elements - 1;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    q.display();

    q.enqueue(60);
    q.enqueue(70);

    q.display();

    return 0;
}
