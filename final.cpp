#include <iostream>
#include <bits/stdc++.h>
#define size 100
using namespace std;

class Queue
{
    int front, rear;
    int arr[size];

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        return (front == -1 && rear == -1);
    }
    bool isFull()
    {
        return (rear == size - 1);
    }
    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        else if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = x;
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }
};
int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);

    cout << "Front element is: " << q.peek() << endl;
    q.dequeue();
    cout << "Front element is: " << q.peek() << endl;
    q.dequeue();
    cout << "Front element is: " << q.peek() << endl;
    return 0;
}