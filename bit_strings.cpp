#include <bits/stdc++.h>

class Node {
public:
    char data;
    Node* next;

    Node(char value){
        data=value;
        next=nullptr;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack(){
        top=nullptr;
    }

    bool isEmpty() const {
        return top == nullptr;
    }
    void push(char value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    char pop() {
        if (isEmpty()) {
            std::cerr << "Stack underflow\n";
            exit(EXIT_FAILURE);
        }

        Node* temp = top;
        top = top->next;
        char popped = temp->data;
        delete temp;
        return popped;
    }
};

bool isPalindrome(const char* str) {
    int len = strlen(str);
    Stack stack;

    for (int i = 0; i < len / 2; i++) {
        stack.push(str[i]);
    }

    bool palindrome = true;
    for (int i = (len + 1) / 2; i < len; i++) {
        if (stack.pop() != str[i]) {
            palindrome = false;
            break;
        }
    }

    return palindrome;
}

int main() {
    const char* testString = "radar";

    if (isPalindrome(testString)) {
        std::cout << "The string is a palindrome.\n";
    } else {
        std::cout << "The string is not a palindrome.\n";
    }

    return 0;
}
