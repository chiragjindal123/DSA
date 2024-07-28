#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
    int top;
    int arr[MAX_SIZE];
public:
    Stack() { top = -1; }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX_SIZE - 1);
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = x;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
       }
        return arr[top];
    }
};

int main() {
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);

    cout << "Top element: " << s.peek() << endl;

    cout << "Popped element: " << s.pop() << endl;
    cout << "Popped element: " << s.pop() << endl;

    cout << "Top element: " << s.peek() << endl;

    return 0;
}