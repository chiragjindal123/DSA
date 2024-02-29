// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// class node{

//     public:
//     int value;
//     node*next;
//      node(int val){
//         value=val;
//         next=nullptr;
//      }
// };

// node* insertbegin(node *head,int d){
//     node*temp=new node(d);
//     temp->next=head;
//     head=temp;
//     return head;

// }
// node* insertend(node *head,int d){
//     node*temp=new node(d);
//     if(!head){
//         head=temp;
//     }else{
//         node*cur=head;
//         while(cur->next!=nullptr){
//             cur=cur->next;
//         }
//         cur->next=temp;
//     }
//     return head;

// }

// node*deletebegin(node *head){
//     if(!head){
//         return nullptr;
//     }
//     node*temp=head->next;
//     delete head;
//     return temp;
// }
// node*deleteend(node *head){
//     if(!head){
//         return nullptr;
//     }
//     if(!head->next){
//         delete head;
//         return nullptr;
//     }
//     node*curr=head;
//     while(curr->next->next!=nullptr){
//         curr=curr->next;
//     }
//     delete curr->next;
//     curr->next=nullptr;
//     return head;
// }

// void print(node*head){
//     node*temp=head;
//     while(temp!=nullptr){
//         cout<<temp->value<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main()
// {
//     node*head=nullptr;
//     head=insertbegin(head,10);
//     head=insertend(head,1);

//     print(head);
//     head=deletebegin(head);
//     print(head);
//     head=deleteend(head);

//     print(head);
//  return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// #define n 1000

// template <typename T>
// class Stack {
//     T arr[n];
//     int top = -1;

// public:
//     bool isempty() {
//         return top == -1;
//     }

//     bool isfull() {
//         return top == n - 1;
//     }

//     void push(T x) {
//         if (isfull()) {
//             cout << "Stack overflow" << endl;
//             return;
//         }
//         top += 1;
//         arr[top] = x;
//     }

//     void pop() {
//         if (isempty()) {
//             cout << "Stack is empty" << endl;
//             return;
//         }
//         top--;
//     }

//     T getTop() {
//         if (isempty()) {
//             cout << "Stack is empty" << endl;
//             return -1;
//         }
//         return arr[top];
//     }
// };

// int main() {
//     Stack<int> s;
//     s.push(20);
//     s.push(30);
//     s.push(10);

//     int p = s.getTop();
//     cout << "Top element: " << p << endl;

//     // Pop the top element
//     s.pop();

//     // Get the new top element
//     int newTop = s.getTop();
//     cout << "Top element after pop: " << newTop << endl;

//     return 0;
// }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int power(int base,int pow){
//     if(pow==0){
//         return 1;
//     }
//     int temp=power(base,pow/2);
//     if(pow%2==0){
//         return temp*temp;
//     }else{
//         return base*temp*temp;
//     }

//  }
// int main()
// {   int base=2;
//     int pow=5;
//     int r=power(2,5);
//     cout<<r;
//  return 0;
// }

#include <iostream>
using namespace std;
#define n 1000

template <typename T>
class stack {
    T arr[n];
    int top = -1;

public:
    void push(T X) {
        if (top > n - 1) {
            cout << "overflow";
        } else {
            top++;
            arr[top] = X;
        }
    }

    void pop() {
        if (top <= -1) {
            cout << "underflow";
        } else {
            top--;
        }
    }

    void pri() {
        if (top >= 0) {
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    stack<int> s;

    s.push(4);
    s.push(3);
    s.push(2);
    s.pri();
    s.pop();
    s.pri();
    return 0;
}


#include<iostream>
using namespace std;

class node {
public:
    int value;
    node* next;
    node* prev;

    node(int val) {
        value = val;
        next = nullptr;
        prev = nullptr;
    }
};

node* insertatbegin(node* head, int d) {
    node* temp = new node(d);
    if (!head) {
        head = temp;
    } else {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    return head;
}

node* insertatend(node* head, int d) {
    node* temp = new node(d);
    node* curr = head;
    if (!head) {
        head = temp;
    } else {
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = temp;
        temp->prev = curr;
    }
    return head;
}

node* deleteatbegin(node* head) {
    if (!head) {
        return nullptr;
    } else {
        node* temp = head->next;
        delete head;
        if (temp) {
            temp->prev = nullptr;
        }
        return temp;
    }
}

node* deleteatend(node* head) {
    if (!head) {
        return nullptr;
    }
    if (!head->next) {
        delete head;
        return nullptr;
    }
    node* curr = head;
    while (curr->next->next != nullptr) {
        curr = curr->next;
    }
    delete curr->next;
    curr->next = nullptr;
    return head;
}

void print(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* head = nullptr;
    head = insertatbegin(head, 10);
    head = insertatbegin(head, 9);
    head = insertatend(head, 1);
    print(head);

    head = deleteatbegin(head);
    print(head);

    head = deleteatend(head);
    print(head);

    return 0;
}
