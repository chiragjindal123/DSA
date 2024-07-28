#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Queue {
    int front, rear;
    int arr[MAX_SIZE];
public:
    Queue() { front = -1; rear = -1; }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return (rear == MAX_SIZE - 1);
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is full!" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }
        arr[rear] = x;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        int removed = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        return removed;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front];
    }
};

int main() {
    Queue q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);

    cout << "Front element: " << q.peek() << endl;

    cout << "Dequeued element: " << q.dequeue() << endl;
    cout << "Dequeued element: " << q.dequeue() << endl;

    cout << "Front element: " << q.peek() << endl;

    return 0;
}