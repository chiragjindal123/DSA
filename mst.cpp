
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    char data;
    Node* next;

    Node(char value){
        data=value;
        next=nullptr;
    }

};

class Stack{
    public:
    Node* top;

    public:
    Stack(){
        top=nullptr;
    }

    bool isEmpty(){
        return top==nullptr;
    }

    void push(char value){
        Node* newNode=new Node(value);
        newNode->next=top;
        top=newNode;
    }

    char pop(){
        if(isEmpty()){
            cout<<"Stack underflow"<<endl;
        }

        Node* temp=top;
        top=top->next;
        char popped=temp->data;
        delete temp;
        return popped;
    }
};

bool isPalindrome(char* str){
    int len=strlen(str);
    Stack stack;

    for(int i=0;i<len/2;i++){
        stack.push(str[i]);
    }

    bool palindrome=true;

    for(int i=(len+1)/2;i<len;i++){
        if(stack.pop()!=str[i]){
            palindrome=false;
            break;
        }
    }

    return palindrome;


}
int main()
{
     char ch[] ="radar";

    if(isPalindrome(ch)){
        cout<<"yes";
    }else{
        cout<<"No";

    }

 return 0;
}