#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    int s[100],n=100,top=-1;
    void push(int val){
        if(top>=n-1){
            cout<<"overflow";
        }else{
            top++;
            s[top]=val;
        }
    }

    void pop(){
        if(top<=-1){
            cout<<"underflow";
        }else{
            top--;
        }
    }

    void display(){
        if(top>=0){
            for(int i=top;i>=0;i--){
                cout<<s[i]<<" ";
            }
            cout<<endl;
        }
    }

    void search(){
        for(int i=0;i<=top;i++){
            if(s[i]==8){
                cout<<i;
            }
        }
        cout<<endl;
    }
int main()
{
    int a=10;
    push(10);
    push(9);
    push(8);
    search();
    display();
    pop();
    display();

 return 0;
}