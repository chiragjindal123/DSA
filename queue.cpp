#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int q[100],n=100,front=-1,rear=-1;

void insert(int val){
    if(rear==n-1){
        cout<<"overflow";
    }
    else{
        if(front==-1)
        front=0;

        rear++;
        q[rear]=val;
    }
}

void delte(){
    if(front==-1 || front>rear){
        cout<<"underflow";
    }else{
        front++;
    }

}

void display(){
    if(front==-1){
        cout<<"empty";
    }else{
        for(int i=front;i<=rear;i++){
            cout<<q[i]<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    display();
    insert(8);
    insert(9);
    insert(10);
    display();
    delte();
    display();
 return 0;
}